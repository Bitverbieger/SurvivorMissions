class EventsWorldData extends SurvivorMissions
{
	const string EWD_MAP_NAME = "rostow";
	const string EWD_SCRIPT_VERSION = "0.85";
	static ref array<string> MissionEvents = new array<string>;
	static ref array<vector> MissionPositions = new array<vector>;
	static ref array<Object> ObjectList = new array<Object>; 
	static ref array<CargoBase> ObjectCargoList = new array<CargoBase>;
	
	void EventsWorldData()
	{
		//Mission event																		//Mission position (absolute or BuildingPos)
		//0
		MissionEvents.Insert("Apartment Berasino central TenSmall_1");						MissionPositions.Insert("3233.254883 209.284164 9352.265625");
		MissionEvents.Insert("Apartment Berasino east TenSmall_2");							MissionPositions.Insert("3246.314453 218.716263 9450.332031");
		MissionEvents.Insert("Apartment Berasino east TenSmall_3");							MissionPositions.Insert("3273.589355 209.709137 9352.851563");
		MissionEvents.Insert("Apartment Berasino east TenSmall_4");							MissionPositions.Insert("3297.922852 215.896957 9427.495117");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_1");					MissionPositions.Insert("8452.923828 74.010239 2470.537842");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_2");					MissionPositions.Insert("8474.537109 74.000267 2477.210449");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_3");					MissionPositions.Insert("8496.122070 74.049339 2483.699219");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_4");					MissionPositions.Insert("8517.731445 74.028992 2490.139648");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_5");					MissionPositions.Insert("8539.373047 74.012123 2496.591553");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_6");					MissionPositions.Insert("8608.526367 66.692795 2455.227295");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_7");					MissionPositions.Insert("8578.356445 73.422180 2516.639648");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_8");					MissionPositions.Insert("8597.759766 73.411499 2528.135498");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_9");					MissionPositions.Insert("8617.184570 73.385300 2539.647217");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_10");				MissionPositions.Insert("8663.041016 66.983559 2491.692871");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_11");				MissionPositions.Insert("8626.869141 66.682968 2468.341553");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_12");				MissionPositions.Insert("8663.299805 74.254669 2559.795166");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_13");				MissionPositions.Insert("8681.452148 67.017540 2504.813232");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_14");				MissionPositions.Insert("8685.425781 74.170273 2564.497803");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_15");				MissionPositions.Insert("8729.606445 74.410065 2573.492920");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_16");				MissionPositions.Insert("8707.506836 74.204048 2569.020508");
		MissionEvents.Insert("Apartment Krasnapolle northwest TenSmall_17");				MissionPositions.Insert("8751.739258 74.262619 2577.973145");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_1");						MissionPositions.Insert("9328.125977 70.936203 10155.731445");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_2");						MissionPositions.Insert("9339.570313 70.372391 10136.221680");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_3");						MissionPositions.Insert("9316.935547 71.807503 10175.250977");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_4");						MissionPositions.Insert("9364.346680 69.571609 10174.806641");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_5");						MissionPositions.Insert("9404.175781 68.516388 10188.917969");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_6");						MissionPositions.Insert("9394.238281 68.501091 10209.194336");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_7");						MissionPositions.Insert("9354.225586 70.227180 10195.013672");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_8");						MissionPositions.Insert("9376.054688 68.800636 10247.765625");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_9");						MissionPositions.Insert("9366.161133 68.592720 10268.121094");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_10");						MissionPositions.Insert("9433.611328 68.328224 10217.076172");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_11");						MissionPositions.Insert("9423.954102 68.258514 10237.416016");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_12");						MissionPositions.Insert("9414.319336 68.321220 10257.830078");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_13");						MissionPositions.Insert("9516.769531 60.478146 10132.990234");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_14");						MissionPositions.Insert("9538.976563 60.443939 10093.699219");
		MissionEvents.Insert("Apartment Ostrovez south TenSmall_15");						MissionPositions.Insert("9527.881836 60.338600 10113.333008");
		MissionEvents.Insert("Apartment Borowoje north TenSmall_1");						MissionPositions.Insert("11446.853516 61.979908 12758.294922");
		MissionEvents.Insert("Apartment Borowoje north TenSmall_2");						MissionPositions.Insert("11504.489258 62.239899 12742.588867");
		MissionEvents.Insert("Apartment Borowoje north TenSmall_3");						MissionPositions.Insert("11483.615234 62.239655 12750.974609");
		MissionEvents.Insert("Apartment Borowoje north TenSmall_4");						MissionPositions.Insert("11525.415039 62.281490 12734.125977");
		MissionEvents.Insert("Graveyard Berezino west Stash_1");							MissionPositions.Insert("13006.3 6.2 10575.4");
		MissionEvents.Insert("Graveyard Berezino west Stash_2");							MissionPositions.Insert("13006.2 6.2 10557.7");
		MissionEvents.Insert("Graveyard Berezino southwest Stash_1");						MissionPositions.Insert("13009.8 6.2 10553.6");
		MissionEvents.Insert("Graveyard Berezino southwest Stash_2");						MissionPositions.Insert("13006.6 6.2 10541.6");
		MissionEvents.Insert("Graveyard Berezino southwest Stash_3");						MissionPositions.Insert("13006.2 6.2 10531.0");
		MissionEvents.Insert("Graveyard Berezino south Stash_1");							MissionPositions.Insert("13014.1 6.2 10530.6");
		MissionEvents.Insert("Graveyard Berezino south Stash_2");							MissionPositions.Insert("13023.3 6.2 10523.8");
		MissionEvents.Insert("Graveyard Berezino south Stash_3");							MissionPositions.Insert("13027.2 6.2 10508.5");
		MissionEvents.Insert("Graveyard Berezino southeast Stash_1");						MissionPositions.Insert("13042.8 6.2 10536.5");
		MissionEvents.Insert("Graveyard Berezino southeast Stash_2");						MissionPositions.Insert("13051.1 6.2 10553.0");
		MissionEvents.Insert("Graveyard Chernogorsk west Stash_1");							MissionPositions.Insert("6668.8 7.0 2936.4");
		MissionEvents.Insert("Graveyard Chernogorsk west Stash_2");							MissionPositions.Insert("6663.9 7.0 2928.7");
		MissionEvents.Insert("Graveyard Chernogorsk west Stash_3");							MissionPositions.Insert("6667.2 7.0 2913.0");
		MissionEvents.Insert("Graveyard Chernogorsk northwest Stash_1");					MissionPositions.Insert("6681.4 7.0 2943.5");
		MissionEvents.Insert("Graveyard Chernogorsk northwest Stash_2");					MissionPositions.Insert("6680.8 7.0 2958.3");
		MissionEvents.Insert("Graveyard Chernogorsk north Stash_1");						MissionPositions.Insert("6700.8 7.0 2963.0");
		MissionEvents.Insert("Graveyard Chernogorsk southwest Stash_1");					MissionPositions.Insert("6682.5 7.0 2906.2");
		MissionEvents.Insert("Graveyard Chernogorsk south Stash_1");						MissionPositions.Insert("6709.5 7.0 2918.1");
		MissionEvents.Insert("Graveyard Chernogorsk south Stash_2");						MissionPositions.Insert("6719.3 7.0 2925.8");
		MissionEvents.Insert("Graveyard Chernogorsk south Stash_3");						MissionPositions.Insert("6698.1 7.0 2894.3");
		MissionEvents.Insert("Graveyard Elektrozavodsk north Stash_1");						MissionPositions.Insert("10617.7 32.7 2645.8");
		MissionEvents.Insert("Graveyard Elektrozavodsk north Stash_2");						MissionPositions.Insert("10600.8 33.0 2644.2");
		MissionEvents.Insert("Graveyard Elektrozavodsk north Stash_3");						MissionPositions.Insert("10626.2 32.6 2641.0");
		MissionEvents.Insert("Graveyard Elektrozavodsk north Stash_4");						MissionPositions.Insert("10631.3 32.7 2643.6");
		MissionEvents.Insert("Graveyard Elektrozavodsk north Stash_5");						MissionPositions.Insert("10638.9 32.8 2648.0");
		MissionEvents.Insert("Graveyard Elektrozavodsk north Stash_6");						MissionPositions.Insert("10623.8 33.0 2664.6");
		MissionEvents.Insert("Graveyard Elektrozavodsk north Stash_7");						MissionPositions.Insert("10618.5 33.2 2665.5");
		MissionEvents.Insert("Graveyard Elektrozavodsk north Stash_8");						MissionPositions.Insert("10611.4 33.0 2661.4");
		MissionEvents.Insert("Graveyard Elektrozavodsk north Stash_9");						MissionPositions.Insert("10626.8 32.6 2651.9");
		MissionEvents.Insert("Graveyard Kabanino north Stash_1");							MissionPositions.Insert("5212.4 344.8 8582.7");
		MissionEvents.Insert("Graveyard Kabanino north Stash_2");							MissionPositions.Insert("5206.6 345.4 8582.4");
		MissionEvents.Insert("Graveyard Kabanino north Stash_3");							MissionPositions.Insert("5200.2 346.1 8576.0");
		MissionEvents.Insert("Graveyard Kabanino north Stash_4");							MissionPositions.Insert("5209.1 346.0 8573.5");
		MissionEvents.Insert("Graveyard Kabanino north Stash_5");							MissionPositions.Insert("5202.9 344.9 8591.8");
		MissionEvents.Insert("Graveyard Kabanino north Stash_6");							MissionPositions.Insert("5192.6 345.8 8589.4");
		MissionEvents.Insert("Graveyard Kabanino north Stash_7");							MissionPositions.Insert("5199.1 345.9 8582.0");
		MissionEvents.Insert("Graveyard Mogilevka northeast Stash_1");						MissionPositions.Insert("7441.2 217.2 5179.7");
		MissionEvents.Insert("Graveyard Mogilevka northeast Stash_2");						MissionPositions.Insert("7435.5 217.2 5179.4");
		MissionEvents.Insert("Graveyard Mogilevka northeast Stash_3");						MissionPositions.Insert("7431.4 217.0 5174.7");
		MissionEvents.Insert("Graveyard Mogilevka northeast Stash_4");						MissionPositions.Insert("7429.6 217.2 5181.3");
		MissionEvents.Insert("Graveyard Mogilevka northeast Stash_5");						MissionPositions.Insert("7429.7 217.7 5189.0");
		MissionEvents.Insert("Graveyard Mogilevka northeast Stash_6");						MissionPositions.Insert("7416.8 218.6 5200.8");
		MissionEvents.Insert("Graveyard Mogilevka northeast Stash_7");						MissionPositions.Insert("7414.0 218.3 5197.2");
		MissionEvents.Insert("Graveyard Mogilevka northeast Stash_8");						MissionPositions.Insert("7418.9 217.2 5183.7");
		MissionEvents.Insert("Graveyard Mogilevka northeast Stash_9");						MissionPositions.Insert("7422.2 217.4 5187.9");
		MissionEvents.Insert("Graveyard Mogilevka northeast Stash_10");						MissionPositions.Insert("7424.5 228.4 5172.9");
		MissionEvents.Insert("Graveyard Novaya_Petrovka north Stash_1");					MissionPositions.Insert("3622.7 202.8 13189.6");
		MissionEvents.Insert("Graveyard Novaya_Petrovka north Stash_2");					MissionPositions.Insert("3619.9 202.9 13195.0");
		MissionEvents.Insert("Graveyard Novaya_Petrovka north Stash_3");					MissionPositions.Insert("3615.3 203.0 13204.9");
		MissionEvents.Insert("Graveyard Novaya_Petrovka north Stash_4");					MissionPositions.Insert("3593.0 203.0 13202.2");
		MissionEvents.Insert("Graveyard Novaya_Petrovka north Stash_5");					MissionPositions.Insert("3591.3 203.1 13195.4");
		MissionEvents.Insert("Graveyard Novaya_Petrovka north Stash_6");					MissionPositions.Insert("3598.1 203.0 13186.5");
		MissionEvents.Insert("Graveyard Novaya_Petrovka north Stash_7");					MissionPositions.Insert("3599.9 202.9 13177.7");
		MissionEvents.Insert("Graveyard Novaya_Petrovka north Stash_8");					MissionPositions.Insert("3603.2 202.9 13188.6");
		MissionEvents.Insert("Graveyard Novaya_Petrovka north Stash_9");					MissionPositions.Insert("3603.8 203.0 13196.1");
		MissionEvents.Insert("Graveyard Novaya_Petrovka north Stash_10");					MissionPositions.Insert("3622.5 202.9 13190.8");
		MissionEvents.Insert("Graveyard Novy_Sobor northeast Stash_1");						MissionPositions.Insert("7091.5 295.5 7734.8");
		MissionEvents.Insert("Graveyard Novy_Sobor northeast Stash_2");						MissionPositions.Insert("7086.8 294.9 7744.6");
		MissionEvents.Insert("Graveyard Novy_Sobor northeast Stash_3");						MissionPositions.Insert("7077.1 295.4 7743.4");
		MissionEvents.Insert("Graveyard Novy_Sobor northeast Stash_4");						MissionPositions.Insert("7080.4 295.3 7743.6");
		MissionEvents.Insert("Graveyard Novy_Sobor northeast Stash_5");						MissionPositions.Insert("7072.9 295.8 7740.9");
		MissionEvents.Insert("Graveyard Novy_Sobor northeast Stash_6");						MissionPositions.Insert("7075.4 296.5 7736.1");
		MissionEvents.Insert("Graveyard Novy_Sobor northeast Stash_7");						MissionPositions.Insert("7084.9 297.4 7723.8");
		MissionEvents.Insert("Graveyard Novy_Sobor northeast Stash_8");						MissionPositions.Insert("7087.1 297.3 7725.2");
		MissionEvents.Insert("Graveyard Novy_Sobor northeast Stash_9");						MissionPositions.Insert("7084.8 296.4 7733.3");
		//437
		MissionEvents.Insert("CityMall Hrodva central Klettzk");							MissionPositions.Insert("4848.884277 134.506821 7402.932617");
		MissionEvents.Insert("CityMall Hrodva central Berasino");							MissionPositions.Insert("4848.884277 134.506821 7402.932617");
		MissionEvents.Insert("CityMall Hrodva central Borowoje");							MissionPositions.Insert("4848.884277 134.506821 7402.932617");
		MissionEvents.Insert("CityMall Hrodva central Adamowsk");							MissionPositions.Insert("4848.884277 134.506821 7402.932617");
		MissionEvents.Insert("CityMall Krasnapolle west Klettzk");							MissionPositions.Insert("8520.792969 53.817543 2240.816406");
		MissionEvents.Insert("CityMall Krasnapolle west Berasino");							MissionPositions.Insert("8520.792969 53.817543 2240.816406");
		MissionEvents.Insert("CityMall Krasnapolle west Borowoje");							MissionPositions.Insert("8520.792969 53.817543 2240.816406");
		MissionEvents.Insert("CityMall Krasnapolle west Adamowsk");							MissionPositions.Insert("8520.792969 53.817543 2240.816406");
		MissionEvents.Insert("CityMall Ostrovez south Klettzk");							MissionPositions.Insert("9413.698242 60.926479 10148.664063");
		MissionEvents.Insert("CityMall Ostrovez south Berasino");							MissionPositions.Insert("9413.698242 60.926479 10148.664063");
		MissionEvents.Insert("CityMall Ostrovez south Borowoje");							MissionPositions.Insert("9413.698242 60.926479 10148.664063");
		MissionEvents.Insert("CityMall Ostrovez south Adamowsk");							MissionPositions.Insert("9413.698242 60.926479 10148.664063");
		MissionEvents.Insert("CityMall Borowoje south Klettzk");							MissionPositions.Insert("11525.640625 50.254852 12437.462891");
		MissionEvents.Insert("CityMall Borowoje south Berasino");							MissionPositions.Insert("11525.640625 50.254852 12437.462891");
		MissionEvents.Insert("CityMall Borowoje south Borowoje");							MissionPositions.Insert("11525.640625 50.254852 12437.462891");
		MissionEvents.Insert("CityMall Borowoje south Adamowsk");							MissionPositions.Insert("11525.640625 50.254852 12437.462891");
		MissionEvents.Insert("CityMall Adamowsk northeast Klettzk");						MissionPositions.Insert("11803.854492 40.232533 8987.278320");
		MissionEvents.Insert("CityMall Adamowsk northeast Berasino");						MissionPositions.Insert("11803.854492 40.232533 8987.278320");
		MissionEvents.Insert("CityMall Adamowsk northeast Borowoje");						MissionPositions.Insert("11803.854492 40.232533 8987.278320");
		MissionEvents.Insert("CityMall Adamowsk northeast Adamowsk");						MissionPositions.Insert("11803.854492 40.232533 8987.278320");
		MissionEvents.Insert("FreePigs Jelsk southeast Berasino_IndustrialNW");				MissionPositions.Insert("1023.076050 195.146332 8160.196289");
		MissionEvents.Insert("FreePigs Jelsk southeast Berasino_Jelsk");					MissionPositions.Insert("1023.076050 195.146332 8160.196289");
		MissionEvents.Insert("FreePigs Jelsk southeast Mieva_AirforceFarm");				MissionPositions.Insert("1023.076050 195.146332 8160.196289");
		MissionEvents.Insert("FreePigs Jelsk southeast Jelsk_Klettzk");						MissionPositions.Insert("1023.076050 195.146332 8160.196289");
		MissionEvents.Insert("FreePigs Jelsk southeast Drowkino_Klettzk");					MissionPositions.Insert("1023.076050 195.146332 8160.196289");
		MissionEvents.Insert("FreePigs Berasino_Industrial south Berasino_IndustrialNW");	MissionPositions.Insert("3206.841064 139.960037 8504.788086");
		MissionEvents.Insert("FreePigs Berasino_Industrial south Berasino_IndustrialE");	MissionPositions.Insert("3206.841064 139.960037 8504.788086");
		MissionEvents.Insert("FreePigs Berasino_Industrial south Berasino_Jelsk");			MissionPositions.Insert("3206.841064 139.960037 8504.788086");
		MissionEvents.Insert("FreePigs Berasino_Industrial south Mieva_AirforceFarm");		MissionPositions.Insert("3206.841064 139.960037 8504.788086");
		MissionEvents.Insert("FreePigs Berasino_Industrial south Berasino_IndustrialNW");	MissionPositions.Insert("3234.882813 139.467377 8535.931641");
		MissionEvents.Insert("FreePigs Berasino_Industrial south Berasino_IndustrialE");	MissionPositions.Insert("3234.882813 139.467377 8535.931641");
		MissionEvents.Insert("FreePigs Berasino_Industrial south Mieva_AirforceFarm");		MissionPositions.Insert("3234.882813 139.467377 8535.931641");
		MissionEvents.Insert("FreePigs Berasino_Industrial south Berasino_IndustrialNW");	MissionPositions.Insert("3262.243408 138.414703 8462.419922");
		MissionEvents.Insert("FreePigs Berasino_Industrial south Berasino_IndustrialE");	MissionPositions.Insert("3262.243408 138.414703 8462.419922");
		MissionEvents.Insert("FreePigs Berasino_Industrial south Berasino_Jelsk");			MissionPositions.Insert("3262.243408 138.414703 8462.419922");
		MissionEvents.Insert("FreePigs Berasino_Industrial south Berasino_IndustrialNW");	MissionPositions.Insert("3263.454102 138.974823 8526.614258");
		MissionEvents.Insert("FreePigs Berasino_Industrial south Berasino_IndustrialE");	MissionPositions.Insert("3263.454102 138.974823 8526.614258");
		MissionEvents.Insert("FreePigs Berasino_Industrial south Mieva_AirforceFarm");		MissionPositions.Insert("3263.454102 138.974823 8526.614258");
		MissionEvents.Insert("FreePigs Mieva_AirforceFarm west Mieva_AirforceFarm");		MissionPositions.Insert("3672.898438 133.157089 5920.320313");
		MissionEvents.Insert("FreePigs Mieva_AirforceFarm west Jelsk_Klettzk");				MissionPositions.Insert("3672.898438 133.157089 5920.320313");
		MissionEvents.Insert("FreePigs Mieva_AirforceFarm west Drowkino_Klettzk");			MissionPositions.Insert("3672.898438 133.157089 5920.320313");
		MissionEvents.Insert("FreePigs Mieva_AirforceFarm west Jelsk_Klettzk");				MissionPositions.Insert("3673.879639 133.234909 5950.359863");
		MissionEvents.Insert("FreePigs Mieva_AirforceFarm west Drowkino_Klettzk");			MissionPositions.Insert("3673.879639 133.234909 5950.359863");
		MissionEvents.Insert("FreePigs Mieva_AirforceFarm west Berasino_Jelsk");			MissionPositions.Insert("3710.631104 133.100433 5902.095703");
		MissionEvents.Insert("FreePigs Mieva_AirforceFarm west Drowkino_Klettzk");			MissionPositions.Insert("3710.631104 133.100433 5902.095703");
		MissionEvents.Insert("FreePigs Mieva_AirforceFarm west Berasino_Jelsk");			MissionPositions.Insert("3735.868164 133.148788 5967.101074");
		MissionEvents.Insert("FreePigs Mieva_AirforceFarm west Drowkino_Klettzk");			MissionPositions.Insert("3735.868164 133.148788 5967.101074");
		MissionEvents.Insert("FreePigs Dworkino northeast Drowkino_Klettzk");				MissionPositions.Insert("4715.634766 97.522873 3689.123779");
		MissionEvents.Insert("FreePigs Dworkino northeast Jelsk_Klettzk");					MissionPositions.Insert("4715.634766 97.522873 3689.123779");
		MissionEvents.Insert("FreePigs Dworkino northeast Mieva_AirforceFarm");				MissionPositions.Insert("4715.634766 97.522873 3689.123779");
		MissionEvents.Insert("FreePigs Babrujsk northwest Berasino_IndustrialE");			MissionPositions.Insert("4334.687500 142.272079 11621.648438");
		MissionEvents.Insert("FreePigs Babrujsk northwest Old_Orschka");					MissionPositions.Insert("4334.687500 142.272079 11621.648438");
		MissionEvents.Insert("FreePigs Babrujsk northwest Ostrovez_Lake");					MissionPositions.Insert("4334.687500 142.272079 11621.648438");
		MissionEvents.Insert("FreePigs Babrujsk northwest Rezoni_Sportsfacility");			MissionPositions.Insert("4334.687500 142.272079 11621.648438");
		MissionEvents.Insert("FreePigs Orschka east Old_Orschka");							MissionPositions.Insert("6932.454102 157.169281 10838.169922");
		MissionEvents.Insert("FreePigs Orschka east Berasino_IndustrialE");					MissionPositions.Insert("6932.454102 157.169281 10838.169922");
		MissionEvents.Insert("FreePigs Orschka east Ostrovez_Lake");						MissionPositions.Insert("6932.454102 157.169281 10838.169922");
		MissionEvents.Insert("FreePigs Orschka east Rezoni_Sportsfacility");				MissionPositions.Insert("6932.454102 157.169281 10838.169922");
		MissionEvents.Insert("FreePigs Krasnapolle southwest Rezoni_Sportsfacility");		MissionPositions.Insert("7615.658691 53.496437 1778.159546");
		MissionEvents.Insert("FreePigs Krasnapolle southwest Ostrovez_Lake");				MissionPositions.Insert("7615.658691 53.496437 1778.159546");
		MissionEvents.Insert("FreePigs Krasnapolle southwest Berasino_IndustrialE");		MissionPositions.Insert("7651.160156 53.351509 1755.879883");
		MissionEvents.Insert("FreePigs Krasnapolle southwest Drowkino_Klettzk");			MissionPositions.Insert("7619.941406 53.074860 1807.903687");
		MissionEvents.Insert("FreePigs Krasnapolle southwest Drowkino_Klettzk");			MissionPositions.Insert("7683.393066 52.736595 1817.726318");
		MissionEvents.Insert("FreePigs Krasnapolle northwest Berasino_IndustrialE");		MissionPositions.Insert("7902.752930 87.067329 2933.324463");
		MissionEvents.Insert("FreePigs Krasnapolle north Rezoni_Sportsfacility");			MissionPositions.Insert("9103.100586 75.084488 2861.693359");
		MissionEvents.Insert("FreePigs Krasnapolle north Ostrovez_Lake");					MissionPositions.Insert("9103.100586 75.084488 2861.693359");
		MissionEvents.Insert("FreePigs Krasnapolle north Rezoni_Sportsfacility");			MissionPositions.Insert("9073.204102 75.157349 2891.049072");
		MissionEvents.Insert("FreePigs Krasnapolle north Ostrovez_Lake");					MissionPositions.Insert("9073.204102 75.157349 2891.049072");
		MissionEvents.Insert("FreePigs Krasnapolle north Rezoni_Sportsfacility");			MissionPositions.Insert("9083.761719 75.234680 2919.188965");
		MissionEvents.Insert("FreePigs Krasnapolle north Drowkino_Klettzk");				MissionPositions.Insert("9083.761719 75.234680 2919.188965");
		MissionEvents.Insert("FreePigs Krasnapolle north Rezoni_Sportsfacility");			MissionPositions.Insert("9147.842773 75.149063 2915.182129");
		MissionEvents.Insert("FreePigs Krasnapolle north Berasino_IndustrialE");			MissionPositions.Insert("9147.842773 75.149063 2915.182129");
		MissionEvents.Insert("FreePigs Gorlowka northwest Rezoni_Sportsfacility");			MissionPositions.Insert("8388.864258 177.256912 5971.254883");
		MissionEvents.Insert("FreePigs Gorlowka northwest Ostrovez_Lake");					MissionPositions.Insert("8388.864258 177.256912 5971.254883");
		MissionEvents.Insert("FreePigs Gorlowka northwest Old_Orschka");					MissionPositions.Insert("8388.864258 177.256912 5971.254883");
		MissionEvents.Insert("FreePigs Domnowo southwest Rezoni_Sportsfacility");			MissionPositions.Insert("8424.414063 86.001823 13021.718750");
		MissionEvents.Insert("FreePigs Domnowo southwest Ostrovez_Lake");					MissionPositions.Insert("8424.414063 86.001823 13021.718750");
		MissionEvents.Insert("FreePigs Domnowo southwest Old_Orschka");						MissionPositions.Insert("8424.414063 86.001823 13021.718750");
		MissionEvents.Insert("FreePigs Rasponi south Rezoni_Sportsfacility");				MissionPositions.Insert("9469.210938 118.976669 8620.449219");
		MissionEvents.Insert("FreePigs Rasponi south Ostrovez_Lake");						MissionPositions.Insert("9469.210938 118.976669 8620.449219");
		MissionEvents.Insert("FreePigs Rasponi south Old_Orschka");							MissionPositions.Insert("9469.210938 118.976669 8620.449219");
		MissionEvents.Insert("FreePigs Adamowsk west Rezoni_Sportsfacility");				MissionPositions.Insert("10893.146484 48.115055 9283.231445");
		MissionEvents.Insert("FreePigs Adamowsk west Ostrovez_Lake");						MissionPositions.Insert("10893.146484 48.115055 9283.231445");
		MissionEvents.Insert("FreePigs Adamowsk west Old_Orschka");							MissionPositions.Insert("10893.146484 48.115055 9283.231445");
		MissionEvents.Insert("FreePigs Alekssevka east Rezoni_Sportsfacility");				MissionPositions.Insert("14134.004883 43.599625 11148.295898");
		MissionEvents.Insert("FreePigs Alekssevka east Ostrovez_Lake");						MissionPositions.Insert("14134.004883 43.599625 11148.295898");
		MissionEvents.Insert("FreePigs Alekssevka east Old_Orschka");						MissionPositions.Insert("14134.004883 43.599625 11148.295898");
		MissionEvents.Insert("BearHunt Kovrin southwest Krasnapolle");						MissionPositions.Insert("4374 128 4070");
		MissionEvents.Insert("BearHunt Kovrin south Krasnapolle");							MissionPositions.Insert("4030 135 3780");
		MissionEvents.Insert("BearHunt Kovrin southeast Krasnapolle");						MissionPositions.Insert("3633 138 3968");
		MissionEvents.Insert("BearHunt Krupki southwest Krasnapolle");						MissionPositions.Insert("5702 107 4840");
		MissionEvents.Insert("BearHunt Krupki south Krasnapolle");							MissionPositions.Insert("6040 84 4842");
		MissionEvents.Insert("BearHunt Krupki northwest Krasnapolle");						MissionPositions.Insert("5769 120 5358");
		MissionEvents.Insert("BearHunt Gorlowka northwest Krasnapolle");					MissionPositions.Insert("9315 154 5400");
		MissionEvents.Insert("BearHunt Gorlowka northwest Ostrovez");						MissionPositions.Insert("9315 154 5400");
		MissionEvents.Insert("BearHunt Rezoni northeast Krasnapolle");						MissionPositions.Insert("10208 231 6900");
		MissionEvents.Insert("BearHunt Rezoni northeast Ostrovez");							MissionPositions.Insert("10208 231 6900");
		MissionEvents.Insert("BearHunt Rezoni southeast Krasnapolle");						MissionPositions.Insert("10072 228 6514");
		MissionEvents.Insert("BearHunt Rezoni southeast Ostrovez");							MissionPositions.Insert("10072 228 6514");
		MissionEvents.Insert("BearHunt Prudnoje east Krasnapolle");							MissionPositions.Insert("10424 50 1344");
		MissionEvents.Insert("BearHunt Olgowka south Ostrovez");							MissionPositions.Insert("13266 135 6554");
		MissionEvents.Insert("BearHunt Dobrowo south Ostrovez");							MissionPositions.Insert("12530 98 7414");
		MissionEvents.Insert("BearHunt Dobrowo east Ostrovez");								MissionPositions.Insert("13941 66 8864");
		MissionEvents.Insert("BearHunt Alekssevka north Ostrovez");							MissionPositions.Insert("14059 90 11941");
		MissionEvents.Insert("BearHunt Domnowo northeast Ostrovez");						MissionPositions.Insert("9188 177 13696");
		MissionEvents.Insert("BearHunt Orschka south Ostrovez");							MissionPositions.Insert("6874 156 10616");
		MissionEvents.Insert("BearHunt Orschka_Castle west Ostrovez");						MissionPositions.Insert("6855 188 12494");
		MissionEvents.Insert("BearHunt Orschka_Castle southeast Ostrovez");					MissionPositions.Insert("7284 190 12228");
		MissionEvents.Insert("BearHunt Orlesko south Ostrovez");							MissionPositions.Insert("8084 381 7400");
		MissionEvents.Insert("BearHunt Orlesko west Ostrovez");								MissionPositions.Insert("7848 399 7664");
		// @TODO: add more
		MissionEvents.Insert("Camp Jelsk east MedTent_1");									MissionPositions.Insert("1336 202.269 8319");
		MissionEvents.Insert("Camp Babrujsk west MedTent_1");								MissionPositions.Insert("4370 126.381 11296");
		MissionEvents.Insert("Camp Hrodva southeast MedTent_1");							MissionPositions.Insert("5463 106.151 6824");
		MissionEvents.Insert("Camp Krupki west MedTent_1");									MissionPositions.Insert("5463 106.151 6824");
		MissionEvents.Insert("Camp Krupki southeast MedTent_1");							MissionPositions.Insert("6347 69.2643 4353");
		MissionEvents.Insert("Camp Krasnapolle southeast MedTent_1");						MissionPositions.Insert("9185 64.4038 585");
		MissionEvents.Insert("Camp Krasnapolle west MedTent_1");							MissionPositions.Insert("6924 66.4698 1717");
		MissionEvents.Insert("Camp Krasnapolle northeast MedTent_1");						MissionPositions.Insert("9995 69.416 3272");
		MissionEvents.Insert("Camp Prudnoje east MedTent_1");								MissionPositions.Insert("10960 64.3622 1711");
		MissionEvents.Insert("Camp Prudnoje northeast MedTent_1");							MissionPositions.Insert("11126 92.8 2318.93");
		MissionEvents.Insert("Camp Gorlowka southeast MedTent_1");							MissionPositions.Insert("9555 87.0818 4613");
		MissionEvents.Insert("Camp Borowoje east MedTent_1");								MissionPositions.Insert("12565 40.8795 12081");
		MissionEvents.Insert("Camp Borowoje west MedTent_1");								MissionPositions.Insert("11101 52.6015 12872");
		MissionEvents.Insert("Camp Ostrovez_Industrial west MedTent_1");					MissionPositions.Insert("10492 37.1832 11046");
		MissionEvents.Insert("Camp Rezoni_Sportsfacility southeast MedTent_1");				MissionPositions.Insert("10718 426.802 6489");
		MissionEvents.Insert("Camp Adamowsk northwest MedTent_1");							MissionPositions.Insert("11097 35.5313 9662");
		MissionEvents.Insert("Camp Dobrowo southwest MedTent_1");							MissionPositions.Insert("12237 74.2668 7424");
		MissionEvents.Insert("Camp Dobrowo east MedTent_1");								MissionPositions.Insert("14036 24.327 7816");
		MissionEvents.Insert("Camp Dobrowo east MedTent_1");								MissionPositions.Insert("14036 24.327 7816");
		// @TODO: add more
		MissionEvents.Insert("Horde Balota west Residential_1");							MissionPositions.Insert("4400.5 7.3 2517.7");
		MissionEvents.Insert("Horde Balota west Residential_2");							MissionPositions.Insert("4425 11.9 2466.1");
		MissionEvents.Insert("Horde Balota central Residential_1");							MissionPositions.Insert("4445.7 5.2 2405.5");
		MissionEvents.Insert("Horde Balota central Residential_2");							MissionPositions.Insert("4448 8.6 2427.9");
		MissionEvents.Insert("Horde Balota central Residential_3");							MissionPositions.Insert("4506.7 7.5 2399.5");
		MissionEvents.Insert("Horde Balota north Residential_1");							MissionPositions.Insert("4505.4 9.8 2538.3");
		MissionEvents.Insert("Horde Balota south Residential_1");							MissionPositions.Insert("4501.9 2.7 2356.3");
		MissionEvents.Insert("Horde Balota south Residential_2");							MissionPositions.Insert("4543 3 2400.2");
		MissionEvents.Insert("Horde Bor north Residential_1");								MissionPositions.Insert("3107.7 218.4 4039.7");
		MissionEvents.Insert("Horde Bor central Residential_1");							MissionPositions.Insert("3275.5 192.5 3881.8");
		MissionEvents.Insert("Horde Bor central Residential_2");							MissionPositions.Insert("3266.4 192.2 3927.8");
		MissionEvents.Insert("Horde Bor central Residential_3");							MissionPositions.Insert("3337.1 189.3 3922.5");
		MissionEvents.Insert("Horde Bor central Residential_4");							MissionPositions.Insert("3356.1 187 3942.4");
		MissionEvents.Insert("Horde Bor central Residential_5");							MissionPositions.Insert("3415.7 190.3 3940.6");
		MissionEvents.Insert("Horde Bor central Residential_6");							MissionPositions.Insert("3325.3 189.8 3970.1");
		MissionEvents.Insert("Horde Chernaya_Polana west Residential_1");					MissionPositions.Insert("11892.1 90.1 13848.6");
		MissionEvents.Insert("Horde Chernaya_Polana central Residential_1");				MissionPositions.Insert("12019.4 92.4 13876.7");
		MissionEvents.Insert("Horde Chernaya_Polana central Residential_2");				MissionPositions.Insert("12006.9 97.1 13833.7");
		MissionEvents.Insert("Horde Chernaya_Polana central Residential_3");				MissionPositions.Insert("12031.9 94.2 13732.7");
		MissionEvents.Insert("Horde Chernaya_Polana central Residential_4");				MissionPositions.Insert("12151 99.8 13787.9");
		MissionEvents.Insert("Horde Chernaya_Polana south Residential_1");					MissionPositions.Insert("12149.5 104 13462.1");
		MissionEvents.Insert("Horde Dolina west Residential_1");							MissionPositions.Insert("11060.6 92.1 6636.6");
		MissionEvents.Insert("Horde Dolina west Residential_2");							MissionPositions.Insert("11160.6 81.4 6593.9");
		MissionEvents.Insert("Horde Dolina west Residential_3");							MissionPositions.Insert("11181.6 81.4 6560.8");
		MissionEvents.Insert("Horde Dolina west Residential_4");							MissionPositions.Insert("11217.7 76.8 6608.2");
		MissionEvents.Insert("Horde Dolina west Residential_5");							MissionPositions.Insert("11254.5 76.6 6509.5");
		MissionEvents.Insert("Horde Dolina west Residential_6");							MissionPositions.Insert("11281.8 77.6 6563.5");
		MissionEvents.Insert("Horde Dolina west Residential_7");							MissionPositions.Insert("11274.3 76.4 6591.7");
		MissionEvents.Insert("Horde Dolina east Residential_1");							MissionPositions.Insert("11496.4 69.6 6578.3");
		MissionEvents.Insert("Horde Dolina east Residential_2");							MissionPositions.Insert("11470.3 74.6 6618.9");
		MissionEvents.Insert("Horde Dolina east Residential_3");							MissionPositions.Insert("11503.9 74.7 6620.9");
		MissionEvents.Insert("Horde Dolina east Residential_4");							MissionPositions.Insert("11572.6 70.2 6622.9");
		MissionEvents.Insert("Horde Dubrovka west Residential_1");							MissionPositions.Insert("10302.9 137.7 9833.6");
		MissionEvents.Insert("Horde Dubrovka central Residential_1");						MissionPositions.Insert("10407.9 118.7 9859");
		MissionEvents.Insert("Horde Dubrovka central Residential_2");						MissionPositions.Insert("10446.1 118.8 9795.7");
		MissionEvents.Insert("Horde Dubrovka south Residential_1");							MissionPositions.Insert("10531.6 131.2 9740.4");
		MissionEvents.Insert("Horde Dubrovka south Residential_2");							MissionPositions.Insert("10560 124.4 9740.5");
		MissionEvents.Insert("Horde Dubrovka south Residential_3");							MissionPositions.Insert("10531.7 136 9656.5");
		MissionEvents.Insert("Horde Dubrovka east Residential_1");							MissionPositions.Insert("10577.4 98.8 9881.8");
		MissionEvents.Insert("Horde Dubrovka east Residential_2");							MissionPositions.Insert("10593 97.4 9892.3");
		MissionEvents.Insert("Horde Dubrovka east Residential_3");							MissionPositions.Insert("10609.6 98.8 9960.5");
		MissionEvents.Insert("Horde Gorka west Residential_1");								MissionPositions.Insert("9305.2 330.1 8877.7");
		MissionEvents.Insert("Horde Gorka central Residential_1");							MissionPositions.Insert("9434.2 309 8787");
		MissionEvents.Insert("Horde Gorka central Residential_2");							MissionPositions.Insert("9448.9 309 8885.2");
		MissionEvents.Insert("Horde Gorka central Residential_3");							MissionPositions.Insert("9469.3 304.5 8867.9");
		MissionEvents.Insert("Horde Gorka central Residential_4");							MissionPositions.Insert("9484.7 304.1 8894.5");
		MissionEvents.Insert("Horde Gorka central Residential_5");							MissionPositions.Insert("9478.4 307.5 8912.5");
		MissionEvents.Insert("Horde Gorka central Residential_6");							MissionPositions.Insert("9478.8 304.2 8862.9");
		MissionEvents.Insert("Horde Gorka central Residential_7");							MissionPositions.Insert("9470.3 307.2 8771.4");
		MissionEvents.Insert("Horde Gorka central Residential_8");							MissionPositions.Insert("9507.5 307.2 8842.6");
		MissionEvents.Insert("Horde Gorka central Residential_9");							MissionPositions.Insert("9541.8 308 8867.3");
		MissionEvents.Insert("Horde Grishino central Residential_1");						MissionPositions.Insert("5933.7 268.7 10349.5");
		MissionEvents.Insert("Horde Grishino central Residential_2");						MissionPositions.Insert("5926.9 268.4 10326.9");
		MissionEvents.Insert("Horde Grishino central Residential_3");						MissionPositions.Insert("5988.6 270.4 10329.6");
		MissionEvents.Insert("Horde Grishino central Residential_4");						MissionPositions.Insert("6027 268 10341.2");
		MissionEvents.Insert("Horde Grishino central Residential_5");						MissionPositions.Insert("5963.2 268.6 10289.2");
		MissionEvents.Insert("Horde Kamenka west Residential_1");							MissionPositions.Insert("1702 6.8 2215.5");
		MissionEvents.Insert("Horde Kamenka west Residential_2");							MissionPositions.Insert("1745.2 9.4 2210.1");
		MissionEvents.Insert("Horde Kamenka west Residential_3");							MissionPositions.Insert("1778 7.2 2232.6");
		MissionEvents.Insert("Horde Kamenka west Residential_4");							MissionPositions.Insert("1800 5.9 2184.7");
		MissionEvents.Insert("Horde Kamenka central Residential_1");						MissionPositions.Insert("1855.2 9.8 2252.2");
		MissionEvents.Insert("Horde Kamenka central Residential_2");						MissionPositions.Insert("1871.5 6.9 2220.2");
		MissionEvents.Insert("Horde Kamenka east Residential_1");							MissionPositions.Insert("1960.8 9.2 2240.5");
		MissionEvents.Insert("Horde Kamenka east Residential_2");							MissionPositions.Insert("1947.5 7 2269.8");
		MissionEvents.Insert("Horde Kamyshovo west Residential_1");							MissionPositions.Insert("11985.6 7.4 3499");
		MissionEvents.Insert("Horde Kamyshovo west Residential_2");							MissionPositions.Insert("11954.6 6.5 3461.9");
		MissionEvents.Insert("Horde Kamyshovo north Residential_1");						MissionPositions.Insert("12074.7 8.4 3648.6");
		MissionEvents.Insert("Horde Kamyshovo north Residential_2");						MissionPositions.Insert("12061.7 5.5 3692.9");
		MissionEvents.Insert("Horde Kamyshovo north Residential_3");						MissionPositions.Insert("12039.6 8.7 3736.7");
		MissionEvents.Insert("Horde Kamyshovo central Residential_1");						MissionPositions.Insert("12072.4 6.4 3510.3");
		MissionEvents.Insert("Horde Kamyshovo central Residential_2");						MissionPositions.Insert("12035.9 6.6 3546.8");
		MissionEvents.Insert("Horde Kamyshovo central Residential_3");						MissionPositions.Insert("12114.7 9.4 3483.1");
		MissionEvents.Insert("Horde Kamyshovo central Residential_4");						MissionPositions.Insert("12138.6 9.8 3481.9");
		MissionEvents.Insert("Horde Kamyshovo east Residential_1");							MissionPositions.Insert("12153.4 9.2 3516.2");
		MissionEvents.Insert("Horde Kamyshovo east Residential_2");							MissionPositions.Insert("12206.2 6.2 3523.5");
		MissionEvents.Insert("Horde Khelm central Residential_1");							MissionPositions.Insert("12253.8 108.8 10897.3");
		MissionEvents.Insert("Horde Khelm central Residential_2");							MissionPositions.Insert("12264.1 109.9 10961.3");
		MissionEvents.Insert("Horde Khelm central Residential_3");							MissionPositions.Insert("12311.3 108.6 10953.8");
		MissionEvents.Insert("Horde Khelm central Residential_4");							MissionPositions.Insert("12334.6 107.9 10917.8");
		MissionEvents.Insert("Horde Khelm central Residential_5");							MissionPositions.Insert("12312.8 101.4 10811.2");
		MissionEvents.Insert("Horde Komarovo west Residential_1");							MissionPositions.Insert("3512 8.8 2411.2");
		MissionEvents.Insert("Horde Komarovo west Residential_2");							MissionPositions.Insert("3523.5 6.4 2451.1");
		MissionEvents.Insert("Horde Komarovo west Residential_3");							MissionPositions.Insert("3577.5 7.4 2465");
		MissionEvents.Insert("Horde Komarovo central Residential_1");						MissionPositions.Insert("3605.8 6.8 2439.6");
		MissionEvents.Insert("Horde Komarovo central Residential_2");						MissionPositions.Insert("3634.2 10.4 2448.5");
		MissionEvents.Insert("Horde Komarovo central Residential_3");						MissionPositions.Insert("3600.5 12.3 2479.5");
		MissionEvents.Insert("Horde Komarovo east Residential_1");							MissionPositions.Insert("3665.9 8.3 2516.2");
		MissionEvents.Insert("Horde Kozlovka central Residential_1");						MissionPositions.Insert("4358 238.2 4733.6");
		MissionEvents.Insert("Horde Kozlovka central Residential_2");						MissionPositions.Insert("4345.2 235.5 4648.1");
		MissionEvents.Insert("Horde Kozlovka central Residential_3");						MissionPositions.Insert("4392.5 232.1 4601.8");
		MissionEvents.Insert("Horde Kozlovka central Residential_4");						MissionPositions.Insert("4412.7 232.1 4581.2");
		MissionEvents.Insert("Horde Kozlovka central Residential_5");						MissionPositions.Insert("4462.7 235.5 4625.2");
		MissionEvents.Insert("Horde Kozlovka central Residential_6");						MissionPositions.Insert("4446.4 236 4643.1");
		MissionEvents.Insert("Horde Kozlovka central Residential_7");						MissionPositions.Insert("4505.1 234.6 4607.5");
		MissionEvents.Insert("Horde Mogilevka central Residential_1");						MissionPositions.Insert("7470 214.7 5149.1");
		MissionEvents.Insert("Horde Mogilevka central Residential_2");						MissionPositions.Insert("7497.3 214 5155.7");
		MissionEvents.Insert("Horde Mogilevka central Residential_3");						MissionPositions.Insert("7526.1 214.2 5075.1");
		MissionEvents.Insert("Horde Mogilevka central Residential_4");						MissionPositions.Insert("7563.3 214.9 5155.1");
		MissionEvents.Insert("Horde Mogilevka central Residential_5");						MissionPositions.Insert("7555.8 218.2 5226.5");
		MissionEvents.Insert("Horde Mogilevka central Residential_6");						MissionPositions.Insert("7565.5 214.6 5097.5");
		MissionEvents.Insert("Horde Msta central Residential_1");							MissionPositions.Insert("11224.6 256.7 5410.3");
		MissionEvents.Insert("Horde Msta central Residential_2");							MissionPositions.Insert("11200.5 257.3 5434.9");
		MissionEvents.Insert("Horde Msta central Residential_3");							MissionPositions.Insert("11239.1 254.8 5358.7");
		MissionEvents.Insert("Horde Msta central Residential_4");							MissionPositions.Insert("11320.2 257.6 5498.7");
		MissionEvents.Insert("Horde Msta central Residential_5");							MissionPositions.Insert("11389 254.9 5540.7");
		MissionEvents.Insert("Horde Nadezhdino north Residential_1");						MissionPositions.Insert("5853.2 134 4786.1");
		MissionEvents.Insert("Horde Nadezhdino north Residential_2");						MissionPositions.Insert("5845.1 133.7 4824.2");
		MissionEvents.Insert("Horde Nadezhdino north Residential_3");						MissionPositions.Insert("5895.1 135 4829.6");
		MissionEvents.Insert("Horde Nadezhdino central Residential_1");						MissionPositions.Insert("5879.8 142.6 4612.1");
		MissionEvents.Insert("Horde Nadezhdino central Residential_2");						MissionPositions.Insert("5833.1 137.1 4698");
		MissionEvents.Insert("Horde Nadezhdino central Residential_3");						MissionPositions.Insert("5902.7 145.2 4698.3");
		MissionEvents.Insert("Horde Nadezhdino central Residential_4");						MissionPositions.Insert("5896.8 146.6 4727.2");
		MissionEvents.Insert("Horde Novy_Sobor central Residential_1");						MissionPositions.Insert("7101.7 298.1 7659.8");
		MissionEvents.Insert("Horde Novy_Sobor central Residential_2");						MissionPositions.Insert("7126.4 297.3 7685");
		MissionEvents.Insert("Horde Novy_Sobor central Residential_3");						MissionPositions.Insert("7130.7 299.2 7758.6");
		MissionEvents.Insert("Horde Novy_Sobor central Residential_4");						MissionPositions.Insert("7198.5 300.9 7741.8");
		MissionEvents.Insert("Horde Novy_Sobor central Residential_5");						MissionPositions.Insert("7249.3 301.3 7745.7");
		MissionEvents.Insert("Horde Olsha central Residential_1");							MissionPositions.Insert("13298.3 97.4 12944.4");
		MissionEvents.Insert("Horde Olsha central Residential_2");							MissionPositions.Insert("13322.9 99.3 12927.9");
		MissionEvents.Insert("Horde Olsha central Residential_3");							MissionPositions.Insert("13346.3 95 12854.3");
		MissionEvents.Insert("Horde Olsha central Residential_4");							MissionPositions.Insert("13371.5 95.7 12892.9");
		MissionEvents.Insert("Horde Olsha central Residential_5");							MissionPositions.Insert("13365.7 98.3 12921.5");
		MissionEvents.Insert("Horde Olsha central Residential_6");							MissionPositions.Insert("13380.4 90.7 12965.3");
		MissionEvents.Insert("Horde Orlovets central Residential_1");						MissionPositions.Insert("12028.4 195.4 7233");
		MissionEvents.Insert("Horde Orlovets central Residential_2");						MissionPositions.Insert("12064.6 194.5 7251.1");
		MissionEvents.Insert("Horde Orlovets central Residential_3");						MissionPositions.Insert("12081 197.5 7299.1");
		MissionEvents.Insert("Horde Orlovets central Residential_4");						MissionPositions.Insert("12104.2 194.3 7198.5");
		MissionEvents.Insert("Horde Orlovets central Residential_5");						MissionPositions.Insert("12118.4 194.3 7252.9");
		MissionEvents.Insert("Horde Orlovets central Residential_6");						MissionPositions.Insert("12130 191.5 7215.1");
		MissionEvents.Insert("Horde Orlovets central Residential_7");						MissionPositions.Insert("12192.4 180.6 7252.8");
		MissionEvents.Insert("Horde Pavlovo west Residential_1");							MissionPositions.Insert("1637.2 147.3 3803.4");
		MissionEvents.Insert("Horde Pavlovo north Residential_1");							MissionPositions.Insert("1662.6 147.4 3886.9");
		MissionEvents.Insert("Horde Pavlovo north Residential_2");							MissionPositions.Insert("1645.5 145.7 3987.5");
		MissionEvents.Insert("Horde Pavlovo central Residential_1");						MissionPositions.Insert("1678.3 144.1 3818.6");
		MissionEvents.Insert("Horde Pavlovo central Residential_2");						MissionPositions.Insert("1672.8 147.2 3857.2");
		MissionEvents.Insert("Horde Pavlovo south Residential_1");							MissionPositions.Insert("1681.3 144.5 3754.7");
		MissionEvents.Insert("Horde Pavlovo south Residential_2");							MissionPositions.Insert("1692.7 142 3680.5");
		MissionEvents.Insert("Horde Pavlovo south Residential_3");							MissionPositions.Insert("1725.9 144.8 3680.2");
		MissionEvents.Insert("Horde Polana central Residential_1");							MissionPositions.Insert("10622.3 214.1 8114.2");
		MissionEvents.Insert("Horde Polana central Residential_2");							MissionPositions.Insert("10664.6 214.8 8126.2");
		MissionEvents.Insert("Horde Polana central Residential_3");							MissionPositions.Insert("10622.6 216.3 8066.1");
		MissionEvents.Insert("Horde Polana central Residential_4");							MissionPositions.Insert("10694.3 215.1 8116.8");
		MissionEvents.Insert("Horde Polana central Residential_5");							MissionPositions.Insert("10733.4 221.7 8135.4");
		MissionEvents.Insert("Horde Polana central Residential_6");							MissionPositions.Insert("10756.4 220.4 8116.9");
		MissionEvents.Insert("Horde Polana central Residential_7");							MissionPositions.Insert("10731.9 219.1 8092.7");
		MissionEvents.Insert("Horde Polana central Residential_8");							MissionPositions.Insert("10728 215.8 8050.7");
		MissionEvents.Insert("Horde Polana central Residential_9");							MissionPositions.Insert("10734.4 216.4 7998");
		MissionEvents.Insert("Horde Pusta north Residential_1");							MissionPositions.Insert("9083.4 253.3 4059.8");
		MissionEvents.Insert("Horde Pusta north Residential_2");							MissionPositions.Insert("9138.2 258.7 4114.3");
		MissionEvents.Insert("Horde Pusta central Residential_1");							MissionPositions.Insert("9144.7 228.3 3840.7");
		MissionEvents.Insert("Horde Pusta central Residential_2");							MissionPositions.Insert("9139.8 224.9 3868.3");
		MissionEvents.Insert("Horde Pusta central Residential_3");							MissionPositions.Insert("9186.2 226.7 3894.8");
		MissionEvents.Insert("Horde Shakhovka central Residential_1");						MissionPositions.Insert("9624.6 212 6525.3");
		MissionEvents.Insert("Horde Shakhovka central Residential_2");						MissionPositions.Insert("9669.2 210.2 6539.6");
		MissionEvents.Insert("Horde Shakhovka central Residential_3");						MissionPositions.Insert("9585.3 212.5 6553.7");
		MissionEvents.Insert("Horde Shakhovka central Residential_4");						MissionPositions.Insert("9572.2 209.2 6561.8");
		MissionEvents.Insert("Horde Shakhovka central Residential_5");						MissionPositions.Insert("9558 211.1 6588.1");
		MissionEvents.Insert("Horde Solnichniy central Residential_1");						MissionPositions.Insert("13309.7 8.9 6239.8");
		MissionEvents.Insert("Horde Solnichniy central Residential_2");						MissionPositions.Insert("13331.5 6.7 6235.5");
		MissionEvents.Insert("Horde Solnichniy central Residential_3");						MissionPositions.Insert("13351.1 6.7 6226.1");
		MissionEvents.Insert("Horde Solnichniy central Residential_4");						MissionPositions.Insert("13348.6 9.6 6196.1");
		MissionEvents.Insert("Horde Solnichniy central Residential_5");						MissionPositions.Insert("13378.6 6.7 6226.4");
		MissionEvents.Insert("Horde Solnichniy central Residential_6");						MissionPositions.Insert("13379.9 9.3 6269.3");
		MissionEvents.Insert("Horde Solnichniy central Residential_7");						MissionPositions.Insert("13412.5 6.4 6307.5");
		MissionEvents.Insert("Horde Solnichniy central Residential_8");						MissionPositions.Insert("13411.6 7 6333.5");
		MissionEvents.Insert("Horde Staroye central Residential_1");						MissionPositions.Insert("10144.2 248.4 5487.7");
		MissionEvents.Insert("Horde Staroye central Residential_2");						MissionPositions.Insert("10125.1 250.2 5407.3");
		MissionEvents.Insert("Horde Staroye central Residential_3");						MissionPositions.Insert("10158.4 247.1 5386.7");
		MissionEvents.Insert("Horde Staroye central Residential_4");						MissionPositions.Insert("10218.8 237.1 5442.2");
		MissionEvents.Insert("Horde Staroye east Residential_1");							MissionPositions.Insert("10313.6 248.2 5491.8");
		MissionEvents.Insert("Horde Staroye east Residential_2");							MissionPositions.Insert("10267.5 245.7 5579.5");
		MissionEvents.Insert("Horde Staroye east Residential_3");							MissionPositions.Insert("10294.2 245.9 5579.1");
		MissionEvents.Insert("Horde Staroye east Residential_4");							MissionPositions.Insert("10341.3 248.6 5519.1");
		MissionEvents.Insert("Horde Stary_Sobor central Residential_1");					MissionPositions.Insert("5955.7 302.4 7837.4");
		MissionEvents.Insert("Horde Stary_Sobor central Residential_2");					MissionPositions.Insert("6020.8 307.5 7889.9");
		MissionEvents.Insert("Horde Stary_Sobor central Residential_3");					MissionPositions.Insert("5995.4 301.9 7800.3");
		MissionEvents.Insert("Horde Stary_Sobor central Residential_4");					MissionPositions.Insert("6030.8 306.6 7745.4");
		MissionEvents.Insert("Horde Stary_Sobor central Residential_5");					MissionPositions.Insert("6120.4 301.3 7756.6");
		MissionEvents.Insert("Horde Stary_Sobor central Residential_6");					MissionPositions.Insert("6095.7 301.9 7703.8");
		MissionEvents.Insert("Horde Tulga west Residential_1");								MissionPositions.Insert("12529.2 187.2 4323.3");
		MissionEvents.Insert("Horde Tulga west Residential_2");								MissionPositions.Insert("12629.9 180.7 4379");
		MissionEvents.Insert("Horde Tulga west Residential_3");								MissionPositions.Insert("12661.3 180.8 4361.2");
		MissionEvents.Insert("Horde Tulga east Residential_1");								MissionPositions.Insert("12844 174.7 4448.6");
		MissionEvents.Insert("Horde Tulga east Residential_2");								MissionPositions.Insert("12856.7 171.8 4453.6");
		MissionEvents.Insert("Horde Tulga east Residential_3");								MissionPositions.Insert("12897.8 172.8 4430.5");
		//622
		MissionEvents.Insert("PlaneCrash Balota_Airstrip central 317");						MissionPositions.Insert("4934 9.5 2551.1");
		MissionEvents.Insert("PlaneCrash Balota_Airstrip southeast 137");					MissionPositions.Insert("5208.4 9.5 2223.7");
		MissionEvents.Insert("PlaneCrash Balota northwest 32");								MissionPositions.Insert("4212.4 25.6 2996.1");
		MissionEvents.Insert("PlaneCrash Berezino southeast 97");							MissionPositions.Insert("12413.4 33.5 8792.8");
		MissionEvents.Insert("PlaneCrash Bogatyrka east 40");								MissionPositions.Insert("1979.7 294.2 8953.6");
		MissionEvents.Insert("PlaneCrash Devils_Castle east 51");							MissionPositions.Insert("7541.6 290.1 11639.3");
		MissionEvents.Insert("PlaneCrash Elektrozavodsk west 292");							MissionPositions.Insert("9140.1 5.9 2010.6");
		MissionEvents.Insert("PlaneCrash Gorka northwest 96");								MissionPositions.Insert("8756.3 379 9048.4");
		MissionEvents.Insert("PlaneCrash Green_Mountain northwest 123");					MissionPositions.Insert("3328.3 347.3 6563.1");
		MissionEvents.Insert("PlaneCrash Grishino east 294");								MissionPositions.Insert("6466.2 302.6 10180.6");
		MissionEvents.Insert("PlaneCrash Guglovo south 190");								MissionPositions.Insert("8395.3 314.6 6146.9");
		MissionEvents.Insert("PlaneCrash Kabanino east 223");								MissionPositions.Insert("5893 316.4 8430.6");
		MissionEvents.Insert("PlaneCrash Komarovo southwest 53");							MissionPositions.Insert("3495.3 5.9 2286.4");
		MissionEvents.Insert("PlaneCrash Kozlovka northwest 135");							MissionPositions.Insert("3852.3 250.4 5135.1");
		MissionEvents.Insert("PlaneCrash Krasnostav northeast 292");						MissionPositions.Insert("12000.9 140 12567");
		MissionEvents.Insert("PlaneCrash Krasnostav northeast 112");						MissionPositions.Insert("12309.7 140 12441.2");
		MissionEvents.Insert("PlaneCrash Novy_Sobor northwest 30");							MissionPositions.Insert("6634.5 314.7 7905.3");
		MissionEvents.Insert("PlaneCrash Pavlovo north 174");								MissionPositions.Insert("1637.4 162.9 4402.1");
		MissionEvents.Insert("PlaneCrash Prigorodki southeast 60");							MissionPositions.Insert("7505.1 6 3574");
		MissionEvents.Insert("PlaneCrash Pustoshka southeast 344");							MissionPositions.Insert("3672.9 303.3 7629.6");
		MissionEvents.Insert("PlaneCrash Sinistok east 259");								MissionPositions.Insert("1850.9 262.8 11852.6");
		MissionEvents.Insert("PlaneCrash Solnichniy north 164");							MissionPositions.Insert("13273.8 9.3 6498.6");
		MissionEvents.Insert("PlaneCrash Stary_Sobor north 330");							MissionPositions.Insert("6260.5 333.2 8284.3");
		MissionEvents.Insert("PlaneCrash Stary_Sobor southwest 227");						MissionPositions.Insert("5658.5 307.5 7403.5");
		MissionEvents.Insert("PlaneCrash Topolniki southwest 58");							MissionPositions.Insert("2486.3 230.3 12217.1");
		MissionEvents.Insert("PlaneCrash Topolniki north 346");								MissionPositions.Insert("2572.9 235.8 13008");
		MissionEvents.Insert("PlaneCrash Kalinovka west 329");								MissionPositions.Insert("7153.5 211.3 13392.5");
		MissionEvents.Insert("PlaneCrash Turovo southwest 112");							MissionPositions.Insert("13267.2 7.1 13864.6");
		MissionEvents.Insert("PlaneCrash Vybor_Airfield central 330");						MissionPositions.Insert("4299.8 339 10509.4");
		MissionEvents.Insert("PlaneCrash Vybor_Airfield central 141");						MissionPositions.Insert("4644.2 339 9915.7");
		MissionEvents.Insert("PlaneCrash Vybor southwest 217");								MissionPositions.Insert("3187.4 287.7 8782.1");
		MissionEvents.Insert("PlaneCrash Vybor southeast 280");								MissionPositions.Insert("4114 311.2 8602.3");
		MissionEvents.Insert("PlaneCrash Vysotovo south 253");								MissionPositions.Insert("5540.1 5.6 2001.8");
		MissionEvents.Insert("PlaneCrash Zelenogorsk west 108");							MissionPositions.Insert("1685.1 170.6 5187.7");
		MissionEvents.Insert("PlaneCrash Zaprudnoe northwest 120");							MissionPositions.Insert("4233.5 189.2 13384.5");
		//657
		MissionEvents.Insert("Shrooms Belaya_Polana north Novodmitrovsk");					MissionPositions.Insert("14152.4 190.5 15300.6");
		MissionEvents.Insert("Shrooms Belaya_Polana southwest Novodmitrovsk");				MissionPositions.Insert("13768.4 160.6 14769.4");
		MissionEvents.Insert("Shrooms Belaya_Polana west Novodmitrovsk");					MissionPositions.Insert("13770.5 132.1 15173.6");
		MissionEvents.Insert("Shrooms Black_Mountain west Severograd");						MissionPositions.Insert("10083.3 330.1 11991.6");
		MissionEvents.Insert("Shrooms Black_Mountain south Severograd");					MissionPositions.Insert("10194.2 308.6 11770.3");
		MissionEvents.Insert("Shrooms Bor west Pavlovo");									MissionPositions.Insert("2902.9 267.6 3930.1");
		MissionEvents.Insert("Shrooms Devils_Castle west Severograd");						MissionPositions.Insert("6711.5 375.5 11411.5");
		MissionEvents.Insert("Shrooms Devils_Castle northwest Severograd");					MissionPositions.Insert("6791.9 365.4 11648.7");
		MissionEvents.Insert("Shrooms Devils_Castle southwest Severograd");					MissionPositions.Insert("6820.3 370.9 11202.5");
		MissionEvents.Insert("Shrooms Devils_Castle north Severograd");						MissionPositions.Insert("6930.9 373.3 11742.0");
		MissionEvents.Insert("Shrooms Devils_Castle northeast Severograd");					MissionPositions.Insert("6976.4 369.8 11651.0");
		MissionEvents.Insert("Shrooms Dubina_Mountain east Berezino");						MissionPositions.Insert("11523.2 232.0 8435.9");
		MissionEvents.Insert("Shrooms Kamyshovo northwest Elektrozavodsk");					MissionPositions.Insert("11677.1 134.7 3744.7");
		MissionEvents.Insert("Shrooms Klen_Mountain south Berezino");						MissionPositions.Insert("11443.8 329.2 11289.1");
		MissionEvents.Insert("Shrooms Krasnoe northeast Severograd");						MissionPositions.Insert("6599.8 466.0 15250.0");
		MissionEvents.Insert("Shrooms Krasnoe east Severograd");							MissionPositions.Insert("6894.8 453.0 15125.2");
		MissionEvents.Insert("Shrooms Mogilevka west Chernogorsk");							MissionPositions.Insert("6609.1 351.1 5243.8");
		MissionEvents.Insert("Shrooms Mogilevka southwest Chernogorsk");					MissionPositions.Insert("7055.8 241.8 4713.5");
		MissionEvents.Insert("Shrooms Nadezhdino northwest Chernogorsk");					MissionPositions.Insert("5332.3 311.9 5281.1");
		MissionEvents.Insert("Shrooms Novodmitrovsk southwest Novodmitrovsk");				MissionPositions.Insert("11068.9 128.8 13991.1");
		MissionEvents.Insert("Shrooms Novodmitrovsk west Novodmitrovsk");					MissionPositions.Insert("11098.0 130.6 14780.1");
		MissionEvents.Insert("Shrooms Novoselki northwest Chernogorsk");					MissionPositions.Insert("5531.2 153.0 3516.6");
		MissionEvents.Insert("Shrooms Chernaya_Polana south Novodmitrovsk");				MissionPositions.Insert("12028.2 126.6 13405.4");
		MissionEvents.Insert("Shrooms Olha_Mountain southwest Novodmitrovsk");				MissionPositions.Insert("12773.2 191.6 12642.9");
		MissionEvents.Insert("Shrooms Olha_Mountain east Novodmitrovsk");					MissionPositions.Insert("13135.2 158.7 12751.1");
		MissionEvents.Insert("Shrooms Orlovets north Berezino");							MissionPositions.Insert("11992.0 188.7 7586.9");
		MissionEvents.Insert("Shrooms Rog_Castle southwest Elektrozavodsk");				MissionPositions.Insert("11132.5 298.9 4046.9");
		MissionEvents.Insert("Shrooms Solnichniy southwest Berezino");						MissionPositions.Insert("13110.4 126.5 5956.0");
		MissionEvents.Insert("Shrooms Tishina_Dam northwest Pavlovo");						MissionPositions.Insert("748.3 294.4 6525.7");	
		MissionEvents.Insert("Shrooms Topolka_Dam northwest Elektrozavodsk");				MissionPositions.Insert("9811.4 171.1 3847.2");
		MissionEvents.Insert("Shrooms Topolka_Dam east Elektrozavodsk");					MissionPositions.Insert("10625.1 128.4 3619.0");
		MissionEvents.Insert("Shrooms Kalinovka_Military_Base northeast Severograd");		MissionPositions.Insert("8191.7 410.3 15078.7");
		MissionEvents.Insert("Shrooms Tulga west Elektrozavodsk");							MissionPositions.Insert("12312.5 251.0 4531.9");
		MissionEvents.Insert("Shrooms Vysoky_Kamen_Mountain ontop Elektrozavodsk");			MissionPositions.Insert("8956.2 336.2 4352.9");
		MissionEvents.Insert("Shrooms Zelenogorsk southsouthwest Pavlovo");					MissionPositions.Insert("2415.5 258.1 4606.8");	
		MissionEvents.Insert("Shrooms Zub_Castle southeast Chernogorsk");					MissionPositions.Insert("6596.1 372.7 5527.2");
		//693
		MissionEvents.Insert("Transport Berezino southwest Zaprudnoe");						MissionPositions.Insert("11924.5 57 8971.2");
		MissionEvents.Insert("Transport Berezino southwest Staroye");						MissionPositions.Insert("11939.8 57 8972.4");
		MissionEvents.Insert("Transport Berezino south Elektrozavodsk");					MissionPositions.Insert("12015.3 56.1 8995.1");
		MissionEvents.Insert("Transport Berezino south Chernogorsk_East");					MissionPositions.Insert("12000.6 56.1 8990.8");
		MissionEvents.Insert("Transport Berezino northeast Vybor");							MissionPositions.Insert("12193 19.8 9536.5");
		MissionEvents.Insert("Transport Berezino northeast Pogorevka");						MissionPositions.Insert("12207 19.8 9532.5");
		MissionEvents.Insert("Transport Berezino southeast Grishino");						MissionPositions.Insert("12072.2 55.6 9029");
		MissionEvents.Insert("Transport Berezino east Severograd");							MissionPositions.Insert("12291.4 36.5 9052.9");
		MissionEvents.Insert("Transport Chernogorsk west Grishino");						MissionPositions.Insert("6449.9 7.4 2276.4");
		MissionEvents.Insert("Transport Chernogorsk central Berezino");						MissionPositions.Insert("6533.8 7.6 2407.3");
		MissionEvents.Insert("Transport Chernogorsk central Pustoshka");					MissionPositions.Insert("6548.3 7.6 2394.5");
		MissionEvents.Insert("Transport Chernogorsk north Solnichniy");						MissionPositions.Insert("6325.2 10.8 2583.0");
		MissionEvents.Insert("Transport Chernogorsk north Staroye");						MissionPositions.Insert("6330.4 10.8 2655.2");
		MissionEvents.Insert("Transport Chernogorsk north Pogorevka");						MissionPositions.Insert("6363.2 15.9 2817.3");
		MissionEvents.Insert("Transport Chernogorsk east Zelenogorsk");						MissionPositions.Insert("6655.1 8.9 2601.1");
		MissionEvents.Insert("Transport Chernogorsk east Kamenka");							MissionPositions.Insert("6786.4 4.6 2707.8");
		MissionEvents.Insert("Transport Elektrozavodsk southwest Vybor");					MissionPositions.Insert("10464.3 7.7 2248.1");
		MissionEvents.Insert("Transport Elektrozavodsk southeast Kamenka");					MissionPositions.Insert("10560.1 7.6 2234.4");
		MissionEvents.Insert("Transport Elektrozavodsk southeast Berezino");				MissionPositions.Insert("10567.6 7.6 2222.6");
		MissionEvents.Insert("Transport Elektrozavodsk southeast Svetlojarsk");				MissionPositions.Insert("10583.2 7.6 2235.3");
		MissionEvents.Insert("Transport Elektrozavodsk east Gorka");						MissionPositions.Insert("10562.5 7.6 2336.5");
		MissionEvents.Insert("Transport Elektrozavodsk east Vybor");						MissionPositions.Insert("10601.3 7.6 2329.7");
		MissionEvents.Insert("Transport Chernaya_Polana west Topolniki");					MissionPositions.Insert("11995.5 95.2 13779");
		MissionEvents.Insert("Transport Chernaya_Polana west Elektrozavodsk");				MissionPositions.Insert("11998.4 95.2 13764");
		MissionEvents.Insert("Transport Chernaya_Polana south Grishino");					MissionPositions.Insert("12092.5 99.7 13604.5");
		MissionEvents.Insert("Transport Chernaya_Polana central Staroye");					MissionPositions.Insert("12141.1 97.2 13747.2");
		MissionEvents.Insert("Transport Dolina west Severograd");							MissionPositions.Insert("11445.2 70.6 6596.7");
		MissionEvents.Insert("Transport Kamyshovo central Chernogorsk_West");				MissionPositions.Insert("12038.4 7.5 3620.7");
		MissionEvents.Insert("Transport Krasnostav west Pogorevka");						MissionPositions.Insert("11041.1 228.6 12472.4");
		MissionEvents.Insert("Transport Krasnostav north Gorka");							MissionPositions.Insert("11205.7 198.4 12298.1");
		MissionEvents.Insert("Transport Krasnostav southwest Topolniki");					MissionPositions.Insert("11114.8 203 12206");
		MissionEvents.Insert("Transport Novaya_Petrovka northwest Berezino");				MissionPositions.Insert("3332.8 200 13081.1");
		MissionEvents.Insert("Transport Novaya_Petrovka west Tri_Kresta");					MissionPositions.Insert("3412.7 195 12996.3");
		MissionEvents.Insert("Transport Novaya_Petrovka east Pogorevka");					MissionPositions.Insert("3507 194.1 13065.1");
		MissionEvents.Insert("Transport Novodmitrovsk west Zelenogorsk");					MissionPositions.Insert("11426.8 89.3 14660.6");
		MissionEvents.Insert("Transport Novodmitrovsk west Vybor");							MissionPositions.Insert("11331.7 49.2 14477.3");
		MissionEvents.Insert("Transport Novodmitrovsk north Chernogorsk_East");				MissionPositions.Insert("11494.1 60.4 14900.5");
		MissionEvents.Insert("Transport Novodmitrovsk north Pustoshka");					MissionPositions.Insert("11484.7 60.4 14888.3");
		MissionEvents.Insert("Transport Novodmitrovsk south Elektrozavodsk");				MissionPositions.Insert("11682.8 44.6 14420.4");
		MissionEvents.Insert("Transport Novodmitrovsk south Solnichniy");					MissionPositions.Insert("11673.6 44.6 14432.8");
		MissionEvents.Insert("Transport Novodmitrovsk southwest Zaprudnoe");				MissionPositions.Insert("11512.2 48.2 14495.4");
		MissionEvents.Insert("Transport Novoselki southeast Pustoshka");					MissionPositions.Insert("6407.1 18.1 3112");
		MissionEvents.Insert("Transport Novoselki east Solnichniy");						MissionPositions.Insert("6322.5 29 3306.6");
		MissionEvents.Insert("Transport Novy_Sobor southeast Tri_Kresta");					MissionPositions.Insert("7189.3 285 7550.2");
		MissionEvents.Insert("Transport Pustoshka southeast Gorka");						MissionPositions.Insert("3065.8 316.3 7774.2");
		MissionEvents.Insert("Transport Severograd west Staroye");							MissionPositions.Insert("7661.2 121 12651.1");
		MissionEvents.Insert("Transport Severograd west Tri_Kresta");						MissionPositions.Insert("7784 121.4 12574.7");
		MissionEvents.Insert("Transport Severograd northwest Solnichniy");					MissionPositions.Insert("7729.4 119.5 12707.2");
		MissionEvents.Insert("Transport Severograd northwest Pustoshka");					MissionPositions.Insert("7744.8 119.5 12706.6");
		MissionEvents.Insert("Transport Severograd north Gorka");							MissionPositions.Insert("7940.9 118.3 12739.7");
		MissionEvents.Insert("Transport Severograd northeast Elektrozavodsk");				MissionPositions.Insert("8066.9 120.2 12829.9");
		MissionEvents.Insert("Transport Severograd northeast Vybor");						MissionPositions.Insert("8081.4 120.2 12833.5");
		MissionEvents.Insert("Transport Severograd east Berezino");							MissionPositions.Insert("8159.1 115.1 12674.2");
		MissionEvents.Insert("Transport Stary_Sobor west Solnichniy");						MissionPositions.Insert("6030.7 302.5 7856.2");
		MissionEvents.Insert("Transport Stary_Sobor southwest Berezino");					MissionPositions.Insert("5951.1 306 7759.3");
		MissionEvents.Insert("Transport Stary_Sobor south Chernogorsk_East");				MissionPositions.Insert("6037.5 303.8 7696.4");
		MissionEvents.Insert("Transport Svetlojarsk northwest Grishino");					MissionPositions.Insert("13918.9 20.7 13333.9");
		MissionEvents.Insert("Transport Svetlojarsk southwest Pustoshka");					MissionPositions.Insert("13842.5 22.2 13185.8");
		MissionEvents.Insert("Transport Svetlojarsk central Elektrozavodsk");				MissionPositions.Insert("14016.1 14 13194");
		MissionEvents.Insert("Transport Svetlojarsk southeast Dubrovka");					MissionPositions.Insert("14007.3 14.5 13096.6");
		MissionEvents.Insert("Transport Svetlojarsk east Topolniki");						MissionPositions.Insert("14052.5 11.5 13145.2");
		MissionEvents.Insert("Transport Topolniki southwest Tri_Kresta");					MissionPositions.Insert("2701 230.2 12121.1");
		MissionEvents.Insert("Transport Topolniki southwest Solnichniy");					MissionPositions.Insert("2708.3 229.6 12143.7");
		MissionEvents.Insert("Transport Topolniki northeast Pustoshka");					MissionPositions.Insert("2974 212.7 12630");
		MissionEvents.Insert("Transport Topolniki northeast Pogorevka");					MissionPositions.Insert("2989.9 212.3 12655.9");
		MissionEvents.Insert("Transport Topolniki northeast Zelenogorsk");					MissionPositions.Insert("3044.1 211 12650.5");
		MissionEvents.Insert("Transport Vybor west Svetlojarsk");							MissionPositions.Insert("3746.7 312.9 8853.4");
		MissionEvents.Insert("Transport Vybor northwest Berezino");							MissionPositions.Insert("3768.3 312.6 8934.4");
		MissionEvents.Insert("Transport Vybor northeast Kamenka");							MissionPositions.Insert("4207.2 325.9 8913.8");
		MissionEvents.Insert("Transport Vysotovo northwest Pogorevka");						MissionPositions.Insert("5348.9 60.7 2749.5");
		MissionEvents.Insert("Transport Vysotovo north Pustoshka");							MissionPositions.Insert("5540.7 69.4 2712.2");
		MissionEvents.Insert("Transport Vysotovo north Solnichniy");						MissionPositions.Insert("5559.2 69.4 2703.5");
		MissionEvents.Insert("Transport Vysotovo north Berezino");							MissionPositions.Insert("5562 69.4 2718.6");
		MissionEvents.Insert("Transport Vysotovo north Tri_Kresta");						MissionPositions.Insert("5580.3 69.4 2698.8");
		MissionEvents.Insert("Transport Vysotovo north Kamenka");							MissionPositions.Insert("5583.1 69.4 2713.9");
		MissionEvents.Insert("Transport Vysotovo north Staroye");							MissionPositions.Insert("5596 69.5 2695.5");
		MissionEvents.Insert("Transport Vysotovo north Gorka");								MissionPositions.Insert("5598.9 69.5 2710.5");
		MissionEvents.Insert("Transport Vysotovo south Dubrovka");							MissionPositions.Insert("5772.9 52.9 2338.9");
		MissionEvents.Insert("Transport Zelenogorsk west Zaprudnoe");						MissionPositions.Insert("2505.4 191.7 5303.5");
		MissionEvents.Insert("Transport Zelenogorsk west Elektrozavodsk");					MissionPositions.Insert("2520.7 191.7 5303");
		MissionEvents.Insert("Transport Zelenogorsk west Severograd");						MissionPositions.Insert("2609.4 199 5301.6");
		MissionEvents.Insert("Transport Zelenogorsk west Chernogorsk_West");				MissionPositions.Insert("2608.7 199 5286.6");
		MissionEvents.Insert("Transport Zelenogorsk west Chernogorsk_East");				MissionPositions.Insert("2608.1 199 5271.7");
		MissionEvents.Insert("Transport Zelenogorsk west Topolniki");						MissionPositions.Insert("2625 198.9 5296.9");
		MissionEvents.Insert("Transport Zelenogorsk west Gorka");							MissionPositions.Insert("2624.7 198.9 5281.7");
		MissionEvents.Insert("Transport Zelenogorsk west Staroye");							MissionPositions.Insert("2624.3 198.9 5266.8");
		MissionEvents.Insert("Transport Zelenogorsk southwest Dubrovka");					MissionPositions.Insert("2641.2 197.7 5130.4");
		MissionEvents.Insert("Transport Zelenogorsk east Severograd");						MissionPositions.Insert("2811.7 207.9 5330.1");
		MissionEvents.Insert("Transport Zelenogorsk east Topolniki");						MissionPositions.Insert("2815.1 207.9 5345");
		MissionEvents.Insert("Transport Zelenogorsk central Elektrozavodsk");				MissionPositions.Insert("2687.9 207.6 5406.1");
		MissionEvents.Insert("Transport Zelenogorsk central Kamenka");						MissionPositions.Insert("2684.7 207.6 5391");
		//784
		MissionEvents.Insert("UrbanMall Berezino north Svetlojarsk");						MissionPositions.Insert("12116.1 13.5 9761.1");
		MissionEvents.Insert("UrbanMall Berezino north Novodmitrovsk");						MissionPositions.Insert("12116.1 13.5 9761.1");
		MissionEvents.Insert("UrbanMall Chernogorsk north Elektrozavodsk");					MissionPositions.Insert("6375.8 16.9 2856.5");
		MissionEvents.Insert("UrbanMall Dubovo west Elektrozavodsk");						MissionPositions.Insert("6535.7 63.4 3555.2");
		MissionEvents.Insert("UrbanMall Dubovo west Zelenogorsk");							MissionPositions.Insert("6535.7 63.4 3555.2");
		MissionEvents.Insert("UrbanMall Novoselki west Zelenogorsk");						MissionPositions.Insert("6077.7 54.2 3428.5");
		MissionEvents.Insert("UrbanMall Novoselki west Elektrozavodsk");					MissionPositions.Insert("6077.7 54.2 3428.5");
		MissionEvents.Insert("UrbanMall Topolniki south Severograd");						MissionPositions.Insert("3077.3 210.3 12667.2");
		MissionEvents.Insert("UrbanMall Vysotovo central Zelenogorsk");						MissionPositions.Insert("5660.8 65.6 2444.2");
		MissionEvents.Insert("UrbanMall Zelenogorsk central Chernogorsk");					MissionPositions.Insert("2673.3 206.9 5281.0");
		//794
					
		// ***Add new mission events below this line	
		//example: MissionEvents.Insert("MyNewMissionType Location LocationDir additionalParam");	MissionPositions.Insert("6869.6 350.3 10277.7");
	}
	
	static void BuildInstance()
	{
		//check for mission type to instantiate mission
		if ( m_MissionType == "Apartment" )		m_MissionInstance = new ApartmentMission();
		if ( m_MissionType == "BearHunt" )		m_MissionInstance = new BearHuntMission();	
		if ( m_MissionType == "Camp" )			m_MissionInstance = new CampMission();
		if ( m_MissionType == "CityMall" )		m_MissionInstance = new CityMallMission();
		if ( m_MissionType == "FreePigs" )		m_MissionInstance = new FreePigsMission();
		if ( m_MissionType == "Graveyard" )		m_MissionInstance = new GraveyardMission();
		if ( m_MissionType == "Horde" )			m_MissionInstance = new HordeMission();
		if ( m_MissionType == "PlaneCrash" )	m_MissionInstance = new PlaneCrashMission();			
		if ( m_MissionType == "Shrooms" )		m_MissionInstance = new ShroomsMission();
		if ( m_MissionType == "Transport" )		m_MissionInstance = new TransportMission();
		if ( m_MissionType == "UrbanMall" )		m_MissionInstance = new UrbanMallMission();
		// ***Add new mission types below this line when new mission events were defined 
		//example: if ( ( m_MissionType == "MyNewMissionType" )		m_MissionInstance = new MyNewMission();
	}
		
	static bool GetBuildingsAtLoc( string MBuilding, string MLocation, out array<vector> BuildingPosList )
	{
		//Get positions of a unique mission building by the town/village name
		BuildingPosList = new array<vector>;
		
		if ( MBuilding == "Land_City_Hospital")
		{
			if ( MLocation == "Berasino")	 				BuildingPosList.Insert("3239.712646 204.343826 9311.269531");
			else if ( MLocation == "Krasnapolle")			BuildingPosList.Insert("8632.393555 63.884583 2401.079102");
			else if ( MLocation == "Ostrovez")				BuildingPosList.Insert("9698.116211 58.618462 10330.443359");
			else if ( MLocation == "Borowoje")				BuildingPosList.Insert("11641.068359 54.054844 12430.030273");
			else if ( MLocation == "Adamowsk")				BuildingPosList.Insert("11659.572266 50.732368 8992.710938");
			else return false;			//No match by location
		}
		else if ( MBuilding == "Land_FuelStation_Build")
		{
			if ( MLocation == "Berasino")					BuildingPosList.Insert("2842.265869 182.382339 9327.926758");
			else if ( MLocation == "Babrujsk")				BuildingPosList.Insert("4542.953613 137.013916 11509.313477");
			else if ( MLocation == "Krasnapolle")			BuildingPosList.Insert("9074.275391 55.038155 2017.682007");
			else if ( MLocation == "Ostrovez")				BuildingPosList.Insert("9168.742188 54.606056 10659.800781");
			else if ( MLocation == "Gorlowka")				BuildingPosList.Insert("9284.876953 93.993454 4825.966797");
			else if ( MLocation == "Borowoje")				BuildingPosList.Insert("11622.315430 47.930241 12514.121094");
			else if ( MLocation == "Adamowsk")				BuildingPosList.Insert("11831.187500 39.329353 8842.039063");
			else return false;			//No match by location
		}
		else if ( MBuilding == "Land_Village_PoliceStation")
		{
			if ( MLocation == "Klettzk")					BuildingPosList.Insert("963.772522 322.203857 4098.283691");
			else if ( MLocation == "Berasino")				BuildingPosList.Insert("3108.640869 204.212234 9340.685547");
			else if ( MLocation == "Borowoje")				BuildingPosList.Insert("11676.434570 55.729412 12717.525391");
			else if ( MLocation == "Adamowsk")				BuildingPosList.Insert("11839.271484 43.620197 8949.211914");
			else return false;			//No match by location
		}
		else if ( MBuilding == "Land_City_PoliceStation")
		{
			if ( MLocation == "Krasnapolle")				BuildingPosList.Insert("8661.697266 53.910019 1897.060669");
			else if ( MLocation == "Ostrovez")				BuildingPosList.Insert("9407.207031 57.690754 10695.081055");
			else return false;			//No match by location
		}
		else if ( MBuilding == "Land_Misc_TrailRoof_")
		{
			if ( MLocation == "Rezoni_Sportsfacility")		BuildingPosList.Insert("10616.217773 428.019836 6623.742676");
			else if ( MLocation == "Old_Orschka")			BuildingPosList.Insert("6000.346680 177.984222 10878.038086");
			else if ( MLocation == "Ostrovez_Lake")			BuildingPosList.Insert("10248.166992 38.021774 11355.142578");
			else if ( MLocation == "Berasino_IndustrialNW")	BuildingPosList.Insert("2701.269287 147.249603 8778.312500");
			else if ( MLocation == "Berasino_IndustrialE")	BuildingPosList.Insert("3721.185059 140.939880 8630.902344");
			else if ( MLocation == "Berasino_Jelsk")		BuildingPosList.Insert("2134.150635 193.663467 9220.719727");
			else if ( MLocation == "Mieva_AirforceFarm")	BuildingPosList.Insert("3670.513916 131.790619 5989.329590");
			else if ( MLocation == "Jelsk_Klettzk")			BuildingPosList.Insert("1976.989990 201.881897 6967.889648");
			else if ( MLocation == "Drowkino_Klettzk")		BuildingPosList.Insert("2591.935303 234.021301 3310.041504");
			else return false;			//No match by location
		}		
		else if ( MBuilding == "Land_City_School")
		{
			if ( MLocation == "Krasnapolle")				BuildingPosList.Insert("8720.284180 61.705582 2345.443848");
			else if ( MLocation == "Ostrovez")				BuildingPosList.Insert("9486.150391 55.349426 10432.479492");
			else return false;			//No match by location
		}
		else return false;		//No match by building type. Keep this line after last building check!
		
		return true;
	}
	
	static void CheckEWD()
	{
		int ErrorCount = 0;
		
		for ( int i=0; i < MissionPositions.Count(); i++)
		{
			string Description[4];
			string EventName = MissionEvents.Get(i);
			vector Position = MissionPositions.Get(i);
			
			EventName.ParseString( Description );
			string Type = Description[0];
			string Location = Description[1];
			string LocDirection = Description[2];
			string Secondary = Description[3];
			
			//check for primary MissionBuilding, exclude missions with no primary MissionBuilding 
			if ( !PrimaryMissionCHK( Type, Position, i )) 
			{
				ErrorCount++;
				Print("[SEM] EWD Check additional mission Info : Type: "+ Type +" mission, location: "+ LocDirection +" of "+ Location +", Secondary mission:"+ Secondary );
			}
			//check for secondary MissionBuilding, exclude missions with no secondary MissionBuilding
			else if ( !SecondaryMissionCHK( Type, Secondary, i )) 
			{
				ErrorCount++;
				Print("[SEM] EWD Check additional mission Info : Type: "+ Type +" mission, location: "+ LocDirection +" of "+ Location +", Secondary mission:"+ Secondary );
			}						
		}
		if ( ErrorCount == 0 ) Print("[SEM] EWD check...OK");
		else Print("[SEM] EWD Check Summary: "+ ErrorCount +" missions have incorrect EventsWorldData. Check coordinates in debug mode!");	
	}
	
	static bool PrimaryMissionCHK( string type, vector position , int nr )
	{
		//List all mission types with no prim. MissionBuilding here!
		ref array<string> ExcludedTypes = new array<string>;
		ExcludedTypes.InsertArray( {"Camp","Shrooms","Graveyard","BearHunt","PlaneCrash","Horde"} );	
		string building;
		bool BuildingFound;
				
		for ( int i=0; i < ExcludedTypes.Count(); i++)	{ if ( type == ExcludedTypes.Get(i) ) return true;}
		
		//Add new mission type and building type for primary mission here!
		if ( type == "Apartment")					building = "Land_Tenement_Small";
		else if ( type == "CityMall")				building = "Land_City_Store";
		else if ( type == "FreePigs")				building = "Land_Farm_CowshedA";
		else if ( type == "Transport")				building = "Land_Garage_Row_Small";
		else if ( type == "UrbanMall")				building = "Land_City_Store_WithStairs";
		else 
		{
			Print("[SEM] EWD Check WARNING : Mission "+ nr +" - Mission type "+ type +" is undefined in EventsWorldData!");
			return false;
		}
				
		BuildingFound = false;
		
		GetGame().GetObjectsAtPosition( position, 1.0, ObjectList, ObjectCargoList);
		for ( int j=0; j < ObjectList.Count(); j++)
		{
			Object FoundObject = ObjectList.Get(j);
			if ( FoundObject.GetType() != building )
			continue;
			else 
			{
				BuildingFound = true;
				break;
			}						
		}
		if ( !BuildingFound ) 
		{
			Print("[SEM] EWD Check WARNING :: Mission "+ nr +" - Can't find "+ building +" @ "+ position );
			return false;		
		}
		else return true;		
	}	
	
	static bool SecondaryMissionCHK( string type, string location, int nr )
	{
		//List all mission types with no sec. MissionBuilding here!
		ref array<string> ExcludedTypes = new array<string>;
		ExcludedTypes.InsertArray( {"Apartment","Camp","Graveyard","PlaneCrash","Horde"} );
		
		ref array<vector> ExtendedPosList = new array<vector>;
		string building;
		bool BuildingFound;
		
		for ( int i=0; i < ExcludedTypes.Count(); i++)	{ if ( type == ExcludedTypes.Get(i) ) return true;}
		
		//Add new mission type and building type for secondary mission here!
		if ( type == "BearHunt")					building = "Land_City_School";
		else if ( type == "CityMall")				building = "Land_Village_PoliceStation";
		else if ( type == "FreePigs")				building = "Land_Misc_TrailRoof_Small";
		else if ( type == "Shrooms")				building = "Land_City_Hospital";
		else if ( type == "Transport")				building = "Land_FuelStation_Build";
		else if ( type == "UrbanMall")				building = "Land_City_PoliceStation";
		else
		{
			Print("[SEM] EWD Check WARNING :: Mission "+ nr +" - Mission type "+ type +" is undefined in EventsWorldData!");
			return false;
		}
		
		if ( GetBuildingsAtLoc( building, location, ExtendedPosList ))
		{
			for ( int k=0; k < ExtendedPosList.Count(); k++)
			{
				BuildingFound = false;
				
				vector pos = ExtendedPosList.Get(k);
				
				GetGame().GetObjectsAtPosition( pos, 1.0, ObjectList, ObjectCargoList);
				for ( int j=0; j < ObjectList.Count(); j++)
				{
					Object FoundObject = ObjectList.Get(j);
					if ( FoundObject.GetType() != building )
					continue;
					else 
					{
						BuildingFound = true;
						break;
					}							
				}
				if ( !BuildingFound ) 
				{
					Print("[SEMM] EWD Check WARNING :: Mission "+ nr +" - Can't check back "+ building +" at position: "+ pos );								
					return false;
				}
			}
			return true;			
		}
		else 
		{
			Print("[SEM] EWD Check WARNING :: Mission "+ nr +" - Can't check back "+ building +" at location: "+ location );
			return false;
		}
	}
	
	static void BuildStatics()
	{
		//add static buildings / objects here. This function must be activated in MissionSettings!

		//HQ world position and orientation (main building)
		vector HQCenterPOS = {-744, 34, 1016};
		vector HQCenterORI = {0, 0, 0};		//Set to {360,0,0} if u want a random orientation
		
		//HQ container
		ref array<ref Param3<string,vector,vector>> BuildingSpawns = new array<ref Param3<string,vector,vector>>;
		
		//Spawn main HQ building
		if ( HQCenterORI[0] == 360 ) HQCenterORI[0] = Math.RandomFloatInclusive(0,359.9);
		Object MainBuildingHQ = GetGame().CreateObject("Land_Mil_ATC_Big", HQCenterPOS );		
		MainBuildingHQ.SetOrientation( HQCenterORI );
		MainBuildingHQ.PlaceOnSurface();
		Print("[SEM] HQ :: Main building "+ MainBuildingHQ.GetType() +" spawned @"+ MainBuildingHQ.GetPosition() );
		
		//Spawn surrounding HQ buildings, ("Land_Sawmill_Illumnatnttower", "30 0 30", "x 0 0") -> x = Heading in ° (printed in debug mode!)
		BuildingSpawns.Insert( new Param3<string,vector,vector>("Land_Mil_Fortified_Nest_Watchtower", "30 0 30", "135 0 0"));
		BuildingSpawns.Insert( new Param3<string,vector,vector>("Land_Mil_Fortified_Nest_Watchtower", "-30 0 30", "225 0 0"));
		
		//Spawn HQ additional buildings
		for ( int i=0; i < BuildingSpawns.Count(); i++ )
		{
			Param3<string,vector,vector> BuildingDef = BuildingSpawns.Get(i);
			string BuildingType = BuildingDef.param1;
			vector BuildingPos = MainBuildingHQ.ModelToWorld( BuildingDef.param2 );
			vector BuildingOri = BuildingDef.param3;
			vector BuildingDir = MainBuildingHQ.GetDirection();
			
			Object HQextra = GetGame().CreateObject( BuildingType, BuildingPos );
			HQextra.SetPosition( BuildingPos );
			HQextra.SetDirection( BuildingDir );
			HQextra.SetOrientation( HQextra.GetOrientation() + BuildingOri );
			HQextra.PlaceOnSurface();
			Print("[SEM] HQ :: Additional building "+ HQextra.GetType() +" spawned @"+ HQextra.GetPosition() );
		}		
	}
	
	static void ShowDebugInfo( PlayerBase player)
	{
		//Display as server message to player: if found, Modelvector & buildingtype else actual position of player
		Param1<string> Msg1;
		ref array<Object> OBJLST1 = new array<Object>;
		ref array<CargoBase> PROXYLST1 = new array<CargoBase>;
			
		GetGame().GetObjectsAtPosition( player.GetPosition() , 30.0 , OBJLST1 , PROXYLST1 );		
		for ( int j = 0 ; j < OBJLST1.Count(); j++ )
		{ 
			Object FoundObject = OBJLST1.Get(j);
			if (FoundObject.GetType() == "Land_Medical_Tent_Big") 
			{
				Msg1 = new Param1<string> ("Medical_Tent_Big, Pos.: " + FoundObject.GetPosition().ToString() + " Modelvector: " + (FoundObject.WorldToModel( player.GetPosition())).ToString());
				GetGame().RPCSingleParam( player, ERPCs.RPC_USER_ACTION_MESSAGE, Msg1, true, player.GetIdentity());
				break;
			}
			else if (FoundObject.GetType() == "Land_City_School")
			{
				Msg1 = new Param1<string> ("City_School, Pos.: " + FoundObject.GetPosition().ToString() + " Modelvector: " + (FoundObject.WorldToModel( player.GetPosition())).ToString());
				GetGame().RPCSingleParam( player, ERPCs.RPC_USER_ACTION_MESSAGE, Msg1, true, player.GetIdentity());
				break;
			}			
			else if (FoundObject.GetType() == "Land_Farm_CowshedA")
			{
				Msg1 = new Param1<string> ("CowshedA, Pos.: " + FoundObject.GetPosition().ToString() + " Modelvector: " + (FoundObject.WorldToModel( player.GetPosition())).ToString());
				GetGame().RPCSingleParam( player, ERPCs.RPC_USER_ACTION_MESSAGE, Msg1, true, player.GetIdentity());
				break;
			}			
			else if (FoundObject.GetType() == "Land_Tenement_Small")
			{
				Msg1 = new Param1<string> ("Tenement_Small, Pos.: " + FoundObject.GetPosition().ToString() + " Modelvector: " + (FoundObject.WorldToModel( player.GetPosition())).ToString());
				GetGame().RPCSingleParam( player, ERPCs.RPC_USER_ACTION_MESSAGE, Msg1, true, player.GetIdentity());
				break;
			}			
			else if (FoundObject.GetType() == "Land_Tenement_Big")
			{
				Msg1 = new Param1<string> ("Tenement_Big, Pos.: " + FoundObject.GetPosition().ToString() + " Modelvector: " + (FoundObject.WorldToModel( player.GetPosition())).ToString());
				GetGame().RPCSingleParam( player, ERPCs.RPC_USER_ACTION_MESSAGE, Msg1, true, player.GetIdentity());
				break;
			}
			else if (FoundObject.GetType() == "Land_Garage_Row_Small")
			{
				Msg1 = new Param1<string> ("Garage_Row_Small, Pos.: " + FoundObject.GetPosition().ToString() + " Modelvector: " + (FoundObject.WorldToModel( player.GetPosition())).ToString());
				GetGame().RPCSingleParam( player, ERPCs.RPC_USER_ACTION_MESSAGE, Msg1, true, player.GetIdentity());
				break;
			}
			else if (FoundObject.GetType() == "Land_Garage_Row_Big")
			{
				Msg1 = new Param1<string> ("Garage_Row_Big, Pos.: " + FoundObject.GetPosition().ToString() + " Modelvector: " + (FoundObject.WorldToModel( player.GetPosition())).ToString());
				GetGame().RPCSingleParam( player, ERPCs.RPC_USER_ACTION_MESSAGE, Msg1, true, player.GetIdentity());
				break;
			}
			else if (FoundObject.GetType().Contains("Land_"))
			{
				Msg1 = new Param1<string> ( FoundObject.GetType() +", Pos.: " + FoundObject.GetPosition().ToString() + " Modelvector: " + (FoundObject.WorldToModel( player.GetPosition())).ToString());
				GetGame().RPCSingleParam( player, ERPCs.RPC_USER_ACTION_MESSAGE, Msg1, true, player.GetIdentity());
				//break;
			}									
		}
		
		if ( j == OBJLST1.Count() )
		{
			Msg1 = new Param1<string> ("My position is: " + player.GetPosition().ToString() );
			GetGame().RPCSingleParam( player, ERPCs.RPC_USER_ACTION_MESSAGE, Msg1, true, player.GetIdentity());
			
			vector ori = player.GetOrientation();
			float heading = ori[0];
			if ( heading < 0 ) heading += 360;
			
			Msg1 = new Param1<string> ("Heading: "+ heading.ToString() +"°" );
			GetGame().RPCSingleParam( player, ERPCs.RPC_USER_ACTION_MESSAGE, Msg1, true, player.GetIdentity());			
			j = 0;
		}
		
		if ( MissionSettings.Opt_RPmode )
		{
			Msg1 = new Param1<string> ("Actual RP mission is " + m_actualRPMission +". "+ m_MissionDescription[0] +" mission "+ m_MissionDescription[2] +" of "+ m_MissionDescription[1] +", extended: "+ m_MissionDescription[3]);
			GetGame().RPCSingleParam( player, ERPCs.RPC_USER_ACTION_MESSAGE, Msg1, true, player.GetIdentity());
		}			
	}
	
	static void RCMapByBuilding( string MBuilding )
	{
		//Runs a raycast from the middle of the map and prints all buildings of desired type 
		ref array<Object> Objects = new array<Object>;
		ref array<CargoBase> ObjectCargos = new array<CargoBase>;
		float vertex;
		vector Center = "7168 0 7168";		//Rostow terrain center position
				
		if ( Center[0] < Center[2] ) vertex = Center[2];
		else vertex = Center[0];
		
		Print("[SEM] DEBUG MODE: Map wide raycast for:  "+ MBuilding );	
		
		float Rad = vertex * 1.414214;
				
		Print("[SEM] Map: "+ GetGame().GetWorldName() +" Center: "+ Center +", Radius: "+ Rad ); 
		 
		GetGame().GetObjectsAtPosition( Center, Rad, Objects, ObjectCargos );
		for ( int i=0; i < Objects.Count(); i++ )
		{
			Object FoundObject = Objects.Get(i);
			if ( FoundObject && FoundObject.GetType() == MBuilding )
			{
				Print("[SEM] Found building "+ MBuilding +" @ "+ FoundObject.GetPosition().ToString() );
			}
		}
		Print("[SEM] DEBUG MODE: Map wide raycast END");		
	}
}