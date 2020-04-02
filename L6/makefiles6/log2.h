int temp2;
using namespace std;
int power(int x2,  int y2) 
{ 
	//int temp2; 
	if( y2 == 0) 
		return 1; 
	temp2 = power(x2, y2/2); 
	if (y2%2 == 0) 
		return temp2*temp2; 
	else
		return x2*temp2*temp2; 
} 
int myalgo(int n2)
{
 int a2 = (int)log2(n2);
  int sum=0;

     //cout<<a<<endl;
     for (int i = 0; i < a2; ++i)

     {
     	temp2=rand() % (n2) + a2;
     	int b2=power(temp2,temp2+4);
     	 sum+=b2;


     }
	return (sum/a2);	

}