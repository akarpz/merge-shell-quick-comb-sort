#include <iostream>
using namespace std;


void merge(int *list, int l, int h, int m){
    int i, j, k, c[h];
    i = l;
    k = l;
    j = m + 1;
    while (i <= m && j <= h){
        if (list[i] < list[j]){
            c[k] = list[i];
            k++;
            i++;
        }
        else{
            c[k] = list[j];
            k++;
            j++;
        }
    }
    while (i <= m){
        c[k] = list[i];
        k++;
        i++;
    }
    while (j <= h){
        c[k] = list[j];
        k++;
        j++;
    }
    for (i = l; i < k; i++){
        list[i] = c[i];
    }
}
void mergesort(int *list, int l, int h){
    if (l < h){
        int m=(l+h)/2;
        mergesort(list,l,m);
        mergesort(list,m+1,h);
        merge(list,l,h,m);
    }
}

int main(){
    int tester[10];
    for(int i=0;i<10;i++){
        tester[i]= 10-i;
        cout << tester[i] << " ";
    }
    cout << endl << endl;
    mergesort(tester, 0,9);
    for(int j=0;j<10;j++){
        cout << tester[j] << " ";
    }
    cout << endl;
    return 0;
}