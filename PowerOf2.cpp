// Function to check power of two
bool isPowerofTwo(long long n){
    
    if(n==1)
        return true;
    //numbers in power of 2 have only 1 bit set
    //if we and it by substracting 1 from it
    //the obtained result will always be 0
    //doesn't holds true in case of 1
    if(n&&!(n&(n-1)))  
        return true;
    return false;
    
}
