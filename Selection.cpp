#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
using namespace std;

int main() {
    int n, i, j, Min, temp;

    cout<<"Selection Sort"<<endl;
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
    for (i = 0;i<n;i++){
        Min = i;
        for (j=i+1;j<n;j++){
            if (data[j] < data[Min]){
                Min = j;
            }
        }
        temp=data[Min];
        data[Min]=data[i];
        data[i]=temp;
    }
    double stop = clock();
    /*for (i=0; i<n; i++) {
        cout<<data[i]<<" ";
    }*/
    cout<<"\nWaktu eksekusi : "<<(stop-start)/1000<<" Second"<<endl;
}
