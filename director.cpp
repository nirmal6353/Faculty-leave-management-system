#include<bits/stdc++.h>
using namespace std;

class Director
{
	private:
	char user[100];
	char password[100];
	public:
		Director()
		{
				strcpy(user,"direc");
		strcpy(password,"yyy");
			
			int count=5,flag=0;
		char user_1[100],password_1[100];
		while(count--&&flag==0)
		{
			cout<<endl<<"      --------- "<<endl;
            cout<<"       SIGN IN  "<<endl;
            cout<<"      --------- "<<endl;
            cout<<"Username : ";
            cin>>user_1;
            cout<<"Password : ";
            cin.ignore();
            cin>>password_1;
			if(strcmp(user,user_1)==0&&strcmp(password,password_1)==0)
			{
				system("CLS");
				cout<<"LOGIN SUCCESSFUL"<<endl;
				flag=1;
				break;
			}
			else
		  {
		  	system("CLS");
		  
		   if(count!=0)
		   cout<<endl<<"         AUNTHENTICATION FAILED"<<endl<<endl<<"*Please enter valid login credentials "<<endl<<"*You have "<<count<<" chances remaining "<<endl<<endl;
            if(count==0)
         {
			   cout<<endl<<"*You have reached the maximum count"<<endl<<endl<<"                 Please try again later"<<endl;
		  exit(4);
		  
	}
		  
		}
}}};
