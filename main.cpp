#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <iostream>
#include "src/LoadData.h"
#include "src/AdminMenu.h"

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);

    bool run_tests_only = true;
    bool debug_LoadData = false;

    LoadData data;
    AdminMenu menu = AdminMenu(data);

    if (debug_LoadData){
        data.debug_displayEdges();
        data.displayLines();
        data.displayStopCodes();
        data.displayStops();
    }
    menu.mainMenu();

    return RUN_ALL_TESTS();
}
