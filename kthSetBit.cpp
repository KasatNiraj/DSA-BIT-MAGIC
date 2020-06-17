// Function to check if Kth bit is set or not
bool checkKthBit(int n, int k){
    //leftshift k digits and doing logical and with the number
    if((1 << (k)) & n)
        return true;
    return false;
    
}
