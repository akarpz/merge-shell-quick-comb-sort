#include <iostream>
#include <cstdlib>
using namespace std;

void combSort(int *list, int length)
{
    bool swapper;
    int gap = length;
    double shrink = 1.25;
    int temp;
    do{
        gap = (int) gap/shrink;
        if (gap < 1)
            gap = 1;
            
        swapper = false;
        for (int i=0;(i+gap)<length;i++){
            if (list[i] > list[i+gap]){
                swap(list[i],list[i+gap]);
                swapper = true;
            }
        }
    }
    while ((gap > 1) || (swapper == true));
}

int main(){
    int tester[10];
    for(int i=0;i<10;i++){
        tester[i]= 10-i;
        cout << tester[i] << " ";
    }
    cout << endl << endl;
    combSort(tester, 10);
    for(int j=0;j<10;j++){
        cout << tester[j] << " ";
    }
    cout << endl;
    return 0;
    }