#include <iostream>
#include "Rat.h"
using namespace std;

int main(){
    Rat a(6,10);
    a.Show();
    a.Normalize();
    a.Show();
    return 0;
}