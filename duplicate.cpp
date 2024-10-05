#include<iostream>
using namespace std;
int duplicate(int arr[],int nums){
    if (nums == 0) return 0;
    int ans=0;
    for(int i=1;i<nums;i++){
         
        if(arr[i]!=arr[ans]){
            ans++;
            arr[ans]=arr[i];
        }
        
    }
    return ans + 1;
    
   
    
}
int main() {
    int arr[]={1,2,2,3,4};
    int nums = sizeof(arr) / sizeof(arr[0]);

    int res=duplicate(arr,nums);
    cout<<"array is"<<endl;
    for(int i=0;i<res;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}