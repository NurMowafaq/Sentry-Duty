#include<iostream>
#include<string.h>
using namespace std;
void Process(int ,string  ,int  );
main()
{
	int sentryDuty , requiredDay ;
    string firstDay;
    
	
	cout<<" Enter The Number Of Days Between Each Sentry Duty : ";
	cin>>sentryDuty;
	
	cout<<"\n When is Your First Day on Sentry Duty? : ";
	cin>>firstDay;
	
	cout<<"\n Enter a Number To Determine The Required Day : ";
	cin>>requiredDay;
	
	Process( sentryDuty , firstDay , requiredDay );
}


void Process(int sentryDuty ,string firstDay ,int requiredDay )
{
	
    string Days[ ] = {"friday","saturday","sunday","monday","tuesday","wednesday","thursday"};
	int Pointer=0 , Goal=0;
	
	// Compare Between the Input Day and Own Days
	for (int i=0 ; i<7 ; i++)
	
    if (firstDay.compare(Days[i])==0)
    	Pointer=i;
    	Goal++;
    	   
    // Add sentry Duty     on pointer which pointes to first day of sentry Duty
	while(1)
    	{
    	
    		Pointer += sentryDuty;
			  	Goal++;
			  	
				  
			if(	Goal== requiredDay) 
			{
			  cout<<"\n The Day is "<<Days[Pointer % 7];
			  break;
	
			}
    		    
		}
}
