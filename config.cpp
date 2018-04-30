class CfgPatches
{
	class sisu_medical_base
	{
		addonRootClass="A3_Soft_F";
		requiredAddons[]=
		{
			"A3_Soft_F",
			"A3_Soft_F_Beta"
		};
		requiredVersion=0.1;
		units[]=
		{
			"sisu_medical_base"
		};
		weapons[]={};
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		SISU_driver = "SISU_driver";
		SISU_commander = "SISU_commander";
		SISU_commander_out = "SISU_commander_out";
		SISU_pas1 = "SISU_pas1";
		SISU_pas2 = "SISU_pas2";
		SISU_pas3 = "SISU_pas3";
		SISU_pas4 = "SISU_pas4";
		SISU_pas5 = "SISU_pas5";
		SISU_pas6 = "SISU_pas6";
		SISU_pas7 = "SISU_pas7";
		SISU_pas8 = "SISU_pas8";
		SISU_pas9 = "SISU_pas9";
		SISU_pas10 = "SISU_pas10";
		SISU_pat1 = "SISU_pat1";
		SISU_pat2 = "SISU_pat2";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;

		class SISU_driver: Crew
			{
			file = "\SISU\data\animation\Driver_Driving.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {0};
			speed = 1e+010;
			};
		class SISU_commander: Crew
			{
			file = "\SISU\data\animation\Commander_Sitting.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class SISU_commander_out: Crew
			{
			file = "\SISU\data\animation\Commander_out.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class SISU_pas1: Crew
			{
			file = "\SISU\data\animation\Passanger1_Sitting.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class SISU_pas2: Crew
			{
			file = "\SISU\data\animation\Passanger2_Sitting.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class SISU_pas3: Crew
			{
			file = "\SISU\data\animation\Passanger3_Sitting.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class SISU_pas4: Crew
			{
			file = "\SISU\data\animation\Passanger4_Sitting.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class SISU_pas5: Crew
			{
			file = "\SISU\data\animation\Passanger5_Sitting.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class SISU_pas6: Crew
			{
			file = "\SISU\data\animation\Passanger6_Sitting.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class SISU_pas7: Crew
			{
			file = "\SISU\data\animation\Passanger7_Sitting.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class SISU_pas8: Crew
			{
			file = "\SISU\data\animation\Passanger8_Sitting.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class SISU_pas9: Crew
			{
			file = "\SISU\data\animation\Passanger9_Sitting.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class SISU_pas10: Crew
			{
			file = "\SISU\data\animation\Passanger10_Sitting.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class SISU_pat1: Crew
			{
			file = "\SISU\data\animation\Patient1.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
		class SISU_pat2: Crew
			{
			file = "\SISU\data\animation\Patient2.rtm";
			interpolateTo[] = {"",1};
			leftHandIKCurve[] = {};
			rightHandIKCurve[] = {};
			speed = 1e+010;
			};
	};
};

class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class CommanderOptics : NewTurret{};
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class HitPoints
		{	
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitLMWheel;
			class HitRMWheel;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class EventHandlers;
		class AnimationSources;
	};
	class sisu_medical_base: Car_F
	{
		author="NTF Ragnar";
		scope = 2;
		side = 1;
		mapSize=6.5500002;
		faction = "BLU_F";
		crew = "";
		typicalCargo[] = {""};
		_generalMacro = "SISU_medical";
		DLC="Expansion";
		displayName = "SISU Medical";
		terrainCoef 	= 1; 	/// different surface affects this car more, stick to tarmac
		turnCoef 		= 2.5; 	/// should match the wheel turn radius
		fireResistance 	= 5; 	/// lesser protection against fire than tanks
		armor 			= 200; 	/// just some protection against missiles, collisions and explosions
		#include "physX.hpp"
		fuelConsumptionRate=64;
		hasDriver = true;
		driverAction = "SISU_driver_out";
		driverInAction = "SISU_driver";
		driverForceOptics=0;
		driverOpticsModel="";
		memoryPointDriverOptics="";
		cargoIsCoDriver[]={0};
		forceHideDriver=1;
		showNVGDriver=1;
		driverCanSee="4+8+2+32+16";
		driverDoor = "door_1_1";
		animationSourceHatch= "";
		enabledByAnimationSource= "";
		OutDriverMayFire = false;
		InDriverMayFire = false;
		LODTurnedIn = 1200;
		LODTurnedOut = 1;
		viewDriverInExternal = 1;
		hasCommander = 1;
		enableRadio = 1;
		enableGPS = 1;
		selectionBackLights = "lights_rear_unhide";
		selectionBrakeLights = "lights_brake_unhide";
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_MRAP_03_Base_Library0";
		};
		
		model = "\SISU\SISU_medical.p3d";
		editorPreview = "\SISU\data\UI\preview_sisu_medical.jpg";
		picture = "\SISU\data\UI\sisu_medical_ca.paa";
		Icon = "\SISU\data\UI\map_sisu_medical_ca.paa";
		unitInfoType = "RscUnitInfoNoWeapon";
		radarType = 8;
		enableManualFire = 0;
		transportSoldier = 2;
		wheelDamageRadiusCoef 	= 0.9; 			/// for precision tweaking of damaged wheel size
		wheelDestroyRadiusCoef 	= 0.4;			/// for tweaking of rims size to fit ground
		crewCrashProtection		= 6;
		cargoProxyIndexes[] = {11,12};
		cost = 600000;
		transportMaxBackpacks 	= 16; /// just some backpacks fit the trunk by default
		threat[]={0.0,0.0,0.0};
		driverCompartments="Compartment1";
		cargoCompartments[]={"Compartment2"};
		viewDriverShadow=1;
        viewDriverShadowDiff=0.01;
        viewDriverShadowAmb=0.2;
		cargoAction[] = {"SISU_pat1","SISU_pat2"};
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		cargoDoors[]={"door_2_2","door_1_2"};
		normalSpeedForwardCoef=0.60000002;
		slowSpeedForwardCoef=0.34999999;
		crewVulnerable = 1;
		damageResistance = 0.004;
		vehicleClass = "Armored";
		camouflage = 2;
		crewExplosionProtection = 0.999;
		explosionShielding = 1;

		
		//Driver START
		hideWeaponsDriver= false;
		weapons[]= {"SmokeLauncher", "TruckHorn"};
		magazines[]= {"SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag", "SmokeLauncherMag"};
		gunnerHasFlares= 1;
		smokeLauncherGrenadeCount = 8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret = 0;
		smokeLauncherAngle = 200;
		commanding = 2;
		outGunnerMayFire = 1;
		inGunnerMayFire = 0;
		isPersonTurret = 1;
		minOutElev = -4;
		maxOutElev = 20;
		initOutElev = 0;
		minOutTurn = -60;
		maxOutTurn = 60;
		initOutTurn = 0;
		class TurnIn{};
		class TurnOut : TurnIn{};		
		canFloat = true;
		waterAngularDampingCoef=10;
		waterLeakiness         		 = 1.5;
		waterResistanceCoef 		 = 0.1;
		rudderForceCoef				 = 0.1;
		leftEngineEffect 		= "LEngEffectsSmall";
		rightEngineEffect 		= "REngEffectsSmall";
		leftFastWaterEffect 	 = "LEngEffectsSmall";	
		rightFastWaterEffect 	 = "REngEffectsSmall";	
		waterEffectSpeed 		 = 5;	
		engineEffectSpeed 		 = 5;	
		waterFastEffectSpeed 	 = 28;
		engineShiftY			 = 0;	
		
		//water END
		class WeaponFireGun;
		class WeaponCloudsGun;
		class WeaponCloudsMGun;
		class ViewCargo
		{	
			initAngleX = 5;
			minAngleX = -75;
			maxAngleX = 85;
			initAngleY = 0;
			minAngleY = -150;
			maxAngleY = 150;
			minFov = 0.25;
			maxFov = 1.25;
			initFov = 1;
			minMoveX = 0;
			maxMoveX = 0;
			minMoveY = 0;
			maxMoveY = 0;
			minMoveZ = 0;
			maxMoveZ = 0;
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class COSeat: MainTurret
			{
				gunnerCompartments="Compartment2";
				gunnerName = "CO";
				primaryGunner = 0;
				primaryObserver = 0;
				commanding = 13;
				hideWeaponsGunner = 0;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				proxyType = "CPCargo";
				animationSourceHatch = "";
				enabledByAnimationSource 	= "";
				proxyIndex = 1;
				memoryPointGun = "gun_muzzle";
				selectionFireAnim = "";
				memoryPointGunnerOutOptics= "";
				memoryPointGunnerOptics= "";
				LODTurnedIn= "1200";
				LODTurnedOut= "1200";
				gunnerOpticsModel = "";
				gunnerForceOptics = 0;
				soundServo[]={};
				gunnerInAction = "SISU_pas1";
				gunnerAction= "SISU_pas1"
				ejectDeadGunner = false;
				canHideGunner=0;
				turretInfoType = "";
				discreteDistance[] = {100,200,300,400,500,600,700,800};
				discreteDistanceInitIndex = 1;
				gunnerOutOpticsShowCursor = false;
				gunnerOutForceOptics= false;
				viewGunnerInExternal = 1;
				gunnerRightHandAnimName = "";
				gunnerLeftHandAnimName = "";
				memoryPointsGetInGunner= "pos cargo";
				memoryPointsGetInGunnerDir= "pos cargo dir";
				OutGunnerMayFire = true;
				InGunnerMayFire = true;
				isPersonTurret = 0;
				gunnerdoor = "door_2_2";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				class ViewGunner
				{
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
					initAngleX = 0;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
				};
			};
			class NCOSeat: COSeat
			{
				gunnerName = "NCO";
				proxyIndex = 2;
				primaryGunner = 0;
				primaryObserver = 0;
				commanding = 10;
				proxyType = "CPCargo";
				gunnerInAction = "SISU_pas2";
				gunnerAction= "SISU_pas2"
			};
			class LMG1Seat: NCOSeat
			{
				gunnerName = "LMG1";
				proxyIndex = 3;
				commanding = 8;
				proxyType = "CPCargo";
				gunnerInAction = "SISU_pas3";
				gunnerAction= "SISU_pas3"
			};
			class LMG2Seat: NCOSeat
			{
				gunnerName = "LMG2";
				proxyIndex = 4;
				commanding = 7;
				proxyType = "CPCargo";
				gunnerInAction = "SISU_pas4";
				gunnerAction= "SISU_pas4"
			};
			class AT1Seat: NCOSeat
			{
				gunnerName = "AT1";
				proxyIndex = 5;
				commanding = 8;
				proxyType = "CPCargo";
				gunnerInAction = "SISU_pas5";
				gunnerAction= "SISU_pas5"
			};
			class AT2Seat: NCOSeat
			{
				gunnerName = "AT2";
				proxyIndex = 6;
				commanding = 7;
				proxyType = "CPCargo";
				gunnerInAction = "SISU_pas6";
				gunnerAction= "SISU_pas6"
			};
			class BG1Seat: NCOSeat
			{
				gunnerName = "Guard1";
				proxyIndex = 9;
				commanding = 6;
				proxyType = "CPCargo";
				gunnerInAction = "SISU_pas9";
				gunnerAction= "SISU_pas9"
			};
			class BG2Seat: NCOSeat
			{
				gunnerName = "Guard2";
				proxyIndex = 10;
				commanding = 5;
				proxyType = "CPCargo";
				gunnerInAction = "SISU_pas10";
				gunnerAction= "SISU_pas10"
			};
			class SanSeat1: COSeat
			{
				gunnerName = "Medic 1";
				proxyIndex = 8;
				primaryGunner = 0;
				primaryObserver = 0;
				commanding = 11;
				proxyType = "CPCargo";
				gunnerInAction = "SISU_pas2";
				gunnerAction= "SISU_pas2"
			};
			class SanSeat2: COSeat
			{
				gunnerName = "Medic 2";
				proxyIndex = 7;
				primaryGunner = 0;
				primaryObserver = 0;
				commanding = 9;
				proxyType = "CPCargo";
				gunnerInAction = "SISU_pas7";
				gunnerAction= "SISU_pas7"
			};
			class CommanderSeat: CommanderOptics
			{	
				gunnerAction = "SISU_commander";
				gunnerInAction = "SISU_commander_out";
				gunnerName = "Commander";
				memoryPointsGetInGunner = "pos commander";
				memoryPointsGetInGunnerDir = "pos commander dir";
				proxyType = "CPCommander";
				gunnerGetInAction = "GetInHigh";
				gunnerGetOutAction = "GetOutHigh";
				gunnerdoor = "door_2_1";
				animationSourceHatch = "hatch_2_1";
				enabledByAnimationSource  = "hatch_2_1";
				gunnerCompartments="Compartment1";
				memoryPointsGetInGunnerPrecise = "pos commander";
				gunnerOpticsModel = "";
				gunnerOutOpticsModel = "";
				memoryPointGunnerOutOptics = "commander_weapon_view";
				memoryPointGunnerOptics = "commanderview";
				turretInfoType = "";
				animationSourceBody = "";
				animationSourceGun = "";
				
				commanding = 14;
				primaryGunner = 0;
				primaryObserver = 1;
				gunnerFireAlsoInInternalCamera = 0;
				gunnerOutFireAlsoInInternalCamera = 0;
				gunnerUsesPilotView = 0;
				hideWeaponsGunner = 0;
				startEngine = 0;
				preciseGetInOut = 1;
				canEject = 0;
				primary=1;
				proxyIndex=1;
				forceHideGunner=0;
				canHideGunner=1;
				isPersonTurret = 0;
				LODTurnedIn=1;
				LODTurnedOut=1200;
				outGunnerMayFire=0;
				inGunnerMayFire=0;
				allowLauncherIn=0;
				allowLauncherOut=0;
				viewGunnerInExternal=1;
				
				class HitPoints{};
				class Turrets{};
				class TurnIn{};
				class TurnOut : TurnIn{};
				class TurretSpec
				{
					showHeadPhones = 0;
				};
				class ViewGunner
				{
					initAngleX = 5;
					minAngleX = -75;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
					minFov = 1;
					maxFov = 1.25;
					initFov = 1;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
				};				
				class Reflectors
				{
					class Light_flood_1_1
					{
						color[] 		= {1900, 1300, 950};
						ambient[]		= {5, 5, 5};
						size 			= 1;
						innerAngle 		= 100;
						outerAngle 		= 200;
						coneFadeCoef 	= 5;
						intensity 		= 0.5;
						useFlare 		= true;
						dayLight 		= true;
						flareSize 		= 0.5;
						position 	= "Light_flood_1_1";
						direction 	= "Light_flood_1_1_end";
						hitpoint 	= "";
						selection 	= "";

						class Attenuation
						{
							start 			= 1.0;
							constant 		= 0;
							linear 			= 0;
							quadratic 		= 0.25;
							hardLimitStart 	= 15;
							hardLimitEnd 	= 30;
						};
					};
					class Light_flood_1_2: Light_flood_1_1
					{
						position 	= "Light_flood_1_2";
						direction 	= "Light_flood_1_2_end";
					}
					
					class Light_flood_1_3: Light_flood_1_1
					{
						position 	= "Light_flood_1_3";
						direction 	= "Light_flood_1_3_end";
					}
					class Light_flood_1_4: Light_flood_1_1
					{
						position 	= "Light_flood_1_4";
						direction 	= "Light_flood_1_4_end";
					}
					class Light_flood_1_5: Light_flood_1_1
					{
						position 	= "Light_flood_1_5";
						direction 	= "Light_flood_1_5_end";
					}
					class Light_flood_1_6: Light_flood_1_1
					{
						position 	= "Light_flood_1_6";
						direction 	= "Light_flood_1_6_end";
					}
					class Light_flood_2_1: Light_flood_1_1
					{
						position 	= "Light_flood_2_1";
						direction 	= "Light_flood_2_1_end";
					}
					class Light_flood_2_2: Light_flood_1_1
					{
						position 	= "Light_flood_2_2";
						direction 	= "Light_flood_2_2_end";
					}
					class Light_flood_2_3: Light_flood_1_1
					{
						position 	= "Light_flood_2_3";
						direction 	= "Light_flood_2_3_end";
					}
					class Light_flood_2_4: Light_flood_1_1
					{
						position 	= "Light_flood_2_4";
						direction 	= "Light_flood_2_4_end";
					}
					class Light_flood_2_5: Light_flood_1_1
					{
						position 	= "Light_flood_2_5";
						direction 	= "Light_flood_2_5_end";
					}
					class Light_flood_2_6: Light_flood_1_1
					{
						position 	= "Light_flood_2_6";
						direction 	= "Light_flood_2_6_end";
					}
				};
				aggregateReflectors[] = {{ "Light_flood_1_1","Light_flood_2_1" },{ "Light_flood_1_2","Light_flood_1_3","Light_flood_1_4","Light_flood_1_5" },{ "Light_flood_2_2","Light_flood_2_3","Light_flood_2_4","Light_flood_2_5" },{ "Light_flood_1_6","Light_flood_2_6" }};
			};
		};
		//
		//Turrets END
		//

		// sounds start
		occludeSoundsWhenIn = 0.9;
		obstructSoundsWhenIn = 0.9;
		
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\getin",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\MRAP_03\getout",
			0.56234133,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			1,
			1
		};
		soundEngineOnInt[] = {"A3\Sounds_F\vehicles\armor\apc\apc3\int_engine_start", db-5, 1.0};
		soundEngineOnExt[] = {"A3\Sounds_F\vehicles\armor\apc\apc3\ext_engine_start", db-5, 1.0, 300};
		
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\armor\apc\apc3\int_engine_stop", db-5, 1.0};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\armor\apc\apc3\ext_engine_stop", db-5, 1.0, 300};
		
		buildCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1.0,1,200};
		buildCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1.0,1,200};
		buildCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1.0,1,200};
		buildCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1.0,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1.0,1,200};
		WoodCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1.0,1,200};
		WoodCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1.0,1,200};
		WoodCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1.0,1,200};
		WoodCrash4[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1.0,1,200};
		WoodCrash5[] = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1.0,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1.0,1,200};
		ArmorCrash1[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1.0,1,200};
		ArmorCrash2[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1.0,1,200};
		ArmorCrash3[] = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1.0,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_engine_ext_idle",0.31622776,1,100};
				frequency = "0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_engine_ext_rpm1",0.39810717,1,200};
				frequency = "0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_engine_ext_rpm3",0.5011872,1,250};
				frequency = "0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_engine_ext_rpm4",0.63095737,1,250};
				frequency = "0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume = "engineOn*camPos*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_engine_ext_idle",0.56234133,1,150};
				frequency = "0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_exhaust_ext_rpm1",0.63095737,1,200};
				frequency = "0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_exhaust_ext_rpm3",0.70794576,1,250};
				frequency = "0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_engine_int_idle",0.22387211,1};
				frequency = "0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_engine_int_rpm1",0.25118864,1};
				frequency = "0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_engine_int_rpm3",0.31622776,1};
				frequency = "0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_engine_int_rpm4",0.4466836,1};
				frequency = "0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_exhaust_int_idle",0.39810717,1};
				frequency = "0.95	+	((rpm/	3000) factor[(0/	3000),(900/	3000)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(200/	3000),(300/	3000)])	*	((rpm/	3000) factor[(900/	3000),(600/	3000)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_exhaust_int_rpm1",0.5011872,1};
				frequency = "0.9	+	((rpm/	3000) factor[(900/	3000),(1500/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(800/	3000),(1000/	3000)])	*	((rpm/	3000) factor[(2000/	3000),(1400/	3000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_exhaust_int_rpm3",0.63095737,1};
				frequency = "0.9	+	((rpm/	3000) factor[(1500/	3000),(2100/	3000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3000) factor[(1600/	3000),(1950/	3000)])	*	((rpm/	3000) factor[(2800/	3000),(2300/	3000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\armor\mbt_03\mbt_exhaust_int_rpm4",0.8912509,1};
				frequency = "0.95	+	((rpm/	3000) factor[(2100/	3000),(3100/	3000)])*0.1";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3000) factor[(2400/	3000),(3200/	3000)])";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",1.4125376,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",1.5848932,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",1.0,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",1.2589254,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.5011872,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.56234133,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.56234133,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.56234133,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.56234133,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.56234133,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.56234133,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.56234133,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.56234133,1,100};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.56234133,1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class Waternoise_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\soft_driving_in_water",
					0.50118721,
					1,
					300
				};
				frequency="1";
				volume="(speed factor[0, 10]) * water * camPos + (speed factor[-0.1, -10]) * water * camPos";
			};
			class Waternoise_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\soft_driving_in_water_int",
					0.39810717,
					1,
					100
				};
				frequency="1";
				volume="(speed factor[0, 10]) * water * (1-camPos) + (speed factor[-0.1, -10]) * water * (1-camPos)";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		// sounds end
		maximumLoad=4000;
		class RenderTargets
		{
			class commander_display
			{
				renderTarget="rendertarget3";
				class CameraView3
				{
					pointPosition="commander view pos";
					pointDirection="commander view dir";
					renderVisionMode=0;
					renderQuality=1;
					fov=1.25;
				};
			};
			class driver_display
			{
				renderTarget="rendertarget2";
				class CameraView2
				{
					pointPosition="PIP4_pos";
					pointDirection="PIP4_dir";
					renderVisionMode=3;
					renderQuality=1;
					fov=2;
				};
			};
			class mirror_1_1
			{
				renderTarget="rendertarget0";
				class CameraView0
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=4;
					renderQuality=1;
					fov=0.75;
				};
			};
			
			class mirror_1_2
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=4;
					renderQuality=1;
					fov=0.75;
				};
			};
			class mirror_2_1
			{
				renderTarget="rendertarget5";
				class CameraView5
				{
					pointPosition="PIP3_pos";
					pointDirection="PIP3_dir";
					renderVisionMode=4;
					renderQuality=1;
					fov=0.75;
				};
			};
			class mirror_2_2
			{
				renderTarget="rendertarget4";
				class CameraView4
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderVisionMode=4;
					renderQuality=1;
					fov=0.75;
				};
			};
		};
		class AnimationSources: AnimationSources
		{
            class Light_flood_1_1_on
            {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class Light_flood_1_2_on: Light_flood_1_1_on{};
            class Light_flood_1_3_on: Light_flood_1_1_on{};
            class Light_flood_1_4_on: Light_flood_1_1_on{};
            class Light_flood_1_5_on: Light_flood_1_1_on{};
            class Light_flood_1_6_on: Light_flood_1_1_on{};
            class Light_flood_2_1_on: Light_flood_1_1_on{};
            class Light_flood_2_2_on: Light_flood_1_1_on{};
            class Light_flood_2_3_on: Light_flood_1_1_on{};
            class Light_flood_2_4_on: Light_flood_1_1_on{};
            class Light_flood_2_5_on: Light_flood_1_1_on{};
            class Light_flood_2_6_on: Light_flood_1_1_on{};
            class Light_flood_1_2_off: Light_flood_1_1_on{};
            class Light_flood_1_3_off: Light_flood_1_1_on{};
            class Light_flood_1_4_off: Light_flood_1_1_on{};
            class Light_flood_1_5_off: Light_flood_1_1_on{};
            class Light_flood_1_6_off: Light_flood_1_1_on{};
            class Light_flood_2_1_off: Light_flood_1_1_on{};
            class Light_flood_2_2_off: Light_flood_1_1_on{};
            class Light_flood_2_3_off: Light_flood_1_1_on{};
            class Light_flood_2_4_off: Light_flood_1_1_on{};
            class Light_flood_2_5_off: Light_flood_1_1_on{};
            class Light_flood_2_6_off: Light_flood_1_1_on{};
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitRFWheel: HitLFWheel
			{
				hitpoint = "HitRFWheel";
			};
			class HitLMWheel: HitLFWheel
			{
				hitpoint = "HitLMWheel";
			};
			class HitRMWheel: HitLFWheel
			{
				hitpoint = "HitRMWheel";
			};
			class HitLBWheel: HitLFWheel
			{
				hitpoint = "HitLBWheel";
			};
			class HitRBWheel: HitLFWheel
			{
				hitpoint = "HitRBWheel";
			};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
			};
			class HitGlass2
			{
				source = "Hit";
				hitpoint = "HitGlass2";
			};
			class HitGlass3
			{
				source = "Hit";
				hitpoint = "HitGlass3";
			};
			class HitGlass4
			{
				source = "Hit";
				hitpoint = "HitGlass4";
			};
			class HitGlass5
			{
				source = "Hit";
				hitpoint = "HitGlass5";
			};
			class HitGlass6
			{
				source = "Hit";
				hitpoint = "HitGlass6";
			};
			class HitHull
			{
				source = "Hit";
				hitpoint = "HitHull";
			};
			class door_1_1
			{
				source="door";
				animPeriod=1.80000001;
				initPhase=0;
			};
			class door_2_1: door_1_1
			{
				source="door";
				animPeriod=1.80000001;
			};
			class door_1_2
			{
				source="door";
				animPeriod=1.80000001;
			};
			class door_2_2: door_1_2
			{
				source="door";
				animPeriod=1.80000001;
			};
			class hatch_1_1
			{
				source="user";
				animPeriod=1.80000001;
			};
			class hatch_2_1: hatch_1_1
			{
				source="user";
				animPeriod=1.80000001;
			};
			class hatch_1_2
			{
				source="user";
				animPeriod=0.80000001;
			};
			class hatch_1_3: hatch_1_2
			{
				source="user";
				animPeriod=0.80000001;
			};
			class hatch_1_4: hatch_1_2
			{
				source="user";
				animPeriod=0.80000001;
			};
			class hatch_2_2: hatch_1_2
			{
				source="user";
				animPeriod=0.80000001;
			};
			class hatch_2_3: hatch_1_2
			{
				source="user";
				animPeriod=0.80000001;
			};
			class hatch_2_4: hatch_1_2
			{
				source="user";
				animPeriod=0.80000001;
			};
			class hatch_1_5: hatch_1_2
			{
				source="user";
				animPeriod=0.80000001;
			};
			class hatch_2_5: hatch_1_2
			{
				source="user";
				animPeriod=0.80000001;
			};
			class wavebreaker
			{
				source="user";
				animPeriod=0.80000001;
			};
			class wavebreaker_arm
			{
				source="user";
				animPeriod=0.80000001;
			};
			class wirecutter
			{
				source="user";
				animPeriod=0.80000001;
			};
			class wirecutter_arm_unhide
			{
				source="user";
				animPeriod=0.00000001;
			};
			class armor_1_1_arm
			{
				source="user";
				animPeriod=0.00000001;
			};
			class armor_2_1_arm: armor_1_1_arm
			{
				source="user";
				animPeriod=0.00000001;
			};
			class armor_1_1
			{
				source="user";
				animPeriod=1.00000001;
			};
			class armor_1_2: armor_1_1
			{
				source="user";
				animPeriod=1.00000001;
			};
			class armor_2_1: armor_1_1
			{
				source="user";
				animPeriod=1.00000001;
			};
			class armor_2_2: armor_1_1
			{
				source="user";
				animPeriod=1.00000001;
			};
			class BeaconsStop
			{
				source="user";
				animPeriod=0.00000001;
			};
			class EmergencyStop
			{
				source="time";
				animPeriod=1.00000001;
			};
			class FloodlightStop
			{
				source="time";
				animPeriod=1.00000001;
			};
			class InteriorStart
			{
				source="time";
				animPeriod=1.00000001;
			};
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=0.5;
				explosionShielding=4;
				radius=0.33000001;
				name="HitLFWheel";
                passThrough=0;
                visual="";
			};
			class HitLMWheel: HitLMWheel
			{
				armor=0.5;
				explosionShielding=4;
				radius=0.33000001;
				name="HitLMWheel";
                passThrough=0;
                visual="";
			};
			class HitLBWheel: HitLBWheel
			{
				armor=0.5;
				explosionShielding=4;
				radius=0.33000001;
				name="HitLBWheel";
                passThrough=0;
                visual="";
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.5;
				explosionShielding=4;
				radius=0.33000001;
				name="HitRFWheel";
                passThrough=0;
                visual="";
			};
			class HitRMWheel: HitRMWheel
			{
				armor=0.5;
				explosionShielding=4;
				radius=0.33000001;
				name="HitRMWheel";
                passThrough=0;
                visual="";
			};
			class HitRBWheel: HitRBWheel
			{
				armor=0.5;
				explosionShielding=4;
				radius=0.33000001;
				name="HitRBWheel";
                passThrough=0;
                visual="";
			};
			class HitFuel
			{
				armor=0.5;
				material=-1;
				name="fuel";
				visual="";
				passThrough=0.5;
				minimalHit=0.15000001;
				explosionShielding=0.2;
				radius=0.25;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				name="engine";
				visual="";
				passThrough=0.5;
				minimalHit=0.15000001;
				explosionShielding=0.2;
				radius=0.25;
			};
			class HitHull
			{
				armor=1;
				material=-1;
				name="hull";
				visual="";
				passThrough=0;
				minimalHit=0.15000001;
				explosionShielding=0.40000001;
				radius=0.25;
			};
			class HitGlass1: HitGlass1
			{
				name="HitGlass1";
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass2: HitGlass2
			{
				name="HitGlass2";
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass3: HitGlass3
			{
				name="HitGlass3";
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass4: HitGlass4
			{
				name="HitGlass4";
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass5: HitGlass5
			{
				name="HitGlass5";
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass6: HitGlass6
			{
				name="HitGlass6";
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
		};
		attenuationEffectType="CarAttenuation";
		class PlayerSteeringCoefficients /// steering sensitivity configuration
		{
			 turnIncreaseConst 	= 0.3;
			 turnIncreaseLinear = 1.0;
			 turnIncreaseTime 	= 1.0;
			 turnDecreaseConst 	= 5.0; 
			 turnDecreaseLinear = 3.0;
			 turnDecreaseTime 	= 0.0;
			 maxTurnHundred 	= 0.7;
		};
		
		dustFrontLeftPos = "wheel_1_1_bound";
		dustMiddleLeftPos = "wheel_1_2_bound";
		dustBackLeftPos = "wheel_1_3_bound";
		dustFrontRightPos = "wheel_2_1_bound";
		dustMiddleRightPos = "wheel_2_2_bound";
		dustBackRightPos = "wheel_2_3_bound";
		
		class EventHandlers: DefaultEventhandlers
		{
		init = "_this execVM ""sisu\sisu_VehicleInit.sqf"";";
		};
		hiddenSelections[] = {""};
		hiddenSelectionsTextures[] = {""};
		hiddenSelectionsMaterials[] = {};
		
		memoryPointTrackFLL = "TrackFLL";
		memoryPointTrackFLR = "TrackFLR";
		memoryPointTrackFRL = "TrackFRL";
		memoryPointTrackFRR = "TrackFRR";
		memoryPointTrackMLL = "TrackMLL";
		memoryPointTrackMLR = "TrackMLR";
		memoryPointTrackMRL = "TrackMRL";
		memoryPointTrackMRR = "TrackMRR";
		memoryPointTrackBLL = "TrackBLL";
		memoryPointTrackBLR = "TrackBLR";
		memoryPointTrackBRL = "TrackBRL";
		memoryPointTrackBRR = "TrackBRR";
		
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\soft_f_beta\MRAP_03\Data\MRAP_03_ext.rvmat",
				"A3\soft_f_beta\MRAP_03\Data\MRAP_03_ext_damage.rvmat",
				"A3\soft_f_beta\MRAP_03\Data\MRAP_03_ext_destruct.rvmat",
				"A3\soft_f_beta\MRAP_03\Data\MRAP_03_int.rvmat",
				"A3\soft_f_beta\MRAP_03\Data\MRAP_03_int_damage.rvmat",
				"A3\soft_f_beta\MRAP_03\Data\MRAP_03_int_destruct.rvmat",
				"A3\Data_F\Vehicles\Turret.rvmat",
				"A3\Data_F\Vehicles\Turret_damage.rvmat",
				"A3\Data_F\Vehicles\Turret_destruct.rvmat",
				"A3\data_f\Glass_veh.rvmat",
				"A3\data_f\Glass_veh_armored_damage.rvmat",
				"A3\data_f\Glass_veh_armored_damage.rvmat",
				"A3\data_f\Glass_veh_int.rvmat",
				"A3\data_f\Glass_veh_armored_damage.rvmat",
				"A3\data_f\Glass_veh_armored_damage.rvmat"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position 	= "exhaust1_pos";
				direction 	= "exhaust1_dir";
				effect 		= "ExhaustsEffect";
			};

			class Exhaust2
			{
				position 	= "exhaust2_pos";
				direction 	= "exhaust2_dir";
				effect 		= "ExhaustsEffectbig";
			};
		};
		class Reflectors
		{
			class Light_L
			{
				color[] 		= {1900, 1300, 1200};
				ambient[]		= {5, 5, 5};
				size 			= 1;
				innerAngle 		= 30;
				outerAngle 		= 179;
				coneFadeCoef 	= 10;
				intensity 		= 1;
				useFlare 		= true;
				dayLight 		= false;
				flareSize 		= 1;
				position 	= "Light_L";
				direction 	= "Light_L_end";
				hitpoint 	= "Light_L";
				selection 	= "Light_L";

				class Attenuation
				{
					start 			= 5.0;
					constant 		= 0;
					linear 			= 0;
					quadratic 		= 0.25;
					hardLimitStart 	= 30;
					hardLimitEnd 	= 60;
				};
			};
			class Light_R: Light_L
			{
				position 	= "Light_R";
				direction 	= "Light_R_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};
		};
		aggregateReflectors[] = {"Light_L","Light_R"};
		class UserActions
        {
			class Close_armor
			{
				userActionID		= 101;
				priority			= 1.5;	
				radius				= 2;
				animPeriod			= 10;
				showWindow			= 0;
				displayName			= "<t color='#e21414'>Armour Close</t>";
				displayNameDefault	= "<t color='#e21414'>Armour Close</t>";
				position			= "Compartment1";
				condition			= "(player in [commander this]) && (this animationPhase ""armor_1_1"" == 0)";
				statement			= "this animate [""armor_1_1"",1];this animate [""armor_1_1_arm"",0];this animate [""armor_2_1"",1];this animate [""armor_2_1_arm"",0];this animate [""armor_1_2"",1];this animate [""armor_2_2"",1];this animate [""hatch_1_2"",0];this animate [""hatch_1_3"",0];this animate [""hatch_1_4"",0];this animate [""hatch_1_5"",0];this animate [""hatch_2_2"",0];this animate [""hatch_2_3"",0];this animate [""hatch_1_1"",0];this animate [""hatch_2_4"",0];this animate [""hatch_2_5"",0]";
				onlyForPlayer		= false;
			};
			class Open_armor
			{
				userActionID		= 102;
				priority			= 1.5;	
				radius				= 2;
				animPeriod			= 10;
				showWindow			= 0;
				displayName			= "<t color='#69a839'>Armour Open</t>";
				displayNameDefault	= "<t color='#69a839'>Armour Open</t>";
				position			= "Compartment1";
				condition			= "(player in [commander this]) && (this animationPhase ""armor_1_1"" == 1)";
				statement			= "this animate [""armor_1_1"",0];this animate [""armor_1_1_arm"",1];this animate [""armor_2_1"",0];this animate [""armor_2_1_arm"",1];this animate [""armor_1_2"",0];this animate [""armor_2_2"",0];this animate [""hatch_1_2"",1];this animate [""hatch_1_3"",1];this animate [""hatch_1_4"",1];this animate [""hatch_1_5"",1];this animate [""hatch_2_2"",1];this animate [""hatch_2_3"",1];this animate [""hatch_1_1"",0];this animate [""hatch_2_4"",1];this animate [""hatch_2_5"",1]";
				onlyForPlayer		= false;
			};
			class Open_wavebreaker
			{
				userActionID		= 103;
				priority			= 1.5;	
				radius				= 2;
				animPeriod			= 10;
				showWindow			= 0;
				displayName			= "<t color='#1035f2'>Wavebreaker Up</t>";
				displayNameDefault	= "<t color='#1035f2'>Wavebreaker Up</t>";
				position			= "Compartment1";
				condition			= "(player in [driver this]) && (this animationPhase ""wavebreaker"" == 0)";
				statement			= "this animate [""wavebreaker"",1];this animate [""wavebreaker_arm"",1]";
				onlyForPlayer		= false;
			};
			class Close_wavebreaker
			{
				userActionID		= 104;
				priority			= 1.5;	
				radius				= 2;
				animPeriod			= 10;
				showWindow			= 0;
				displayName			= "<t color='#1035f2'>Wavebreaker Down</t>";
				displayNameDefault	= "<t color='#1035f2'>Wavebreaker Down</t>";
				position			= "Compartment1";
				condition			= "(player in [driver this]) && (this animationPhase ""wavebreaker"" == 1)";
				statement			= "this animate [""wavebreaker"",0];this animate [""wavebreaker_arm"",0]";
				onlyForPlayer		= false;
			};
			class Open_wirecutter
			{
				userActionID		= 105;
				priority			= 1.5;	
				radius				= 2;
				animPeriod			= 10;
				showWindow			= 0;
				displayName			= "<t color='#888c8c'>Wirecutter Retract</t>";
				displayNameDefault	= "<t color='#888c8c'>Wirecutter Retract</t>";
				position			= "Compartment1";
				condition			= "(player in [driver this]) && (this animationPhase ""wirecutter"" == 0)";
				statement			= "this animate [""wirecutter"",1];this animate [""wirecutter_arm_unhide"",0]";
				onlyForPlayer		= false;
			};
			class Close_wirecutter
			{
				userActionID		= 106;
				priority			= 1.5;	
				radius				= 2;
				animPeriod			= 10;
				showWindow			= 0;
				displayName			= "<t color='#888c8c'>Wirecutter Deploy</t>";
				displayNameDefault	= "<t color='#888c8c'>Wirecutter Deploy</t>";
				position			= "Compartment1";
				condition			= "(player in [driver this]) && (this animationPhase ""wirecutter"" == 1)";
				statement			= "this animate [""wirecutter"",0];this animate [""wirecutter_arm_unhide"",1]";
				onlyForPlayer		= false;
			};
			class beacons_starter
			{
				userActionID		= 107;
				priority			= 1.5;	
				radius				= 2;
				animPeriod			= 2;
				showWindow			= 0;
				displayName			= "<t color='#6bace5'>Beacons Start</t>";
				displayNameDefault	= "<t color='#6bace5'>Beacons Start</t>";
				position			= "Compartment1";
				condition			= "(player in [commander this]) && (this animationPhase ""BeaconsStop"" == 1)";
				statement			= "this animate [""BeaconsStop"",0];this animate [""BeaconsStart"",0]";
				onlyForPlayer		= false;
			};
			class beacons_stopper
			{
				userActionID		= 108;
				priority			= 1.5;	
				radius				= 2;
				animPeriod			= 2;
				showWindow			= 0;
				displayName			= "<t color='#6bace5'>Beacons Stop</t>";
				displayNameDefault	= "<t color='#6bace5'>Beacons Stop</t>";
				position			= "Compartment1";
				condition			= "(player in [commander this]) && (this animationPhase ""BeaconsStop"" == 0)";
				statement			= "this animate [""BeaconsStop"",1];this animate [""BeaconsStart"",1]";
				onlyForPlayer		= false;
			};
			class Emergency_start
 			{
 				userActionID 		= 109;
				priority			= 1.5;	
				radius				= 2;
				animPeriod			= 2;
				showWindow			= 0;
				displayName			= "<t color='#6bace5'>Emergency Start</t>";
				displayNameDefault	= "<t color='#6bace5'>Emergency Start</t>";
				position			= "Compartment1";
				condition			= "(player in [commander this]) && (this animationPhase ""EmergencyStop"" == 1)";
				statement			= "this animate [""EmergencyStop"",0];this animate [""EmergencyStart"",1]";
				onlyForPlayer		= false;
 			};	
 			class Emergency_stop
 			{
 				userActionID 		= 110;
				priority			= 1.5;	
				radius				= 2;
				animPeriod			= 2;
				showWindow			= 0;
				displayName			= "<t color='#6bace5'>Emergency Stop</t>";
				displayNameDefault	= "<t color='#6bace5'>Emergency Stop</t>";
				position			= "Compartment1";
				condition			= "(player in [commander this]) && (this animationPhase ""EmergencyStop"" == 0)";
				statement			= "this animate [""EmergencyStop"",1];this animate [""EmergencyStart"",0]";
				onlyForPlayer		= false;
 			};
        };
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"glass1_destruct",
					0
				},
				
				{
					"glass2_destruct",
					0
				},
				
				{
					"glass3_destruct",
					0
				},
				
				{
					"glass4_destruct",
					0
				},
				
				{
					"glass5_destruct",
					0
				},
				
				{
					"glass6_destruct",
					0
				},
				
				{
					"wheel_1_1",
					1
				},
				
				{
					"wheel_2_1",
					1
				},
				
				{
					"wheel_1_2",
					1
				},
				
				{
					"wheel_2_2",
					1
				},
				
				{
					"daylights",
					0
				},
				
				{
					"pedal_thrust",
					0
				},
				
				{
					"pedal_brake",
					1
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"vehicletransported_antenna_hide",
					0
				},
				
				{
					"drivingwheel",
					0
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"indicator_speed",
					0
				},
				
				{
					"indicator_rpm",
					0
				},
				
				{
					"indicator_fuel",
					0
				},
				
				{
					"fuel",
					1
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"gear_lever",
					0
				},
				
				{
					"gear_lever2",
					0
				},
				
				{
					"gear_lever3",
					0
				},
				
				{
					"engineoff",
					0
				},
				
				{
					"startup",
					0
				},
				
				{
					"tyre_pressure_r1",
					1111.22
				},
				
				{
					"tyre_pressure_r2",
					1111.22
				},
				
				{
					"tyre_pressure_g1",
					1111.22
				},
				
				{
					"tyre_pressure_r3",
					1111.22
				},
				
				{
					"obsturret",
					0
				},
				
				{
					"obsgun",
					0
				},
				
				{
					"obselevation",
					0
				},
				
				{
					"wheel_1_1_damper",
					0.57999998
				},
				
				{
					"wheel_2_1_damper",
					0.55000001
				},
				
				{
					"wheel_1_2_damper",
					0.56999999
				},
				
				{
					"wheel_2_2_damper",
					0.74000001
				},
				
				{
					"door_lf",
					0
				},
				
				{
					"door_rf",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=0;
			verticalOffsetWorld=0;
		};
	};
}; 