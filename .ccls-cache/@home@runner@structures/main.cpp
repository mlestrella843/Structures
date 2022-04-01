/*For example:
Enter time 1 (hh/mm/ss): 5 22 35
Enter time 2( hh/mm/ss):3 14 24

Total = 8 h  36min 59sec*/

	#include <iostream>
#include <string.h>
using namespace std;

struct time
  {
    	int hours;
    	int minutes;
   	 int seconds;           
  	}t1, t2, sum;

int main()
 	 { cout<<"Enter the 1st time: "<<endl;
    	cout<<"Enter 1st hour: ";
    	cin>>t1.hours;

    	cout<<"Enter 1st minutes: ";
    	cin>>t1.minutes;

   	 cout<<"Enter 1st seconds: ";
    	cin>>t1.seconds;
    	cout<<endl;

    	cout<<"Enter the 2nd time: "<<endl;
    	cout<<"Enter 2nd hour: ";
   	 cin>>t2.hours;

    	cout<<"Enter 2nd minutes: ";
    	cin>>t2.minutes;
    
    	cout<<"Enter 2nd seconds: ";
   	 cin>>t2.seconds;
   	 cout<<endl;

    	sum.hours = t1.hours + t2.hours;
   	 sum.minutes = t1.minutes + t2.minutes;
    	sum.seconds = t1.seconds + t2.seconds;

   	 cout<<"The sum of time is: "<<sum.hours<<"h " 
    	<<sum.minutes<<"min "<<sum.seconds<<"sec "<<endl;
   
        return 0;
    }
