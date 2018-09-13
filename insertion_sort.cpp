#include <iostream>

using namespace std;

int main() {
    //int arr[]={5,2,23,4,10,7};        //TESTING ARRAY
    int value,i,j,k,size,arr[10];
    cout<<"\nEnter size of array :";
    cin>>size;
    cout<<"\nEnter elements of the array";
     for(k = 0;k<size;k++){
        cin>>arr[k];
    }
    for(i=1;i<size;i++){
        value = arr[i];
        for(j=i;j>=0 && arr[j-1]>value;j--){
            arr[j] = arr[j-1];
        }
        arr[j] = value;
    }
    cout<<"\n\tTHE NEW ARRAY\n\t";
    for(k = 0;k<size;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}
