#include "bubble.h"
#include "merg.h"
#include <iostream>

using namespace std;

//int low;
//int pivot;
//int high;

int main() {

    BubbleSort bo;
    bo.Sort(); 
    bo.Print(); 
   
 
    MergeSort mo;
    mo.Sort(0, 19);
    mo.Print();

}
