/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void selection(int arr[], int n){
    for(int i = 0; i<=n-2; i++){
        int min = i;
        
        for(int j = i; j<=n-1; j++){
            if(arr[min] > arr[j]){
                swap(arr[min], arr[j]);
            }
        }
    }
}

void bubble(int arr[], int n){
    
    for(int i = n-1; i >= 1; i--){
        for(int j = 0; j <= i-1; j++){
            
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
            
        }
    }
}

void insertion(int arr[], int n){
    
    for(int i = 1; i<= n-1; ++i){
        
        for(int j = i; j>=1; j--){
            if(arr[j] > arr[j-1]){
                swap(arr[j], arr[j-1]);
            }
        }
        
    }
    
}

int main()
{
    int arr[] = {4,5,2,3,1,8,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    selection(arr, size);
    for(int i = 0; i<size; i++){
        cout<<arr[i];
    }
    cout<<endl;
    
    
    
    bubble(arr, size);
    for(int i = 0; i<size; i++){
        cout<<arr[i];
    }
    cout<<endl;
    
    
    
    selection(arr,size);
    for(int i = 0; i<size; i++){
        cout<<arr[i];
    }
    cout<<endl;

    return 0;
}
