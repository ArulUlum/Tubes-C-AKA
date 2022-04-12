#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
using namespace std;

int main() {
    int n, i, j, temp;

    cout<<"Insertion Sort"<<endl;
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
    for (i = 1;i<n;i++){
        for (j = i; j>0; j--){
            if (data[j] < data[j-1]){
                temp=data[j];
                data[j]=data[j-1];
                data[j-1]=temp;
          }
      }
    }
    double stop = clock();
    /*for (i=0; i<n; i++) {
        cout<<data[i]<<" ";
    }*/
    cout<<"\nWaktu eksekusi : "<<(stop-start)/1000<<" Second"<<endl;
}
