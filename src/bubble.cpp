#include "bubble.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>

using namespace std;

BubbleSort::BubbleSort() {
  cout << "Construct BubbleSort" << std::endl;

  srand(time(0));
  for(int x = 0; x<20; x++)
  {
    arr[x] = 1 + rand()%50;
    cout << arr[x] << " ";
  
  }
  cout << endl;

}

void BubbleSort::Sort() {
  cout << endl; 
  cout << "Do Sort" << endl;
  
  for(int x=0; x< 19; x++){
     
     for(int y=0; y<19-x; y++) {

        if(arr[y]>arr[y+1]) {
        
         int temp = arr[y];
         arr[y] = arr[y+1];
         arr[y+1] = temp;      
   }
  }
 }
}

void BubbleSort::Print() {
  cout << "Do print" << endl;
  for( int i=0; i<20; i++) {
    cout << arr[i] << " ";
  }
  cout << endl; 
}
