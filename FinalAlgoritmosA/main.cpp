//
//  main.cpp
//  FinalAlgoritmosA
//
//  Created by Miguel Cuellar on 5/6/16.
//  Copyright © 2016 Miguel Cuellar. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    imin=INT_MAX;
    imax=INT_MIN;
    
    cin>>n;
    int difmax = 0;
    for (int i=0; i<n-1; i++){
            if (imin>arr[i]){
                imin=arr[i];
            }else if(imax<arr[i]){
                imax=arr[i];
            }
    }
    int mayor = imax;
    int menor = imin;
    return 0;
}
