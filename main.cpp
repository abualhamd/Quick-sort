#include <iostream>

using namespace std;

int n;

void part(int arr[],int low,int high,int &pivotInd){
    int pivotItem = arr[low];
    int j=low;
    for(int i=low+1;i<=high;i++){
        if(arr[i]<pivotItem)
        {
            j++;
            swap(arr[i],arr[j]);
        }
    }
    pivotInd = j;
    swap(arr[low],arr[j]);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}

void quickSort(int arr[],int low,int high){
    if(low<high)
    {
        int pivotInd ;
        part(arr,low,high,pivotInd);
        quickSort(arr,low,pivotInd-1);
        quickSort(arr,pivotInd+1,high);
    }
}

int main()
{
    int arr[] = {15,22,13,27,12,10,20,25};
    int arr2[] = {15,13,22,27,12,10,20,25};
    n=sizeof(arr)/sizeof(arr[0]);

    quickSort(arr,0,n-1);
    quickSort(arr2,0,n-1);

    return 0;
}
