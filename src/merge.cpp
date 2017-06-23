#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include "merg.h"

using namespace std;

MergeSort:: MergeSort(){
 cout << "Create data for Merge Sort" << endl;
 srand(time(0));
  for(int x = 0; x<20; x++)
  {
    arr[x] = 1 + rand()%50;
    cout << arr[x] << " ";

  }

  cout << endl;
 
}
void MergeSort::merge(int low,int pivot,int high) {
int h,i,j,k;
    h=low;
    i=0;
    j=pivot+1;
    int num = high - low +1;
    int b[num];
    
    cout << "h: " << h << endl;
    cout << "j: " << j << endl;
    cout << "low: " << low << endl;
    cout << "high: " << high << endl;
    cout << "num: " << num << endl;
    
    cout << "Left subarray: " << endl;
    for (int p = low; p <= pivot; p++)
        cout << arr[p] << " ";
    cout << endl;
    cout << "================" << endl; 
    cout << "Right subarray: " << endl;
    for (int p = pivot+1; p <= high; p++)
        cout << arr[p] << " ";
    cout << endl;
    cout << "================" << endl; 
     
    while((h<=pivot)&&(j<=high))
    {
        if(arr[h]<=arr[j])
        {
            b[i]=arr[h];
            h++;
        }
        else
        {
            b[i]=arr[j];
            j++;
        }
        i++;
    }

    if(h>pivot)
    {
        for(k=j; k<=high; k++)
        {
            b[i]=arr[k];
            i++;
        }
    }
    else
    {
        for(k=h; k<=pivot; k++)
        {
            b[i]=arr[k];
            i++;
        }
    }
    cout << "Merged array: " << endl;
    for(k=low; k<=high; k++) {
        arr[k]=b[k-low];
        cout << b[k-low] << " ";
    }
    cout << endl;
    cout << "===================" << endl;

}

void MergeSort:: Sort(int low, int high){
  int pivot;
    if(low<high)
    {
        pivot=(low+high)/2;
        Sort(low,pivot);
        Sort(pivot+1,high);
        merge(low,pivot,high);
    }

}

void MergeSort:: Print(){
  cout << endl;
  cout << "Completed Merge Sort Below" << endl;

  for(int i=0; i<19; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

}
