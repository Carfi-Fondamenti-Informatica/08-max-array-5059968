#include <iostream>
#include "libb.h"
using namespace std;
int main() {
    int dim=0;
    cin>>dim;
    int num[dim];
    for (int i=0;i<dim;i++){
       cin>>num[i];
    }
    cout<<massimo(num,dim)<<endl;
    return 0;
}
