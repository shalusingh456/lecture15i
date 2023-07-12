#include<iostream>
using namespace std;
int main()
{
//	char s,h,a,l,u;
//	cin>>s>>h>>a>>l>>u;

      char name[5];
   // char name[1000];
    
    cout<<"Enter the name : (Note : Enter # after the end of your name:)";
    
    int i=0;   //initial value of i is 0
    
    while (name[i]!='#')   // here i is the previous input 
    {
    	cin>>name[i];
    	
    	if(name[i]=='#')break;
    	
    	
    	i++;     //when the name is beign entered, the value of i is increasing
	}

    /*for(i=0;i<5;i++) // i used a for loop which ran fro i in [0,4
    {
    	cin >>name[i];
    	
	}*/
	
//	cout<<"The name you have just entered is "<<s<<h<<a<<l<<u;

       i = 0; // Again need to change the value of i to 0 before running the second while loop



	cout<<"The name you have just entered is "<<endl;
	
	/*for(i=0;i<5;i++)
	{
		cout<<name[i];
	}*/
	
//	while(name[i]!='#')   // we have again used i
//	{
//	cout<<name[i];	
//	}
     
     string name1;   // over here string is a datatype and not a name  so similar is similar to int,  float, double
   
      cin>>name;
      cout<<name;

}