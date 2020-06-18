/ Function to display array element having odd frequency
// arr: input array
// n: size of array
void oddoccurence(int arr[], int n)
{ 
    int res=0;
    for(int i=0;i<n;i++){
        res=res ^ arr[i];    //x^x is always zero so if an element occurs even no of times 
                             //the res will be zero, else it will be the element having odd occurence
    }
    cout<<"odd occuring element is "<<res;
    
} 
