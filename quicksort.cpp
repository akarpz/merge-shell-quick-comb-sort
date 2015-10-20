#include <iostream>
#include <cstdlib>
using namespace std;

int pivot(int list[], int l, int h){
    int p = list[h];
    int i = l;
    for(int j=l;j<h;j++){
        if(list[j] <= p){
            swap(list[j],list[i]);
            i++;
        }
    }
    swap(list[i],list[h]);
    return i;
}

void quickSort(int list[], int l, int  h){
    if (l<h){
        int p = pivot(list,l,h);
        quickSort(list,l,p-1);
        quickSort(list,p+1,h);
    }
}


int main(){
    int tester[10];
    for(int i=0;i<10;i++){
        tester[i]= 10-i;
        cout << tester[i] << " ";
    }
    cout << endl << endl;
    quickSort(tester,0,9);
    for(int j=0;j<10;j++){
        cout << tester[j] << " ";
    }
    cout << endl;
    return 0;
}