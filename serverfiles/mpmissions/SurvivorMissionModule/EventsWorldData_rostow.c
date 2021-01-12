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
		// Add additional mission buildings for more variety
		EnrichRostow();

		//Mission event																		//Mission position (absolute or BuildingPos)
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
		
		MissionEvents.Insert("UrbanMall Berasino central Ostrovez");						MissionPositions.Insert("3199.601807 196.905273 9277.301758");
		MissionEvents.Insert("UrbanMall Berasino central Krasnapolle");						MissionPositions.Insert("3199.601807 196.905273 9277.301758");
		MissionEvents.Insert("UrbanMall Krasnapolle north Krasnapolle");					MissionPositions.Insert("8874.276367 59.521458 2382.820313");
		MissionEvents.Insert("UrbanMall Krasnapolle north Ostrovez");						MissionPositions.Insert("8874.276367 59.521458 2382.820313");
		MissionEvents.Insert("UrbanMall Ostrovez northwest Krasnapolle");					MissionPositions.Insert("9313.882813 53.496910 10685.218750");
		MissionEvents.Insert("UrbanMall Ostrovez northwest Ostrovez");						MissionPositions.Insert("9313.882813 53.496910 10685.218750");
		MissionEvents.Insert("UrbanMall Ostrovez central Ostrovez");						MissionPositions.Insert("9591.127930 51.540833 10349.829102");
		MissionEvents.Insert("UrbanMall Borowoje north Ostrovez");							MissionPositions.Insert("11605.883789 51.663086 12694.669922");
		MissionEvents.Insert("UrbanMall Alekssevka northwest Ostrovez");					MissionPositions.Insert("13847.838867 39.802288 11220.696289");
		MissionEvents.Insert("UrbanMall Alekssevka northwest Krasnapolle");					MissionPositions.Insert("13847.838867 39.802288 11220.696289");
		
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
		
		MissionEvents.Insert("Transport Jelsk northwest Berasino");							MissionPositions.Insert("737.647095 198.257263 8361.815430");
		MissionEvents.Insert("Transport Jelsk southwest Berasino");							MissionPositions.Insert("809.262268 197.512863 8148.995117");
		MissionEvents.Insert("Transport Klettzk central Berasino");							MissionPositions.Insert("1004.159729 317.080627 3945.279785");
		MissionEvents.Insert("Transport Klettzk central Krasnapolle");						MissionPositions.Insert("1004.159729 317.080627 3945.279785");
		MissionEvents.Insert("Transport Klettzk north Berasino");							MissionPositions.Insert("963.203064 317.669647 4070.997559");
		MissionEvents.Insert("Transport Slowin central Babrujsk");							MissionPositions.Insert("1156.093750 161.628006 12757.077148");
		MissionEvents.Insert("Transport Berasino_Industrial southwest Berasino");			MissionPositions.Insert("3033.985840 142.117126 8662.102539");
		MissionEvents.Insert("Transport Berasino_Industrial southwest Berasino");			MissionPositions.Insert("3049.808594 141.444916 8651.280273");
		MissionEvents.Insert("Transport Berasino_Industrial central Babrujsk");				MissionPositions.Insert("3205.351318 139.074692 8541.659180");
		MissionEvents.Insert("Transport Berasino southeast Berasino");						MissionPositions.Insert("3224.319092 189.608124 9173.429688");
		MissionEvents.Insert("Transport Berasino east Gorlowka");							MissionPositions.Insert("3244.557617 202.173721 9378.643555");
		MissionEvents.Insert("Transport Berasino southwest Berasino");						MissionPositions.Insert("3259.944824 202.158737 9378.998047");
		MissionEvents.Insert("Transport Berasino southwest Babrujsk");						MissionPositions.Insert("3291.428711 208.178772 9405.063477");
		MissionEvents.Insert("Transport Berasino southwest Berasino");						MissionPositions.Insert("3277.988525 208.179001 9412.557617");
		MissionEvents.Insert("Transport Bezodnya central Berasino");						MissionPositions.Insert("4303.564453 271.686401 918.808411");
		MissionEvents.Insert("Transport Bezodnya central Krasnapolle");						MissionPositions.Insert("4303.564453 271.686401 918.808411");
		MissionEvents.Insert("Transport Babrujsk west Berasino");							MissionPositions.Insert("4638.474609 136.951996 11360.925781");
		MissionEvents.Insert("Transport Babrujsk west Ostrovez");							MissionPositions.Insert("4628.291992 136.948547 11372.465820");
		MissionEvents.Insert("Transport Babrujsk central Ostrovez");						MissionPositions.Insert("4713.949219 144.445618 11416.562500");
		MissionEvents.Insert("Transport Dribin central Berasino");							MissionPositions.Insert("4855.247559 115.206055 9268.498047");
		MissionEvents.Insert("Transport Dribin central Babrujsk");							MissionPositions.Insert("4855.247559 115.206055 9268.498047");
		MissionEvents.Insert("Transport Hrodva southwest Babrujsk");						MissionPositions.Insert("4788.631348 135.615540 7344.430664");
		MissionEvents.Insert("Transport Hrodva south Berasino");							MissionPositions.Insert("4892.283691 131.341736 7275.689941");
		MissionEvents.Insert("Transport Hrodva south Gorlowka");							MissionPositions.Insert("4872.890625 134.647888 7334.753906");
		MissionEvents.Insert("Transport Hrodva south Berasino");							MissionPositions.Insert("4895.797852 131.329971 7290.707031");
		MissionEvents.Insert("Transport Domnowo_Mili southwest Ostrovez");					MissionPositions.Insert("8380.663086 114.955498 13378.045898");
		MissionEvents.Insert("Transport Domnowo_Mili southwest Borowoje");					MissionPositions.Insert("8380.663086 114.955498 13378.045898");
		MissionEvents.Insert("Transport Domnowo_Mili southwest Adamowsk");					MissionPositions.Insert("8380.663086 114.955498 13378.045898");
		MissionEvents.Insert("Transport Krasnapolle southwest Adamowsk");					MissionPositions.Insert("8557.980469 48.460690 2092.943848");
		MissionEvents.Insert("Transport Krasnapolle southwest Gorlowka");					MissionPositions.Insert("8571.498047 48.460037 2086.141602");
		MissionEvents.Insert("Transport Krasnapolle southwest Krasnapolle");				MissionPositions.Insert("8619.709961 54.195564 2241.321045");
		MissionEvents.Insert("Transport Krasnapolle northwest Adamowsk");					MissionPositions.Insert("8580.845703 58.871891 2434.968018");
		MissionEvents.Insert("Transport Krasnapolle southwest Gorlowka");					MissionPositions.Insert("8632.319336 46.027390 1899.088501");
		MissionEvents.Insert("Transport Krasnapolle southwest Krasnapolle");				MissionPositions.Insert("8653.487305 49.626312 2069.487793");
		MissionEvents.Insert("Transport Krasnapolle southwest Adamowsk");					MissionPositions.Insert("8636.959961 49.438042 2068.418213");
		MissionEvents.Insert("Transport Krasnapolle northwest Gorlowka");					MissionPositions.Insert("8679.384766 57.895664 2401.938232");
		MissionEvents.Insert("Transport Krasnapolle northwest Krasnapolle");				MissionPositions.Insert("8666.857422 57.895733 2393.490479");
		MissionEvents.Insert("Transport Krasnapolle northwest Adamowsk");					MissionPositions.Insert("8707.309570 59.314426 2511.081543");
		MissionEvents.Insert("Transport Krasnapolle northwest Gorlowka");					MissionPositions.Insert("8701.791992 66.848145 2602.549805");
		MissionEvents.Insert("Transport Krasnapolle northwest Krasnapolle");				MissionPositions.Insert("8698.873047 66.857353 2617.655029");
		MissionEvents.Insert("Transport Krasnapolle northwest Krasnapolle");				MissionPositions.Insert("8727.371094 66.573135 2628.028076");
		MissionEvents.Insert("Transport Krasnapolle northwest Krasnapolle");				MissionPositions.Insert("8742.726563 66.575783 2629.437500");
		MissionEvents.Insert("Transport Krasnapolle south Berasino");						MissionPositions.Insert("8824.944336 53.262642 2027.441162");
		MissionEvents.Insert("Transport Krasnapolle south Babrujsk");						MissionPositions.Insert("8812.604492 53.131756 2036.514038");
		MissionEvents.Insert("Transport Krasnapolle south Adamowsk");						MissionPositions.Insert("8829.694336 58.557884 2320.523926");
		MissionEvents.Insert("Transport Krasnapolle south Gorlowka");						MissionPositions.Insert("8848.288086 58.678841 2202.044922");
		MissionEvents.Insert("Transport Krasnapolle south Krasnapolle");					MissionPositions.Insert("8926.377930 59.411903 2176.346436");
		MissionEvents.Insert("Transport Krasnapolle south Krasnapolle");					MissionPositions.Insert("8913.500977 59.542088 2184.522461");
		MissionEvents.Insert("Transport Krasnapolle southeast Gorlowka");					MissionPositions.Insert("9011.569336 54.371433 2025.269043");
		MissionEvents.Insert("Transport Krasnapolle southeast Adamowsk");					MissionPositions.Insert("9071.944336 54.430790 1991.420532");
		MissionEvents.Insert("Transport Ostrovez northwest Borowoje");						MissionPositions.Insert("9189.351563 54.643475 10760.324219");
		MissionEvents.Insert("Transport Ostrovez northwest Babrujsk");						MissionPositions.Insert("9184.603516 54.599770 10774.980469");
		MissionEvents.Insert("Transport Ostrovez northwest Adamowsk");						MissionPositions.Insert("9238.161133 54.136177 10791.286133");
		MissionEvents.Insert("Transport Ostrovez northwest Ostrovez");						MissionPositions.Insert("9238.161133 54.136177 10791.286133");
		MissionEvents.Insert("Transport Ostrovez southwest Borowoje");						MissionPositions.Insert("9294.997070 65.829819 10229.257813");
		MissionEvents.Insert("Transport Ostrovez southwest Babrujsk");						MissionPositions.Insert("9279.855469 65.842926 10231.965820");
		MissionEvents.Insert("Transport Ostrovez northwest Adamowsk");						MissionPositions.Insert("9243.351563 54.158829 10760.979492");
		MissionEvents.Insert("Transport Ostrovez northwest Borowoje");						MissionPositions.Insert("9240.749023 54.149853 10776.166016");
		MissionEvents.Insert("Transport Ostrovez southwest Babrujsk");						MissionPositions.Insert("9333.161133 61.022881 10284.143555");
		MissionEvents.Insert("Transport Ostrovez southwest Adamowsk");						MissionPositions.Insert("9353.083984 60.673401 10283.142578");
		MissionEvents.Insert("Transport Ostrovez southwest Ostrovez");						MissionPositions.Insert("9353.083984 60.673401 10283.142578");
		MissionEvents.Insert("Transport Ostrovez southwest Borowoje");						MissionPositions.Insert("9391.873047 60.701515 10289.030273");
		MissionEvents.Insert("Transport Ostrovez southwest Babrujsk");						MissionPositions.Insert("9398.398438 60.710770 10275.096680");
		MissionEvents.Insert("Transport Ostrovez northwest Gorlowka");						MissionPositions.Insert("9389.903320 52.068260 10642.537109");
		MissionEvents.Insert("Transport Ostrovez southwest Borowoje");						MissionPositions.Insert("9441.342773 51.618340 10333.614258");
		MissionEvents.Insert("Transport Ostrovez central Babrujsk");						MissionPositions.Insert("9463.701172 51.768162 10510.806641");
		MissionEvents.Insert("Transport Ostrovez north Gorlowka");							MissionPositions.Insert("9428.163086 52.718250 10713.774414");
		MissionEvents.Insert("Transport Ostrovez_N_Industrial west Borowoje");				MissionPositions.Insert("9457.656250 57.105755 10921.958984");
		MissionEvents.Insert("Transport Ostrovez_N_Industrial west Ostrovez");				MissionPositions.Insert("9457.656250 57.105755 10921.958984");
		MissionEvents.Insert("Transport Ostrovez_N_Industrial west Adamowsk");				MissionPositions.Insert("9457.795898 57.086937 10937.312500");
		MissionEvents.Insert("Transport Ostrovez_N_Industrial west Ostrovez");				MissionPositions.Insert("9457.795898 57.086937 10937.312500");
		MissionEvents.Insert("Transport Ostrovez central Adamowsk");						MissionPositions.Insert("9490.401367 51.768253 10513.156250");
		MissionEvents.Insert("Transport Ostrovez central Borowoje");						MissionPositions.Insert("9471.968750 51.764053 10523.811523");
		MissionEvents.Insert("Transport Ostrovez central Gorlowka");						MissionPositions.Insert("9482.170898 51.768253 10500.190430");
		MissionEvents.Insert("Transport Ostrovez south Babrujsk");							MissionPositions.Insert("9542.970703 52.602726 10073.779297");
		MissionEvents.Insert("Transport Ostrovez south Ostrovez");							MissionPositions.Insert("9542.970703 52.602726 10073.779297");
		MissionEvents.Insert("Transport Ostrovez central Borowoje");						MissionPositions.Insert("9557.926758 50.579422 10334.526367");
		MissionEvents.Insert("Transport Ostrovez central Adamowsk");						MissionPositions.Insert("9557.141602 51.585381 10438.765625");
		MissionEvents.Insert("Transport Ostrovez central Babrujsk");						MissionPositions.Insert("9563.115234 51.431267 10420.320313");
		MissionEvents.Insert("Transport Ostrovez central Ostrovez");						MissionPositions.Insert("9639.620117 50.928001 10334.373047");
		MissionEvents.Insert("Transport Ostrovez central Borowoje");						MissionPositions.Insert("9639.620117 50.928001 10334.373047");
		MissionEvents.Insert("Transport Ostrovez central Gorlowka");						MissionPositions.Insert("9675.196289 53.424988 10510.807617");
		MissionEvents.Insert("Transport Rezoni_Mine northwest Gorlowka");					MissionPositions.Insert("9956.250977 240.504776 6136.967285");
		MissionEvents.Insert("Transport Rezoni_Mine northwest Adamowsk");					MissionPositions.Insert("9970.370117 240.503525 6130.766602");
		MissionEvents.Insert("Transport Rezoni_Sportsfacility central Krasnapolle");		MissionPositions.Insert("10656.811523 428.378204 6597.937500");
		MissionEvents.Insert("Transport Rezoni_Sportsfacility central Gorlowka");			MissionPositions.Insert("10668.542969 428.378204 6607.828125");
		MissionEvents.Insert("Transport Rezoni_Sportsfacility central Adamowsk");			MissionPositions.Insert("10692.968750 428.378204 6613.604004");
		MissionEvents.Insert("Transport Borowoje south Borowoje");							MissionPositions.Insert("11505.750977 49.592869 12520.265625");
		MissionEvents.Insert("Transport Borowoje south Adamowsk");							MissionPositions.Insert("11584.931641 48.745090 12531.368164");
		MissionEvents.Insert("Transport Borowoje south Ostrovez");							MissionPositions.Insert("11560.186523 48.971443 12514.807617");
		MissionEvents.Insert("Transport Borowoje south Gorlowka");							MissionPositions.Insert("11631.089844 47.881203 12502.540039");
		MissionEvents.Insert("Transport Borowoje south Borowoje");							MissionPositions.Insert("11689.963867 49.024158 12688.686523");
		MissionEvents.Insert("Transport Borowoje south Adamowsk");							MissionPositions.Insert("11681.653320 52.104259 12773.333984");
		MissionEvents.Insert("Transport Borowoje south Ostrovez");							MissionPositions.Insert("11696.658203 52.096592 12771.237305");
		MissionEvents.Insert("Transport Borowoje south Gorlowka");							MissionPositions.Insert("11710.333984 46.644691 12452.197266");
		MissionEvents.Insert("Transport Borowoje south Borowoje");							MissionPositions.Insert("11715.341797 46.664097 12466.770508");
		MissionEvents.Insert("Transport Adamowsk central Gorlowka");						MissionPositions.Insert("11637.757813 43.697712 8871.915039");
		MissionEvents.Insert("Transport Adamowsk central Borowoje");						MissionPositions.Insert("11650.775391 43.694263 8863.728516");
		MissionEvents.Insert("Transport Adamowsk central Adamowsk");						MissionPositions.Insert("11718.147461 41.392036 8844.468750");
		MissionEvents.Insert("Transport Adamowsk central Ostrovez");						MissionPositions.Insert("11721.927734 41.290226 8859.388672");
		MissionEvents.Insert("Transport Adamowsk east Borowoje");							MissionPositions.Insert("11820.442383 39.420681 8832.272461");
		MissionEvents.Insert("Transport Adamowsk east Adamowsk");							MissionPositions.Insert("11845.063477 39.262276 8880.812500");
		MissionEvents.Insert("Transport Adamowsk east Ostrovez");							MissionPositions.Insert("11826.631836 38.583652 8905.041992");
		MissionEvents.Insert("Transport Adamowsk east Gorlowka");							MissionPositions.Insert("11895.576172 40.786980 8671.613281");
		MissionEvents.Insert("Transport Borowoje_Industrial southeast Borowoje");			MissionPositions.Insert("12028.123047 45.581879 12516.767578");
		MissionEvents.Insert("Transport Borowoje_Industrial southeast Ostrovez");			MissionPositions.Insert("12028.123047 45.581879 12516.767578");
		MissionEvents.Insert("Transport Borowoje_Industrial southeast Adamowsk");			MissionPositions.Insert("12028.123047 45.581879 12516.767578");
		MissionEvents.Insert("Transport Alekssevka southwest Borowoje");					MissionPositions.Insert("13858.648438 38.006203 11083.889648");
		MissionEvents.Insert("Transport Alekssevka southwest Ostrovez");					MissionPositions.Insert("13858.648438 38.006203 11083.889648");
		MissionEvents.Insert("Transport Alekssevka central Borowoje");						MissionPositions.Insert("13923.742188 40.975494 11132.491211");
		MissionEvents.Insert("Transport Alekssevka central Adamowsk");						MissionPositions.Insert("13923.742188 40.975494 11132.491211");
		MissionEvents.Insert("Transport Alekssevka central Ostrovez");						MissionPositions.Insert("13940.794922 41.176952 11165.361328");
		MissionEvents.Insert("Transport Alekssevka central Adamowsk");						MissionPositions.Insert("13940.794922 41.176952 11165.361328");
		
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
			
		MissionEvents.Insert("Graveyard Krasnapolle east Stash_1");							MissionPositions.Insert("8936.6 59.2 2426.96");
		MissionEvents.Insert("Graveyard Krasnapolle north Stash_1");						MissionPositions.Insert("8909.16 58.0566 2437.97");
		MissionEvents.Insert("Graveyard Krasnapolle west Stash_1");							MissionPositions.Insert("8911.89 58.4351 2411.84");
		MissionEvents.Insert("Graveyard Jelsk east Stash_1");								MissionPositions.Insert("799.232 195.096 8345.38");
		MissionEvents.Insert("Graveyard Jelsk west Stash_1");								MissionPositions.Insert("786.73 195.506 8345.88");
		MissionEvents.Insert("Graveyard Klettzk west Stash_1");								MissionPositions.Insert("842.915 321.472 4108.37");
		MissionEvents.Insert("Graveyard Klettzk south Stash_1");							MissionPositions.Insert("857.701 320.729 4094.89");
		MissionEvents.Insert("Graveyard Slowin north Stash_1");								MissionPositions.Insert("1084.62 153.341 12739.1");
		MissionEvents.Insert("Graveyard Bezodnya south Stash_1");							MissionPositions.Insert("4183.98 274.141 844.353");
		MissionEvents.Insert("Graveyard Bezodnya east Stash_1");							MissionPositions.Insert("4196.99 274.118 859.688");
		// @TODO: add more
		
		MissionEvents.Insert("Horde Slowin east BarnHouse");								MissionPositions.Insert("1301.83 161.9 12706.1");
		MissionEvents.Insert("Horde Kolyzovka east SplitLevelRed");							MissionPositions.Insert("2816.15 218.9 13178.3");
		MissionEvents.Insert("Horde Bychau southwest SplitLevelRed");						MissionPositions.Insert("5689.73 124.1 12990.8");
		MissionEvents.Insert("Horde Domnowo south PeachHouse");								MissionPositions.Insert("8671.65 87.7 13099.9");
		MissionEvents.Insert("Horde Domnowo southeast RuinedLogcabin");						MissionPositions.Insert("9173.51 71.0 12470.5");
		MissionEvents.Insert("Horde Domnowo southeast Tavern");								MissionPositions.Insert("9262.78 78.1 12511.6");
		MissionEvents.Insert("Horde Domnowo_Industrial east LogCabin");						MissionPositions.Insert("10441.2 70.9 13258.2");
		MissionEvents.Insert("Horde Borowoje northwest TwoToneBrown");						MissionPositions.Insert("10626.4 72.6 12924.1");
		MissionEvents.Insert("Horde Borowoje northwest SkinnyGreen");						MissionPositions.Insert("11223.7 59.7 12914.0");
		MissionEvents.Insert("Horde Borowoje north PianoHouse");							MissionPositions.Insert("11677.8 55.6 12809.9");
		MissionEvents.Insert("Horde Borowoje_Industrial south GunHouse");					MissionPositions.Insert("11946.5 42.9 12433.5");
		MissionEvents.Insert("Horde Alekssevka north TwoStoryBeige");						MissionPositions.Insert("13816.6 42.5 11405.5");
		MissionEvents.Insert("Horde Alekssevka west LogCabin");								MissionPositions.Insert("13527.8 41.5 10991.0");
		MissionEvents.Insert("Horde Alekssevka south SkinnyGreen");							MissionPositions.Insert("13991.4 38.2 10971.7");
		MissionEvents.Insert("Horde Dobrowo north SplitLevelRed");							MissionPositions.Insert("12844.8 36.2 8545.9");
		MissionEvents.Insert("Horde Adamowsk north LogCabin");								MissionPositions.Insert("11723.7 41.7 9048.32");
		MissionEvents.Insert("Horde Adamowsk northwest BarnHouse");							MissionPositions.Insert("11150.9 44.9 9127.47");
		MissionEvents.Insert("Horde Olgowka southeast GunHouse");							MissionPositions.Insert("13505.4 58.1 7074.05");
		MissionEvents.Insert("Horde Ostrovez southeast SplitLevelRed");						MissionPositions.Insert("9988.81 55.0 9977.82");
		MissionEvents.Insert("Horde Rasponi central SplitLevelGreen");						MissionPositions.Insert("9465.95 118.2 8788.39");
		MissionEvents.Insert("Horde Orlesko north GreenRastaHouse");						MissionPositions.Insert("8069.33 399.5 7732.93");
		MissionEvents.Insert("Horde Rezoni central SplitLevelGreen");						MissionPositions.Insert("9965.98 190.1 6779.78");
		MissionEvents.Insert("Horde Orschka central Tavern");								MissionPositions.Insert("6827.19 158.7 10905.3");
		MissionEvents.Insert("Horde Old_Orschka south LogCabin");							MissionPositions.Insert("5880.78 144.8 10339.8");
		MissionEvents.Insert("Horde Babrujsk south LogCabin");								MissionPositions.Insert("4880.43 152.2 11218.8");
		MissionEvents.Insert("Horde Dribin north GreenRastaHouse");							MissionPositions.Insert("4926.26 105.7 9335.31");
		MissionEvents.Insert("Horde Hrodva north BarnHouse");								MissionPositions.Insert("4913.52 131.9 7543.87");
		MissionEvents.Insert("Horde Klettzk north TwoLevelGreen");							MissionPositions.Insert("960.59 318.2 4171.03");
		MissionEvents.Insert("Horde Dworkino central SplitLevelRed");						MissionPositions.Insert("3708.04 122.2 3114.78");
		MissionEvents.Insert("Horde Bezodnya northwest LogCabin");							MissionPositions.Insert("4237.06 282.5 1036.9");
		MissionEvents.Insert("Horde Prudnoje cental GunHouse");								MissionPositions.Insert("10206.4 46.0 1298.08");
		MissionEvents.Insert("Horde Gorlowka south LogCabin");								MissionPositions.Insert("9089.15 97.6 4722.97");
		MissionEvents.Insert("Horde Krupki south RastaHouse");								MissionPositions.Insert("5925.53 84.4 4996.6");
		MissionEvents.Insert("Horde Jelsk southeast SkinnyGreen");							MissionPositions.Insert("1009.49 193.0 8124.36");
		// @TODO: add more
		
		MissionEvents.Insert("PlaneCrash Rezoni_Airstrip south 275");						MissionPositions.Insert("4326.58 5487.88");
		MissionEvents.Insert("PlaneCrash Kovrin northeast 320");							MissionPositions.Insert("4261.05 4462.27");
		MissionEvents.Insert("PlaneCrash Dribin northeast 295");							MissionPositions.Insert("4516.15 9997.12");
		MissionEvents.Insert("PlaneCrash Adamowsk northwest 314");							MissionPositions.Insert("11277.6 9717.72");
		// @TODO: add more
		
		MissionEvents.Insert("Shrooms Dribin northeast Berasino");							MissionPositions.Insert("5252.57 116.6 9885.59");
		MissionEvents.Insert("Shrooms Hrodva northwest Berasino");							MissionPositions.Insert("4627.09 138.6 7680.06");
		MissionEvents.Insert("Shrooms Jelsk east Berasino");								MissionPositions.Insert("1393.81 209.9 8267.43");
		MissionEvents.Insert("Shrooms Prudnoje northwest Krasnapolle");						MissionPositions.Insert("9900.48 68.0 1585.31");
		MissionEvents.Insert("Shrooms Gorlowka northeast Krasnapolle");						MissionPositions.Insert("9617.2 113.2 5076.64");
		MissionEvents.Insert("Shrooms Krupki southeast Krasnapolle");						MissionPositions.Insert("6059.4 83.4 4878.63");
		MissionEvents.Insert("Shrooms Rasponi southwest Ostrovez");							MissionPositions.Insert("9159.37 154.5 8454.68");
		MissionEvents.Insert("Shrooms Orschka southeast Ostrovez");							MissionPositions.Insert("7095.08 142.1 10759.8");
		MissionEvents.Insert("Shrooms Donmnowo south Ostrovez");							MissionPositions.Insert("8285.36 73.1 12624.2");
		MissionEvents.Insert("Shrooms Borowoje north Borowoje");							MissionPositions.Insert("11391.0 93.9 13352.0");
		MissionEvents.Insert("Shrooms Borowoje southwest Borowoje");						MissionPositions.Insert("11052.2 103.1 12388.5");
		MissionEvents.Insert("Shrooms Alekssevka north Borowoje");							MissionPositions.Insert("13966.1 72.9 11797.2");
		MissionEvents.Insert("Shrooms Dobrowo south Adamowsk");								MissionPositions.Insert("12523.4 76.3 7548.72");
		MissionEvents.Insert("Shrooms Dobrowo northeast Adamowsk");							MissionPositions.Insert("13818.7 44.1 8898.24");
		MissionEvents.Insert("Shrooms Adamowsk south Adamowsk");							MissionPositions.Insert("11342.8 74.6 8493.83");
		// @TODO: add more
					
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
			if ( FoundObject.GetType().Contains(building) )
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
		
		if ( ExcludedTypes.Find(type) )	return true;
		
		//Add new mission type and building type for secondary mission here!
		if ( type == "BearHunt")					building = "Land_City_School";
		else if ( type == "CityMall")				building = "Land_Village_PoliceStation";
		else if ( type == "FreePigs")				building = "Land_Misc_TrailRoof_";
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
					if ( FoundObject.GetType().Contains(building) )
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

	void EnrichRostow()
	{
		//Spawn Static Objects on map (should be mission unspecific like additional mission target/source buildings, e.g. Rostow only has one single TrailRoof_Small)
		SpawnStatic( "Land_Misc_TrailRoof_Small", "2134.150635 193.663467 9220.719727", "-24.021982 0.648208 -0.165081" ));
		SpawnStatic( "Land_Misc_TrailRoof_Small", "6000.346680 177.984222 10878.038086", "90.000000 0.362451 8.000011" ));
		SpawnStatic( "Land_Misc_TrailRoof_Big", "1976.989990 201.8819 6967.889648", "-86.999989 0.000000 1.472942" ));

		SpawnStatic( "Land_Misc_TrailRoof_Big", "2591.935303 234.021301 3310.041504", "-90.105385 0.029364 0.197385" ));
		SpawnStatic( "land_cype_bench_1_br1", "2602.473145 231.556000 3309.507080", "-150.122971 -1.132533 -6.802283" ));
		SpawnStatic( "land_cype_bench_1", "2598.239014 232.031799 3311.460693", "-160.140549 -2.294166 -7.801920" ));

		SpawnStatic( "Land_Misc_TrailRoof_Small", "10248.166992 38.021774 11355.142578", "-33.000004 -0.327408 0.000000" ));

		SpawnStatic( "Land_Misc_TrailRoof_Big", "3721.185059 140.939880 8630.902344", "-61.799446 0.514386 -2.684390" ));
	}
	
	void SpawnStatic( string type, vector position, vector orientation ) {
		auto obj = GetGame().CreateObject( type, position, ECE_CREATEPHYSICS );
		obj.SetFlags( EntityFlags.STATIC, false );
		obj.SetPosition( position );
		obj.SetOrientation( orientation );
		obj.SetOrientation( obj.GetOrientation() ); //Collision fix
		obj.Update();
		obj.SetAffectPathgraph( true, false );
		if( obj.CanAffectPathgraph() ) GetGame().GetCallQueue( CALL_CATEGORY_SYSTEM ).CallLater( GetGame().UpdatePathgraphRegionByObject, 100, false, obj );
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