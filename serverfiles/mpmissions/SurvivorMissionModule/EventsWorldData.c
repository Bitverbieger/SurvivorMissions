class EventsWorldData extends SurvivorMissions
{
	const string EWD_MAP_NAME = "chernarusplus";
	const string EWD_SCRIPT_VERSION = "0.6";
	static ref array<string> MissionEvents = new array<string>;
	static ref array<vector> MissionPositions = new array<vector>;
	static ref array<Object> ObjectList = new array<Object>; 
	static ref array<CargoBase> ObjectCargoList = new array<CargoBase>;
	
	void EventsWorldData()
	{
		//Mission event																		//Mission position (absolute or BuildingPos)
		//0
		MissionEvents.Insert("Apartment Berezino north TenSmall_1");						MissionPositions.Insert("12166.4 20.8 9692.8");
		MissionEvents.Insert("Apartment Berezino north TenSmall_2");						MissionPositions.Insert("12144.5 20.8 9698.3");
		MissionEvents.Insert("Apartment Berezino north TenSmall_3");						MissionPositions.Insert("12122.6 20.8 9703.7");
		MissionEvents.Insert("Apartment Berezino north TenSmall_4");						MissionPositions.Insert("12069.2 23.1 9756.7");
		MissionEvents.Insert("Apartment Berezino north TenSmall_5");						MissionPositions.Insert("12060.6 23.1 9799.3");
		MissionEvents.Insert("Apartment Berezino north TenSmall_6");						MissionPositions.Insert("12120.9 25.8 9828.7");
		MissionEvents.Insert("Apartment Berezino north TenSmall_7");						MissionPositions.Insert("12142.6 25.9 9822.2");
		MissionEvents.Insert("Apartment Berezino north TenSmall_8");						MissionPositions.Insert("12234.9 20.2 9816.9");
		MissionEvents.Insert("Apartment Berezino north TenSmall_9");						MissionPositions.Insert("12256.9 20.2 9811.8");
		MissionEvents.Insert("Apartment Chernogorsk central TenSmall_1"); 					MissionPositions.Insert("6436.6 18.5 2765.3");
		MissionEvents.Insert("Apartment Chernogorsk central TenSmall_2"); 					MissionPositions.Insert("6450.7 18.5 2782.9");
		MissionEvents.Insert("Apartment Chernogorsk central TenSmall_3"); 					MissionPositions.Insert("6479.3 18.7 2815.1");
		MissionEvents.Insert("Apartment Chernogorsk central TenSmall_4"); 					MissionPositions.Insert("6493.5 18.7 2832.7");
		MissionEvents.Insert("Apartment Chernogorsk central TenSmall_5"); 					MissionPositions.Insert("6395.7 23.3 2810.0");
		MissionEvents.Insert("Apartment Chernogorsk central TenSmall_6"); 					MissionPositions.Insert("6410.1 23.3 2827.4");
		MissionEvents.Insert("Apartment Chernogorsk central TenSmall_7"); 					MissionPositions.Insert("6424.4 23.3 2844.8");
		MissionEvents.Insert("Apartment Dubky central TenSmall_1"); 						MissionPositions.Insert("6534.2 73.9 3666.5");
		MissionEvents.Insert("Apartment Dubky central TenSmall_2"); 						MissionPositions.Insert("6545.8 73.9 3688.5");
		MissionEvents.Insert("Apartment Dubky central TenSmall_3"); 						MissionPositions.Insert("6604.6 73.7 3682.1");
		MissionEvents.Insert("Apartment Dubky central TenSmall_4"); 						MissionPositions.Insert("6699.2 71.5 3674.6");
		MissionEvents.Insert("Apartment Dubky central TenSmall_5"); 						MissionPositions.Insert("6718.3 71.5 3686.7");
		MissionEvents.Insert("Apartment Dubky central TenSmall_6"); 						MissionPositions.Insert("6737.4 71.5 3698.7");
		MissionEvents.Insert("Apartment Dubky central TenSmall_7"); 						MissionPositions.Insert("6756.5 71.5 3710.8");
		MissionEvents.Insert("Apartment Dubky central TenSmall_8"); 						MissionPositions.Insert("6775.6 71.5 3722.9");
		MissionEvents.Insert("Apartment Dubky central TenSmall_9"); 						MissionPositions.Insert("6794.6 71.5 3735.0");
		MissionEvents.Insert("Apartment Dubky central TenSmall_10"); 						MissionPositions.Insert("6813.7 71.5 3747.0");
		MissionEvents.Insert("Apartment Dubky central TenSmall_11"); 						MissionPositions.Insert("6728.6 68.8 3621.6");
		MissionEvents.Insert("Apartment Dubky central TenSmall_12"); 						MissionPositions.Insert("6747.5 68.8 3633.9");
		MissionEvents.Insert("Apartment Dubky central TenSmall_13"); 						MissionPositions.Insert("6766.4 68.8 3646.2");
		MissionEvents.Insert("Apartment Dubky central TenSmall_14"); 						MissionPositions.Insert("6785.3 68.8 3658.5");
		MissionEvents.Insert("Apartment Dubky central TenSmall_15"); 						MissionPositions.Insert("6804.3 68.8 3670.8");
		MissionEvents.Insert("Apartment Dubky central TenSmall_16"); 						MissionPositions.Insert("6853.2 71.5 3723.6");
		MissionEvents.Insert("Apartment Dubky central TenSmall_17"); 						MissionPositions.Insert("6872.3 71.5 3735.7");
		MissionEvents.Insert("Apartment Dubky central TenSmall_18"); 						MissionPositions.Insert("6897.4 68.5 3693.4");
		MissionEvents.Insert("Apartment Dubky central TenSmall_19"); 						MissionPositions.Insert("6922.6 66.3 3669.4");		
		MissionEvents.Insert("Apartment Elektrozavodsk west TenSmall_1"); 					MissionPositions.Insert("9994.5 17.3 2106.6");
		MissionEvents.Insert("Apartment Elektrozavodsk west TenSmall_2"); 					MissionPositions.Insert("10047.9 18.4 2124.8");		
		MissionEvents.Insert("Apartment Elektrozavodsk north TenSmall_3"); 					MissionPositions.Insert("10250.6 29.9 2518.2");
		MissionEvents.Insert("Apartment Elektrozavodsk north TenSmall_4"); 					MissionPositions.Insert("10288.0 29.2 2523.2");
		MissionEvents.Insert("Apartment Elektrozavodsk north TenSmall_5"); 					MissionPositions.Insert("10304.6 25.0 2508.0");
		MissionEvents.Insert("Apartment Novodmitrovsk central TenSmall_1");					MissionPositions.Insert("11323.3 91.2 14608.2");
		MissionEvents.Insert("Apartment Novodmitrovsk central TenSmall_2");					MissionPositions.Insert("11345.9 91.2 14606.6");
		MissionEvents.Insert("Apartment Novodmitrovsk central TenSmall_3");					MissionPositions.Insert("11302.8 98.1 14646.0");
		MissionEvents.Insert("Apartment Novodmitrovsk central TenSmall_4");					MissionPositions.Insert("11325.3 98.1 14645.6");
		MissionEvents.Insert("Apartment Novodmitrovsk central TenSmall_5");					MissionPositions.Insert("11347.9 98.1 14645.4");
		MissionEvents.Insert("Apartment Novodmitrovsk central TenSmall_6");					MissionPositions.Insert("11344.6 103.2 14704.5");
		MissionEvents.Insert("Apartment Novodmitrovsk central TenSmall_7");					MissionPositions.Insert("11410.8 96.9 14643.2");		
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_8");					MissionPositions.Insert("10648.0 77.5 14499.3");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_9");					MissionPositions.Insert("10669.7 77.5 14505.5");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_10");					MissionPositions.Insert("10725.9 78.6 14519.5");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_11");					MissionPositions.Insert("10747.8 78.5 14525.0");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_12");					MissionPositions.Insert("10678.9 76.7 14471.0");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_13");					MissionPositions.Insert("10700.9 76.7 14476.0");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_14");					MissionPositions.Insert("10775.6 61.9 14341.1");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_15");					MissionPositions.Insert("10797.0 61.9 14348.3");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_16");					MissionPositions.Insert("10835.0 60.7 14356.6");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_17");					MissionPositions.Insert("10857.6 60.7 14357.0");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_18");					MissionPositions.Insert("10983.2 65.4 14447.5");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_19");					MissionPositions.Insert("11005.8 65.4 14448.4");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_20");					MissionPositions.Insert("10990.1 65.4 14411.2");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_21");					MissionPositions.Insert("11012.6 65.3 14411.9");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_22");					MissionPositions.Insert("11042.7 65.3 14414.5");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_23");					MissionPositions.Insert("11065.3 65.3 14414.9");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_24");					MissionPositions.Insert("11087.9 65.3 14415.3");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_25");					MissionPositions.Insert("10942.3 57.3 14358.4");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_26");					MissionPositions.Insert("10964.8 57.3 14358.2");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_27");					MissionPositions.Insert("11003.7 56.1 14363.6");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_28");					MissionPositions.Insert("11026.2 56.1 14363.4");
		MissionEvents.Insert("Apartment Novodmitrovsk west TenSmall_29");					MissionPositions.Insert("11048.8 56.1 14363.3");	
		MissionEvents.Insert("Apartment Novoselky central TenSmall_1");						MissionPositions.Insert("6165.0 59.0 3172.7");
		MissionEvents.Insert("Apartment Novoselky central TenSmall_2");						MissionPositions.Insert("6195.9 53.1 3155.1");
		MissionEvents.Insert("Apartment Novoselky central TenSmall_3");						MissionPositions.Insert("6187.3 58.6 3271.6");
		MissionEvents.Insert("Apartment Novoselky central TenSmall_4");						MissionPositions.Insert("6187.2 58.7 3294.2");
		MissionEvents.Insert("Apartment Novoselky central TenSmall_5");						MissionPositions.Insert("6187.0 58.6 3316.8");
		MissionEvents.Insert("Apartment Novoselky central TenSmall_6");						MissionPositions.Insert("6219.0 49.9 3208.9");
		MissionEvents.Insert("Apartment Novoselky central TenSmall_7");						MissionPositions.Insert("6219.3 49.9 3231.5");
		MissionEvents.Insert("Apartment Novoselky central TenSmall_8");						MissionPositions.Insert("6219.6 49.9 3254.1");
		MissionEvents.Insert("Apartment Novoselky central TenSmall_9");						MissionPositions.Insert("6249.7 50.1 3141.8");
		MissionEvents.Insert("Apartment Novoselky central TenSmall_10");					MissionPositions.Insert("6249.9 50.1 3164.4");
		MissionEvents.Insert("Apartment Novoselky central TenSmall_11");					MissionPositions.Insert("6250.2 50.1 3186.9");	
		MissionEvents.Insert("Apartment Severograd east TenSmall_1");						MissionPositions.Insert("8425.3 128.0 12888.3");
		MissionEvents.Insert("Apartment Severograd east TenSmall_2");						MissionPositions.Insert("8455.6 128.1 12906.4");
		MissionEvents.Insert("Apartment NovayaPetrovka south TenSmall_1");					MissionPositions.Insert("3394.2 211.4 12735.7");
		MissionEvents.Insert("Apartment NovayaPetrovka south TenSmall_2");					MissionPositions.Insert("3416.7 211.4 12733.2");
		MissionEvents.Insert("Apartment NovayaPetrovka south TenSmall_3");					MissionPositions.Insert("3455.1 213.5 12685.2");
		MissionEvents.Insert("Apartment NovayaPetrovka south TenSmall_4");					MissionPositions.Insert("3481.1 213.1 12696.6");
		MissionEvents.Insert("Apartment NovayaPetrovka south TenSmall_5");					MissionPositions.Insert("3394.6 212.8 12696.1");			
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_1");						MissionPositions.Insert("5413.5 71.1 2752.3");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_2");						MissionPositions.Insert("5432.6 71.1 2740.3");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_3");						MissionPositions.Insert("5461.9 74.2 2721.3");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_4");						MissionPositions.Insert("5479.6 74.2 2707.3");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_5");						MissionPositions.Insert("5512.8 76.6 2681.7");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_6");						MissionPositions.Insert("5530.1 76.6 2667.1");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_7");						MissionPositions.Insert("5567.7 77.5 2653.1");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_8");						MissionPositions.Insert("5590.3 77.5 2652.2");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_9");						MissionPositions.Insert("5597.5 76.9 2615.0");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_10");						MissionPositions.Insert("5620.1 76.9 2615.0");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_11");						MissionPositions.Insert("5624.6 67.6 2350.4");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_12");						MissionPositions.Insert("5642.3 67.6 2364.4");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_13");						MissionPositions.Insert("5656.5 65.8 2328.0");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_14");						MissionPositions.Insert("5684.0 66.0 2347.0");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_15");						MissionPositions.Insert("5702.3 66.0 2360.2");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_16");						MissionPositions.Insert("5693.2 63.2 2300.6");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_17");						MissionPositions.Insert("5711.2 63.2 2314.3");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_18");						MissionPositions.Insert("5758.8 61.3 2306.7");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_19");						MissionPositions.Insert("5745.1 72.9 2500.5");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_20");						MissionPositions.Insert("5767.6 72.9 2500.5");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_21");						MissionPositions.Insert("5771.1 76.3 2549.8");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_22");						MissionPositions.Insert("5793.6 76.3 2549.6");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_23");						MissionPositions.Insert("5766.3 85.9 2592.6");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_24");						MissionPositions.Insert("5788.8 85.9 2592.6");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_25");						MissionPositions.Insert("5853.8 73.2 2474.6");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_26");						MissionPositions.Insert("5874.1 73.2 2484.4");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_27");						MissionPositions.Insert("5894.4 73.2 2494.3");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_28");						MissionPositions.Insert("5914.7 73.2 2504.1");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_29");						MissionPositions.Insert("5864.3 77.6 2544.4");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_30");						MissionPositions.Insert("5883.1 77.6 2557.0");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_31");						MissionPositions.Insert("5846.4 86.4 2628.4");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_32");						MissionPositions.Insert("5863.3 86.4 2643.2");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_33");						MissionPositions.Insert("5880.2 86.4 2658.1");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_34");						MissionPositions.Insert("5941.2 72.9 2541.0");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_35");						MissionPositions.Insert("5959.2 72.9 2554.6");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_36");						MissionPositions.Insert("5959.0 73.5 2595.8");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_37");						MissionPositions.Insert("5974.3 73.5 2612.4");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_38");						MissionPositions.Insert("5954.6 77.8 2639.4");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_39");						MissionPositions.Insert("5969.7 77.7 2656.1");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_40");						MissionPositions.Insert("5937.8 82.3 2676.4");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_41");						MissionPositions.Insert("5947.9 82.3 2696.5");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_42");						MissionPositions.Insert("5912.8 87.4 2704.0");
		MissionEvents.Insert("Apartment Vysotovo central TenSmall_43");						MissionPositions.Insert("5923.0 87.4 2724.1");		
		//130
		MissionEvents.Insert("BearHunt BlackLake west Berezino");							MissionPositions.Insert("13192.0 93.0 11995.0");
		MissionEvents.Insert("BearHunt BlackLake north Berezino");							MissionPositions.Insert("13364.5 80.6 12195.2");
		MissionEvents.Insert("BearHunt BlackLake east Berezino");							MissionPositions.Insert("13522.0 53.0 12009.6");
		MissionEvents.Insert("BearHunt Bor northwest Vysotovo");							MissionPositions.Insert("3597.8 215.7 4011.3");
		MissionEvents.Insert("BearHunt CernayaPolana southwest Severograd");				MissionPositions.Insert("11930.5 120.5 13579.3");
		MissionEvents.Insert("BearHunt DevilsCastle northwest Severograd");					MissionPositions.Insert("6748.2 366.3 11613.8");
		MissionEvents.Insert("BearHunt DevilsCastle north Severograd");						MissionPositions.Insert("7013.2 356.9 11878.4");
		MissionEvents.Insert("BearHunt Drozhino north Vysotovo");							MissionPositions.Insert("3464.8 285.2 5191.7");
		MissionEvents.Insert("BearHunt Gorka southwest Berezino");							MissionPositions.Insert("9325.6 329.6 8714.8");
		MissionEvents.Insert("BearHunt Gorka north Berezino");								MissionPositions.Insert("9495.3 328.2 9155.9");
		MissionEvents.Insert("BearHunt Gvozdno southwest Severograd");						MissionPositions.Insert("11868.2 151.6 14766.1");
		MissionEvents.Insert("BearHunt Kamensk southwest Severograd");						MissionPositions.Insert("6466.6 358.9 14354.0");
		MissionEvents.Insert("BearHunt Kamensk south Severograd");							MissionPositions.Insert("6676.1 377.3 14118.0");
		MissionEvents.Insert("BearHunt Kamensk northeast Severograd");						MissionPositions.Insert("6885.2 374.4 14642.3");
		MissionEvents.Insert("BearHunt Kamyshovo northeast Elektrozavodsk");				MissionPositions.Insert("12185.5 57.2 3666.7");
		MissionEvents.Insert("BearHunt Kamyshovo northwest Elektrozavodsk");				MissionPositions.Insert("11903.0 46.5 3674.5");
		MissionEvents.Insert("BearHunt Khelm northwest Berezino");							MissionPositions.Insert("12143.5 135.4 11033.6");
		MissionEvents.Insert("BearHunt Khelm north Berezino");								MissionPositions.Insert("12299.9 131.3 11127.4");
		MissionEvents.Insert("BearHunt Komarovo northwest Vysotovo");						MissionPositions.Insert("3551.8 21.1 2635.2");
		MissionEvents.Insert("BearHunt Kozlovka west Vysotovo");							MissionPositions.Insert("4216.6 211.3 4589.8");
		MissionEvents.Insert("BearHunt Kozlovka north Vysotovo");							MissionPositions.Insert("4579.6 314.8 4944.4");
		MissionEvents.Insert("BearHunt Krasnostav north Severograd");						MissionPositions.Insert("11144.1 235.4 12652.2");
		MissionEvents.Insert("BearHunt Lopatino southeast NovayaPetrovka");					MissionPositions.Insert("2823.1 263.3 9504.7");
		MissionEvents.Insert("BearHunt Msta northwest Elektrozavodsk");						MissionPositions.Insert("11124.7 304.4 5569.4");
		MissionEvents.Insert("BearHunt Nadezhdino west Vysotovo");							MissionPositions.Insert("5668.8 143.4 4710.3");
		MissionEvents.Insert("BearHunt Nadezhdino east Vysotovo");							MissionPositions.Insert("6063.4 197.4 4673.8");
		MissionEvents.Insert("BearHunt Nagornoe northwest Severograd");						MissionPositions.Insert("9090.2 272.6 14703.6");
		MissionEvents.Insert("BearHunt Nizhnoye south Berezino");							MissionPositions.Insert("12881.9 48.9 7886.0");
		MissionEvents.Insert("BearHunt Novodmitrovsk northwest Severograd");				MissionPositions.Insert("11294.0 116.7 14857.9");
		MissionEvents.Insert("BearHunt Novodmitrovsk east Severograd");						MissionPositions.Insert("11868.2 151.6 14766.1");
		MissionEvents.Insert("BearHunt Olha southwest Berezino");							MissionPositions.Insert("13213.8 132.4 12815.9");
		MissionEvents.Insert("BearHunt Olha east Berezino");								MissionPositions.Insert("13492.5 74.1 12895.0");
		MissionEvents.Insert("BearHunt Orlovets northwest Berezino");						MissionPositions.Insert("11929.3 239.9 7449.7");
		MissionEvents.Insert("BearHunt Polesovo north NovayaPetrovka");						MissionPositions.Insert("5986.5 246.5 13672.2");
		MissionEvents.Insert("BearHunt Pulkovo south Vysotovo");							MissionPositions.Insert("4807.1 363.0 5160.5");
		MissionEvents.Insert("BearHunt Pusta southeast Elektrozavodsk");					MissionPositions.Insert("9299.0 202.4 3810.1");
		MissionEvents.Insert("BearHunt Ratnoe southeast Severograd");						MissionPositions.Insert("6332.9 184.9 12392.5");
		MissionEvents.Insert("BearHunt Sinystok northwest NovayaPetrovka");					MissionPositions.Insert("1222.3 331.2 12174.0");
		MissionEvents.Insert("BearHunt Sinystok southwest NovayaPetrovka");					MissionPositions.Insert("1152.7 314.5 11897.3");
		MissionEvents.Insert("BearHunt Staroye west Elektrozavodsk");						MissionPositions.Insert("9807.3 275.8 5350.9");
		MissionEvents.Insert("BearHunt Staroye southeast Elektrozavodsk");					MissionPositions.Insert("10295.3 212.4 5342.8");
		MissionEvents.Insert("BearHunt Topolniki west NovayaPetrovka");						MissionPositions.Insert("2524.0 226.4 12442.5");
		MissionEvents.Insert("BearHunt Tulga north Elektrozavodsk");						MissionPositions.Insert("12864.8 181.9 4553.2");
		MissionEvents.Insert("BearHunt Vavilovo west NovayaPetrovka");						MissionPositions.Insert("1855.2 248.9 11085.5");
		MissionEvents.Insert("BearHunt Vavilovo northeast NovayaPetrovka");					MissionPositions.Insert("2531.8 294.4 11159.5");
		MissionEvents.Insert("BearHunt Vavilovo southeast NovayaPetrovka");					MissionPositions.Insert("2480.0 289.3 10793.3");
		MissionEvents.Insert("BearHunt Vybor northwest NovayaPetrovka");					MissionPositions.Insert("3538.0 339.5 9390.8");
		MissionEvents.Insert("BearHunt Vyshnoye northeast Vysotovo");						MissionPositions.Insert("6692.8 350.5 6236.9");
		MissionEvents.Insert("BearHunt Vyshnoye west Vysotovo");							MissionPositions.Insert("6310.7 270.5 5994.2");
		//179		
		MissionEvents.Insert("Camp Dubrovka northwest MedTent_1");							MissionPositions.Insert("10005.2 174.6 10035.1");
		MissionEvents.Insert("Camp Dubrovka north MedTent_1");								MissionPositions.Insert("10218.1 141.3 10369.4");
		MissionEvents.Insert("Camp Elektrozavodsk northwest MedTent_1"); 					MissionPositions.Insert("9842.6 80.5 2470.3");
		MissionEvents.Insert("Camp Elektrozavodsk northnortheast MedTent_1");				MissionPositions.Insert("10568.9 156.8 2999.1");
		MissionEvents.Insert("Camp Gorka west MedTent_1");									MissionPositions.Insert("8783.6 337.3 8755.1");
		MissionEvents.Insert("Camp Gorka southwest MedTent_1");								MissionPositions.Insert("8908.7 271.2 8265.8");
		MissionEvents.Insert("Camp Gorka northwest MedTent_1");								MissionPositions.Insert("9074.5 379.2 9097.4");
		MissionEvents.Insert("Camp Gorka northwest MedTent_2");								MissionPositions.Insert("9203.4 377.2 9151.0");
		MissionEvents.Insert("Camp Gorka southeast MedTent_1");								MissionPositions.Insert("10114.7 283.0 8513.5");
		MissionEvents.Insert("Camp Grishino southwest MedTent_1");							MissionPositions.Insert("5641.1 294.4 10015.3");
		MissionEvents.Insert("Camp Grishino south MedTent_1");								MissionPositions.Insert("6077.0 302.0 9807.9");
		MissionEvents.Insert("Camp Grishino northnortheast MedTent_1");						MissionPositions.Insert("6272.3 272.4 10739.1");
		MissionEvents.Insert("Camp Grishino southeast MedTent_1");							MissionPositions.Insert("6370.8 312.8 9972.3");
		MissionEvents.Insert("Camp Grishino east MedTent_1");								MissionPositions.Insert("6704.6 345.7 10472.3");
		MissionEvents.Insert("Camp Guglovo northwest MedTent_1");							MissionPositions.Insert("8106.6 352.1 6802.9");
		MissionEvents.Insert("Camp Guglovo southwest MedTent_1");							MissionPositions.Insert("8214.2 345.5 6492.3");
		MissionEvents.Insert("Camp Guglovo northeast MedTent_1");							MissionPositions.Insert("8580.6 327.9 6933.9");
		MissionEvents.Insert("Camp Guglovo northeast MedTent_2");							MissionPositions.Insert("8754.0 310.3 6873.6");
		MissionEvents.Insert("Camp Gvozdno southwest MedTent_1");							MissionPositions.Insert("8504.2 216.5 11736.7");
		MissionEvents.Insert("Camp Gvozdno north MedTent_1");								MissionPositions.Insert("8672.4 154.1 12348.5");
		MissionEvents.Insert("Camp Gvozdno northeast MedTent_1");							MissionPositions.Insert("8782.5 181.3 12123.1");
		MissionEvents.Insert("Camp Kabanino northwest MedTent_1");							MissionPositions.Insert("5009.3 350.5 8858.1");
		MissionEvents.Insert("Camp Kabanino south MedTent_1");								MissionPositions.Insert("5290.6 361.9 8226.3");
		MissionEvents.Insert("Camp Kabanino north MedTent_1");								MissionPositions.Insert("5303.8 349.6 9017.5");
		MissionEvents.Insert("Camp Kabanino east MedTent_1");								MissionPositions.Insert("5671.7 319.2 8564.4");
		MissionEvents.Insert("Camp Krasnostav west MedTent_1");								MissionPositions.Insert("10514.3 284.8 12221.4");
		MissionEvents.Insert("Camp Krasnostav southwest MedTent_1");						MissionPositions.Insert("10516.8 302.5 11986.6");
		MissionEvents.Insert("Camp Krasnostav northwest MedTent_1");						MissionPositions.Insert("10829.8 286.9 12717.8");
		MissionEvents.Insert("Camp Krasnostav north MedTent_1");							MissionPositions.Insert("11245.9 261.5 12811.7");
		MissionEvents.Insert("Camp Krasnostav south MedTent_1");							MissionPositions.Insert("11262.4 211.0 11793.3");
		MissionEvents.Insert("Camp Mogilevka west MedTent_1");								MissionPositions.Insert("7159.9 247.3 5079.7");
		MissionEvents.Insert("Camp Mogilevka northwest MedTent_1");							MissionPositions.Insert("7450.1 284.4 5535.9");
		MissionEvents.Insert("Camp Mogilevka southwest MedTent_1");							MissionPositions.Insert("7120.5 272.2 4912.3");
		MissionEvents.Insert("Camp Mogilevka southwest MedTent_2");							MissionPositions.Insert("7266.4 251.8 4832.7");
		MissionEvents.Insert("Camp Mogilevka north MedTent_1");								MissionPositions.Insert("7596.1 259.4 5436.6");
		MissionEvents.Insert("Camp Mogilevka east MedTent_1");								MissionPositions.Insert("8092.1 182.5 4998.0");
		MissionEvents.Insert("Camp Nagornoe southwest MedTent_1");							MissionPositions.Insert("8699.8 226.8 14206.8");
		MissionEvents.Insert("Camp Nagornoe west MedTent_1");								MissionPositions.Insert("8834.4 267.8 14545.8");
		MissionEvents.Insert("Camp Nagornoe north MedTent_1");								MissionPositions.Insert("9286.1 312.2 15032.0");
		MissionEvents.Insert("Camp Nagornoe southwest MedTent_1");							MissionPositions.Insert("9299.7 202.2 14267.3");
		MissionEvents.Insert("Camp Nagornoe east MedTent_1");								MissionPositions.Insert("9752.9 247.5 14699.4");
		MissionEvents.Insert("Camp Novodmitrovsk west MedTent_1");							MissionPositions.Insert("10825.2 138.7 14671.3");
		MissionEvents.Insert("Camp Novodmitrovsk west MedTent_2");							MissionPositions.Insert("10987.1 127.2 14705.1");
		MissionEvents.Insert("Camp Novodmitrovsk northwest MedTent_1");						MissionPositions.Insert("11012.7 170.3 15081.0");
		MissionEvents.Insert("Camp Novodmitrovsk northwest MedTent_2");						MissionPositions.Insert("11200.0 112.3 15235.1");
		MissionEvents.Insert("Camp Novodmitrovsk southwest MedTent_1");						MissionPositions.Insert("11056.1 135.8 13970.4");
		MissionEvents.Insert("Camp Novodmitrovsk north MedTent_1");							MissionPositions.Insert("11600.5 126.1 15193.8");
		MissionEvents.Insert("Camp Novodmitrovsk east MedTent_1");							MissionPositions.Insert("11873.3 145.5 14680.5");
		MissionEvents.Insert("Camp NovySobor northwest MedTent_1");							MissionPositions.Insert("6827.5 305.1 8037.3");
		MissionEvents.Insert("Camp NovySobor north MedTent_1");								MissionPositions.Insert("6979.1 324.8 8337.5");
		MissionEvents.Insert("Camp NovySobor south MedTent_1");								MissionPositions.Insert("7112.1 262.2 7311.6");
		MissionEvents.Insert("Camp NovySobor northeast MedTent_1");							MissionPositions.Insert("7274.4 328.8 8068.4");
		MissionEvents.Insert("Camp NovySobor east MedTent_1");								MissionPositions.Insert("7603.7 347.3 7901.9");
		MissionEvents.Insert("Camp NovySobor southeast MedTent_1");							MissionPositions.Insert("7781.2 345.0 7455.3");
		MissionEvents.Insert("Camp Polana west MedTent_1");									MissionPositions.Insert("10180.9 249.6 8140.1");
		MissionEvents.Insert("Camp Polana norththwest MedTent_1");							MissionPositions.Insert("10337.5 261.2 8321.0");
		MissionEvents.Insert("Camp Polana southeast MedTent_1");							MissionPositions.Insert("10892.8 295.0 7574.1");
		MissionEvents.Insert("Camp Polana northeast MedTent_1");							MissionPositions.Insert("11100.6 293.0 8483.2");
		MissionEvents.Insert("Camp Polana east MedTent_1");									MissionPositions.Insert("11327.2 284.6 8106.7");
		MissionEvents.Insert("Camp Pulkovo southwest MedTent_1");							MissionPositions.Insert("4831.8 367.0 5306.5");
		MissionEvents.Insert("Camp Pulkovo south MedTent_1");								MissionPositions.Insert("4979.7 366.7 5128.8");
		MissionEvents.Insert("Camp Pulkovo southeast MedTent_1");							MissionPositions.Insert("5285.2 326.7 5336.6");
		MissionEvents.Insert("Camp Pulkovo east MedTent_1");								MissionPositions.Insert("5417.6 312.0 5746.6");
		MissionEvents.Insert("Camp Pusta west MedTent_1");									MissionPositions.Insert("8591.9 260.5 3880.7");
		MissionEvents.Insert("Camp Pusta west MedTent_2");									MissionPositions.Insert("8628.1 270.8 4000.9");
		MissionEvents.Insert("Camp Pusta north MedTent_1");									MissionPositions.Insert("9270.1 283.0 4225.0");
		MissionEvents.Insert("Camp Pusta south MedTent_1");									MissionPositions.Insert("9172.7 230.7 3360.2");
		MissionEvents.Insert("Camp Pusta east MedTent_1");									MissionPositions.Insert("9506.5 249.0 3909.1");
		MissionEvents.Insert("Camp Pustoshka northwest MedTent_1");							MissionPositions.Insert("2721.7 307.4 8182.0");
		MissionEvents.Insert("Camp Pustoshka southwest MedTent_1");							MissionPositions.Insert("2692.1 366.8 7583.3");
		MissionEvents.Insert("Camp Pustoshka northeast MedTent_1");							MissionPositions.Insert("3443.9 293.4 8149.5");
		MissionEvents.Insert("Camp Shakhovka west MedTent_1");								MissionPositions.Insert("9370.8 265.5 6522.9");
		MissionEvents.Insert("Camp Shakhovka northwest MedTent_1");							MissionPositions.Insert("9414.0 253.4 6896.3");
		MissionEvents.Insert("Camp Shakhovka southeast MedTent_1");							MissionPositions.Insert("9890.6 224.9 6368.4");
		MissionEvents.Insert("Camp Shakhovka northeast MedTent_1");							MissionPositions.Insert("10085.1 157.2 6905.9");
		MissionEvents.Insert("Camp Shakhovka northeast MedTent_2");							MissionPositions.Insert("10119.7 175.3 6741.8");		
		MissionEvents.Insert("Camp Staroye west MedTent_1");								MissionPositions.Insert("9688.1 258.1 5462.3");
		MissionEvents.Insert("Camp Staroye northwest MedTent_1");							MissionPositions.Insert("9703.4 305.6 5790.4");
		MissionEvents.Insert("Camp Staroye southwest MedTent_1");							MissionPositions.Insert("9786.7 278.7 5315.2");
		MissionEvents.Insert("Camp Staroye southwest MedTent_2");							MissionPositions.Insert("9853.9 260.4 5275.2");
		MissionEvents.Insert("Camp Staroye east MedTent_1");								MissionPositions.Insert("10724.0 303.1 5485.7");
		MissionEvents.Insert("Camp Svergino west MedTent_1");								MissionPositions.Insert("9016.3 141.9 13785.8");
		MissionEvents.Insert("Camp Svergino southwest MedTent_1");							MissionPositions.Insert("9078.8 113.6 13550.6");
		MissionEvents.Insert("Camp Svergino northwest MedTent_1");							MissionPositions.Insert("9267.2 132.9 14044.0");
		MissionEvents.Insert("Camp Svergino northeast MedTent_1");							MissionPositions.Insert("9675.4 158.7 14248.6");
		MissionEvents.Insert("Camp Svergino northeast MedTent_2");							MissionPositions.Insert("9745.9 121.1 14041.3");
		MissionEvents.Insert("Camp Svetlojarsk southwest MedTent_1");						MissionPositions.Insert("13591.3 71.9 12987.8");
		MissionEvents.Insert("Camp Svetlojarsk northwest MedTent_1");						MissionPositions.Insert("13759.4 36.5 13556.3");
		MissionEvents.Insert("Camp Svetlojarsk north MedTent_1");							MissionPositions.Insert("14116.7 91.1 13699.9");
		MissionEvents.Insert("Camp Svetlojarsk north MedTent_2");							MissionPositions.Insert("14230.5 92.4 13611.1");
		MissionEvents.Insert("Camp Svetlojarsk northeast MedTent_1");						MissionPositions.Insert("14400.2 106.5 13630.9");
		MissionEvents.Insert("Camp Troitskoe west MedTent_1");								MissionPositions.Insert("6894.7 231.5 13501.0");
		MissionEvents.Insert("Camp Troitskoe west MedTent_2");								MissionPositions.Insert("7131.4 209.0 13342.4");	
		MissionEvents.Insert("Camp Troitskoe northwest MedTent_1");							MissionPositions.Insert("7271.1 268.7 13970.8");	
		MissionEvents.Insert("Camp Troitskoe east MedTent_1");								MissionPositions.Insert("7917.6 200.4 13573.1");
		MissionEvents.Insert("Camp Vybor northwest MedTent_1");								MissionPositions.Insert("3518.8 339.0 9379.0");
		MissionEvents.Insert("Camp Vybor north MedTent_1");									MissionPositions.Insert("3991.8 343.0 9527.5");
		MissionEvents.Insert("Camp Vybor northeast MedTent_1");								MissionPositions.Insert("4224.3 333.4 9553.7");
		MissionEvents.Insert("Camp Vybor east MedTent_1");									MissionPositions.Insert("4443.9 325.5 9076.1");
		MissionEvents.Insert("Camp Vyshnoye north MedTent_1");								MissionPositions.Insert("6447.6 382.1 6510.6");
		MissionEvents.Insert("Camp Vyshnoye south MedTent_1");								MissionPositions.Insert("6536.0 346.7 5721.8");
		MissionEvents.Insert("Camp Vyshnoye southeast MedTent_1");							MissionPositions.Insert("6761.7 351.8 5972.9");
		MissionEvents.Insert("Camp Vyshnoye northnortheast MedTent_1");						MissionPositions.Insert("6666.6 350.3 6277.8");
		//282
		MissionEvents.Insert("CityMall Berezino central Dolina");							MissionPositions.Insert("12029.0 55.4 9161.8");
		MissionEvents.Insert("CityMall Berezino central Krasnostav");						MissionPositions.Insert("12029.0 55.4 9161.8");
		MissionEvents.Insert("CityMall Berezino central Staroye");							MissionPositions.Insert("12029.0 55.4 9161.8");
		MissionEvents.Insert("CityMall Elektrozavodsk central Dolina");						MissionPositions.Insert("10423.1 7.4 2364.9");
		MissionEvents.Insert("CityMall Elektrozavodsk central Kamyshovo");					MissionPositions.Insert("10423.1 7.4 2364.9");
		MissionEvents.Insert("CityMall Elektrozavodsk central Novoselky");					MissionPositions.Insert("10423.1 7.4 2364.9");
		MissionEvents.Insert("CityMall Elektrozavodsk central Staroye");					MissionPositions.Insert("10423.1 7.4 2364.9");
		MissionEvents.Insert("CityMall Kamenka northwest Komarovo");						MissionPositions.Insert("1135.6 7.1 2429.6");
		MissionEvents.Insert("CityMall Kamenka northwest Nadezhdino");						MissionPositions.Insert("1135.6 7.1 2429.6");
		MissionEvents.Insert("CityMall Kamenka northwest Novoselky");						MissionPositions.Insert("1135.6 7.1 2429.6");
		MissionEvents.Insert("CityMall Krasnostav central Gorka");							MissionPositions.Insert("11130.4 200.4 12283.9");
		MissionEvents.Insert("CityMall Novodmitrovsk central Berezino");					MissionPositions.Insert("11837.3 34.7 14351.3");
		MissionEvents.Insert("CityMall Novodmitrovsk central Krasnostav");					MissionPositions.Insert("11837.3 34.7 14351.3");
		MissionEvents.Insert("CityMall Polana central NovySobor");							MissionPositions.Insert("10684.2 212.4 8022.8");
		MissionEvents.Insert("CityMall Polana central Kamyshovo");							MissionPositions.Insert("10684.2 212.4 8022.8");
		MissionEvents.Insert("CityMall Polana central Krasnostav");							MissionPositions.Insert("10684.2 212.4 8022.8");
		MissionEvents.Insert("CityMall Polana central Staroye");							MissionPositions.Insert("10684.2 212.4 8022.8");
		MissionEvents.Insert("CityMall Pustoshka central Grishino");						MissionPositions.Insert("3058.4 305.3 7978.0");
		MissionEvents.Insert("CityMall Pustoshka central Nadezhdino");						MissionPositions.Insert("3058.4 305.3 7978.0");
		MissionEvents.Insert("CityMall Pustoshka central NovySobor");						MissionPositions.Insert("3058.4 305.3 7978.0");
		MissionEvents.Insert("CityMall StarySobor central Gorka");							MissionPositions.Insert("6054.3 302.2 7849.7");
		MissionEvents.Insert("CityMall StarySobor central Nadezhdino");						MissionPositions.Insert("6054.3 302.2 7849.7");
		MissionEvents.Insert("CityMall Svergino central Berezino");							MissionPositions.Insert("9549.7 85.4 13668.2");
		MissionEvents.Insert("CityMall Svergino central Grishino");							MissionPositions.Insert("9549.7 85.4 13668.2");
		MissionEvents.Insert("CityMall Svergino central Gorka");							MissionPositions.Insert("9549.7 85.4 13668.2");
		MissionEvents.Insert("CityMall Vybor central Grishino");							MissionPositions.Insert("3831.2 312.5 8875.4");
		MissionEvents.Insert("CityMall Vybor central Nadezhdino");							MissionPositions.Insert("3831.2 312.5 8875.4");
		MissionEvents.Insert("CityMall Vybor central NovayaPetrovka");						MissionPositions.Insert("3831.2 312.5 8875.4");
		MissionEvents.Insert("CityMall Vybor central NovySobor");							MissionPositions.Insert("3831.2 312.5 8875.4");		
		//311
		MissionEvents.Insert("FreePigs Berezino east OstryMountain");						MissionPositions.Insert("12278.0 37.1 9096.1");
		MissionEvents.Insert("FreePigs Berezino east Gorka");								MissionPositions.Insert("12278.0 37.1 9096.1");
		MissionEvents.Insert("FreePigs Berezino east Shakhovka");							MissionPositions.Insert("12278.0 37.1 9096.1");
		MissionEvents.Insert("FreePigs DevilsCastle east OstryMountain");					MissionPositions.Insert("7986.0 224.1 11309.4");
		MissionEvents.Insert("FreePigs DevilsCastle east StarySobor");						MissionPositions.Insert("7986.0 224.1 11309.4");
		MissionEvents.Insert("FreePigs DevilsCastle east Nagornoe");						MissionPositions.Insert("7986.0 224.1 11309.4");
		MissionEvents.Insert("FreePigs Dobroe northwest Nagornoe");							MissionPositions.Insert("12729.6 64.5 15086.6");
		MissionEvents.Insert("FreePigs Dobroe northwest OlhaMountain");						MissionPositions.Insert("12729.6 64.5 15086.6");
		MissionEvents.Insert("FreePigs Dobroe northwest BlackLake");						MissionPositions.Insert("12729.6 64.5 15086.6");
		MissionEvents.Insert("FreePigs Dubky northwest ZubCastle");							MissionPositions.Insert("6261.3 84.0 3775.0");
		MissionEvents.Insert("FreePigs Dubky northwest Kozlovka");							MissionPositions.Insert("6261.3 84.0 3775.0");
		MissionEvents.Insert("FreePigs Dubky northwest KotkaMountain");						MissionPositions.Insert("6261.3 84.0 3775.0");
		MissionEvents.Insert("FreePigs Dudbrovka south BlackLake");							MissionPositions.Insert("10279.0 171.1 9528.7");
		MissionEvents.Insert("FreePigs Dudbrovka south OstryMountain");						MissionPositions.Insert("10279.0 171.1 9528.7");
		MissionEvents.Insert("FreePigs Dudbrovka south Prud");								MissionPositions.Insert("10279.0 171.1 9528.7");
		MissionEvents.Insert("FreePigs Gorka northeast Shakhovka");							MissionPositions.Insert("9708.6 302.1 8893.6");
		MissionEvents.Insert("FreePigs Gorka northeast Grishino");							MissionPositions.Insert("9708.6 302.1 8893.6");
		MissionEvents.Insert("FreePigs Gorka northeast Nizhnoye");							MissionPositions.Insert("9708.6 302.1 8893.6");
		MissionEvents.Insert("FreePigs Grishino central Gvozdno");							MissionPositions.Insert("5926.9 282.1 10124.8");
		MissionEvents.Insert("FreePigs Grishino central Gorka");							MissionPositions.Insert("5926.9 282.1 10124.8");
		MissionEvents.Insert("FreePigs Grishino central KotkaMountain");					MissionPositions.Insert("5926.9 282.1 10124.8");
		MissionEvents.Insert("FreePigs Gvozdno southeast Dubrovka");						MissionPositions.Insert("8883.1 224.5 11665.1");
		MissionEvents.Insert("FreePigs Gvozdno southeast OstryMountain");					MissionPositions.Insert("8883.1 224.5 11665.1");
		MissionEvents.Insert("FreePigs Gvozdno southeast Prud");							MissionPositions.Insert("8883.1 224.5 11665.1");
		MissionEvents.Insert("FreePigs Kabanino central Gorka");							MissionPositions.Insert("5365.7 337.0 8629.0");
		MissionEvents.Insert("FreePigs Kabanino central DevilsCastle");						MissionPositions.Insert("5365.7 337.0 8629.0");
		MissionEvents.Insert("FreePigs Kabanino central ZubCastle");						MissionPositions.Insert("5365.7 337.0 8629.0");
		MissionEvents.Insert("FreePigs Krasnostav north Gorka");							MissionPositions.Insert("11372.1 171.6 12545.6");	
		MissionEvents.Insert("FreePigs Krasnostav north Nizhnoye");							MissionPositions.Insert("11372.1 171.6 12545.6");	
		MissionEvents.Insert("FreePigs Krasnostav north DevilsCastle");						MissionPositions.Insert("11372.1 171.6 12545.6");
		MissionEvents.Insert("FreePigs Mogilevka north StarySobor");						MissionPositions.Insert("7658.3 217.3 5169.9");
		MissionEvents.Insert("FreePigs Mogilevka north Kozlovka");							MissionPositions.Insert("7658.3 217.3 5169.9");
		MissionEvents.Insert("FreePigs Mogilevka north Shakhovka");							MissionPositions.Insert("7658.3 217.3 5169.9");
		MissionEvents.Insert("FreePigs NovySobor central KotkaMountain");					MissionPositions.Insert("6918.2 300.0 7761.6");		
		MissionEvents.Insert("FreePigs NovySobor central Prud");							MissionPositions.Insert("6980.2 300.0 7713.5");
		MissionEvents.Insert("FreePigs NovySobor central VeresnikMountain");				MissionPositions.Insert("6947.4 300.0 7768.7");
		MissionEvents.Insert("FreePigs Orlovets central RogCastle");						MissionPositions.Insert("12209.0 185.0 7328.9");
		MissionEvents.Insert("FreePigs Orlovets central Shakhovka");						MissionPositions.Insert("12209.0 185.0 7328.9");
		MissionEvents.Insert("FreePigs Orlovets central Dubrovka");							MissionPositions.Insert("12209.0 185.0 7328.9");
		MissionEvents.Insert("FreePigs Pavlovo northwest Kozlovka");						MissionPositions.Insert("1339.1 141.1 4073.8");
		MissionEvents.Insert("FreePigs Polana south Prud");									MissionPositions.Insert("10658.4 214.6 7895.9");
		MissionEvents.Insert("FreePigs Polana south RogCastle");							MissionPositions.Insert("10658.4 214.6 7895.9");
		MissionEvents.Insert("FreePigs Polana south ZubCastle");							MissionPositions.Insert("10658.4 214.6 7895.9");
		MissionEvents.Insert("FreePigs Pogorevka northwest ZubCastle");						MissionPositions.Insert("3593.3 337.0 6975.0");
		MissionEvents.Insert("FreePigs Pogorevka northwest Prud");							MissionPositions.Insert("3593.3 337.0 6975.0");
		MissionEvents.Insert("FreePigs Pogorevka northwest Grishino");						MissionPositions.Insert("3593.3 337.0 6975.0");
		MissionEvents.Insert("FreePigs Staroye central ZubCastle");							MissionPositions.Insert("9905.7 257.1 5443.8");
		MissionEvents.Insert("FreePigs Staroye central Gorka");								MissionPositions.Insert("9905.7 257.1 5443.8");
		MissionEvents.Insert("FreePigs Staroye central Nizhnoye");							MissionPositions.Insert("9905.7 257.1 5443.8");
		MissionEvents.Insert("FreePigs StarySobor central Grishino");						MissionPositions.Insert("6263.6 304.2 7701.3");
		MissionEvents.Insert("FreePigs StarySobor central ZubCastle");						MissionPositions.Insert("6249.9 304.3 7766.9");
		MissionEvents.Insert("FreePigs StarySobor central DevilsCastle");					MissionPositions.Insert("6249.9 304.3 7766.9");
		MissionEvents.Insert("FreePigs StarySobor central Shakhovka");						MissionPositions.Insert("6249.9 304.3 7766.9");
		MissionEvents.Insert("FreePigs Vybor northwest Grishino");							MissionPositions.Insert("3113.8 284.2 9229.6");
		MissionEvents.Insert("FreePigs Vybor northwest Prud");								MissionPositions.Insert("3113.8 284.2 9229.6");
		MissionEvents.Insert("FreePigs Vybor northwest KotkaMountain");						MissionPositions.Insert("3113.8 284.2 9229.6");
		MissionEvents.Insert("FreePigs Zaprudnoe east Vavilovo");							MissionPositions.Insert("5011.7 173.3 12976.5");
		MissionEvents.Insert("FreePigs Zaprudnoe east Gvozdno");							MissionPositions.Insert("5011.7 173.3 12976.5");
		MissionEvents.Insert("FreePigs Zaprudnoe east Prud");								MissionPositions.Insert("5011.7 173.3 12976.5");
		MissionEvents.Insert("FreePigs Zelenogorsk west KotkaMountain");					MissionPositions.Insert("1691.4 175.8 5102.7");
		MissionEvents.Insert("FreePigs Zelenogorsk west VeresnikMountain");					MissionPositions.Insert("1691.4 175.8 5102.7");
		//372		
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
		MissionEvents.Insert("Graveyard NovayaPetrovka north Stash_1");						MissionPositions.Insert("3622.7 202.8 13189.6");
		MissionEvents.Insert("Graveyard NovayaPetrovka north Stash_2");						MissionPositions.Insert("3619.9 202.9 13195.0");
		MissionEvents.Insert("Graveyard NovayaPetrovka north Stash_3");						MissionPositions.Insert("3615.3 203.0 13204.9");
		MissionEvents.Insert("Graveyard NovayaPetrovka north Stash_4");						MissionPositions.Insert("3593.0 203.0 13202.2");
		MissionEvents.Insert("Graveyard NovayaPetrovka north Stash_5");						MissionPositions.Insert("3591.3 203.1 13195.4");
		MissionEvents.Insert("Graveyard NovayaPetrovka north Stash_6");						MissionPositions.Insert("3598.1 203.0 13186.5");
		MissionEvents.Insert("Graveyard NovayaPetrovka north Stash_7");						MissionPositions.Insert("3599.9 202.9 13177.7");
		MissionEvents.Insert("Graveyard NovayaPetrovka north Stash_8");						MissionPositions.Insert("3603.2 202.9 13188.6");
		MissionEvents.Insert("Graveyard NovayaPetrovka north Stash_9");						MissionPositions.Insert("3603.8 203.0 13196.1");
		MissionEvents.Insert("Graveyard NovayaPetrovka north Stash_10");					MissionPositions.Insert("3622.5 202.9 13190.8");		
		MissionEvents.Insert("Graveyard NovySobor northeast Stash_1");						MissionPositions.Insert("7091.5 295.5 7734.8");
		MissionEvents.Insert("Graveyard NovySobor northeast Stash_2");						MissionPositions.Insert("7086.8 294.9 7744.6");
		MissionEvents.Insert("Graveyard NovySobor northeast Stash_3");						MissionPositions.Insert("7077.1 295.4 7743.4");
		MissionEvents.Insert("Graveyard NovySobor northeast Stash_4");						MissionPositions.Insert("7080.4 295.3 7743.6");
		MissionEvents.Insert("Graveyard NovySobor northeast Stash_5");						MissionPositions.Insert("7072.9 295.8 7740.9");
		MissionEvents.Insert("Graveyard NovySobor northeast Stash_6");						MissionPositions.Insert("7075.4 296.5 7736.1");
		MissionEvents.Insert("Graveyard NovySobor northeast Stash_7");						MissionPositions.Insert("7084.9 297.4 7723.8");
		MissionEvents.Insert("Graveyard NovySobor northeast Stash_8");						MissionPositions.Insert("7087.1 297.3 7725.2");
		MissionEvents.Insert("Graveyard NovySobor northeast Stash_9");						MissionPositions.Insert("7084.8 296.4 7733.3");		
		//437
		MissionEvents.Insert("Shrooms BelayaPolana north Novodmitrovsk");					MissionPositions.Insert("14152.4 190.5 15300.6");
		MissionEvents.Insert("Shrooms BelayaPolana southwest Novodmitrovsk");				MissionPositions.Insert("13768.4 160.6 14769.4");
		MissionEvents.Insert("Shrooms BelayaPolana west Novodmitrovsk");					MissionPositions.Insert("13770.5 132.1 15173.6");
		MissionEvents.Insert("Shrooms BlackMountain west Severograd");						MissionPositions.Insert("10083.3 330.1 11991.6");
		MissionEvents.Insert("Shrooms BlackMountain south Severograd");						MissionPositions.Insert("10194.2 308.6 11770.3");
		MissionEvents.Insert("Shrooms Bor west Pavlovo");									MissionPositions.Insert("2902.9 267.6 3930.1");		
		MissionEvents.Insert("Shrooms DevilsCastle west Severograd");						MissionPositions.Insert("6711.5 375.5 11411.5");
		MissionEvents.Insert("Shrooms DevilsCastle northwest Severograd");					MissionPositions.Insert("6791.9 365.4 11648.7");
		MissionEvents.Insert("Shrooms DevilsCastle southwest Severograd");					MissionPositions.Insert("6820.3 370.9 11202.5");
		MissionEvents.Insert("Shrooms DevilsCastle north Severograd");						MissionPositions.Insert("6930.9 373.3 11742.0");
		MissionEvents.Insert("Shrooms DevilsCastle northeast Severograd");					MissionPositions.Insert("6976.4 369.8 11651.0");
		MissionEvents.Insert("Shrooms DubinaMountain east Berezino");						MissionPositions.Insert("11523.2 232.0 8435.9");
		MissionEvents.Insert("Shrooms Kamyshovo northwest Elektrozavodsk");					MissionPositions.Insert("11677.1 134.7 3744.7");
		MissionEvents.Insert("Shrooms KlenMountain south Berezino");						MissionPositions.Insert("11443.8 329.2 11289.1");
		MissionEvents.Insert("Shrooms Krasnoe northeast Severograd");						MissionPositions.Insert("6599.8 466.0 15250.0");
		MissionEvents.Insert("Shrooms Krasnoe east Severograd");							MissionPositions.Insert("6894.8 453.0 15125.2");
		MissionEvents.Insert("Shrooms Mogilevka west Chernogorsk");							MissionPositions.Insert("6609.1 351.1 5243.8");
		MissionEvents.Insert("Shrooms Mogilevka southwest Chernogorsk");					MissionPositions.Insert("7055.8 241.8 4713.5");
		MissionEvents.Insert("Shrooms Nadezhdino northwest Chernogorsk");					MissionPositions.Insert("5332.3 311.9 5281.1");
		MissionEvents.Insert("Shrooms Novodmitrovsk southwest Novodmitrovsk");				MissionPositions.Insert("11068.9 128.8 13991.1");
		MissionEvents.Insert("Shrooms Novodmitrovsk west Novodmitrovsk");					MissionPositions.Insert("11098.0 130.6 14780.1");
		MissionEvents.Insert("Shrooms Novoselky northwest Chernogorsk");					MissionPositions.Insert("5531.2 153.0 3516.6");
		MissionEvents.Insert("Shrooms CernayaPolana south Novodmitrovsk");					MissionPositions.Insert("12028.2 126.6 13405.4");
		MissionEvents.Insert("Shrooms OlhaMountain southwest Novodmitrovsk");				MissionPositions.Insert("12773.2 191.6 12642.9");
		MissionEvents.Insert("Shrooms OlhaMountain east Novodmitrovsk");					MissionPositions.Insert("13135.2 158.7 12751.1");
		MissionEvents.Insert("Shrooms Orlovets north Berezino");							MissionPositions.Insert("11992.0 188.7 7586.9");
		MissionEvents.Insert("Shrooms RogCastle southwest Elektrozavodsk");					MissionPositions.Insert("11132.5 298.9 4046.9");
		MissionEvents.Insert("Shrooms Solnichniy southwest Berezino");						MissionPositions.Insert("13110.4 126.5 5956.0");
		MissionEvents.Insert("Shrooms TishinaDam northwest Pavlovo");						MissionPositions.Insert("748.3 294.4 6525.7");	
		MissionEvents.Insert("Shrooms TopolkaDam northwest Elektrozavodsk");				MissionPositions.Insert("9811.4 171.1 3847.2");
		MissionEvents.Insert("Shrooms TopolkaDam east Elektrozavodsk");						MissionPositions.Insert("10625.1 128.4 3619.0");
		MissionEvents.Insert("Shrooms TroitskoeMilbase northeast Severograd");				MissionPositions.Insert("8191.7 410.3 15078.7");
		MissionEvents.Insert("Shrooms Tulga west Elektrozavodsk");							MissionPositions.Insert("12312.5 251.0 4531.9");
		MissionEvents.Insert("Shrooms VysokyKamenMountain ontop Elektrozavodsk");			MissionPositions.Insert("8956.2 336.2 4352.9");
		MissionEvents.Insert("Shrooms Zelenogorsk southsouthwest Pavlovo");					MissionPositions.Insert("2415.5 258.1 4606.8");	
		MissionEvents.Insert("Shrooms ZubCastle southeast Chernogorsk");					MissionPositions.Insert("6596.1 372.7 5527.2");
		//473
		MissionEvents.Insert("Transport Berezino southwest Zaprudnoe");						MissionPositions.Insert("11924.5 57 8971.2");
		MissionEvents.Insert("Transport Berezino southwest Staroye");						MissionPositions.Insert("11939.8 57 8972.4");
		MissionEvents.Insert("Transport Berezino south Elektrozavodsk");					MissionPositions.Insert("12015.3 56.1 8995.1");
		MissionEvents.Insert("Transport Berezino south ChernogorskEast");					MissionPositions.Insert("12000.6 56.1 8990.8");
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
		MissionEvents.Insert("Transport CernayaPolana west Topolniki");						MissionPositions.Insert("11995.5 95.2 13779");
		MissionEvents.Insert("Transport CernayaPolana west Elektrozavodsk");				MissionPositions.Insert("11998.4 95.2 13764");
		MissionEvents.Insert("Transport CernayaPolana south Grishino");						MissionPositions.Insert("12092.5 99.7 13604.5");
		MissionEvents.Insert("Transport CernayaPolana central Staroye");					MissionPositions.Insert("12141.1 97.2 13747.2");
		MissionEvents.Insert("Transport Dolina west Severograd");							MissionPositions.Insert("11445.2 70.6 6596.7");
		MissionEvents.Insert("Transport Kamyshovo central ChernogorskWest");				MissionPositions.Insert("12038.4 7.5 3620.7");
		MissionEvents.Insert("Transport Krasnostav west Pogorevka");						MissionPositions.Insert("11041.1 228.6 12472.4");
		MissionEvents.Insert("Transport Krasnostav north Gorka");							MissionPositions.Insert("11205.7 198.4 12298.1");
		MissionEvents.Insert("Transport Krasnostav southwest Topolniki");					MissionPositions.Insert("11114.8 203 12206");
		MissionEvents.Insert("Transport NovayaPetrovka northwest Berezino");				MissionPositions.Insert("3332.8 200 13081.1");
		MissionEvents.Insert("Transport NovayaPetrovka west Bogatyrka");					MissionPositions.Insert("3412.7 195 12996.3");
		MissionEvents.Insert("Transport NovayaPetrovka east Pogorevka");					MissionPositions.Insert("3507 194.1 13065.1");
		MissionEvents.Insert("Transport Novodmitrovsk west Zelenogorsk");					MissionPositions.Insert("11426.8 89.3 14660.6");
		MissionEvents.Insert("Transport Novodmitrovsk west Vybor");							MissionPositions.Insert("11331.7 49.2 14477.3");
		MissionEvents.Insert("Transport Novodmitrovsk north ChernogorskEast");				MissionPositions.Insert("11494.1 60.4 14900.5");
		MissionEvents.Insert("Transport Novodmitrovsk north Pustoshka");					MissionPositions.Insert("11484.7 60.4 14888.3");
		MissionEvents.Insert("Transport Novodmitrovsk south Elektrozavodsk");				MissionPositions.Insert("11682.8 44.6 14420.4");
		MissionEvents.Insert("Transport Novodmitrovsk south Solnichniy");					MissionPositions.Insert("11673.6 44.6 14432.8");
		MissionEvents.Insert("Transport Novodmitrovsk southwest Zaprudnoe");				MissionPositions.Insert("11512.2 48.2 14495.4");
		MissionEvents.Insert("Transport Novoselky southeast Pustoshka");					MissionPositions.Insert("6407.1 18.1 3112");
		MissionEvents.Insert("Transport Novoselky east Solnichniy");						MissionPositions.Insert("6322.5 29 3306.6");
		MissionEvents.Insert("Transport NovySobor southeast Bogatyrka");					MissionPositions.Insert("7189.3 285 7550.2");
		MissionEvents.Insert("Transport Pustoshka southeast Gorka");						MissionPositions.Insert("3065.8 316.3 7774.2");
		MissionEvents.Insert("Transport Severograd west Staroye");							MissionPositions.Insert("7661.2 121 12651.1");
		MissionEvents.Insert("Transport Severograd west Bogatyrka");						MissionPositions.Insert("7784 121.4 12574.7");
		MissionEvents.Insert("Transport Severograd northwest Solnichniy");					MissionPositions.Insert("7729.4 119.5 12707.2");
		MissionEvents.Insert("Transport Severograd northwest Pustoshka");					MissionPositions.Insert("7744.8 119.5 12706.6");
		MissionEvents.Insert("Transport Severograd north Gorka");							MissionPositions.Insert("7940.9 118.3 12739.7");
		MissionEvents.Insert("Transport Severograd northeast Elektrozavodsk");				MissionPositions.Insert("8066.9 120.2 12829.9");
		MissionEvents.Insert("Transport Severograd northeast Vybor");						MissionPositions.Insert("8081.4 120.2 12833.5");
		MissionEvents.Insert("Transport Severograd east Berezino");							MissionPositions.Insert("8159.1 115.1 12674.2");
		MissionEvents.Insert("Transport StarySobor west Solnichniy");						MissionPositions.Insert("6030.7 302.5 7856.2");
		MissionEvents.Insert("Transport StarySobor southwest Berezino");					MissionPositions.Insert("5951.1 306 7759.3");
		MissionEvents.Insert("Transport StarySobor south ChernogorskEast");					MissionPositions.Insert("6037.5 303.8 7696.4");
		MissionEvents.Insert("Transport Svetlojarsk northwest Grishino");					MissionPositions.Insert("13918.9 20.7 13333.9");
		MissionEvents.Insert("Transport Svetlojarsk southwest Pustoshka");					MissionPositions.Insert("13842.5 22.2 13185.8");	
		MissionEvents.Insert("Transport Svetlojarsk central Elektrozavodsk");				MissionPositions.Insert("14016.1 14 13194");
		MissionEvents.Insert("Transport Svetlojarsk southeast Dubrovka");					MissionPositions.Insert("14007.3 14.5 13096.6");
		MissionEvents.Insert("Transport Svetlojarsk east Topolniki");						MissionPositions.Insert("14052.5 11.5 13145.2");
		MissionEvents.Insert("Transport Topolniki southwest Bogatyrka");					MissionPositions.Insert("2701 230.2 12121.1");
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
		MissionEvents.Insert("Transport Vysotovo north Bogatyrka");							MissionPositions.Insert("5580.3 69.4 2698.8");
		MissionEvents.Insert("Transport Vysotovo north Kamenka");							MissionPositions.Insert("5583.1 69.4 2713.9");
		MissionEvents.Insert("Transport Vysotovo north Staroye");							MissionPositions.Insert("5596 69.5 2695.5");
		MissionEvents.Insert("Transport Vysotovo north Gorka");								MissionPositions.Insert("5598.9 69.5 2710.5");
		MissionEvents.Insert("Transport Vysotovo south Dubrovka");							MissionPositions.Insert("5772.9 52.9 2338.9");
		MissionEvents.Insert("Transport Zelenogorsk west Zaprudnoe");						MissionPositions.Insert("2505.4 191.7 5303.5");
		MissionEvents.Insert("Transport Zelenogorsk west Elektrozavodsk");					MissionPositions.Insert("2520.7 191.7 5303");
		MissionEvents.Insert("Transport Zelenogorsk west Severograd");						MissionPositions.Insert("2609.4 199 5301.6");
		MissionEvents.Insert("Transport Zelenogorsk west ChernogorskWest");					MissionPositions.Insert("2608.7 199 5286.6");
		MissionEvents.Insert("Transport Zelenogorsk west ChernogorskEast");					MissionPositions.Insert("2608.1 199 5271.7");
		MissionEvents.Insert("Transport Zelenogorsk west Topolniki");						MissionPositions.Insert("2625 198.9 5296.9");
		MissionEvents.Insert("Transport Zelenogorsk west Gorka");							MissionPositions.Insert("2624.7 198.9 5281.7");
		MissionEvents.Insert("Transport Zelenogorsk west Staroye");							MissionPositions.Insert("2624.3 198.9 5266.8");
		MissionEvents.Insert("Transport Zelenogorsk southwest Dubrovka");					MissionPositions.Insert("2641.2 197.7 5130.4");
		MissionEvents.Insert("Transport Zelenogorsk east Severograd");						MissionPositions.Insert("2811.7 207.9 5330.1");
		MissionEvents.Insert("Transport Zelenogorsk east Topolniki");						MissionPositions.Insert("2815.1 207.9 5345");
		MissionEvents.Insert("Transport Zelenogorsk central Elektrozavodsk");				MissionPositions.Insert("2687.9 207.6 5406.1");
		MissionEvents.Insert("Transport Zelenogorsk central Kamenka");						MissionPositions.Insert("2684.7 207.6 5391");
		//564
		MissionEvents.Insert("UrbanMall Berezino north Svetlojarsk");						MissionPositions.Insert("12116.1 13.5 9761.1");
		MissionEvents.Insert("UrbanMall Berezino north Novodmitrovsk");						MissionPositions.Insert("12116.1 13.5 9761.1");
		MissionEvents.Insert("UrbanMall Chernogorsk north Elektrozavodsk");					MissionPositions.Insert("6375.8 16.9 2856.5");
		MissionEvents.Insert("UrbanMall Dubky west Elektrozavodsk");						MissionPositions.Insert("6535.7 63.4 3555.2");
		MissionEvents.Insert("UrbanMall Dubky west Zelenogorsk");							MissionPositions.Insert("6535.7 63.4 3555.2");
		MissionEvents.Insert("UrbanMall Novoselky west Zelenogorsk");						MissionPositions.Insert("6077.7 54.2 3428.5");
		MissionEvents.Insert("UrbanMall Novoselky west Elektrozavodsk");					MissionPositions.Insert("6077.7 54.2 3428.5");
		MissionEvents.Insert("UrbanMall Topolniki south Severograd");						MissionPositions.Insert("3077.3 210.3 12667.2");
		MissionEvents.Insert("UrbanMall Vysotovo central Zelenogorsk");						MissionPositions.Insert("5660.8 65.6 2444.2");
		MissionEvents.Insert("UrbanMall Zelenogorsk central Chernogorsk");					MissionPositions.Insert("2673.3 206.9 5281.0");
			
		// ***Add new mission events below this line	
		//example: MissionEvents.Insert("MyNewMissionType Location LocationDir additionalParam");	MissionPositions.Insert("6869.6 350.3 10277.7");
		//574

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
			if ( MLocation == "Chernogorsk") 				BuildingPosList.Insert("6474.1 17.1 2719.6");
			else if ( MLocation == "Elektrozavodsk")		BuildingPosList.Insert("10283.9 20.2 2285.2");
			else if ( MLocation == "Berezino") 				BuildingPosList.Insert("11928.2 61.7 9070.4");
			else if ( MLocation == "Novodmitrovsk") 		BuildingPosList.Insert("11413.8 85.9 14597.9");
			else if ( MLocation == "Pavlovo") 				BuildingPosList.Insert("2165.0 99.0 3357.7");
			else if ( MLocation == "Severograd") 			BuildingPosList.Insert("8017.3 121.5 12752.4");
			else return false;			//No match by location						
		}
		else if ( MBuilding == "Land_FuelStation_Build")
		{
			if ( MLocation == "Berezino")					BuildingPosList.Insert("12978.3 7.6 10079.4");
			else if ( MLocation == "Bogatyrka")				BuildingPosList.Insert("300.6 296.6 9399.6");
			else if ( MLocation == "ChernogorskWest")		BuildingPosList.Insert("5862.8 10.8 2212.3");
			else if ( MLocation == "ChernogorskEast")		BuildingPosList.Insert("6874.8 8.9 3094.6");
			else if ( MLocation == "Dubrovka")				BuildingPosList.Insert("10750.5 146 10782.4");
			else if ( MLocation == "Elektrozavodsk")		BuildingPosList.Insert("9518.7 7.2 2003.8.4");
			else if ( MLocation == "Gorka")					BuildingPosList.Insert("10442.1 224.7 8884.4");
			else if ( MLocation == "Grishino")				BuildingPosList.Insert("5858 279.3 10116.8");
			else if ( MLocation == "Kamenka")				BuildingPosList.Insert("1122 7.2 2417.5");
			else if ( MLocation == "Pogorevka")				BuildingPosList.Insert("4726.8 283.4 6389.7");
			else if ( MLocation == "Pustoshka")				BuildingPosList.Insert("3000.5 344.1 7482.8");			
			else if ( MLocation == "Severograd")			BuildingPosList.Insert("7470.6 122.7 12659.4");
			else if ( MLocation == "Solnichniy")			BuildingPosList.Insert("13369.9 6.2 6611.6");
			else if ( MLocation == "Staroye")				BuildingPosList.Insert("10119.3 231.2 5199.8");			
			else if ( MLocation == "Svetlojarsk")			BuildingPosList.Insert("13574.4 35.9 13304.5");
			else if ( MLocation == "Topolniki")				BuildingPosList.Insert("3031.1 211.2 12657");
			else if ( MLocation == "Vybor")					BuildingPosList.Insert("3668.3 313.1 9002.2");
			else if ( MLocation == "Zaprudnoe")				BuildingPosList.Insert("4349.9 178.5 13085.4");
			else if ( MLocation == "Zelenogorsk")			BuildingPosList.Insert("2701.6 212.6 5599.7");
			else return false;			//No match by location
		}
		else if ( MBuilding == "Land_Village_PoliceStation")
		{
			if ( MLocation == "Berezino")					BuildingPosList.Insert("12927.1 13.0 10183.2");
			else if ( MLocation == "Dolina")				BuildingPosList.Insert("11186.2 83.3 6590.2");
			else if ( MLocation == "Grishino")				BuildingPosList.Insert("6004.4 274.0 10349.1");
			else if ( MLocation == "Gorka")					BuildingPosList.Insert("9530.0 309.7 8798.8");
			else if ( MLocation == "Kamyshovo")				BuildingPosList.Insert("12058.0 12.8 3607.5");
			else if ( MLocation == "Komarovo")				BuildingPosList.Insert("3569.7 13.3 2431.4");
			else if ( MLocation == "Krasnostav")			BuildingPosList.Insert("11069.0 233.9 12487.3");
			else if ( MLocation == "Nadezhdino")			BuildingPosList.Insert("5867.6 145.0 4677.4");
			else if ( MLocation == "NovayaPetrovka")		BuildingPosList.Insert("3421.3 199.7 13019.9");
			else if ( MLocation == "Novoselky")				BuildingPosList.Insert("6202.3 32.8 2920.9");
			else if ( MLocation == "NovySobor")				BuildingPosList.Insert("7170.0 300.2 7671.2");
			else if ( MLocation == "Staroye")				BuildingPosList.Insert("10157.8 250.6 5529.7");
			else return false;			//No match by location
		}
		else if ( MBuilding == "Land_City_PoliceStation")
		{
			if ( MLocation == "Chernogorsk")				BuildingPosList.Insert("6633.1 14.0 2586.6");
			else if ( MLocation == "Elektrozavodsk")		BuildingPosList.Insert("10456.0 12.7 2273.0");
			else if ( MLocation == "Novodmitrovsk")			BuildingPosList.Insert("11489.7 53.1 14484.0");
			else if ( MLocation == "Severograd")			BuildingPosList.Insert("7737.3 125.1 12636.6");
			else if ( MLocation == "Svetlojarsk")			BuildingPosList.Insert("13846.7 27.3 13218.0");			
			else if ( MLocation == "Zelenogorsk")			BuildingPosList.Insert("2730.4 213.2 5373.8");
			else return false;			//No match by location
		}
		else if ( MBuilding == "Land_Misc_TrailRoof_Small")
		{
			if ( MLocation == "BlackLake")					BuildingPosList.Insert("13346.5 71.2 12095.4");
			else if ( MLocation == "DevilsCastle")			BuildingPosList.Insert("6930.7 378.2 11608.1");
			else if ( MLocation == "Dubrovka")				BuildingPosList.Insert("10437.0 116.4 9845.2");
			else if ( MLocation == "Gorka")					BuildingPosList.Insert("9334.4 321.9 8839.1");
			else if ( MLocation == "Grishino")				BuildingPosList.Insert("6071.5 268.1 10481.7");
			else if ( MLocation == "Gvozdno")				BuildingPosList.Insert("8303.3 150.5 12100,8");
			else if ( MLocation == "Kozlovka")				BuildingPosList.Insert("4278.5 203.8 4459.1");
			else if ( MLocation == "KotkaMountain")			BuildingPosList.Insert("5695.5 328.6 6892.9");
			else if ( MLocation == "Nizhnoye")				BuildingPosList.Insert("12897.0 7.2 8338.3");
			else if ( MLocation == "Nagornoe")				BuildingPosList.Insert("9394.3 232.5 14551.7");
			else if ( MLocation == "RogCastle")				BuildingPosList.Insert("11235.3 235.3 4618.8");
			else if ( MLocation == "Shakhovka")				BuildingPosList.Insert("9573.3 213.9 6791.0");
			else if ( MLocation == "StarySobor")			BuildingPosList.Insert("6203.4 333.1 8019.2");
			else if ( MLocation == "OlhaMountain")			BuildingPosList.Insert("12970.7 214.2 12763.9");
			else if ( MLocation == "OstryMountain")			BuildingPosList.Insert("10818.7 336.4 12864.2");
			else if ( MLocation == "VeresnikMountain")		BuildingPosList.Insert("4436.5 340.3 8072.2");
			else if ( MLocation == "Vavilovo")				BuildingPosList.Insert("2061.6 252.9 11340.3");
			else if ( MLocation == "ZubCastle")				BuildingPosList.Insert("6911.9 311.6 5589.6");
			else if ( MLocation == "Prud")					BuildingPosList.Insert("6571.8 360.7 9045.1");
			else return false;			//No match by location
		}		
		else if ( MBuilding == "Land_City_School")
		{
			if ( MLocation == "Berezino")					BuildingPosList.Insert("12168.3 17.1 9757.0");
			else if ( MLocation == "Elektrozavodsk")		BuildingPosList.Insert("10223.2 29.2 2574.0");
			else if ( MLocation == "NovayaPetrovka")		BuildingPosList.Insert("3246.1 208.7 13045.8");	
			else if ( MLocation == "Severograd")			BuildingPosList.Insert("8658.1 110.5 12803.7");	
			else if ( MLocation == "Vysotovo")				BuildingPosList.Insert("5695.7 76.7 2562.8");
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
		ExcludedTypes.InsertArray( {"Camp","Shrooms","Graveyard","BearHunt"} );	
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
		ExcludedTypes.InsertArray( {"Apartment","Camp","Graveyard"} );
		
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
	
	void BuildStatics()
	{
		//add static buildings / objects here. This function must be activated in MissionSettings!
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
			if (FoundObject.GetType() == "Land_City_Store") 
			{
				Msg1 = new Param1<string> ("City_Store, Pos.: " + FoundObject.GetPosition().ToString() + " Modelvector: " + (FoundObject.WorldToModel( player.GetPosition())).ToString());
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
			j = 0;
		} 			
	}
	
	static void RCMapByBuilding( string MBuilding )
	{
		//Runs a raycast from the middle of the map and prints all buildings of desired type 
		ref array<Object> Objects = new array<Object>;
		ref array<CargoBase> ObjectCargos = new array<CargoBase>;
		float vertex;
		vector Center = "7680 0 7680";
				
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
