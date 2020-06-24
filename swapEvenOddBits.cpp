// function to swap odd and even bits
unsigned int swapBits(unsigned int n)
{
    //to get all even bits in n
	unsigned int even_bits=n & 0xAAAAAAAA;
	//to get all odd bits in n
	unsigned int odd_bits= n & 0x55555555;
	//right shift even bits
	even_bits >>=1;
	//left shift odd bits
	odd_bits <<=1;
	//doing logical or opeartion on even and odd bits
	return (even_bits | odd_bits);//combine even and odd bits
	
}
