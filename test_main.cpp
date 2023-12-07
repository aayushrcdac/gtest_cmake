#include <iostream>
#include <cstring>
#include <string>
#include <gtest/gtest.h>
#include "my_main.h"

using namespace std;

TEST(MyTest, my_main) {
    cout << "calling my main from UT ";
    ASSERT_EQ(0, my_main());
}

int main(int argc, char **argv) {
    cout << "\nHello Google Test Example\n";
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
