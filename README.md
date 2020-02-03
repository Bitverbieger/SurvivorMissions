# SurvivorMissions
This is a modification of the PC-Game DayZ from Bohemia Interactive.
This ReadMe contains all steps that will be necessary to run the modification on your game server and to provide following features to the gameplay and mission development at its current stage:

* Continuous time-based tasks (missions) for all players of your server
* Ability to modify and create new missions for your server
* Ability to modify and create stories for your server
* Ability to adapt this modification to fit your used DayZ terrain of your server
* Ability to change module and mission settings processed by the SurvivorMissionModule

## How it works
SurvivorMissions is a mod that fits the requirements of current community servers for enhanced multiplayer gameplay and combining other mods with SurvivorMissions by implementing their objects/items in the missions.
SurvivorMissions comes with a module called SMM (SurvivorMissionModule). SMM is loaded by the Survivor Events Manager (SEM) who is able to load other modules from my project as they are published and checks the validity of the missions and the server file paths. It also can check the mission location if a static map building is defined as mission building and printing advanced mission debugging information if configured in settings.

SMM has a defined interface to interact with the mission instances. All self created missions must use its interface, defined as methods in your mission. It randomly selects a mission from the cached data of the "Events World Data" (EWD) file excluding last 2 mission types and mission locations. In the EWD are all missions listed in an array of 2 several data types, the event name and the position of the mission. Positions can be outdoor (rallye point) or a building position in the "WorldSpace" of the loaded terrain. After selecting it starts and activates the selected mission, the mission timer, the mission zone trigger and the mission messenger (radio transmition). All the parameters are changed by the instance when a action is fired like the mission zone entry of a player or his found of the mission target. Missions could also be extended, which means that a secondary mission target is applied (e.g. Find & Deliver).

In the mission files you will be able to individualize your missions by using my mission templates (all missions comming with this mod are free for edit, see license!) and add new or exchange default events. Basically you can change most parameters and functions of several actions and write your own functions/methods for your new mission classes. Spawning targets, environment, rewards and AI is already automated. You just define how the things will be handled by SMM but keeping its core functionality inherited by its interfaced methods.

You see, it gets deeper in porgramming / scripting if you decide to make your own missions. With my mission templates you are good to go even if you are new to Enforce Scripting. In this case I suggest using the Enfusion Script Editor from BI's DayZ Tools Workbench. Read more at **Mission Making** !

If you don't want to make a new mission at this point, you just need to install the SurvivorMissions Mod and the server files.

## Server Installation
### On a existing server configuration: 
- [ ] Subscribe to SurvivorMissions Mod by using your Steam account. 
[DayZ SurvivorMissions Mod on Steam](https://pages.github.com/).
- [ ] After the download go to your Steam Workshop directory `%Programs%\Steam\steamapps\common\DayZ\!Workshop\` and copy the folder `@SurvivorMissions` to your server root directory.
- [ ] Open this folder and navigate to the `\serverfiles\mpmissions\` directory.
- [ ] Copy the folder `\SurvivorMissionModule` to `%DayzServerRoot%\mpmissions\%YourMission%.%YourTerrain%\` (like in DayZ default mission `\mpmissions\dayzOffline.chernarusplus\`) of your server.
- [ ] Open folder `\SurvivorMissionModule\` and rename file `EventsWorldData_chernarusplus.c`* to `EventsWorldData.c` 
(* or another terrain EWD file matching your server loaded map, like `EventsWorldData_enoch.c`for BI's DLC map Livonia)
- [ ] Delete all other EventsWorldData files.
- [ ] Now navigate to directory `%DayzServerRoot%\mpmissions\%YourMission%.%YourTerrain%\SurvivorMissionModule\Missions\` and edit file `Missions.h`with your favorit text editor.
Change all the file paths of each mission file-inlude 
```C++
#include "$CurrentDir:\\mpmissions\\%YourMission%.%YourTerrain%\\SurvivorMissionModule\\Missions\\Apartment.c"
```
by editing **"YourMission"** and **"YourTerrain"** to match your mpmissions path. For example, the default mpmission path could be: 
```C++
#include "$CurrentDir:\\mpmissions\\dayzOffline.chernarusplus\\SurvivorMissionModule\\Missions\\Apartment.c"
```
- [ ] Now navigate to `%DayzServerRoot%\@SurvivorMissions\serverfiles\profile\` folder.
- [ ] Copy the folder `\SurvivorMissions\`to your profile folder (server logs) of your server located at root.
- [ ] In this folder edit the file `MissionSettings.c` and also change the file-inlcudes in the top lines same as above. Read comments. Change mission settings to match your needs.
- [ ] Save and close all edited files.
- [ ] Edit your **StartDayzServer.bat** or the **launch parameters** of DayzServer_X64.exe by adding SurvivorMissions Mod `-mod=@SurvivorMissions` and adding `-scrAllowFileWrite` param.

### Start Server
- [ ] After execution of DayzServer_X64.exe check the script log file (script_*date*.log) in your profile folder of your server root.
- [ ] Survivor Events Manager [SEM] checks now several things. Read the scriptlog output and check if SEM has started SMM without errors. Loading of your mpmission will be rejected if an error occurs.

If you encountered any troubles running your server in combination with the SurvivorMissions Mod, please visit my Discord Server
[DayZ Survivor Missions on Discord](https://discord.gg/reP3dq8/).
