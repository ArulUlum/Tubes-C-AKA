#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
using namespace std;

int main() {
    int n, i, j, gap, temp;

    cout<<"Shell Sort"<<endl;
    cout<<"Masukkan jumlah data: ";
    cin>>n;
    static int data[2000000];
    for (i = 0; i<n; i++){
        data[i] = rand() % n+1;
        //cout<<data[i]<<" ";
    }
    cout<<"\n\ndata setelah di sorting"<<endl;
    double start = clock();
    srand(time(NULL));
    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i += 1) {
            temp = data[i];
            for (j = i; j >= gap && data[j - gap] > temp; j -= gap){
                data[j] = data[j - gap];
            }
            data[j] = temp;
        }
    }
    double stop = clock();
    /*for (i=0; i<n; i++) {
        cout<<data[i]<<" ";
    }*/
    cout<<"\nWaktu eksekusi : "<<(stop-start)/1000<<" Second"<<endl;
}
