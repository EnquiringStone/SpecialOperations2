#include "SOS_BuildingTypes.hpp"

class SOS_BuildingPositions {
    class Military {
        units[] = {"O_Soldier_F", "O_Soldier_lite_F"};
        class Land_Airport_Tower_F : Building {
            positions[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
            specialUnits[] = {"O_Sharpshooter_F", "O_soldier_M_F", "O_HeavyGunner_F"};
            specialUnitsPositions[] = {12,13,14,15,16,17,18};
            spawnPercentSpecialUnit = 50;
        };
        class Land_Hangar_F : Hangar {};
        class Land_Radar_F : Building {
            positions[] = {2,3,4,5,6,7,8,9};
            specialUnits[] = {"O_Sharpshooter_F", "O_soldier_M_F", "O_engineer_F"};
            specialUnitsPositions[] = {2,3,4,5,6,7,8,9};
            spawnPercentSpecialUnit = 40;
        };
        class Land_MilOffices_V1_F : MilitaryOffices {};
        
        class Land_Cargo_House_V1_F : CargoHouse {
            specialUnits[] = {"O_officer_F"};
        };
        class Land_Cargo_House_V2_F : CargoHouse{
            specialUnits[] = {"O_Soldier_TL_F"};
        };
        class Land_Cargo_House_V3_F : CargoHouse {
            specialUnits[] = {"o_survivor_F"};
        };
        class Land_Research_house_V1_F : CargoHouse {
            specialUnits[] = {"o_survivor_F"};
            spawnPercentSpecialUnit = 30;
        };
        class Land_Medevac_house_V1_F : CargoHouse {
            specialUnits[] = {"O_medic_F"};
            spawnPercentSpecialUnit = 80;
        };
        
        class Land_Cargo_HQ_V1_F : CargoHQ {};
        class Land_Cargo_HQ_V2_F : CargoHQ {};
        class Land_Cargo_HQ_V3_F : CargoHQ {};
        class Land_Research_HQ_F : CargoHQ {
            specialUnits[] = {"O_engineer_F", "O_soldier_repair_F"};
            specialUnitsPositions[] = {1,2,3,4,5,6,7,8,9,10,11,12};
            spawnPercentSpecialUnit = 80;
        };
        class Land_Medevac_HQ_V1_F : CargoHQ {
            specialUnits[] = {"O_medic_F"};
            specialUnitsPositions[] = {1,2,3,4,5,6,7,8,9,10,11,12};
            spawnPercentSpecialUnit = 80;
        };
        
        class Land_Cargo_Patrol_V1_F : CargoPatrol {};
        class Land_Cargo_Patrol_V2_F : CargoPatrol {};
        class Land_Cargo_Patrol_V3_F : CargoPatrol {};
        
        class Land_Cargo_Tower_V1_F : CargoTower {};
        class Land_Cargo_Tower_V2_F : CargoTower {};
        class Land_Cargo_Tower_V3_F : CargoTower {};
        
        
        class Land_Mil_hangar_EP1 : Hangar {};
        class Land_Ss_hangar : Hangar {};
        class Land_Hangar_2 : Hangar {
            positions[] = {0,1,2,3,4,5,6,7};
        };
        class Land_Mil_Barracks_i_EP1 : MilitaryOffices {};
        class Land_Vez : Building {
            positions[] = {0,2};
            specialUnits[] = {"O_HeavyGunner_F", "O_Soldier_GL_F"};
            specialUnitsPositions[] = {0,2};
            spawnPercentSpecialUnit = 30;
        };
        class Land_Letistni_hala : Building {
            positions[] = {0,1,3,4,7,8,9,10,11,14,15,16,17,18,19,21};
            specialUnits[] = {"O_HeavyGunner_F", "O_Soldier_GL_F"};
            specialUnitsPositions[] = {14,15,16,17,18,19};
            spawnPercentSpecialUnit = 65;
        };
        class Land_fortified_nest_small_EP1 : FortifiedNestSmall {};
        class Land_fortified_nest_small : FortifiedNestSmall {};
        class Land_fortified_nest_big_EP1 : Building {
            positions[] = {0,1,2,3,4,5,6,7,8,9,10,11,12};
            specialUnits[] = {"O_HeavyGunner_F", "O_Soldier_AR_F"};
            specialUnitsPositions[] = {3,5,6,7,8,10,12};
            spawnPercentSpecialUnit = 90;
        };
        class Land_Ind_IlluminantTower : Building {
            positions[] = {0};
            specialUnits[] = {"O_Sharpshooter_F", "O_recon_M_F", "O_soldier_M_F"};
            specialUnitsPositions[] = {0};
            spawnPercentSpecialUnit = 100;
        };
        class Land_a_stationhouse : Building {
            positions[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
            specialUnits[] = {"O_Soldier_GL_F", "O_soldier_M_F", "O_Soldier_AA_F", "O_Soldier_AT_F", "O_HeavyGunner_F"};
            specialUnitsPositions[] = {3,5,6,7,8,10,12,18,20,22,23,25};
            spawnPercentSpecialUnit = 75;
        };
        class Land_Barrack2 : Building {
            positions[] = {0,1,2,3,4,5};
            specialUnits[] = {"O_officer_F", "O_Soldier_TL_F", "o_survivor_F", "O_SoldierU_SL_F"};
            specialUnitsPositions[] = {0,2,4,5};
            spawnPercentSpecialUnit = 30;
        };
        class Land_Mil_Guardhouse_EP1 : HouseAddon {};
        class Land_Mil_House_EP1 : Building {
            positions[] = {0,1};
            spawnPercentSpecialUnit = -1;
        };
        class Land_Mil_Repair_center_EP1 : Building {
            positions[] = {0,1,2,3};
            specialUnits[] = {"O_crew_F", "O_engineer_F", "O_soldier_repair_F"};
            specialUnitsPositions[] = {0,1,2,3};
            spawnPercentSpecialUnit = 80;
        };
        class Land_Mil_House : Building {
            positions[] = {0,1};
            spawnPercentSpecialUnit = -1;
        };
        class Land_Ind_Workshop01_04 : HouseAddon {};
        class Land_Hlidac_budka : Building {
            positions[] = {0,1,2,3,4};
            spawnPercentSpecialUnit = -1;
        };
    };
    class Stadium {
        class Land_Stadium_p4_F : StadiumSeats {};
        class Land_Stadium_p5_F : StadiumSeats {};
        class Land_i_Addon_04_V1_F : InnGarden {};
        class Land_MilOffices_V1_F : Building {
            positions[] = {0,1,2,3,4,5,6,7,8};
            specialUnits[] = {"O_Soldier_GL_F", "o_survivor_F", "O_HeavyGunner_F"};
            specialUnitsPositions[] = {0,2,6,7};
            spawnPercentSpecialUnit = 30;
        };
    };
    class Factory {
        class Land_Factory_Main_F : Building {
            positions[] = {0,1,2,3,4,5,6,7};
            specialUnits[] = {"O_engineer_F", "O_soldier_repair_F", "O_Soldier_AR_F"};
            specialUnitsPositions[] = {0,1,2,6,7};
            spawnPercentSpecialUnit = 60;
        };
        class Land_i_Barracks_V2_F : Barracks {
            positions[] = {0,2,6,9,11,15,17,18,21,24,26,30,32,34,35,37,39,42,44,46};
            specialUnitsPositions[] = {34,35,37,39,42,44,46};
        };
        class Land_Metal_Shed_F : Building {
            positions[] = {0,4,6};
            specialUnits[] = {"O_engineer_F", "O_soldier_repair_F"};
            specialUnitsPositions[] = {0,4,6};
            spawnPercentSpecialUnit = 50;
        };
        class Land_dp_bigTank_F : Building {
            positions[] = {0,1,5,6};
            specialUnits[] = {"O_Soldier_GL_F", "O_soldier_M_F", "O_Soldier_AA_F", "O_Soldier_AT_F", "O_HeavyGunner_F"};
            specialUnitsPositions[] = {0,1,5,6};
            spawnPercentSpecialUnit = 50;
        };
        class Land_i_Garage_V2_F : Garage {};
        class Land_i_Garage_V1_F : Garage {};
        class Land_i_Addon_02_V1_F : HouseAddon {};
        class Land_u_Addon_02_V1_F : HouseAddon {};
        class Land_u_Shed_Ind_F : IndustrialShed {};
        class Land_i_Shed_Ind_F : IndustrialShed {};
        
    };
};