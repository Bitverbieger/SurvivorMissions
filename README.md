# SurvivorMissions
This is a modification of the PC-Game DayZ from Bohemia Interactive.
This ReadMe contains all steps that will be necessary to run the modification on your game server and to provide following features to the gameplay and mission development at its current stage:

* Continuous time-based tasks (missions) for all players of your server
* Ability to modify and create new missions for your server
* Ability to modify and create stories for your server
* Ability to adapt this modification to fit your used DayZ terrain of your server
* Ability to change module and mission settings processed by the SurvivorMissionModule

## How it works
SurvivorMissions is a mod that covers the requirements of current community servers for enhanced multiplayer gameplay and allows a combination with other mods by implementing their objects/items in the missions, to extend the player experience based on all loaded mods of your server.
SurvivorMissions comes with a module called SMM (SurvivorMissionModule). SMM is loaded by the Survivor Events Manager (SEM) who is able to load other modules from my project as they are published and checks the validity of the missions and the server file paths. It also can check all the mission locations if a static map building is defined as a mission building and printing advanced mission debugging information, if configured in settings.

SMM has a defined interface to interact with the mission instances. All self created missions must use its interface, defined as methods in your mission. It randomly selects a mission from the cached data of the "Events World Data" (EWD) file excluding last 2 mission types and mission locations. In the EWD are all missions listed in an array of 2 several data types, the event name and the position of the mission. Positions can be outdoor (rallye point) or a building position in the "WorldSpace" of the loaded terrain. After selecting it starts and activates the selected mission, the mission timer, the mission zone trigger and the mission messenger (radio transmition). All the parameters are changed by the instance when a action is fired like the mission zone entry of a player or his found of the mission target. Missions could also be extended, which means that a secondary mission target is applied (e.g. Find & Deliver).

In the mission files you will be able to individualize your missions by using my mission templates (all missions comming with this mod are free for edit, see license!) and add new or exchange default events. Basically you can change most parameters and functions of several actions and write your own functions/methods for your new mission classes. Spawning targets, environment, rewards and AI is already automated. You just define how the things will be handled by SMM but keeping its core functionality inherited by its interfaced methods.

You see, it gets deeper in porgramming / scripting if you decide to make your own missions. With my mission templates you are good to go even if you are new to Enforce Scripting. In this case I suggest using the Enfusion Script Editor from BI's DayZ Tools Workbench. Read more at **Creating Missions** !

If you don't want to make a new mission at this point, you just need to install the SurvivorMissions Mod and the server files.

## Server Installation
### On an existing server configuration 
1. Subscribe to SurvivorMissions Mod by using your Steam account. 
[DayZ SurvivorMissions Mod on Steam](https://steamcommunity.com/sharedfiles/filedetails/?id=1988925918).
2. After the download go to your Steam Workshop directory `%Programs%\Steam\steamapps\common\DayZ\!Workshop\` and copy the folder `@Survivor Missions\` to your server root directory. Also copy the file **Funkdoc.bikey** in the `.\Keys` folder to the server **keys** folder located in server root `%DayzServerRoot%\keys\`. 
3. Open folder **@Survivor Missions** located now in `%DayzServerRoot%\@Survivor Missions\` and navigate to the `\serverfiles\mpmissions\` directory.
4. Copy the folder `\SurvivorMissionModule` to `%DayzServerRoot%\mpmissions\%YourMission%.%YourTerrain%\` (like in DayZ default mission `\mpmissions\dayzOffline.chernarusplus`) of your server.
5. Now open this folder `\SurvivorMissionModule` and **rename the file** `EventsWorldData_chernarusplus.c`* to `EventsWorldData.c` 
(* or another terrain EWD file matching your server loaded map, like `EventsWorldData_enoch.c`for BI's DLC map Livonia or `EventsWorldData_ChernarusPlusGloom_EXP` for Expansion Mod)
6. Double check if it is the right EWD file for this server instance. 
7. Now navigate to directory `%DayzServerRoot%\mpmissions\%YourMission%.%YourTerrain%\SurvivorMissionModule\Missions\` and edit file `Missions.h` with your favorit text editor.
Search&Replace all the file paths of each mission file-inlude 
```C++
#include "$CurrentDir:\\mpmissions\\%YourMission%.%YourTerrain%\\SurvivorMissionModule\\Missions\\Apartment.c"
```
by editing **"YourMission"** and **"YourTerrain"** to match your mpmissions path. For example, the default mpmission path could be: 
```C++
#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\SurvivorMissionModule\\Missions\\Apartment.c"
```
8. Now navigate to `%DayzServerRoot%\@Survivor Missions\serverfiles\profile\` folder.
9. Copy the folder `\SurvivorMissions`to your profile folder (server logs folder located in root) of your server.
10. Open this folder and edit the file `MissionSettings.c` and also change the file-inlcudes in the top lines same as above. Read the comments for changing mission settings to match your needs.
11. Save and close all edited files.
12. Edit your **StartDayzServer.bat** or your **launch parameters** for DayzServer_X64.exe by adding SurvivorMissions Mod to your  
**server**  by adding `"-servermod=@Survivor Missions"`

### First Server Start
1. After execution of DayzServer_X64.exe with the defined launch parameters check the script log file (script_*date*.log) in your profile folder of your server root. New server profiles could be added to the launch params like `-profiles=MyServerLogs`.
2. Survivor Events Manager [SEM] checks now several things. Read the scriptlog output and check if SEM has started SMM without errors. Loading of your mpmission will be rejected if an error occurs.
3. Viewing your server scriptlog, following lines should be visible from SEM & SMM scriptlogger when mpmission is loaded by the server:
```
SCRIPT       : [SEM] Initializing SurvivorMissions MOD...
SCRIPT       : [SEM] WARNING: Couldn't find Cleanup folder!
SCRIPT       : [SEM] ...Folder \Cleanup created.
SCRIPT       : [SEM] Folder check...OK
SCRIPT       : [SEM] Version check...OK
SCRIPT       : [SEM] Map check...OK
SCRIPT       : [SEM] EWD check...OK
SCRIPT       : [SEM] SurvivorStories file parsed successfully. 3 stories imported.
SCRIPT       : [SEM] SURVIVOR EVENTS MANAGER version 0.6 successfully loaded.
SCRIPT       : [SEM] Starting [SURVIVOR MISSION MODULE]...
SCRIPT       : [SMM] 794 SurvivorEvents successfully cached from EventsWorldData.
```
After a defined delay time in **MissionSettings** from server start, a new Mission will be selected and started.
```
SCRIPT       : [SMM] New selected mission is CityMall mission 284 @ <12029.000000, 55.400002, 9161.799805> : central of Berezino
SCRIPT       : [SMM] MissionBuilding is Land_City_Store at central of Berezino @ <12028.982422, 55.360962, 9161.794922>
SCRIPT       : [SMM] Mission zone is active. Waiting for trigger...
```
This means SurvivorMissions mod has started successfully.

If it fails, look out for error logs printed by SMM /SEM. In most cases it tells you exactly why it can't be started. You can view advanced logs by activating the option **DEBUG MODE** in **MissionSettings** and restart the server!

If you encountered any issues running your server in combination with the SurvivorMissions Mod, please visit my Discord Server
[DayZ Survivor Missions on Discord](https://discord.gg/reP3dq8/) for further support.
