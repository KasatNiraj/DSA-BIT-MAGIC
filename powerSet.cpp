// Function to print power set of a string
// Time- O(n^2)
// Space- O(1)
// Solution using XOR operator
void printPowerSet(char *set, int set_size) 
{ 
	int count=(1<<set_size);//there are 2 raised to n subsets possible from a set of size n
	for(int i=0;i<count;i++){
	    for(int j=0;j<set_size;j++){
	        
	        if((i&(1<<j))>0)    //check j'th set bit
	            cout<<set[j];
	       
	    }
	    cout<<"\t";
	}
}
