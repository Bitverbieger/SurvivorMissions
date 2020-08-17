class EventsWorldData extends SurvivorMissions
{
	const string EWD_MAP_NAME = "deerisle";
	const string EWD_SCRIPT_VERSION = "0.85";
	static ref array<string> MissionEvents = new array<string>;
	static ref array<vector> MissionPositions = new array<vector>;
	static ref array<Object> ObjectList = new array<Object>; 
	static ref array<CargoBase> ObjectCargoList = new array<CargoBase>;
	
	void EventsWorldData()
	{
		//Mission event																						//Mission position (absolute or BuildingPos)
		//0
		MissionEvents.Insert("Apartment Fishers_Camp farwest TenSmall_1");									MissionPositions.Insert("9671.924805 49.329838 5553.094238");
		MissionEvents.Insert("Apartment Nuclear_Power_Plant northwest TenSmall_1");							MissionPositions.Insert("4436.333008 29.929688 7317.311035");
		MissionEvents.Insert("Apartment Nuclear_Power_Plant northwest TenSmall_2");							MissionPositions.Insert("4465.372559 29.933887 7333.885254");
		MissionEvents.Insert("Apartment Oceanville east TenSmall_1");										MissionPositions.Insert("10308.458984 51.464256 4927.805176");
		MissionEvents.Insert("Apartment Portland southwest TenSmall_1");									MissionPositions.Insert("5755.898926 28.716354 13785.358398");
		MissionEvents.Insert("Apartment Portland southwest TenSmall_2");									MissionPositions.Insert("5755.893555 28.716518 13807.954102");
		MissionEvents.Insert("Apartment Portland southwest TenSmall_3");									MissionPositions.Insert("5755.892578 28.716515 13904.108398");
		MissionEvents.Insert("Apartment Portland southwest TenSmall_4");									MissionPositions.Insert("5755.909668 28.716515 13926.704102");
		MissionEvents.Insert("Apartment Portland southwest TenSmall_5");									MissionPositions.Insert("5830.858887 28.716515 13807.975586");
		MissionEvents.Insert("Apartment Portland southwest TenSmall_6");									MissionPositions.Insert("5830.858887 28.716240 13830.567383");
		MissionEvents.Insert("Apartment Portland southwest TenSmall_7");									MissionPositions.Insert("5830.866699 28.723083 13881.565430");
		MissionEvents.Insert("Apartment Portland southwest TenSmall_8");									MissionPositions.Insert("5830.854980 28.722775 13904.129883");
		MissionEvents.Insert("Apartment Portland southeast TenSmall_1");									MissionPositions.Insert("6262.079590 45.499664 14273.491211");
		MissionEvents.Insert("Apartment Portland southeast TenSmall_2");									MissionPositions.Insert("6286.874512 45.499641 14219.447266");
		MissionEvents.Insert("Apartment Portland southeast TenSmall_3");									MissionPositions.Insert("6310.609863 51.361954 14164.823242");
		MissionEvents.Insert("Apartment Portland east TenSmall_1");											MissionPositions.Insert("6216.393555 23.579681 14807.685547");
		MissionEvents.Insert("Apartment Portland east TenSmall_2");											MissionPositions.Insert("6222.413574 24.581688 14868.587891");
		MissionEvents.Insert("Apartment Portland east TenSmall_3");											MissionPositions.Insert("6254.566895 27.539675 14923.353516");
		MissionEvents.Insert("Apartment Portland east TenSmall_4");											MissionPositions.Insert("6305.078125 32.769669 14958.457031");
		MissionEvents.Insert("Apartment Portland east TenSmall_5");											MissionPositions.Insert("6372.072754 35.079666 14971.287109");
		MissionEvents.Insert("Apartment Portland east TenSmall_6");											MissionPositions.Insert("6432.998535 39.509674 14958.457031");
		MissionEvents.Insert("Apartment Portland east TenSmall_7");											MissionPositions.Insert("6479.404297 40.739674 14923.354492");
		MissionEvents.Insert("Apartment Portland east TenSmall_8");											MissionPositions.Insert("6525.905762 45.899677 14807.685547");
		MissionEvents.Insert("Apartment Portland east TenSmall_9");											MissionPositions.Insert("6513.327148 42.919678 14868.587891");
		MissionEvents.Insert("Apartment Racetrack south TenSmall_1");										MissionPositions.Insert("9940.232422 11.539656 10720.809570");
		MissionEvents.Insert("Apartment Racetrack south TenSmall_2");										MissionPositions.Insert("9962.547852 11.441322 10720.789063");
		MissionEvents.Insert("Apartment Racetrack south TenSmall_3");										MissionPositions.Insert("9985.018555 11.438314 10720.800781");
		MissionEvents.Insert("Apartment Racetrack south TenSmall_4");										MissionPositions.Insert("10007.270508 11.438314 10720.575195");
		MissionEvents.Insert("Apartment Racetrack south TenSmall_4");										MissionPositions.Insert("10029.794922 11.438314 10720.691406");
		MissionEvents.Insert("Apartment Stonington northwest TenSmall_1");									MissionPositions.Insert("6375.812500 52.649925 2321.396729");
		MissionEvents.Insert("Apartment Stonington west TenSmall_1");										MissionPositions.Insert("6526.860352 41.049732 1918.713623");
		MissionEvents.Insert("Apartment Stonington west TenSmall_2");										MissionPositions.Insert("6564.216797 41.049744 1873.414063");
		MissionEvents.Insert("Apartment Stonington central TenSmall_1");									MissionPositions.Insert("6761.022949 48.293152 1790.134155");
		MissionEvents.Insert("Apartment Stonington central TenSmall_2");									MissionPositions.Insert("6783.598145 48.320141 1789.827271");
		MissionEvents.Insert("Apartment Stonington central TenSmall_3");									MissionPositions.Insert("6813.987793 48.249531 1789.305542");
		MissionEvents.Insert("Apartment Stonington northeast TenSmall_1");									MissionPositions.Insert("7093.270996 54.429787 2073.759766");
		MissionEvents.Insert("Apartment Stonington northeast TenSmall_2");									MissionPositions.Insert("7093.259766 54.429787 2051.221680");
		MissionEvents.Insert("Apartment Stonington northeast TenSmall_3");									MissionPositions.Insert("7147.830566 45.187794 2261.040283");
		MissionEvents.Insert("Apartment Stonington east TenSmall_1");										MissionPositions.Insert("7343.733398 36.203079 1918.927734");
		MissionEvents.Insert("Apartment Stonington_Harbor southwest TenSmall_1");							MissionPositions.Insert("6161.986816 25.501499 1204.347900");
		MissionEvents.Insert("Apartment Stonington_Harbor southwest TenSmall_2");							MissionPositions.Insert("6231.155762 19.299961 1158.497437");
		MissionEvents.Insert("Apartment Stonington_Harbor southwest TenSmall_3");							MissionPositions.Insert("6246.491211 19.299038 1121.069458");
		MissionEvents.Insert("Apartment Stonington_Harbor southwest TenSmall_4");							MissionPositions.Insert("6316.153809 23.658760 1008.807739");
		MissionEvents.Insert("Apartment Stonington_Harbor west TenSmall_1");								MissionPositions.Insert("6343.125488 31.259754 1473.424072");
		MissionEvents.Insert("Apartment Stonington_Harbor west TenSmall_2");								MissionPositions.Insert("6548.763184 27.222439 1487.025391");
		MissionEvents.Insert("Apartment Stonington_Harbor west TenSmall_3");								MissionPositions.Insert("6548.175781 27.229763 1549.295532");
		MissionEvents.Insert("Apartment Stonington_Harbor west TenSmall_4");								MissionPositions.Insert("6570.267090 27.229961 1493.904419");
		MissionEvents.Insert("Apartment Stonington_Harbor west TenSmall_5");								MissionPositions.Insert("6589.859375 27.229755 1568.569214");
		MissionEvents.Insert("Apartment SW_Military_Base central TenSmall_1");								MissionPositions.Insert("3040.598633 31.949657 3989.840088");
		MissionEvents.Insert("Apartment Westbrook southwest TenSmall_1");									MissionPositions.Insert("3195.976807 31.664679 6249.708008");
		MissionEvents.Insert("Apartment Westbrook southwest TenSmall_2");									MissionPositions.Insert("3206.197510 31.176998 6321.012695");
		MissionEvents.Insert("Apartment Westbrook northeast TenSmall_1");									MissionPositions.Insert("3550.427246 29.930401 6605.354004");
		MissionEvents.Insert("Apartment Westbrook northeast TenSmall_2");									MissionPositions.Insert("3639.660889 29.930401 6579.345703");
		//53
		MissionEvents.Insert("BearHunt Airfield southwest Stonington");										MissionPositions.Insert("5353.7 123.7 2931.8");
		MissionEvents.Insert("BearHunt Airfield northeast Stonington");										MissionPositions.Insert("5730.7 78.8 3983.1");
		MissionEvents.Insert("BearHunt Greenville west Stonington");										MissionPositions.Insert("4401.1 6.8 1510.6");
		MissionEvents.Insert("BearHunt Greenville east Stonington");										MissionPositions.Insert("5020 38.6 1488.5");
		MissionEvents.Insert("BearHunt Hazelands_Harbor northwest Stonington");								MissionPositions.Insert("3611 25.2 2695.1");
		MissionEvents.Insert("BearHunt Hazelands north Stonington");										MissionPositions.Insert("4534.4 22.4 2995.6");
		MissionEvents.Insert("BearHunt Kushville north Stonington");										MissionPositions.Insert("7506.5 41 4312.9");
		MissionEvents.Insert("BearHunt Kushville east Stonington");											MissionPositions.Insert("7980.4 3.2 3987.1");
		MissionEvents.Insert("BearHunt Milo north Stonington");												MissionPositions.Insert("6452.5 71.9 4223.2");
		MissionEvents.Insert("BearHunt Milo south Georgestown");											MissionPositions.Insert("6613.1 129.5 3601.5");
		MissionEvents.Insert("BearHunt Milo east Stonington");												MissionPositions.Insert("6731.3 40.6 4105");
		MissionEvents.Insert("BearHunt Nuclear_Power_Plant southwest Georgestown");							MissionPositions.Insert("4559.2 109.7 6629.3");
		MissionEvents.Insert("BearHunt Nuclear_Power_Plant southeast Georgestown");							MissionPositions.Insert("5296.7 88 6753.9");
		MissionEvents.Insert("BearHunt Oldfield southwest Georgestown");									MissionPositions.Insert("5832 73.3 6749.1");
		MissionEvents.Insert("BearHunt Oldfield northwest Georgestown");									MissionPositions.Insert("5915 62.7 7191.1");
		MissionEvents.Insert("BearHunt Oldfield northeast Georgestown");									MissionPositions.Insert("6313.2 37.7 7254");
		MissionEvents.Insert("BearHunt Sandy_Bay west Georgestown");										MissionPositions.Insert("4994.4 38.4 7717.5");
		MissionEvents.Insert("BearHunt Sandy_Bay northeast Georgestown");									MissionPositions.Insert("5750.3 2.3 7841.2");
		MissionEvents.Insert("BearHunt Stonington_SuburbsNorth northwest Georgestown");						MissionPositions.Insert("6106.4 65.6 2541.6");
		MissionEvents.Insert("BearHunt Stonington_SuburbsNorth south Georgestown");							MissionPositions.Insert("6320.9 59 1775.5");
		MissionEvents.Insert("BearHunt Sunset_Cross west Georgestown");										MissionPositions.Insert("5975.8 101.5 6152.4");
		MissionEvents.Insert("BearHunt Sunset_Cross northwest Georgestown");								MissionPositions.Insert("6246.5 26.6 6573.1");
		MissionEvents.Insert("BearHunt Sunset_Cross southwest Georgestown");								MissionPositions.Insert("6361.1 90.7 5865.8");
		MissionEvents.Insert("BearHunt Sunset_Cross east Georgestown");										MissionPositions.Insert("7214.5 1.5 6488.2");
		MissionEvents.Insert("BearHunt Warren_Cove west Stonington");										MissionPositions.Insert("6712.6 111.5 5487.1");
		MissionEvents.Insert("BearHunt Warren_Cove south Stonington");										MissionPositions.Insert("7243.7 55.4 4936.6");
		MissionEvents.Insert("BearHunt Westbrook north Georgestown");										MissionPositions.Insert("3119.3 65.6 7363.9");
		MissionEvents.Insert("BearHunt Westbrook southwest Georgestown");									MissionPositions.Insert("2964.6 8.4 6056.6");
		//81
		MissionEvents.Insert("Camp Airfield southwest MedTent_1");											MissionPositions.Insert("4788.3 73.1 3132.1");
		MissionEvents.Insert("Camp Airfield southeast MedTent_1");											MissionPositions.Insert("6297.3 45.7 3035.5");
		MissionEvents.Insert("Camp Airfield east MedTent_1");												MissionPositions.Insert("6224.3 45.8 3715.8");
		MissionEvents.Insert("Camp Airfield north MedTent_1");												MissionPositions.Insert("5605.4 74 4094.6");
		MissionEvents.Insert("Camp Asheville north MedTent_1");												MissionPositions.Insert("7380.3 23.7 2984.2");
		MissionEvents.Insert("Camp Asheville southeast MedTent_1");											MissionPositions.Insert("7497.9 46.9 2443.7");
		MissionEvents.Insert("Camp Fishers_Camp north MedTent_1");											MissionPositions.Insert("10132.3 28.7 5620.5");
		MissionEvents.Insert("Camp Fishers_Camp east MedTent_1");											MissionPositions.Insert("10487.7 3.1 5601.1");
		MissionEvents.Insert("Camp Georgestown west MedTent_1");											MissionPositions.Insert("4171.9 2.4 4374.9");
		MissionEvents.Insert("Camp Georgestown north MedTent_1");											MissionPositions.Insert("4740 11.2 4759.2");
		MissionEvents.Insert("Camp Georgestown northeast MedTent_1");										MissionPositions.Insert("49809 6.6 4632.8");
		MissionEvents.Insert("Camp Greenville west MedTent_1");												MissionPositions.Insert("4463.5 2.2 1396.1");
		MissionEvents.Insert("Camp Greenville southwest MedTent_1");										MissionPositions.Insert("4675.9 2.2 1270.4");
		MissionEvents.Insert("Camp Greenville north MedTent_1");											MissionPositions.Insert("4886.3 12.9 1854.6");
		MissionEvents.Insert("Camp Greenville east MedTent_1");												MissionPositions.Insert("5032.8 39.7 1465.3");
		MissionEvents.Insert("Camp Hazelands west MedTent_1");												MissionPositions.Insert("4288.5 4 2534.1");
		MissionEvents.Insert("Camp Hazelands northeast MedTent_1");											MissionPositions.Insert("4700.5 27.1 2874.9");
		MissionEvents.Insert("Camp Hazelands east MedTent_1");												MissionPositions.Insert("4854.9 5.7 2717.6");
		MissionEvents.Insert("Camp Hazelands_Harbor northeast MedTent_1");									MissionPositions.Insert("4700.5 27.1 2874.9");
		MissionEvents.Insert("Camp Kushville north MedTent_1");												MissionPositions.Insert("7590.6 25.3 4199.2");
		MissionEvents.Insert("Camp Kushville southeast MedTent_1");											MissionPositions.Insert("7915.4 2.2 3638.6");
		MissionEvents.Insert("Camp Nuclear_Power_Plant northwest MedTent_1");								MissionPositions.Insert("3846.7 106.9 7218.5");
		MissionEvents.Insert("Camp Nuclear_Power_Plant southwest MedTent_1");								MissionPositions.Insert("4391.9 123.2 6522.5");
		MissionEvents.Insert("Camp Nuclear_Power_Plant southeast MedTent_1");								MissionPositions.Insert("5302.4 87.4 6751.5");
		MissionEvents.Insert("Camp Oceanville northwest MedTent_1");										MissionPositions.Insert("9881 51.3 5106.7");
		MissionEvents.Insert("Camp Oceanville east MedTent_1");												MissionPositions.Insert("10583.3 28 4958.5");
		MissionEvents.Insert("Camp Oldfield north MedTent_1");												MissionPositions.Insert("6152.8 29.7 7192.1");
		MissionEvents.Insert("Camp Oldfield north MedTent_1");												MissionPositions.Insert("6152.8 29.7 7192.1");
		MissionEvents.Insert("Camp Prison west MedTent_1");													MissionPositions.Insert("5111.5 13 601.9");
		MissionEvents.Insert("Camp Prison northwest MedTent_1");											MissionPositions.Insert("5242 3.5 846.9");
		MissionEvents.Insert("Camp Sandy_Bay north MedTent_1");												MissionPositions.Insert("5073.3 37.9 7804.4");
		MissionEvents.Insert("Camp Sandy_Bay south MedTent_1");												MissionPositions.Insert("5323.4 5.5 7273.5");
		MissionEvents.Insert("Camp Smallville southwest MedTent_1");										MissionPositions.Insert("10042.4 5.4 4353.6");
		MissionEvents.Insert("Camp Smallville northeast MedTent_1");										MissionPositions.Insert("10574.2 12.5 4520.7");
		MissionEvents.Insert("Camp Stonington northeast MedTent_1");										MissionPositions.Insert("7546.8 58.3 2218.9");
		MissionEvents.Insert("Camp Stonington_Industrial northwest MedTent_1");								MissionPositions.Insert("6590.1 113.1 2563.7");
		MissionEvents.Insert("Camp Stonington_SuburbsNorth north MedTent_1");								MissionPositions.Insert("6253.2 73.8 2570.8");
		MissionEvents.Insert("Camp Stonington_SuburbsNorth south MedTent_1");								MissionPositions.Insert("6318.4 59.7 1805.6");
		MissionEvents.Insert("Camp Stonington_SuburbsSouth east MedTent_1");								MissionPositions.Insert("7959.7 2.1 1534.4");
		MissionEvents.Insert("Camp Starks_Castle west MedTent_1");											MissionPositions.Insert("5518.4 54.3 2431.7");
		MissionEvents.Insert("Camp Starks_Castle inside MedTent_1");										MissionPositions.Insert("5727.1 108.1 2476.4");
		MissionEvents.Insert("Camp Starks_Castle northeast MedTent_1");										MissionPositions.Insert("5889.8 47.3 2636.4");
		MissionEvents.Insert("Camp Sunset_Cross west MedTent_1");											MissionPositions.Insert("5856 147.3 6029.4");
		MissionEvents.Insert("Camp Sunset_Cross northeast MedTent_1");										MissionPositions.Insert("7029.8 2.7 6581.2");
		MissionEvents.Insert("Camp SW_Military_Base west MedTent_1");										MissionPositions.Insert("2504.1 34.9 4447.4");
		MissionEvents.Insert("Camp SW_Military_Base south MedTent_1");										MissionPositions.Insert("2797.5 22.5 3307");
		MissionEvents.Insert("Camp SW_Military_Base east MedTent_1");										MissionPositions.Insert("3378.3 5.6 3821.6");
		MissionEvents.Insert("Camp Warren_Cove west MedTent_1");											MissionPositions.Insert("6681.5 120.3 5469.1");
		MissionEvents.Insert("Camp Warren_Cove southwest MedTent_1");										MissionPositions.Insert("6895.5 3.4 5111.2");
		MissionEvents.Insert("Camp Warren_Cove east MedTent_1");											MissionPositions.Insert("7264.1 18 5528");
		MissionEvents.Insert("Camp Westbrook west MedTent_1");												MissionPositions.Insert("2941.3 10.6 6166.6");
		MissionEvents.Insert("Camp Westbrook northwest MedTent_1");											MissionPositions.Insert("3078.8 6 6805.2");
		MissionEvents.Insert("Camp Westbrook southwest MedTent_1");											MissionPositions.Insert("3072.5 24.5 5824.8");
		//134
		MissionEvents.Insert("CityMall Smallville_WestBridge south Warren_Cove");							MissionPositions.Insert("9762.9 7.3 4215.4");
		MissionEvents.Insert("CityMall Stonington_SuburbsSouth south Hazelands");							MissionPositions.Insert("7118 4.3 1331.1");
		MissionEvents.Insert("CityMall Stonington_SuburbsSouth south Airfield");							MissionPositions.Insert("7118 4.3 1331.1");
		MissionEvents.Insert("CityMall Stonington_Harbor west Hazelands");									MissionPositions.Insert("6611.8 19.3 1485.3");
		MissionEvents.Insert("CityMall Stonington_Harbor west Airfield");									MissionPositions.Insert("6611.8 19.3 1485.3");
		//139
		MissionEvents.Insert("CityStore Airfield central Hazelands");										MissionPositions.Insert("5531.7 76.4 3859.8");
		MissionEvents.Insert("CityStore Airfield central Stonington_SuburbsNorth");							MissionPositions.Insert("5531.7 76.4 3859.8");
		MissionEvents.Insert("CityStore Airfield central Stonington_SuburbsSouth");							MissionPositions.Insert("5531.7 76.4 3859.8");
		MissionEvents.Insert("CityStore Airfield central Warren_Cove");										MissionPositions.Insert("5531.7 76.4 3859.8");
		MissionEvents.Insert("CityStore Airfield central Westbrook");										MissionPositions.Insert("5531.7 76.4 3859.8");
		MissionEvents.Insert("CityStore Fishers_Camp_West north Smallville_WestBridge");					MissionPositions.Insert("9666.3 41.5 5492.9");
		MissionEvents.Insert("CityStore Hazelands central Airfield");										MissionPositions.Insert("4587.9 5.1 2722.5");
		MissionEvents.Insert("CityStore Hazelands central Georgestown");									MissionPositions.Insert("4587.9 5.1 2722.5");
		MissionEvents.Insert("CityStore Hazelands central Stonington_SuburbsNorth");						MissionPositions.Insert("4587.9 5.1 2722.5");
		MissionEvents.Insert("CityStore Hazelands central Stonington_SuburbsSouth");						MissionPositions.Insert("4587.9 5.1 2722.5");
		MissionEvents.Insert("CityStore Hazelands central Warren_Cove");									MissionPositions.Insert("4587.9 5.1 2722.5");
		MissionEvents.Insert("CityStore Hazelands central Westbrook");										MissionPositions.Insert("4587.9 5.1 2722.5");
		MissionEvents.Insert("CityStore Oceanville central Smallville_WestBridge");							MissionPositions.Insert("10252.3 44.3 4913.3");
		MissionEvents.Insert("CityStore Sandy_Bay central Georgestown");									MissionPositions.Insert("5434.7 4.7 7652");
		MissionEvents.Insert("CityStore Sandy_Bay central Warren_Cove");									MissionPositions.Insert("5434.7 4.7 7652");
		MissionEvents.Insert("CityStore Sandy_Bay central Westbrook");										MissionPositions.Insert("5434.7 4.7 7652");
		MissionEvents.Insert("CityStore Stonington_Harbor central Airfield");								MissionPositions.Insert("6816.1 5.2 1486.9");
		MissionEvents.Insert("CityStore Stonington_Harbor central Hazelands");								MissionPositions.Insert("6816.1 5.2 1486.9");
		MissionEvents.Insert("CityStore Stonington_SuburbsSouth east Airfield");							MissionPositions.Insert("7353.7 5.2 1426.4");
		MissionEvents.Insert("CityStore Stonington_SuburbsSouth east Hazelands");							MissionPositions.Insert("7353.7 5.2 1426.4");
		MissionEvents.Insert("CityStore Sunset_Cross central Westbrook");									MissionPositions.Insert("6659.8 17.5 6424");
		MissionEvents.Insert("CityStore Sunset_Cross central Georgestown");									MissionPositions.Insert("6659.8 17.5 6424");
		MissionEvents.Insert("CityStore Sunset_Cross central Airfield");									MissionPositions.Insert("6659.8 17.5 6424");
		MissionEvents.Insert("CityStore SW_Military_Base northeast Airfield");								MissionPositions.Insert("3461.8 32.7 4832.6");
		MissionEvents.Insert("CityStore SW_Military_Base northeast Hazelands");								MissionPositions.Insert("3461.8 32.7 4832.6");
		MissionEvents.Insert("CityStore SW_Military_Base northeast Warren_Cove");							MissionPositions.Insert("3461.8 32.7 4832.6");
		MissionEvents.Insert("CityStore SW_Military_Base northeast Westbrook");								MissionPositions.Insert("3461.8 32.7 4832.6");
		//166
		MissionEvents.Insert("Horde Georgestown west Residential_1");										MissionPositions.Insert("4298.4 3.6 4401.7");
		MissionEvents.Insert("Horde Georgestown west Residential_2");										MissionPositions.Insert("4474.9 11.9 4434.4");
		MissionEvents.Insert("Horde Georgestown central Residential_1");									MissionPositions.Insert("4735.4 21.5 4403.4");
		MissionEvents.Insert("Horde Georgestown central Residential_2");									MissionPositions.Insert("4754.3 26.7 4368.8");
		MissionEvents.Insert("Horde Georgestown central Residential_3");									MissionPositions.Insert("4675.3 18.6 4378.4");
		MissionEvents.Insert("Horde Georgestown central Residential_4");									MissionPositions.Insert("4680.6 22 4346.2");
		MissionEvents.Insert("Horde Georgestown south Residential_1");										MissionPositions.Insert("4638.7 12.9 4268");
		MissionEvents.Insert("Horde Georgestown south Residential_2");										MissionPositions.Insert("4598.4 11.9 4209.4");
		MissionEvents.Insert("Horde Georgestown south Residential_3");										MissionPositions.Insert("4441.9 14.3 4241.9");
		MissionEvents.Insert("Horde Georgestown northeast Residential_1");									MissionPositions.Insert("4856.4 18.4 4447.9");
		MissionEvents.Insert("Horde Greenville northwest Residential_1");									MissionPositions.Insert("4840.4 9 1544.2");
		MissionEvents.Insert("Horde Greenville central Residential_1");										MissionPositions.Insert("4747.1 8.4 1506.1");
		MissionEvents.Insert("Horde Greenville central Residential_2");										MissionPositions.Insert("4683.5 8.3 1440.9");
		MissionEvents.Insert("Horde Greenville central Residential_3");										MissionPositions.Insert("4794 10.5 1473.9");
		MissionEvents.Insert("Horde Greenville central Residential_4");										MissionPositions.Insert("4704 9.1 1527.3");
		MissionEvents.Insert("Horde Greenville southeast Residential_1");									MissionPositions.Insert("4819.6 14.5 1381.3");
		MissionEvents.Insert("Horde Hazelands west Residential_1");											MissionPositions.Insert("4074.1 6.5 2720");
		MissionEvents.Insert("Horde Hazelands west Residential_2");											MissionPositions.Insert("4206.1 5.5 2772.6");
		MissionEvents.Insert("Horde Hazelands west Residential_3");											MissionPositions.Insert("4230.4 6.1 2780.7");
		MissionEvents.Insert("Horde Hazelands west Residential_4");											MissionPositions.Insert("4136.4 23.6 2847.9");
		MissionEvents.Insert("Horde Hazelands north Residential_1");										MissionPositions.Insert("4267.6 7.6 3045.9");
		MissionEvents.Insert("Horde Hazelands north Residential_2");										MissionPositions.Insert("4349 10.2 3061.5");
		MissionEvents.Insert("Horde Hazelands central Residential_1");										MissionPositions.Insert("4440.6 4.5 2866.6");
		MissionEvents.Insert("Horde Hazelands central Residential_2");										MissionPositions.Insert("4460 9 2844");
		MissionEvents.Insert("Horde Hazelands central Residential_3");										MissionPositions.Insert("4496.1 9 2824.5");
		MissionEvents.Insert("Horde Hazelands central Residential_4");										MissionPositions.Insert("4616 9.2 2751.9");
		MissionEvents.Insert("Horde Hazelands south Residential_1");										MissionPositions.Insert("4616 3.6 2593");
		MissionEvents.Insert("Horde Hazelands south Residential_2");										MissionPositions.Insert("4466.3 5 2559.7");
		MissionEvents.Insert("Horde Hazelands southeast Residential_1");									MissionPositions.Insert("4548.6 7.5 2673.1");
		MissionEvents.Insert("Horde Hazelands southeast Residential_2");									MissionPositions.Insert("4643.7 2.8 2532.7");
		MissionEvents.Insert("Horde Kushville north Residential_1");										MissionPositions.Insert("7437.4 21.9 4122");
		MissionEvents.Insert("Horde Kushville central Residential_1");										MissionPositions.Insert("7554.3 29.8 3869.5");
		MissionEvents.Insert("Horde Kushville central Residential_2");										MissionPositions.Insert("7590.3 28.3 3882.5");
		MissionEvents.Insert("Horde Kushville south Residential_1");										MissionPositions.Insert("7512.4 26.5 3758.7");
		MissionEvents.Insert("Horde Kushville east Residential_1");											MissionPositions.Insert("7749 5.2 3949.1");
		MissionEvents.Insert("Horde Kushville east Residential_2");											MissionPositions.Insert("7671 18.5 3878.4");
		MissionEvents.Insert("Horde Kushville east Residential_3");											MissionPositions.Insert("7800.4 6.9 3790.5");
		MissionEvents.Insert("Horde Kushville east Residential_4");											MissionPositions.Insert("7797.9 4.3 3842.4");
		MissionEvents.Insert("Horde Oldfield north Residential_1");											MissionPositions.Insert("6126 34.5 6956.8");
		MissionEvents.Insert("Horde Oldfield north Residential_2");											MissionPositions.Insert("6049.1 36.4 6916.7");
		MissionEvents.Insert("Horde Oldfield north Residential_3");											MissionPositions.Insert("6009.9 33.6 6866.4");
		MissionEvents.Insert("Horde Oldfield central Residential_1");										MissionPositions.Insert("6097.9 35.9 6890.8");
		MissionEvents.Insert("Horde Oldfield south Residential_1");											MissionPositions.Insert("6424.7 21.9 6779.8");
		MissionEvents.Insert("Horde Oldfield south Residential_2");											MissionPositions.Insert("6325.3 21 6777.4");
		MissionEvents.Insert("Horde Oldfield southeast Residential_1");										MissionPositions.Insert("6326.9 22.8 6959.4");
		MissionEvents.Insert("Horde Oldfield southeast Residential_2");										MissionPositions.Insert("6306.7 26.8 7009.5");
		MissionEvents.Insert("Horde Oldfield east Residential_1");											MissionPositions.Insert("6230.6 32.5 7047.6");
		MissionEvents.Insert("Horde Sandy_Bay west Residential_1");											MissionPositions.Insert("5169.6 26.2 7780.5");
		MissionEvents.Insert("Horde Sandy_Bay north Residential_1");										MissionPositions.Insert("5512 7.9 7693.3");
		MissionEvents.Insert("Horde Sandy_Bay north Residential_2");										MissionPositions.Insert("5515.9 4.2 7646.6");
		MissionEvents.Insert("Horde Sandy_Bay north Residential_3");										MissionPositions.Insert("5531.6 7.9 7733.1");
		MissionEvents.Insert("Horde Sandy_Bay north Residential_4");										MissionPositions.Insert("5551.1 3.6 7877.3");
		MissionEvents.Insert("Horde Sandy_Bay north Residential_5");										MissionPositions.Insert("5372.9 6.8 7814.6");
		MissionEvents.Insert("Horde Sandy_Bay south Residential_1");										MissionPositions.Insert("5334.2 2.8 7416.8");
		MissionEvents.Insert("Horde Sandy_Bay south Residential_2");										MissionPositions.Insert("5272.3 3.2 7440.1");
		MissionEvents.Insert("Horde Sandy_Bay south Residential_3");										MissionPositions.Insert("5314.3 5.9 7452");
		MissionEvents.Insert("Horde Sandy_Bay south Residential_4");										MissionPositions.Insert("5342.2 4.8 7466");
		MissionEvents.Insert("Horde Sandy_Bay south Residential_5");										MissionPositions.Insert("5325.4 2.6 7499.8");
		MissionEvents.Insert("Horde Sandy_Bay south Residential_6");										MissionPositions.Insert("5293.7 2.8 7491.4");
		MissionEvents.Insert("Horde Sunset_Cross west Residential_1");										MissionPositions.Insert("6413.8 15.5 6253.9");
		MissionEvents.Insert("Horde Sunset_Cross west Residential_2");										MissionPositions.Insert("6469.9 18.3 6277.4");
		MissionEvents.Insert("Horde Sunset_Cross west Residential_3");										MissionPositions.Insert("6534.2 20.2 6311.4");
		MissionEvents.Insert("Horde Sunset_Cross north Residential_1");										MissionPositions.Insert("6578.6 15.8 6469.4");
		MissionEvents.Insert("Horde Sunset_Cross north Residential_2");										MissionPositions.Insert("6550.3 15.2 6499.7");
		MissionEvents.Insert("Horde Sunset_Cross central Residential_1");									MissionPositions.Insert("6561 16 6343.7");
		MissionEvents.Insert("Horde Sunset_Cross central Residential_2");									MissionPositions.Insert("6585 20.3 6389.5");
		MissionEvents.Insert("Horde Sunset_Cross south Residential_1");										MissionPositions.Insert("6661.7 15.2 6249.9");
		MissionEvents.Insert("Horde Sunset_Cross southeast Residential_1");									MissionPositions.Insert("6727 18.4 6340.3");
		MissionEvents.Insert("Horde Warren_Cove southwest Residential_1");									MissionPositions.Insert("6966.6 6.3 5276.8");
		MissionEvents.Insert("Horde Warren_Cove southwest Residential_2");									MissionPositions.Insert("7035.4 3.3 5250.7");
		MissionEvents.Insert("Horde Warren_Cove central Residential_1");									MissionPositions.Insert("7060 10.2 5411.1");
		MissionEvents.Insert("Horde Warren_Cove central Residential_2");									MissionPositions.Insert("7050.2 8.5 5377.5");
		MissionEvents.Insert("Horde Warren_Cove central Residential_3");									MissionPositions.Insert("7079 3.9 5371.8");
		MissionEvents.Insert("Horde Warren_Cove central Residential_4");									MissionPositions.Insert("7056.2 9.7 5464.2");
		MissionEvents.Insert("Horde Warren_Cove central Residential_5");									MissionPositions.Insert("7114.8 13.4 5485.5");
		MissionEvents.Insert("Horde Warren_Cove central Residential_6");									MissionPositions.Insert("7025.1 6 5537.2");
		MissionEvents.Insert("Horde Warren_Cove central Residential_7");									MissionPositions.Insert("7106.2 14.8 5528.9");
		MissionEvents.Insert("Horde Warren_Cove south Residential_1");										MissionPositions.Insert("7104.9 5 5260.8");
		MissionEvents.Insert("Horde Warren_Cove south Residential_2");										MissionPositions.Insert("7087.2 4.9 5300.3");
		//245
		MissionEvents.Insert("PlaneCrash Airfield east 22");												MissionPositions.Insert("5810.5 74 3688.8");
		MissionEvents.Insert("PlaneCrash Airfield southwest 240");											MissionPositions.Insert("5252.8 74 3258.4");
		MissionEvents.Insert("PlaneCrash Asheville northeast 116");											MissionPositions.Insert("7729.4 28.4 2936.5");
		MissionEvents.Insert("PlaneCrash Hazelands west 116");												MissionPositions.Insert("4022 10 3210.7");
		MissionEvents.Insert("PlaneCrash Hazelands west 302");												MissionPositions.Insert("3751.3 9.8 3362.8");
		MissionEvents.Insert("PlaneCrash Hazelands south 231");												MissionPositions.Insert("4316.5 24.6 1819.8");
		MissionEvents.Insert("PlaneCrash Kushville west 347");												MissionPositions.Insert("6813.2 48.8 3998.4");
		MissionEvents.Insert("PlaneCrash Kushville west 257");												MissionPositions.Insert("7160.1 54.8 3834.2");
		MissionEvents.Insert("PlaneCrash Kushville northwest 231");											MissionPositions.Insert("7066.9 22.1 4260.6");
		MissionEvents.Insert("PlaneCrash Kushville east 35");												MissionPositions.Insert("7852.3 7.7 4224.5");
		MissionEvents.Insert("PlaneCrash Milo east 15");													MissionPositions.Insert("6832.8 52.7 3945.9");
		MissionEvents.Insert("PlaneCrash Nuclear_Power_Plant west 231");									MissionPositions.Insert("4180.8 33.6 6817.5");
		MissionEvents.Insert("PlaneCrash Portland southeast 65");											MissionPositions.Insert("7069.2 24.3 14064.9");
		MissionEvents.Insert("PlaneCrash Prison north 20");													MissionPositions.Insert("5662 49.1 1532.6");
		MissionEvents.Insert("PlaneCrash Sandy_Bay north 289");												MissionPositions.Insert("5409.3 15.2 8129.1");
		MissionEvents.Insert("PlaneCrash Starks_Castle southwest 291");										MissionPositions.Insert("5587.7 35.1 1967.8");
		MissionEvents.Insert("PlaneCrash Westbrook east 60");												MissionPositions.Insert("3933.2 27.6 6509.2");
		//262
		MissionEvents.Insert("Shrooms Airfield west Stonington_Harbor");									MissionPositions.Insert("4833.4 70.1 3085.7");
		MissionEvents.Insert("Shrooms Airfield north Stonington");											MissionPositions.Insert("5523.7 74 4078.9");
		MissionEvents.Insert("Shrooms Asheville northeast Smallville_WestBridge");							MissionPositions.Insert("7528.6 36.4 2814.3");
		MissionEvents.Insert("Shrooms Georgestown north Sandy_Bay");										MissionPositions.Insert("4772 15.9 4652.2");
		MissionEvents.Insert("Shrooms Georgestown southwest Stonington_Harbor");							MissionPositions.Insert("4040.2 5.5 4104.1");
		MissionEvents.Insert("Shrooms Greenville east SW_Military_Base");									MissionPositions.Insert("5018.4 39.5 1474.8");
		MissionEvents.Insert("Shrooms Greenville west Stonington");											MissionPositions.Insert("4418.2 4.8 1496.8");
		MissionEvents.Insert("Shrooms Greenville southwest Stonington_Harbor");								MissionPositions.Insert("4667.3 2.6 1260.5");
		MissionEvents.Insert("Shrooms Hazelands east Stonington");											MissionPositions.Insert("4869.8 6.4 2726.8");
		MissionEvents.Insert("Shrooms Hazelands north SW_Military_Base");									MissionPositions.Insert("4437.3 11.1 2993.4");
		MissionEvents.Insert("Shrooms Kushville north Stonington_Harbor");									MissionPositions.Insert("7597.9 31.8 4250.8");
		MissionEvents.Insert("Shrooms Kushville southwest Smallville_WestBridge");							MissionPositions.Insert("7278.8 42.7 3773.4");
		MissionEvents.Insert("Shrooms Milo south Stonington_Harbor");										MissionPositions.Insert("6579.1 57.2 3702.9");
		MissionEvents.Insert("Shrooms Oceanville east Smallville_WestBridge");								MissionPositions.Insert("10602.3 25.8 4950.2");
		MissionEvents.Insert("Shrooms Oceanville northwest Smallville_WestBridge");							MissionPositions.Insert("9894.7 52 5080.5");
		MissionEvents.Insert("Shrooms Oldfield south Westbrook");											MissionPositions.Insert("6009.5 33 6643.7");
		MissionEvents.Insert("Shrooms Oldfield north Nuclear_Power_Plant");									MissionPositions.Insert("6149 29 7179.5");
		MissionEvents.Insert("Shrooms Portland southeast Portland");										MissionPositions.Insert("6630.4 33.9 14110.3");
		MissionEvents.Insert("Shrooms Sandy_Bay northwest Westbrook");										MissionPositions.Insert("5225.9 45.3 7948.3");
		MissionEvents.Insert("Shrooms Sunset_Cross east Westbrook");										MissionPositions.Insert("7012.6 4.8 6496.4");
		MissionEvents.Insert("Shrooms Warren_Cove southwest Nuclear_Power_Plant");							MissionPositions.Insert("6773.6 27 5265.1");
		MissionEvents.Insert("Shrooms Warren_Cove southwest Westbrook");									MissionPositions.Insert("6773.6 27 5265.1");
		MissionEvents.Insert("Shrooms Warren_Cove southwest Stonington");									MissionPositions.Insert("6773.6 27 5265.1");
		MissionEvents.Insert("Shrooms Warren_Cove east Sandy_Bay");											MissionPositions.Insert("7325.5 6 5576.8");
		MissionEvents.Insert("Shrooms Warren_Cove east Nuclear_Power_Plant");								MissionPositions.Insert("7325.5 6 5576.8");
		MissionEvents.Insert("Shrooms Warren_Cove east Stonington");										MissionPositions.Insert("7325.5 6 5576.8");
		MissionEvents.Insert("Shrooms Westbrook southwest Nuclear_Power_Plant");							MissionPositions.Insert("2909.5 4.2 5963.4");
		MissionEvents.Insert("Shrooms Westbrook southwest Sandy_Bay");										MissionPositions.Insert("2909.5 4.2 5963.4");
		MissionEvents.Insert("Shrooms Westbrook southwest SW_Military_Base");								MissionPositions.Insert("2909.5 4.2 5963.4");
		MissionEvents.Insert("Shrooms Westbrook northwest Nuclear_Power_Plant");							MissionPositions.Insert("3077.7 6.2 6800");
		MissionEvents.Insert("Shrooms Westbrook northwest Sandy_Bay");										MissionPositions.Insert("3077.7 6.2 6800");
		MissionEvents.Insert("Shrooms Westbrook northwest SW_Military_Base");								MissionPositions.Insert("3077.7 6.2 6800");
		//294
		MissionEvents.Insert("Transport Georgestown west Kushville_East");									MissionPositions.Insert("4318.4 5 4678.2");
		MissionEvents.Insert("Transport Hazelands central Swamp_Harbor");									MissionPositions.Insert("4607.2 4.2 2691.3");
		MissionEvents.Insert("Transport Hazelands central Sunset_Cross");									MissionPositions.Insert("4681.1 4.4 2651");
		MissionEvents.Insert("Transport Kushville central Portland");										MissionPositions.Insert("7560.1 25.5 3947.9");
		MissionEvents.Insert("Transport Oceanville central Swamp_Harbor");									MissionPositions.Insert("10264.7 43.7 4882.9");
		MissionEvents.Insert("Transport Oceanville central Georgestown");									MissionPositions.Insert("10264.8 43.7 4867");
		MissionEvents.Insert("Transport Oceanville north Georgestown");										MissionPositions.Insert("10262 43 5001.6");
		MissionEvents.Insert("Transport Portland_NorthApartments west Kushville");							MissionPositions.Insert("6325.8 38.8 14830");
		MissionEvents.Insert("Transport Portland_NorthApartments east Swamp_Harbor");						MissionPositions.Insert("6404.5 38.8 14801.5");
		MissionEvents.Insert("Transport Portland_SouthApartments east Sunset_Cross");						MissionPositions.Insert("5762.8 20 13879");
		MissionEvents.Insert("Transport Portland_SouthCentral southwest Georgestown");						MissionPositions.Insert("5762.8 20 13879");
		MissionEvents.Insert("Transport Portland_Central southwest Kushville");								MissionPositions.Insert("5976.3 7.6 14529");
		MissionEvents.Insert("Transport Sandy_Bay central Portland");										MissionPositions.Insert("5352 4.3 7581.1");
		MissionEvents.Insert("Transport Sandy_Bay central Stonington");										MissionPositions.Insert("5443.1 4.3 7731.3");
		MissionEvents.Insert("Transport Smallville central Swamp_Harbor");									MissionPositions.Insert("10367.9 10.5 4412.5");
		MissionEvents.Insert("Transport Stonington_Central north Sunset_Cross");							MissionPositions.Insert("6893.9 40.5 2037.8");
		MissionEvents.Insert("Transport Stonington_Central south Swamp_Harbor");							MissionPositions.Insert("6862.4 40.5 1830.1");
		MissionEvents.Insert("Transport Stonington_West central Kushville_East");							MissionPositions.Insert("6520.6 33.3 1876.6");
		MissionEvents.Insert("Transport Stonington_West central Sunset_Cross");								MissionPositions.Insert("6504.6 33.4 2109.9");
		MissionEvents.Insert("Transport Stonington_Suburbs east Georgestown");								MissionPositions.Insert("7319.6 9.2 1537.3");
		MissionEvents.Insert("Transport Stonington_Suburbs central Swamp_Harbor");							MissionPositions.Insert("7208.8 10.3 1616.7");
		MissionEvents.Insert("Transport Sunset_Cross southwest Portland");									MissionPositions.Insert("6410.5 17 6196");
		MissionEvents.Insert("Transport Sunset_Cross central Georgestown");									MissionPositions.Insert("6643.6 16.8 6449.7");
		MissionEvents.Insert("Transport Sunset_Cross central Stonington_Suburbs");							MissionPositions.Insert("6632.8 16.8 6460.7");
		MissionEvents.Insert("Transport Westbrook northeast Stonington_Suburbs");							MissionPositions.Insert("3560.1 22.2 6563.3");
		MissionEvents.Insert("Transport Westbrook northeast Portland");										MissionPositions.Insert("3613.7 22.2 6547.9");
		MissionEvents.Insert("Transport Westbrook southeast Kushville_East");								MissionPositions.Insert("3482.2 24.3 6165.9");
		MissionEvents.Insert("Transport Westbrook southeast Stonington_Suburbs");							MissionPositions.Insert("3499.2 24.3 6174.7");
		//322
		
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
		if ( m_MissionType == "CityStore" )		m_MissionInstance = new CityStoreMission();
		if ( m_MissionType == "PlaneCrash" )	m_MissionInstance = new PlaneCrashMission();				
		if ( m_MissionType == "Shrooms" )		m_MissionInstance = new ShroomsMission();
		if ( m_MissionType == "Transport" )		m_MissionInstance = new TransportMission();
		if ( m_MissionType == "Horde" )			m_MissionInstance = new HordeMission();
		// ***Add new mission types below this line when new mission events were defined 
		//example: if ( ( m_MissionType == "MyNewMissionType" )		m_MissionInstance = new MyNewMission();
	}
		
	static bool GetBuildingsAtLoc( string MBuilding, string MLocation, out array<vector> BuildingPosList )
	{
		//Get positions of a unique mission building by the town/village name
		BuildingPosList = new array<vector>;
		
		if ( MBuilding == "Land_City_Hospital")
		{
			if ( MLocation == "Nuclear_Power_Plant") 				BuildingPosList.Insert("4575.491699 27.931107 6975.895020");
			else if ( MLocation == "Portland") 						BuildingPosList.Insert("6092.644531 13.401396 14560.914063");
			else if ( MLocation == "Sandy_Bay") 					BuildingPosList.Insert("5360.569824 10.111504 7543.466309");
			else if ( MLocation == "Smallville_WestBridge") 		BuildingPosList.Insert("9814.779297 14.723452 4399.944336");
			else if ( MLocation == "Stonington") 					BuildingPosList.Insert("6929.022949 46.321098 2068.539307");
			else if ( MLocation == "Stonington_Harbor") 			BuildingPosList.Insert("6775.277344 10.653452 1521.581055");
			else if ( MLocation == "SW_Military_Base") 				BuildingPosList.Insert("3129.329346 29.951101 4189.499023");
			else if ( MLocation == "Westbrook") 					BuildingPosList.Insert("3275.215088 27.936964 6367.343262");
			else return false;			//No match by MLocation						
		}
		else if ( MBuilding == "Land_FuelStation_Build")
		{
			if ( MLocation == "Georgestown")						BuildingPosList.Insert("3739.6 33.6 4749.5");
			else if ( MLocation == "Kushville")						BuildingPosList.Insert("7543.1 25.3 3944.6");
			else if ( MLocation == "Kushville_East")				BuildingPosList.Insert("8995.2 30.1 4221.8");
			else if ( MLocation == "Portland")						BuildingPosList.Insert("5923.7 7.6 14255.6");
			else if ( MLocation == "Airfield")						BuildingPosList.Insert("5548.7 76.1 3817.9");
			else if ( MLocation == "Stonington_Suburbs")			BuildingPosList.Insert("7192.2 10.2 1594.1");
			else if ( MLocation == "Stonington")					BuildingPosList.Insert("6475.8 33.2 2089.5");
			else if ( MLocation == "Sunset_Cross")					BuildingPosList.Insert("6650.4 16.8 6437.2");
			else if ( MLocation == "Swamp_Harbor")					BuildingPosList.Insert("5256.4 6.5 9094.8");
			else return false;			//No match by location
		}
		else if ( MBuilding == "Land_Village_PoliceStation")
		{
			if ( MLocation == "Airfield")							BuildingPosList.Insert("5469.938477 81.030098 3888.300293");
			else if ( MLocation == "Georgestown")					BuildingPosList.Insert("4647.903809 24.157818 4396.852539");
			else if ( MLocation == "Hazelands")						BuildingPosList.Insert("4414.975586 11.336143 2842.787354");
			else if ( MLocation == "Smallville_WestBridge")			BuildingPosList.Insert("9778.607422 12.393646 4326.521484");
			else if ( MLocation == "Stonington_SuburbsNorth")		BuildingPosList.Insert("6429.600098 38.644051 2053.132568");
			else if ( MLocation == "Stonington_SuburbsSouth")		BuildingPosList.Insert("7017.052734 15.070198 1560.666626");
			else if ( MLocation == "Warren_Cove")					BuildingPosList.Insert("7114.445313 14.298815 5438.229004");
			else if ( MLocation == "Westbrook")						BuildingPosList.Insert("3296.026123 29.410110 6239.886719");
			else return false;			//No match by location
		}
		else if ( MBuilding == "Land_City_PoliceStation")
		{
			if ( MLocation == "Chernogorsk")						BuildingPosList.Insert("6633.1 14.0 2586.6");
			else if ( MLocation == "Elektrozavodsk")				BuildingPosList.Insert("10456.0 12.7 2273.0");
			else if ( MLocation == "Novodmitrovsk")					BuildingPosList.Insert("11489.7 53.1 14484.0");
			else if ( MLocation == "Severograd")					BuildingPosList.Insert("7737.3 125.1 12636.6");
			else if ( MLocation == "Svetlojarsk")					BuildingPosList.Insert("13846.7 27.3 13218.0");			
			else if ( MLocation == "Zelenogorsk")					BuildingPosList.Insert("2730.4 213.2 5373.8");
			else return false;			//No match by location
		}		
		else if ( MBuilding == "Land_City_School")
		{
			if ( MLocation == "Georgestown")				BuildingPosList.Insert("3964 30.9 4803.7");	
			else if ( MLocation == "Stonington")			BuildingPosList.Insert("7043 51 2061.3");
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
		else if ( type == "CityStore")				building = "Land_City_Store_WithStairs";
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
		else if ( type == "CityStore")				building = "Land_Village_PoliceStation";
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
	}
	
	static void ShowDebugInfo( PlayerBase player)
	{
		//Display as server message to player: if found, Modelvector & buildingtype else actual position of player
		Param1<string> Msg1;
		ref array<Object> OBJLST1 = new array<Object>;
		ref array<CargoBase> PROXYLST1 = new array<CargoBase>;
			
		GetGame().GetObjectsAtPosition( player.GetPosition() , 50.0 , OBJLST1 , PROXYLST1 );		
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
		vector Center = "8192 0 8192";		//DeerIsle terrain center position
				
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