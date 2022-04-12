#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <time.h>
using namespace std;

int main() {
    int n, i, temp;

    cout<<"Gnome Sort"<<endl;
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
    i = 0;
    while (i < n) {
        if (i == 0)
            i++;
        if (data[i] >= data[i - 1])
            i++;
        else {
            temp = data[i];
            data[i] = data[i - 1];
            data[i - 1] = temp;
            i--;
        }
    }
    double stop = clock();
    /*for (i=0; i<n; i++) {
        cout<<data[i]<<" ";
    }*/
    cout<<"\nWaktu eksekusi : "<<(stop-start)/1000<<" Second"<<endl;
}
