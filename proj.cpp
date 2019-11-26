#include<bits/stdc++.h>
#include <conio.h>

char disp_name[100],gen;


using namespace std;
class faculty{
	private:
		char user[100];
	    char password[100];
    public:
        class Leave{
        public:
            int cl,spl,vl,el;
            char from_date[11];
            char to_date[11];
        };
        Leave f_leave;
        
        
        
        int count=5;
        
        char mail_id[50],response[25];
        faculty(){
        	while(count--) {
			cout<<"      --------- "<<endl;
            cout<<"       SIGN IN  "<<endl;
            cout<<"      --------- "<<endl;
            cout<<"Username : ";
            cin>>user;
            cout<<"Password : ";
            cin.ignore();
            cin>>password;
            /*int i=0;
            char ch;
            
   while (1) {
      if (i < 0) {
         i = 0;
      }
      ch = getch();
 
      if (ch == 13)
         break;
      if (ch == 8) /*ASCII value of BACKSPACE
      {
      	if(i!=0)
      	{
		
        putch('\b');
		putch(NULL);
		putch('\b');
		if(i>0)
		password[i-1]='\0'; 
         i--;}
         continue;
      }
 
      password[i++] = ch;
      ch = '*';
      putch(ch);
   }*/
            FILE *fp=fopen("login2.txt","r");
            char user_1[100],password_1[100];
            int flag=0;
            
          while(fscanf(fp,"%s %s %s %c",user_1,password_1,disp_name,&gen)!=EOF)
          {
            
            if(strcmp(user,user_1)==0&&strcmp(password,password_1)==0)
            {
                flag=1;
          
                system("CLS");
                cout<<endl<<"LOGIN SUCCESSFUL"<<endl<<endl;
                fclose(fp);
                break;
            }    
         }
         if(flag==1)
         break;
         else
         {
         	system("CLS");
		 if(count!=0)
		   cout<<endl<<"         AUNTHENTICATION FAILED"<<endl<<endl<<"*Please enter valid login credentials "<<endl<<"*You have "<<count<<" chances remaining "<<endl<<endl;
            if(count==0)
         {
			   cout<<endl<<"*You have reached the maximum count"<<endl<<endl<<"                 Please try again later"<<endl;
           fclose(fp);
			exit(1);}
         
         	
	
	}
	
         }
         
        
        
}}; 

class HOD
{
};

class Admin
{
};

class Director
{
};

int main()
{
	
	cout<<"Login as:\nA)Faculty\nB)HOD\nC)Admin\nD)Director\n\nEnter option: ";
	char log_opt;
	char dep[4];
	cin>>log_opt;
	char name[100];
	char str='E';
	
	
	if(log_opt=='A')
    
	{
	faculty fac_1;
	
	cout<<"What do you want to do?\nA)Apply Leave\nB)Check Notification\n\nenter option: ";
	char op_ab;
	cin>>op_ab;
	
	system("CLS");
	
    if(op_ab=='A') {
	
    
	cout<<"                                         ________________________________________       "<<endl;
    cout<<"                                                                                    "<<endl;
	cout<<"                                           IITJ FACULTY LEAVE MANAGEMENT SYSTEM        "<<endl;
	cout<<"                                         ________________________________________        "<<endl<<endl;
		
	char opt;
	int flag_2=0;
	
	if(gen=='M')
	cout<<"Welcome Mr."<<disp_name<<" ,"<<endl<<endl;
	if(gen=='F')
	cout<<"Welcome Ms."<<disp_name<<" ,"<<endl<<endl;	
	
	int k=1;
	
	cout<<k++<<") Enter your full name: ";
	cin.ignore();
	
	gets(name);
	
	
	cout<<endl<<k++<<") Department (CSE/EE/BB/ME) : ";
	cin>>dep;
	
	cout<<endl<<k++<<") Select the type of leave:-"<<endl<<endl<<"    A. Casual Leave"<<endl<<"    B. Special Casual Leave"<<endl<<"    C. Vacation Leave"<<endl<<"    D. Earn Leave"<<endl<<endl;
	while(flag_2==0)
	{
	cout<<"    -> Enter option: ";
	cin>>opt;
	int n_days;

	

	switch(opt)
	{
	   case 'A':
	
	     	fac_1.f_leave.cl=n_days;
	     	cout<<endl<<k++<<") Enter the number of days of leave: ";
	        cin>>n_days;
	     	flag_2=1;
		    break;
	
	   case 'B':
	
	 	    fac_1.f_leave.spl=n_days;
	 	    cout<<endl<<k++<<") Enter the number of days of leave: ";
	        cin>>n_days;
	 	    flag_2=1;
	        break;
	   case 'C':
	
	     	fac_1.f_leave.vl=n_days;
	        cout<<endl<<k++<<") Enter the number of days of leave: ";
	        cin>>n_days;
	     	flag_2=1;
	        break;
	   case 'D':
	
		    fac_1.f_leave.el=n_days;
		   	cout<<endl<<k++<<") Enter the number of days of leave: ";
	        cin>>n_days;
		    flag_2=1;
		    break;
	   default:
	   	
	   	    cout<<"Please enter valid option : ";
	   	    break;
}
if(flag_2==1)
break;
}
	

	
	cout<<endl<<k++<<") Enter date of leave (dd/mm/yyyy) : ";
	cin>>fac_1.f_leave.from_date;
	cout<<endl<<k++<<") Enter date of arrival (dd/mm/yyyy) : ";
	cin>>fac_1.f_leave.to_date;
	cin.ignore();
	
	cout<<endl<<k++<<") Administrative responsibility assigned to : ";
	gets(fac_1.response);
	FILE *fp;
	
	fp=fopen("responsibility2.txt","a");
	

	fprintf(fp,"%s %s %s %s %s %c\n",name,dep,fac_1.f_leave.from_date,fac_1.f_leave.to_date,fac_1.response,str);
      fclose(fp);
	
}

if(op_ab=='B')
{

	cout<<"Enter your full name: ";
	char resp_nam[50];
	cin>>resp_nam;
	
	FILE *fp;
	
	fp=fopen("responsibility2.txt","r+");
	
	
	while(fscanf(fp,"%s %s %s %s %s %c",name,dep,fac_1.f_leave.from_date,fac_1.f_leave.to_date,fac_1.response,&str)!=EOF)
	{
		
		cin.ignore();
		
		
		if(strcmp(fac_1.response,resp_nam)==0&& (str=='E'))
		{
			
			cout<<name<<endl<<dep<<endl<<fac_1.f_leave.from_date<<endl<<fac_1.f_leave.to_date<<endl;
			cout<<endl<<"Do you want to take the responsibility?\n Y/N  ";
			char y_n;
			cin>>y_n;
			
			if(y_n=='Y')
			{
			 str='Y';
			
			
			if(strcmp(dep,"CSE")==0)
			{
				char status='E';
				FILE *fs;
				fs=fopen("HODCS.txt","a");
				
				fprintf(fs,"%s %s %s %s %s %c",name,dep,fac_1.f_leave.from_date,fac_1.f_leave.to_date,fac_1.response,status);
				fclose(fs);
			}
		   else	if(strcmp(dep,"EE")==0)
			{
				FILE *fs;
				fs=fopen("HODEE.txt","a");
				char status='E';
				fprintf(fs,"%s %s %s %s %s %c",name,dep,fac_1.f_leave.from_date,fac_1.f_leave.to_date,fac_1.response,status);
				fclose(fs);
			}
			else if(strcmp(dep,"ME")==0)
			{
				FILE *fs;
				fs=fopen("HODME.txt","a");
				char status='E';
				fprintf(fs,"%s %s %s %s %s %c",name,dep,fac_1.f_leave.from_date,fac_1.f_leave.to_date,fac_1.response,status);
				fclose(fs);
			}
			else if(strcmp(dep,"BB")==0)
			{
				FILE *fs;
				fs=fopen("HODBB.txt","a");
				char status='E';
				fprintf(fs,"%s %s %s %s %s %c",name,dep,fac_1.f_leave.from_date,fac_1.f_leave.to_date,fac_1.response,status);
				fclose(fs);
			}
		}
			else
			{
		      str='N';
			}
			
			fseek(fp,-1,SEEK_CUR);
			
			fputc(str,fp);
			fseek(fp,1,SEEK_CUR);
			
		}
	}
		rewind(fp);
		while(fscanf(fp,"%s %s %s %s %s %c",name,dep,fac_1.f_leave.from_date,fac_1.f_leave.to_date,fac_1.response,&str)!=EOF)
		{
			if(strcmp(resp_nam,name)==0)
			{
				if(str=='Y')
				{
				cout<<"YOUR ACADEMIC RESPONSIBLITY IS ACCEPTED BY "<<fac_1.response;
				fseek(fp,-1,SEEK_CUR);
				fputc('C',fp);
				}
				if(str=='N')
				{
				cout<<"YOUR ACADEMIC RESPONSIBLITY IS REJECTED BY "<<fac_1.response;
				fseek(fp,-1,SEEK_CUR);
				fputc('C',fp);
				}
			}
			fseek(fp,1,SEEK_CUR);
		}
		
	
	
	fclose(fp);
	
	
	
	
	
	
}

}

else if(log_opt=='B')
{
	HOD hd;
	
}

else if(log_opt=='C')
{
	Admin ad;
	
}

else if(log_opt=='D')
{
	Director dd;
	
}
	
	
	
	
	return(0);
}
