// Function to find number of bits to be flip
// to convert A to B
int countBitsFlip(int a, int b){
    
    int res=a^b; //doing xor will set bits that need to be flipped
    int count=0;
    while(res){     //counting no of bits to be flipped
        res&=res-1;
        count++;
    }
    return count;
    
}
