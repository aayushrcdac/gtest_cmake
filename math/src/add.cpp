#include <iostream>
#include <cmath>

using namespace std;

int add(int n1, int n2) {
    printf("\nThis is Add test \n");
    printf("\nThis will add two integers\n");
    printf("\nThis will return added values\n");
    if(n1 == 0 && n2 != 0) {
        printf("\nThis hits n1 = 0 case\n");
        return n2;
    } else {
        printf("\nThis hits n1 != 0 case\n");
        return n1+n2;
    }
}
