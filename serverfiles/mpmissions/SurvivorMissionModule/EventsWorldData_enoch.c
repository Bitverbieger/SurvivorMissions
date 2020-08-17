class EventsWorldData extends SurvivorMissions
{
	const string EWD_MAP_NAME = "enoch";
	const string EWD_SCRIPT_VERSION = "0.85";
	static ref array<string> MissionEvents = new array<string>;
	static ref array<vector> MissionPositions = new array<vector>;
	static ref array<Object> ObjectList = new array<Object>; 
	static ref array<CargoBase> ObjectCargoList = new array<CargoBase>;
	
	void EventsWorldData()
	{
		//Mission event																		//Mission position (absolute or BuildingPos)
		//0
		MissionEvents.Insert("Camp Adamow west MedTent_1");							MissionPositions.Insert("2717.5 281.5 6725.3");
		MissionEvents.Insert("Camp Adamow southwest MedTent_1");					MissionPositions.Insert("2906.6 309.6 6425.6");
		MissionEvents.Insert("Camp Adamow east MedTent_1");							MissionPositions.Insert("3407.5 226.9 6811.3");
		MissionEvents.Insert("Camp Adamow northeast MedTent_1");					MissionPositions.Insert("3532.1 214.6 7356.4");
		MissionEvents.Insert("Camp Bielawa west MedTent_1");						MissionPositions.Insert("1071.9 296.4 9630.2");
		MissionEvents.Insert("Camp Bielawa south MedTent_1");						MissionPositions.Insert("1245.4 274.9 9039.2");
		MissionEvents.Insert("Camp Bielawa south MedTent_2");						MissionPositions.Insert("1417.8 264.2 9364");
		MissionEvents.Insert("Camp Bielawa south MedTent_3");						MissionPositions.Insert("1464.6 265.2 9392.2");
		MissionEvents.Insert("Camp Bielawa southeast MedTent_1");					MissionPositions.Insert("1898.4 236.8 9339");
		MissionEvents.Insert("Camp Bielawa southeast MedTent_2");					MissionPositions.Insert("2028.2 241.6 9335.5");
		MissionEvents.Insert("Camp Branzow_Castle west MedTent_1");					MissionPositions.Insert("846.1 430.5 11368.4");
		MissionEvents.Insert("Camp Branzow_Castle northwest MedTent_1");			MissionPositions.Insert("7767.7 423.5 11597.7");
		MissionEvents.Insert("Camp Branzow_Castle north MedTent_1");				MissionPositions.Insert("981.1 369.8 11691.1");
		MissionEvents.Insert("Camp Branzow_Castle south MedTent_1");				MissionPositions.Insert("1047.7 352.8 11100.1");
		MissionEvents.Insert("Camp Branzow_Castle northeast MedTent_1");			MissionPositions.Insert("1199 334.7 11798");
		MissionEvents.Insert("Camp Branzow_Castle east MedTent_1");					MissionPositions.Insert("1708.1 304.6 11441.4");
		MissionEvents.Insert("Camp Brena northwest MedTent_1");						MissionPositions.Insert("6153.8 197.5 11493.6");
		MissionEvents.Insert("Camp Brena southwest MedTent_1");						MissionPositions.Insert("6260.2 171.5 10867.6");
		MissionEvents.Insert("Camp Brena north MedTent_1");							MissionPositions.Insert("6417.2 208 11677.4");
		MissionEvents.Insert("Camp Brena east MedTent_1");							MissionPositions.Insert("6825 179.9 11432.6");
		MissionEvents.Insert("Camp Gliniska northwest MedTent_1");					MissionPositions.Insert("4676.6 211.3 10127.9");
		MissionEvents.Insert("Camp Gliniska east MedTent_1");						MissionPositions.Insert("5530.8 171.1 9957.6");
		MissionEvents.Insert("Camp Gliniska southeast MedTent_1");					MissionPositions.Insert("5323.3 173.6 9534.2");	
		MissionEvents.Insert("Camp Grabin west MedTent_1");							MissionPositions.Insert("10304.2 187.7 11041.6");
		MissionEvents.Insert("Camp Grabin northwest MedTent_1");					MissionPositions.Insert("10521.3 171.9 11332.7");
		MissionEvents.Insert("Camp Grabin north MedTent_1");						MissionPositions.Insert("10846.1 172.2 11283.8");
		MissionEvents.Insert("Camp Grabin northeast MedTent_1");					MissionPositions.Insert("11193.6 170.9 11230.7");
		MissionEvents.Insert("Camp Kolembrody southwest MedTent_1");				MissionPositions.Insert("8210.7 174.4 11925.9");
		MissionEvents.Insert("Camp Kolembrody northwest MedTent_1");				MissionPositions.Insert("8290.6 184.3 12098.6");
		MissionEvents.Insert("Camp Kolembrody southeast MedTent_1");				MissionPositions.Insert("8623.2 174.3 11962.3");
		MissionEvents.Insert("Camp Lukow west MedTent_1");							MissionPositions.Insert("3399.8 260.1 11760.1");
		MissionEvents.Insert("Camp Lukow northwest MedTent_1");						MissionPositions.Insert("3370.6 250.9 11897.6");
		MissionEvents.Insert("Camp Lukow north MedTent_1");							MissionPositions.Insert("3700 236 12561.5");
		MissionEvents.Insert("Camp Lukow north MedTent_2");							MissionPositions.Insert("3867.5 232 12244.7");
		MissionEvents.Insert("Camp Lukow east MedTent_1");							MissionPositions.Insert("4293.6 234.9 11666.2");
		MissionEvents.Insert("Camp Lukow southwest MedTent_1");						MissionPositions.Insert("3424.5 243.7 11079.6");
		MissionEvents.Insert("Camp Nadbor west MedTent_1");							MissionPositions.Insert("5530.3 400.1 4155.6");
		MissionEvents.Insert("Camp Nadbor south MedTent_1");						MissionPositions.Insert("5897.6 404.5 3838.5");
		MissionEvents.Insert("Camp Nadbor southeast MedTent_1");					MissionPositions.Insert("6123.6 375.5 3667.4");
		MissionEvents.Insert("Camp Nadbor east MedTent_1");							MissionPositions.Insert("6561.8 346.8 4224.4");
		MissionEvents.Insert("Camp Olszanka north MedTent_1");						MissionPositions.Insert("4881 262.1 7987.7");
		MissionEvents.Insert("Camp Olszanka southeast MedTent_1");					MissionPositions.Insert("5147.3 297.6 7360.5");
		MissionEvents.Insert("Camp Polana north MedTent_1");						MissionPositions.Insert("3201.9 527.2 2294.3");
		MissionEvents.Insert("Camp Polana south MedTent_1");						MissionPositions.Insert("3315.9 470.7 1922.5");
		MissionEvents.Insert("Camp Polana east MedTent_1");							MissionPositions.Insert("3658.5 538.3 2041.4");
		MissionEvents.Insert("Camp Radacz west MedTent_1");							MissionPositions.Insert("3500.5 197 8006.7");
		MissionEvents.Insert("Camp Radacz north MedTent_1");						MissionPositions.Insert("3966.4 195.6 8368.6");
		MissionEvents.Insert("Camp Radacz south MedTent_1");						MissionPositions.Insert("4067.3 231.2 7558.7");
		MissionEvents.Insert("Camp Sitnik west MedTent_1");							MissionPositions.Insert("11068.3 179.9 9671.1");
		MissionEvents.Insert("Camp Sitnik northwest MedTent_1");					MissionPositions.Insert("11241.8 182.9 9818.9");
		MissionEvents.Insert("Camp Sitnik north MedTent_1");						MissionPositions.Insert("11395.2 171 10124");
		MissionEvents.Insert("Camp Sitnik southeast MedTent_1");					MissionPositions.Insert("11871.7 196.7 9193.2");
		MissionEvents.Insert("Camp Sitnik southeast MedTent_2");					MissionPositions.Insert("11770.2 190.3 9091.9");
		MissionEvents.Insert("Camp Sitnik east MedTent_1");							MissionPositions.Insert("12040.5 230.6 9503.8");
		MissionEvents.Insert("Camp Sobotka northwest MedTent_1");					MissionPositions.Insert("5926.2 174.4 10391.3");
		MissionEvents.Insert("Camp Sobotka northwest MedTent_2");					MissionPositions.Insert("6045.4 177.6 10338.3");
		MissionEvents.Insert("Camp Sobotka north MedTent_1");						MissionPositions.Insert("6166.6 174.2 10634.3");
		MissionEvents.Insert("Camp Sobotka north MedTent_2");						MissionPositions.Insert("6346.5 170.3 10747.8");
		MissionEvents.Insert("Camp Sobotka northeast MedTent_1");					MissionPositions.Insert("6550.7 193.9 10451.6");
		MissionEvents.Insert("Camp Tarnow west MedTent_1");							MissionPositions.Insert("8816.9 252.3 10779.5");
		MissionEvents.Insert("Camp Tarnow northwest MedTent_1");					MissionPositions.Insert("9135.6 178 11446.1");
		MissionEvents.Insert("Camp Tarnow northeast MedTent_1");					MissionPositions.Insert("9703 183.4 11198.6");
		MissionEvents.Insert("Camp Tarnow east MedTent_1");							MissionPositions.Insert("9782.8 215.3 10788.5");
		MissionEvents.Insert("Camp Tarnow southeast MedTent_1");					MissionPositions.Insert("9753.9 260.8 10105.2");
		MissionEvents.Insert("Camp Topolin west MedTent_1");						MissionPositions.Insert("838 175.3 7568.7");
		MissionEvents.Insert("Camp Topolin northwest MedTent_1");					MissionPositions.Insert("900.1 172.1 7631.3");
		MissionEvents.Insert("Camp Topolin northwest MedTent_2");					MissionPositions.Insert("1106.4 191.8 7850.3");
		MissionEvents.Insert("Camp Topolin southwest MedTent_1");					MissionPositions.Insert("1392.6 230.3 7109.3");
		MissionEvents.Insert("Camp Topolin north MedTent_1");						MissionPositions.Insert("1440.3 192.7 7821.8");
		MissionEvents.Insert("Camp Topolin south MedTent_1");						MissionPositions.Insert("1667.6 241.2 7006.6");
		MissionEvents.Insert("Camp Topolin east MedTent_1");						MissionPositions.Insert("2119.5 226.2 7320.7");
		MissionEvents.Insert("Camp Topolin east MedTent_2");						MissionPositions.Insert("2619.2 230.5 7485.1");
		MissionEvents.Insert("Camp Topolin northeast MedTent_1");					MissionPositions.Insert("2181.9 171 7922.2");
		MissionEvents.Insert("Camp Zalesie northwest MedTent_1");					MissionPositions.Insert("453 288.7 5560.9");
		MissionEvents.Insert("Camp Zalesie west MedTent_1");						MissionPositions.Insert("502.5 287.5 5367.9");
		MissionEvents.Insert("Camp Zalesie north MedTent_1");						MissionPositions.Insert("1037 279.8 5898.4");
		MissionEvents.Insert("Camp Zalesie southeast MedTent_1");					MissionPositions.Insert("1126.3 250.5 5140.9");
		MissionEvents.Insert("Camp Zalesie northeast MedTent_1");					MissionPositions.Insert("1258.4 283 5680.6");
		//78 
		MissionEvents.Insert("FreePigs Adamow north Jantar_Lake");					MissionPositions.Insert("3095.9 253.1 7089.8");
		MissionEvents.Insert("FreePigs Adamow north Radacz");						MissionPositions.Insert("3095.9 253.1 7089.8");		
		MissionEvents.Insert("FreePigs Bielawa southeast Jantar_Lake");				MissionPositions.Insert("2092.5 257.2 9432.7");
		MissionEvents.Insert("FreePigs Bielawa southeast Radacz");					MissionPositions.Insert("2092.5 257.2 9432.7");
		MissionEvents.Insert("FreePigs Borek south Gieraltow");						MissionPositions.Insert("9731.6 225.3 8120.7");
		MissionEvents.Insert("FreePigs Borek south Kolembrody");					MissionPositions.Insert("9731.6 225.3 8120.7");
		MissionEvents.Insert("FreePigs Brena west Jantar_Lake");					MissionPositions.Insert("6245.1 187.3 11228.7");
		MissionEvents.Insert("FreePigs Brena west Kolembrody");						MissionPositions.Insert("6245.1 187.3 11228.7");
		MissionEvents.Insert("FreePigs Brena west Radacz");							MissionPositions.Insert("6245.1 187.3 11228.7");
		MissionEvents.Insert("FreePigs Gliniska north Jantar_Lake");				MissionPositions.Insert("5131.1 198.4 10460.8");
		MissionEvents.Insert("FreePigs Gliniska north Kolembrody");					MissionPositions.Insert("5131.1 198.4 10460.8");
		MissionEvents.Insert("FreePigs Gliniska north Radacz");						MissionPositions.Insert("5131.1 198.4 10460.8");
		MissionEvents.Insert("FreePigs Lipina east Jantar_Lake");					MissionPositions.Insert("6293 275.2 6838.6");
		MissionEvents.Insert("FreePigs Lipina east Nadbor");						MissionPositions.Insert("6293 275.2 6838.6");
		MissionEvents.Insert("FreePigs Lipina east Radacz");						MissionPositions.Insert("6293 275.2 6838.6");
		MissionEvents.Insert("FreePigs Lipina east Swarog");						MissionPositions.Insert("6293 275.2 6838.6");
		MissionEvents.Insert("FreePigs Lukow northwest Jantar_Lake");				MissionPositions.Insert("3182 260.3 11991.3");
		MissionEvents.Insert("FreePigs Lukow northwest Radacz");					MissionPositions.Insert("3182 260.3 11991.3");
		MissionEvents.Insert("FreePigs Lukow east Jantar_Lake");					MissionPositions.Insert("3848.1 249.8 11849.7");
		MissionEvents.Insert("FreePigs Lukow east Radacz");							MissionPositions.Insert("3848.1 249.8 11849.7");
		MissionEvents.Insert("FreePigs Olszanka south Jantar_Lake");				MissionPositions.Insert("4866.6 314.7 7282.8");
		MissionEvents.Insert("FreePigs Olszanka south Nadbor");						MissionPositions.Insert("4866.6 314.7 7282.8");
		MissionEvents.Insert("FreePigs Radacz northwest Nadbor");					MissionPositions.Insert("3794.1 205.6 8478.6");
		MissionEvents.Insert("FreePigs Sitnik southwest Kolembrody");				MissionPositions.Insert("11435.7 184.9 9462.7");
		MissionEvents.Insert("FreePigs Sobotka south Jantar_Lake");					MissionPositions.Insert("6186.9 197.6 9967.4");
		MissionEvents.Insert("FreePigs Sobotka south Kolembrody");					MissionPositions.Insert("6186.9 197.6 9967.4");
		MissionEvents.Insert("FreePigs Sobotka south Radacz");						MissionPositions.Insert("6186.9 197.6 9967.4");
		MissionEvents.Insert("FreePigs Tarnow southeast Kolembrody");				MissionPositions.Insert("9647.1 223.2 10590.1");
		MissionEvents.Insert("FreePigs Topolin northwest Jantar_Lake");				MissionPositions.Insert("1330.7 228.3 8151.2");
		MissionEvents.Insert("FreePigs Topolin northwest Radacz");					MissionPositions.Insert("1330.7 228.3 8151.2");
		MissionEvents.Insert("FreePigs Topolin Jantar_Lake");						MissionPositions.Insert("1964.3 251.7 6695.9");
		MissionEvents.Insert("FreePigs Topolin south Radacz");						MissionPositions.Insert("1964.3 251.7 6695.9");
		//110
		MissionEvents.Insert("Ganja Adamow central Nadbor");						MissionPositions.Insert("3096.3 235.7 6776.8");
		MissionEvents.Insert("Ganja Adamow central Polana");						MissionPositions.Insert("3096.3 235.7 6776.8");
		MissionEvents.Insert("Ganja Adamow central Brena");							MissionPositions.Insert("3096.3 235.7 6776.8");
		MissionEvents.Insert("Ganja Bielawa southeast Sitnik");						MissionPositions.Insert("1648.4 254.8 9575.7");
		MissionEvents.Insert("Ganja Bielawa southeast Polana");						MissionPositions.Insert("1648.4 254.8 9575.7");
		MissionEvents.Insert("Ganja Bielawa southeast Nadbor");						MissionPositions.Insert("1648.4 254.8 9575.7");
		MissionEvents.Insert("Ganja Brena central Sitnik");							MissionPositions.Insert("6548.5 186.1 11308.2");
		MissionEvents.Insert("Ganja Brena central Nadbor");							MissionPositions.Insert("6548.5 186.1 11308.2");
		MissionEvents.Insert("Ganja Brena central Topolin");						MissionPositions.Insert("6548.5 186.1 11308.2");
		MissionEvents.Insert("Ganja Dolnik southeast Sitnik");						MissionPositions.Insert("11544.9 214 370.9");
		MissionEvents.Insert("Ganja Dolnik southeast Nadbor");						MissionPositions.Insert("11544.9 214 370.9");
		MissionEvents.Insert("Ganja Dolnik southeast Polana");						MissionPositions.Insert("11544.9 214 370.9");
		MissionEvents.Insert("Ganja Gieraltow southwest Sitnik");					MissionPositions.Insert("11051 347.8 4206.7");
		MissionEvents.Insert("Ganja Gieraltow southwest Nadbor");					MissionPositions.Insert("11051 347.8 4206.7");
		MissionEvents.Insert("Ganja Gieraltow southwest Polana");					MissionPositions.Insert("11051 347.8 4206.7");
		MissionEvents.Insert("Ganja Gieraltow northeast Sitnik");					MissionPositions.Insert("11490.8 331.4 4610.9");
		MissionEvents.Insert("Ganja Gieraltow northeast Nadbor");					MissionPositions.Insert("11490.8 331.4 4610.9");
		MissionEvents.Insert("Ganja Gieraltow northeast Polana");					MissionPositions.Insert("11490.8 331.4 4610.9");
		MissionEvents.Insert("Ganja Gieraltow northeast Sitnik");					MissionPositions.Insert("11579.2 331.3 4614.5");
		MissionEvents.Insert("Ganja Gieraltow northeast Nadbor");					MissionPositions.Insert("11579.2 331.3 4614.5");
		MissionEvents.Insert("Ganja Gieraltow northeast Polana");					MissionPositions.Insert("11579.2 331.3 4614.5");
		MissionEvents.Insert("Ganja Grabin west Topolin");							MissionPositions.Insert("10547.3 182.3 11086.6");
		MissionEvents.Insert("Ganja Grabin west Widok");							MissionPositions.Insert("10547.3 182.3 11086.6");
		MissionEvents.Insert("Ganja Grabin west Nadbor");							MissionPositions.Insert("10547.3 182.3 11086.6");
		MissionEvents.Insert("Ganja Grabin central Topolin");						MissionPositions.Insert("10813.3 177.1 11039.1");
		MissionEvents.Insert("Ganja Grabin central Widok");							MissionPositions.Insert("10813.3 177.1 11039.1");
		MissionEvents.Insert("Ganja Grabin central Nadbor");						MissionPositions.Insert("10813.3 177.1 11039.1");
		MissionEvents.Insert("Ganja Lukow central Sitnik");							MissionPositions.Insert("3654.5 253.6 11761.7");
		MissionEvents.Insert("Ganja Lukow central Polana");							MissionPositions.Insert("3654.5 253.6 11761.7");
		MissionEvents.Insert("Ganja Lukow central Nadbor");							MissionPositions.Insert("3654.5 253.6 11761.7");
		MissionEvents.Insert("Ganja Olszanka northeast Sitnik");					MissionPositions.Insert("4977 274.1 7895.5");
		MissionEvents.Insert("Ganja Olszanka northeast Polana");					MissionPositions.Insert("4977 274.1 7895.5");
		MissionEvents.Insert("Ganja Olszanka northeast Widok");						MissionPositions.Insert("4977 274.1 7895.5");		
		MissionEvents.Insert("Ganja Sitnik west Topolin");							MissionPositions.Insert("11198.2 188.4 9524.5");
		MissionEvents.Insert("Ganja Sitnik west Nadbor");							MissionPositions.Insert("11198.2 188.4 9524.5");
		MissionEvents.Insert("Ganja Sitnik west Brena");							MissionPositions.Insert("11198.2 188.4 9524.5");
		MissionEvents.Insert("Ganja Sitnik west Widok");							MissionPositions.Insert("11198.2 188.4 9524.5");
		MissionEvents.Insert("Ganja Sitnik central Topolin");						MissionPositions.Insert("11653.4 188.9 9643.8");
		MissionEvents.Insert("Ganja Sitnik central Nadbor");						MissionPositions.Insert("11653.4 188.9 9643.8");
		MissionEvents.Insert("Ganja Sitnik central Brena");							MissionPositions.Insert("11653.4 188.9 9643.8");
		MissionEvents.Insert("Ganja Sitnik central Widok");							MissionPositions.Insert("11653.4 188.9 9643.8");
		MissionEvents.Insert("Ganja Sitnik north Topolin");							MissionPositions.Insert("11560.1 187.4 9778.5");
		MissionEvents.Insert("Ganja Sitnik north Nadbor");							MissionPositions.Insert("11560.1 187.4 9778.5");
		MissionEvents.Insert("Ganja Sitnik north Brena");							MissionPositions.Insert("11560.1 187.4 9778.5");
		MissionEvents.Insert("Ganja Sitnik north Widok");							MissionPositions.Insert("11560.1 187.4 9778.5");
		MissionEvents.Insert("Ganja Tarnow south Nadbor");							MissionPositions.Insert("9225.2 207.3 10768.5");
		MissionEvents.Insert("Ganja Tarnow south Topolin");							MissionPositions.Insert("9225.2 207.3 10768.5");		
		MissionEvents.Insert("Ganja Tarnow north Nadbor");							MissionPositions.Insert("9406.3 192.7 11017.1");
		MissionEvents.Insert("Ganja Tarnow north Topolin");							MissionPositions.Insert("9406.3 192.7 11017.1");
		MissionEvents.Insert("Ganja Topolin west Polana");							MissionPositions.Insert("1387.4 187.4 7391.7");
		MissionEvents.Insert("Ganja Topolin west Nadbor");							MissionPositions.Insert("1387.4 187.4 7391.7");
		MissionEvents.Insert("Ganja Topolin west Sitnik");							MissionPositions.Insert("1387.4 187.4 7391.7");
		MissionEvents.Insert("Ganja Topolin northwest Polana");						MissionPositions.Insert("1372.7 177.5 7499.7");
		MissionEvents.Insert("Ganja Topolin northwest Nadbor");						MissionPositions.Insert("1372.7 177.5 7499.7");
		MissionEvents.Insert("Ganja Topolin northwest Sitnik");						MissionPositions.Insert("1372.7 177.5 7499.7");
		MissionEvents.Insert("Ganja Topolin south Polana");							MissionPositions.Insert("1799.8 230.7 7043.6");
		MissionEvents.Insert("Ganja Topolin south Nadbor");							MissionPositions.Insert("1799.8 230.7 7043.6");
		MissionEvents.Insert("Ganja Topolin south Sitnik");							MissionPositions.Insert("1799.8 230.7 7043.6");
		MissionEvents.Insert("Ganja Topolin southeast Polana");						MissionPositions.Insert("1954.2 225.1 6949.7");
		MissionEvents.Insert("Ganja Topolin southeast Nadbor");						MissionPositions.Insert("1954.2 225.1 6949.7");
		MissionEvents.Insert("Ganja Topolin southeast Sitnik");						MissionPositions.Insert("1954.2 225.1 6949.7");
		MissionEvents.Insert("Ganja Topolin centralwest Polana");					MissionPositions.Insert("1510.9 185.2 7375.6");
		MissionEvents.Insert("Ganja Topolin centralwest Nadbor");					MissionPositions.Insert("1510.9 185.2 7375.6");
		MissionEvents.Insert("Ganja Topolin centralwest Sitnik");					MissionPositions.Insert("1510.9 185.2 7375.6");
		MissionEvents.Insert("Ganja Topolin centralwest Polana");					MissionPositions.Insert("1479 185.2 7392.8");
		MissionEvents.Insert("Ganja Topolin centralwest Nadbor");					MissionPositions.Insert("1479 185.2 7392.8");
		MissionEvents.Insert("Ganja Topolin centralwest Sitnik");					MissionPositions.Insert("1479 185.2 7392.8");
		MissionEvents.Insert("Ganja Topolin centraleast Polana");					MissionPositions.Insert("1864.9 202.1 7298.2");
		MissionEvents.Insert("Ganja Topolin centraleast Nadbor");					MissionPositions.Insert("1864.9 202.1 7298.2");
		MissionEvents.Insert("Ganja Topolin centraleast Sitnik");					MissionPositions.Insert("1864.9 202.1 7298.2");
		MissionEvents.Insert("Ganja Topolin central Polana");						MissionPositions.Insert("1710.9 183.5 7427.7");
		MissionEvents.Insert("Ganja Topolin central Nadbor");						MissionPositions.Insert("1710.9 183.5 7427.7");
		MissionEvents.Insert("Ganja Topolin central Sitnik");						MissionPositions.Insert("1710.9 183.5 7427.7");
		MissionEvents.Insert("Ganja Zalesie northeast Brena");						MissionPositions.Insert("685.3 241.9 5686.4");
		MissionEvents.Insert("Ganja Zalesie northeast Polana");						MissionPositions.Insert("685.3 241.9 5686.4");
		MissionEvents.Insert("Ganja Zalesie northeast Nadbor");						MissionPositions.Insert("685.3 241.9 5686.4");
		//186
		MissionEvents.Insert("Horde Bielawa west Residential_1");					MissionPositions.Insert("1343 276.3 9632.2");
		MissionEvents.Insert("Horde Bielawa southwest Residential_1");				MissionPositions.Insert("1447.4 268.7 9582.2");
		MissionEvents.Insert("Horde Bielawa central Residential_1");				MissionPositions.Insert("1418 275.7 9686.4");
		MissionEvents.Insert("Horde Bielawa central Residential_2");				MissionPositions.Insert("1385.5 281.6 9793.6");
		MissionEvents.Insert("Horde Bielawa central Residential_3");				MissionPositions.Insert("1451.7 274.7 9713.8");
		MissionEvents.Insert("Horde Bielawa central Residential_4");				MissionPositions.Insert("1511.4 279.2 9826.2");
		MissionEvents.Insert("Horde Bielawa central Residential_5");				MissionPositions.Insert("1586 269.6 9773.7");
		MissionEvents.Insert("Horde Brena north Residential_1");					MissionPositions.Insert("6374.7 191.2 11432.5");
		MissionEvents.Insert("Horde Brena north Residential_2");					MissionPositions.Insert("6396.7 194.1 11433.3");
		MissionEvents.Insert("Horde Brena north Residential_3");					MissionPositions.Insert("6492.6 188.4 11500.5");
		MissionEvents.Insert("Horde Brena central Residential_1");					MissionPositions.Insert("6548.5 186.1 11308.2");
		MissionEvents.Insert("Horde Brena central Residential_2");					MissionPositions.Insert("6550.7 185.5 11252.5");
		MissionEvents.Insert("Horde Brena south Residential_1");					MissionPositions.Insert("6476 178.4 11143.9");
		MissionEvents.Insert("Horde Brena southeast Residential_1");				MissionPositions.Insert("6644.5 174.9 11113.3");
		MissionEvents.Insert("Horde Gliniska northwest Residential_1");				MissionPositions.Insert("4819.9 204.6 10125.4");
		MissionEvents.Insert("Horde Gliniska southwest Residential_1");				MissionPositions.Insert("4907.2 195 9766.3");
		MissionEvents.Insert("Horde Gliniska central Residential_1");				MissionPositions.Insert("4990.8 196.1 9984.6");
		MissionEvents.Insert("Horde Gliniska central Residential_2");				MissionPositions.Insert("4982.1 196.6 10014.4");
		MissionEvents.Insert("Horde Gliniska central Residential_3");				MissionPositions.Insert("5043 197.4 9979");
		MissionEvents.Insert("Horde Gliniska central Residential_4");				MissionPositions.Insert("5031.6 193.8 9944.9");
		MissionEvents.Insert("Horde Gliniska south Residential_1");					MissionPositions.Insert("5131.5 180.4 9734.6");
		MissionEvents.Insert("Horde Grabin west Residential_1");					MissionPositions.Insert("10566.8 182.3 11055.1");
		MissionEvents.Insert("Horde Grabin west Residential_2");					MissionPositions.Insert("10528.9 179.7 11171.9");
		MissionEvents.Insert("Horde Grabin west Residential_3");					MissionPositions.Insert("10582.4 179.3 11140.2");
		MissionEvents.Insert("Horde Grabin central Residential_1");					MissionPositions.Insert("10768.3 176.6 11087.5");
		MissionEvents.Insert("Horde Grabin central Residential_2");					MissionPositions.Insert("10820.1 178 11141.4");
		MissionEvents.Insert("Horde Grabin central Residential_3");					MissionPositions.Insert("10853.2 179.2 11103.1");
		MissionEvents.Insert("Horde Grabin central Residential_4");					MissionPositions.Insert("10865.7 181.1 11054.6");
		MissionEvents.Insert("Horde Kolembrody central Residential_1");				MissionPositions.Insert("8401.8 182.2 12038.5");
		MissionEvents.Insert("Horde Kolembrody central Residential_2");				MissionPositions.Insert("8438.4 180.6 12061.9");
		MissionEvents.Insert("Horde Kolembrody central Residential_3");				MissionPositions.Insert("8449.5 178 12011.1");
		MissionEvents.Insert("Horde Kolembrody central Residential_4");				MissionPositions.Insert("8510.4 180.7 12034.2");
		MissionEvents.Insert("Horde Kolembrody central Residential_5");				MissionPositions.Insert("8555.1 180.3 12071.6");
		MissionEvents.Insert("Horde Lukow west Residential_1");						MissionPositions.Insert("3550.6 255.6 11742.1");
		MissionEvents.Insert("Horde Lukow southwest Residential_1");				MissionPositions.Insert("3617.9 258.4 11657");
		MissionEvents.Insert("Horde Lukow central Residential_1");					MissionPositions.Insert("3617.1 255.5 11804");
		MissionEvents.Insert("Horde Lukow central Residential_2");					MissionPositions.Insert("3633.6 250.6 11832.9");
		MissionEvents.Insert("Horde Lukow central Residential_3");					MissionPositions.Insert("3603 251.9 11855.4");
		MissionEvents.Insert("Horde Lukow central Residential_4");					MissionPositions.Insert("3741.2 253.4 11745.6");
		MissionEvents.Insert("Horde Lukow central Residential_5");					MissionPositions.Insert("3707.1 253.1 11781.7");
		MissionEvents.Insert("Horde Sitnik west Residential_1");					MissionPositions.Insert("11205.4 189.8 9493.4");
		MissionEvents.Insert("Horde Sitnik west Residential_2");					MissionPositions.Insert("11239.5 191 9554.7");
		MissionEvents.Insert("Horde Sitnik west Residential_3");					MissionPositions.Insert("11262.6 190.5 9571.4");
		MissionEvents.Insert("Horde Sitnik west Residential_4");					MissionPositions.Insert("11340.7 184.9 9550.7");
		MissionEvents.Insert("Horde Sitnik central Residential_1");					MissionPositions.Insert("11571 188.4 9602.8");
		MissionEvents.Insert("Horde Sitnik central Residential_2");					MissionPositions.Insert("11616 192.8 9649.7");
		MissionEvents.Insert("Horde Sitnik central Residential_3");					MissionPositions.Insert("11604.4 192.2 9563.7");
		MissionEvents.Insert("Horde Sitnik central Residential_4");					MissionPositions.Insert("11665.3 192.5 9566.9");
		MissionEvents.Insert("Horde Sobotka southwest Residential_1");				MissionPositions.Insert("6218.5 193 10115.6");
		MissionEvents.Insert("Horde Sobotka southwest Residential_2");				MissionPositions.Insert("6249.7 192.7 10108.4");
		MissionEvents.Insert("Horde Sobotka central Residential_1");				MissionPositions.Insert("6273.7 197.5 10215.7");
		MissionEvents.Insert("Horde Sobotka central Residential_2");				MissionPositions.Insert("6237.5 195.7 10187.8");
		MissionEvents.Insert("Horde Sobotka central Residential_3");				MissionPositions.Insert("6345.9 195.6 10258.5");
		MissionEvents.Insert("Horde Sobotka central Residential_4");				MissionPositions.Insert("6299.2 193.6 10115.1");
		MissionEvents.Insert("Horde Sobotka north Residential_1");					MissionPositions.Insert("6247.9 180.9 10395.8");
		MissionEvents.Insert("Horde Tarnow west Residential_1");					MissionPositions.Insert("9143.9 206.9 10928.2");
		MissionEvents.Insert("Horde Tarnow west Residential_2");					MissionPositions.Insert("9142.6 204.2 10965.3");
		MissionEvents.Insert("Horde Tarnow west Residential_3");					MissionPositions.Insert("9193.8 209.5 10867");
		MissionEvents.Insert("Horde Tarnow central Residential_1");					MissionPositions.Insert("9249.9 204.8 10840.9");
		MissionEvents.Insert("Horde Tarnow central Residential_2");					MissionPositions.Insert("9252.2 200.6 10900.7");
		MissionEvents.Insert("Horde Tarnow central Residential_3");					MissionPositions.Insert("9320.9 205.2 10803.9");
		MissionEvents.Insert("Horde Tarnow central Residential_4");					MissionPositions.Insert("9348.7 204.5 10808");
		//248
		MissionEvents.Insert("PlaneCrash Adamow northwest 255");					MissionPositions.Insert("2665.5 239.3 7081.6");
		MissionEvents.Insert("PlaneCrash Adamow north 225");						MissionPositions.Insert("2894.4 237.2 7456.9");
		MissionEvents.Insert("PlaneCrash Bielawa north 265");						MissionPositions.Insert("1525.3 304.4 10097");
		MissionEvents.Insert("PlaneCrash Bielawa southeast 265");					MissionPositions.Insert("2677.3 207.7 9331.4");
		MissionEvents.Insert("PlaneCrash Brena northwest 320");						MissionPositions.Insert("5551 202.6 11234.9");
		MissionEvents.Insert("PlaneCrash Brena northwest 150");						MissionPositions.Insert("6079.5 185 11289.3");
		MissionEvents.Insert("PlaneCrash Brena east 235");							MissionPositions.Insert("7044 174.5 11277.8");
		MissionEvents.Insert("PlaneCrash Brena northeast 60");						MissionPositions.Insert("6862.4 206.7 12053.3");
		MissionEvents.Insert("PlaneCrash Gliniska_Airfield west 225");				MissionPositions.Insert("3807 238.2 10166.1");
		MissionEvents.Insert("PlaneCrash Gliniska_Airfield central 45");			MissionPositions.Insert("4138.3 238.2 10495");
		MissionEvents.Insert("PlaneCrash Gliniska_Airfield north 5");				MissionPositions.Insert("3854.5 222.7 11115.2");
		MissionEvents.Insert("PlaneCrash Gliniska southeast 195");					MissionPositions.Insert("5531.5 178.8 9606.6");
		MissionEvents.Insert("PlaneCrash Gliniska northeast 20");					MissionPositions.Insert("5631.5 176.4 10360.2");
		MissionEvents.Insert("PlaneCrash Grabin west 330");							MissionPositions.Insert("9995.3 191.4 11067.1");
		MissionEvents.Insert("PlaneCrash Grabin southwest 55");						MissionPositions.Insert("10372.8 194.1 10874.3");
		MissionEvents.Insert("PlaneCrash Grabin south 60");							MissionPositions.Insert("10616.1 199.4 10439.6");
		MissionEvents.Insert("PlaneCrash Grabin southeast 355");					MissionPositions.Insert("11107.5 174.5 10665.3");
		MissionEvents.Insert("PlaneCrash Kolembrody east 130");						MissionPositions.Insert("9099.6 173 11881.9");
		MissionEvents.Insert("PlaneCrash Kolembrody southeast 295");				MissionPositions.Insert("8836.8 175.5 11660.7");
		MissionEvents.Insert("PlaneCrash Lukow northwest 90");						MissionPositions.Insert("2999.4 266.6 12600.2");
		MissionEvents.Insert("PlaneCrash Lukow southeast 25");						MissionPositions.Insert("3877.1 226.5 11211.5");
		MissionEvents.Insert("PlaneCrash Lukow east 60");							MissionPositions.Insert("4503.3 229.4 11963.5");
		MissionEvents.Insert("PlaneCrash Olszanka northwest 160");					MissionPositions.Insert("4419.7 240.9 7822.7");
		MissionEvents.Insert("PlaneCrash Olszanka northeast 15");					MissionPositions.Insert("5204 308.9 7735.3");
		MissionEvents.Insert("PlaneCrash Radacz northeast 225");					MissionPositions.Insert("4555.4 185.1 8486.2");
		MissionEvents.Insert("PlaneCrash Sitnik southwest 260");					MissionPositions.Insert("10910.9 191 8710.8");
		MissionEvents.Insert("PlaneCrash Sitnik northwest 50");						MissionPositions.Insert("11095.2 176.5 9898.6");
		MissionEvents.Insert("PlaneCrash Sitnik north 265");						MissionPositions.Insert("11644.6 175.5 10173.7");
		MissionEvents.Insert("PlaneCrash Tarnow southeast 350");					MissionPositions.Insert("9975.5 231.5 9779.4");
		MissionEvents.Insert("PlaneCrash Topolin north 350");						MissionPositions.Insert("1536.4 245.5 8601.7");
		MissionEvents.Insert("PlaneCrash Zalesie south 180");						MissionPositions.Insert("810.5 313.6 4684.1");		
		//279
		MissionEvents.Insert("Psilos Dolnik north Gieraltow");						MissionPositions.Insert("11505 271 978.7");
		MissionEvents.Insert("Psilos Gieraltow southwest Dolnik");					MissionPositions.Insert("10794 351.1 4014");
		MissionEvents.Insert("Psilos Kolembrody northeast Brena");					MissionPositions.Insert("8699 228.8 12499");
		MissionEvents.Insert("Psilos Kolembrody northeast Grabin");					MissionPositions.Insert("8699 228.8 12499");
		MissionEvents.Insert("Psilos Kolembrody northeast Sitnik");					MissionPositions.Insert("8699 228.8 12499");
		MissionEvents.Insert("Psilos Kolembrody northeast Tarnow");					MissionPositions.Insert("8699 228.8 12499");
		MissionEvents.Insert("Psilos Krsnik_Mountain north Brena");					MissionPositions.Insert("7881 273.8 10370");
		MissionEvents.Insert("Psilos Krsnik_Mountain north Grabin");				MissionPositions.Insert("7881 273.8 10370");
		MissionEvents.Insert("Psilos Krsnik_Mountain north Sitnik");				MissionPositions.Insert("7881 273.8 10370");
		MissionEvents.Insert("Psilos Krsnik_Mountain north Tarnow");				MissionPositions.Insert("7881 273.8 10370");
		MissionEvents.Insert("Psilos Lukow northeast Brena");						MissionPositions.Insert("4376 220.1 12428");
		MissionEvents.Insert("Psilos Lukow northeast Lukow");						MissionPositions.Insert("4376 220.1 12428");
		MissionEvents.Insert("Psilos Polana north Nadbor");							MissionPositions.Insert("3223 521.8 2278");
		MissionEvents.Insert("Psilos Polana east Nadbor");							MissionPositions.Insert("3649 529.5 2006");
		MissionEvents.Insert("Psilos Rodzanica southwest Nadbor");					MissionPositions.Insert("8840 451.4 1969");
		MissionEvents.Insert("Psilos Rodzanica southwest Gieraltow");				MissionPositions.Insert("8840 451.4 1969");
		MissionEvents.Insert("Psilos Rodzanica southwest Dolnik");					MissionPositions.Insert("8840 451.4 1969");
		MissionEvents.Insert("Psilos Rodzanica southeast Nadbor");					MissionPositions.Insert("9122 438.7 1978.7");
		MissionEvents.Insert("Psilos Rodzanica southeast Gieraltow");				MissionPositions.Insert("9122 438.7 1978.7");
		MissionEvents.Insert("Psilos Rodzanica southeast Dolnik");					MissionPositions.Insert("9122 438.7 1978.7");
		MissionEvents.Insert("Psilos Rodzanica east Nadbor");						MissionPositions.Insert("9343 388.7 2128");		
		MissionEvents.Insert("Psilos Rodzanica east Gieraltow");					MissionPositions.Insert("9343 388.7 2128");
		MissionEvents.Insert("Psilos Rodzanica east Dolnik");						MissionPositions.Insert("9343 388.7 2128");
		MissionEvents.Insert("Psilos Sowa_Mountain northeast Grabin");				MissionPositions.Insert("11874 274 12161");
		MissionEvents.Insert("Psilos Sowa_Mountain northeast Sitnik");				MissionPositions.Insert("11874 274 12161");
		MissionEvents.Insert("Psilos Sowa_Mountain northeast Tarnow");				MissionPositions.Insert("11874 274 12161");
		MissionEvents.Insert("Psilos Sowa_Mountain southeast Grabin");				MissionPositions.Insert("11888 231.8 11814");
		MissionEvents.Insert("Psilos Sowa_Mountain southeast Sitnik");				MissionPositions.Insert("11888 231.8 11814");
		MissionEvents.Insert("Psilos Sowa_Mountain southeast Tarnow");				MissionPositions.Insert("11888 231.8 11814");
		MissionEvents.Insert("Psilos Wrzeszcz west Nadbor");						MissionPositions.Insert("8825 348.2 4474");
		MissionEvents.Insert("Psilos Wrzeszcz west Gieraltow");						MissionPositions.Insert("8825 348.2 4474");
		MissionEvents.Insert("Psilos Wrzeszcz northeast Nadbor");					MissionPositions.Insert("9190 340.6 4573");
		MissionEvents.Insert("Psilos Wrzeszcz northeast Gieraltow");				MissionPositions.Insert("9190 340.6 4573");
		//312

		// ***Add new mission events below this line	
		//example: MissionEvents.Insert("MyNewMissionType Location LocationDir additionalParam");	MissionPositions.Insert("6869.6 350.3 10277.7");
	}
	
	static void BuildInstance()
	{
		//check for mission type to instantiate mission
		if ( m_MissionType == "BearHunt" )		m_MissionInstance = new BearHuntMission();	
		if ( m_MissionType == "Camp" )			m_MissionInstance = new CampMission();
		if ( m_MissionType == "CityMall" )		m_MissionInstance = new CityMallMission();
		if ( m_MissionType == "FreePigs" )		m_MissionInstance = new FreePigsMission();
		if ( m_MissionType == "Graveyard" )		m_MissionInstance = new GraveyardMission();
		if ( m_MissionType == "Horde" )			m_MissionInstance = new HordeMission();
		if ( m_MissionType == "PlaneCrash" )	m_MissionInstance = new PlaneCrashMission();
		if ( m_MissionType == "Psilos" )		m_MissionInstance = new PsilosMission();
		if ( m_MissionType == "Ganja" )			m_MissionInstance = new GanjaMission();
		if ( m_MissionType == "UrbanMall" )		m_MissionInstance = new UrbanMallMission();
		// ***Add new mission types below this line when new mission events were defined 
		//example: if ( ( m_MissionType == "MyNewMissionType" )		m_MissionInstance = new MyNewMission();
	}
		
	static bool GetBuildingsAtLoc( string MBuilding, string MLocation, out array<vector> BuildingPosList )
	{
		//Get positions of a unique mission building by the town/village name
		BuildingPosList = new array<vector>;
		
		if ( MBuilding == "Land_Village_PoliceStation_Enoch")
		{
			if ( MLocation == "Brena") 						BuildingPosList.Insert("6488.9 195.6 11373.7");
			else if ( MLocation == "Dolnik")				BuildingPosList.Insert("11531.1 219.3 505.9");
			else if ( MLocation == "Gieraltow")				BuildingPosList.Insert("11466.6 336.7 4559.7");
			else if ( MLocation == "Grabin") 				BuildingPosList.Insert("10545.3 186.7 11120.1");
			else if ( MLocation == "Lukow") 				BuildingPosList.Insert("3671 258.9 11778.3");
			else if ( MLocation == "Nadbor") 				BuildingPosList.Insert("5956.5 403.8 4130");
			else if ( MLocation == "Sitnik") 				BuildingPosList.Insert("11646.5 195.4 9614.5");
			else if ( MLocation == "Tarnow") 				BuildingPosList.Insert("9297.3 206.6 10848.3");
			else return false;			//No match by location						
		}
		else if ( MBuilding == "Land_FuelStation_Build_Enoch" || MBuilding == "Land_FuelStation_Build")
		{
			if ( MLocation == "Brena")						BuildingPosList.Insert("6383.8 176.3 11003.4");
			else if ( MLocation == "Nadbor")				BuildingPosList.Insert("6253.5 384.3 3941.2");
			else if ( MLocation == "Polana")				BuildingPosList.Insert("3328.7 488.8 2041.5");
			else if ( MLocation == "Sitnik")				BuildingPosList.Insert("11532.8 182.9 9463.4");
			else if ( MLocation == "Topolin")				BuildingPosList.Insert("2014.8 209.9 7364.9");
			else if ( MLocation == "Widok")					BuildingPosList.Insert("10227 244.3 2161.8");
			else return false;			//No match by location
		}
		else if ( MBuilding == "Land_Misc_TrailRoof_Small")
		{
			if ( MLocation == "Gieraltow")					BuildingPosList.Insert("11106.3 347.2 4332.4");
			else if ( MLocation == "Jantar_Lake")			BuildingPosList.Insert("3661.9 184.3 8910.9");
			else if ( MLocation == "Kolembrody")			BuildingPosList.Insert("8403.8 175.5 11829");
			else if ( MLocation == "Nadbor")				BuildingPosList.Insert("5944.6 395.4 3954.8");
			else if ( MLocation == "Radacz")				BuildingPosList.Insert("4042.1 209.4 7937.6");
			else if ( MLocation == "Swarog")				BuildingPosList.Insert("5143.8 476 2357.4");
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
		ExcludedTypes.InsertArray( {"Camp","Psilos","Graveyard","BearHunt","PlaneCrash","Horde"} );	
		string building;
		bool BuildingFound;
				
		for ( int i=0; i < ExcludedTypes.Count(); i++)	{ if ( type == ExcludedTypes.Get(i) ) return true;}
		
		//Add new mission type and building type for primary mission here!
		if ( type == "Apartment")					building = "Land_Tenement_Small";
		else if ( type == "CityMall")				building = "Land_City_Store";
		else if ( type == "FreePigs")				building = "Land_Farm_CowshedA";
		else if ( type == "Ganja")					building = "Land_Garage_Row_Small";
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
		else if ( type == "Psilos")					building = "Land_Village_PoliceStation_Enoch";
		else if ( type == "Ganja")
		{
			if ( location == "Widok")				building = "Land_FuelStation_Build";
			else 									building = "Land_FuelStation_Build_Enoch";
		}
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
			
			vector ori = player.GetOrientation();
			float heading = ori[0];
			if ( heading < 0 ) heading += 360;
			
			Msg1 = new Param1<string> ("Heading: "+ heading.ToString() +"°" );
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
		vector Center = "7680 0 7680";		//Livonia terrain center position
				
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