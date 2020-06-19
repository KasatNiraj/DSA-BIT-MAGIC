// Function to check power of two
bool isPowerofTwo(long long n){
    
   if(n==0)
        return false;
    //numbers in power of 2 have only 1 bit set
    //if we and it by substracting 1 from it
    //the obtained result will always be 0
    //doesn't holds true in case of 0
    //because 0 & -1 will throw error as 
    //bitwise operators can't be used on negative numbers
    if(n&&!(n&(n-1)))  
        return true;
    return false;
    
}
