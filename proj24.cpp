#include<bits/stdc++.h>
#include <conio.h>
#include <sstream>

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
        	while(count--) 
			{
				//system("CLS");
			cout<<endl<<"      ---------  "<<endl;
            cout<<"       SIGN IN   "<<endl;
            cout<<"      ---------  "<<endl;
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
      if (ch == 8) //ASCII value of BACKSPACE
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
		private:
		char user[100];
	    char password[100];
    public:
        
        int count=5;
            char user_1[100],password_1[100],bran[4];
        
        char mail_id[50],response[25];
        HOD(){
        	while(count--) 
			{
			//	system("CLS");
			cout<<endl<<"      --------- "<<endl;
            cout<<"       SIGN IN  "<<endl;
            cout<<"      --------- "<<endl;
            cout<<"Username : ";
            cin>>user;
            cout<<"Password : ";
            cin.ignore();
            cin>>password;
           /* int i=0;
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
            FILE *fp=fopen("HODF.txt","r");
            
            int flag=0;
            
          while(fscanf(fp,"%s %s %s ",user_1,password_1,bran)!=EOF)
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
         
   }}
	
};

class Admin
{
private:
	char user[100];
	char password[100];
	public:
		Admin()
		{
				strcpy(user,"admin");
		strcpy(password,"xxx");
			
			int count=5,flag=0;
		char user_1[100],password_1[100];
		while(count--&&flag==0)
		{
		//	system("CLS");
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
		  exit(3);
		  
	}
		  
		}
}}};

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



int main()
{
	char log1;

   do{

	   cin.ignore();


	cout<<"                                         __________________________________________       "<<endl;
    cout<<"                                                                                          "<<endl;
	cout<<"                                           INDIAN INSTITUTE OF TECHNOLOGY JODHPUR        "<<endl;
	cout<<"                                         __________________________________________        "<<endl<<endl;
		
	
	cout<<endl<<"Login as:\n\n A)Faculty\n B)HOD\n C)Admin\n D)Director\n\n   -> Enter option: ";
	char log_opt;
	char opt;
	int n_days;
	char dep[4];
	cin>>log_opt;
	char name[100];
	char str='E';
	
	
	if(log_opt=='A')
    
	{
	faculty fac_1;
	
	cout<<"What do you want to do?\n  A)Apply Leave\n  B)Check Notification\n\n  -> enter option: ";
	char op_ab;
	cin>>op_ab;
	
	system("CLS");
	
    if(op_ab=='A') {
	
    
	cout<<"                                         ________________________________________       "<<endl;
    cout<<"                                                                                    "<<endl;
	cout<<"                                           IITJ FACULTY LEAVE MANAGEMENT SYSTEM        "<<endl;
	cout<<"                                         ________________________________________        "<<endl<<endl;
		
	
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
	

//	char opt;
	cout<<endl<<k++<<") Enter date of leave (dd/mm/yyyy) : ";
	cin>>fac_1.f_leave.from_date;
	cout<<endl<<k++<<") Enter date of arrival (dd/mm/yyyy) : ";
	cin>>fac_1.f_leave.to_date;
	cin.ignore();
	
	cout<<endl<<k++<<") Administrative responsibility assigned to : ";
	gets(fac_1.response);
	FILE *fp;
	
	
	fp=fopen("responsibility2.txt","a");
	
	
	

	fprintf(fp,"%s %s %c %d %s %s %s %c\n",name,dep,opt,n_days,fac_1.f_leave.from_date,fac_1.f_leave.to_date,fac_1.response,str);
      fclose(fp);
	
}

if(op_ab=='B')
{

	cout<<"Enter your full name: ";
	char resp_nam[50];
	cin>>resp_nam;
	char banch[4];
	cout<<"Enter your branch: ";
	cin>>banch;
	
	FILE *fp;
	
	fp=fopen("responsibility2.txt","r+");
	
	//fseek(fp,1,SEEK_CUR);
	while(fscanf(fp,"%s %s %c %d %s %s %s %c",name,dep,&opt,&n_days,fac_1.f_leave.from_date,fac_1.f_leave.to_date,fac_1.response,&str)!=EOF)
	{
		
	//	cin.ignore();
	//	cout<<"1"<<endl;
	//	cout<<fac_1.response;
		
		if(strcmp(fac_1.response,resp_nam)==0 && (str=='E'))
		{
			//cout<<"1"<<endl;
			cout<<endl<<endl<<"Name: "<<name<<endl<<"Department: "<<dep<<endl<<"From Date: "<<fac_1.f_leave.from_date<<endl<<"To Date: "<<fac_1.f_leave.to_date<<endl;
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
				
				fprintf(fs,"%s %s %c %d %s %s %s %c\n",name,dep,opt,n_days,fac_1.f_leave.from_date,fac_1.f_leave.to_date,fac_1.response,status);
				fclose(fs);
			}
		   else	if(strcmp(dep,"EE")==0)
			{
				FILE *fs;
				fs=fopen("HODEE.txt","a");
				char status='E';
				fprintf(fs,"%s %s %c %d %s %s %s %c\n",name,dep,opt,n_days,fac_1.f_leave.from_date,fac_1.f_leave.to_date,fac_1.response,status);
				fclose(fs);
			}
			else if(strcmp(dep,"ME")==0)
			{
				FILE *fs;
				fs=fopen("HODME.txt","a");
				char status='E';
				fprintf(fs,"%s %s %c %d %s %s %s %c\n",name,dep,opt,n_days,fac_1.f_leave.from_date,fac_1.f_leave.to_date,fac_1.response,status);
				fclose(fs);
			}
			else if(strcmp(dep,"BB")==0)
			{
				FILE *fs;
				fs=fopen("HODBB.txt","a");
				char status='E';
				fprintf(fs,"%s %s %c %d %s %s %s %c\n",name,dep,opt,n_days,fac_1.f_leave.from_date,fac_1.f_leave.to_date,fac_1.response,status);
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
		//fseek(fp,1,SEEK_CUR);
		while(fscanf(fp,"%s %s %c %d %s %s %s %c",name,dep,&opt,&n_days,fac_1.f_leave.from_date,fac_1.f_leave.to_date,fac_1.response,&str)!=EOF)
		{
			if(strcmp(resp_nam,name)==0)
			{
				if(str=='Y')
				{
				cout<<"LEAVE PROGRESS: Your Administrative Responsibility is accepted by "<<fac_1.response<<endl<<endl;
				fseek(fp,-1,SEEK_CUR);
				fputc('A',fp);
				}
				if(str=='N')
				{
				cout<<"LEAVE REJECTED:Your Administrative Responsibility is rejected by "<<fac_1.response<<endl<<endl;
				fseek(fp,-1,SEEK_CUR);
				fputc('R',fp);
				}
			}
			fseek(fp,1,SEEK_CUR);
		}
		
	fclose(fp);
	
    if(strcmp(banch,"CSE")==0)
    {
    	char naam[50],deep[4],cha,ffrrom[10],toto[10],rree[50],ooa;
    	int nday;
    	FILE *fp;
    	fp=fopen("HODCS.txt","r+");
    	//fseek(fp,1,SEEK_CUR);
    	while(fscanf(fp,"%s %s %c %d %s %s %s %c",naam,deep,&cha,&nday,ffrrom,toto,rree,&ooa)!=EOF)
    	{
    		if(strcmp(resp_nam,naam)==0)
    		{
    			if(ooa=='Y')
    			{
    				cout<<"LEAVE PROGRESS: Your leave has been forwarded to Admin"<<endl<<endl;
    				fseek(fp,-1,SEEK_CUR);
    				fputc('A',fp);
				}
				else if(ooa=='N')
				{
					cout<<"LEAVE REJECTED: Your leave has been rejected by the HOD"<<endl<<endl;
					fseek(fp,-1,SEEK_CUR);
					fputc('R',fp);
				}
				fseek(fp,1,SEEK_CUR);
				
			}
		}
		fclose(fp);
	}
	
	
	else if(strcmp(banch,"EE")==0)
    {
    	char naam[50],deep[4],cha,ffrrom[10],toto[10],rree[50],ooa;
    	int nday;
    	FILE *fp;
    	fp=fopen("HODEE.txt","r+");
    	//fseek(fp,1,SEEK_CUR);
    	while(fscanf(fp,"%s %s %c %d %s %s %s %c",naam,deep,&cha,&nday,ffrrom,toto,rree,&ooa)!=EOF)
    	{
    		if(strcmp(resp_nam,naam)==0)
    		{
    			if(ooa=='Y')
    			{
    				cout<<"LEAVE PROGRESS: Your leave has been forwarded to Admin"<<endl<<endl;
    				fseek(fp,-1,SEEK_CUR);
    				fputc('A',fp);
				}
				else if(ooa=='N')
				{
					cout<<"LEAVE REJECTED: Your leave has been rejected by the HOD"<<endl<<endl;
					fseek(fp,-1,SEEK_CUR);
					fputc('R',fp);
				}
				fseek(fp,1,SEEK_CUR);
				
			}
		}
		fclose(fp);
	}
	
	
	else if(strcmp(banch,"ME")==0)
    {
    	char naam[50],deep[4],cha,ffrrom[10],toto[10],rree[50],ooa;
    	int nday;
    	FILE *fp;
    	fp=fopen("HODME.txt","r+");
    	//fseek(fp,1,SEEK_CUR);
    	while(fscanf(fp,"%s %s %c %d %s %s %s %c",naam,deep,&cha,&nday,ffrrom,toto,rree,&ooa)!=EOF)
    	{
    		if(strcmp(resp_nam,naam)==0)
    		{
    			if(ooa=='Y')
    			{
    				cout<<"LEAVE PROGRESS: Your leave has been forwarded to Admin"<<endl<<endl;
    				fseek(fp,-1,SEEK_CUR);
    				fputc('A',fp);
				}
				else if(ooa=='N')
				{
					cout<<"LEAVE REJECTED: Your leave has been rejected by the HOD"<<endl<<endl;
					fseek(fp,-1,SEEK_CUR);
					fputc('R',fp);
				}
				fseek(fp,1,SEEK_CUR);
				
			}
		}
		fclose(fp);
	}
	
	else if(strcmp(banch,"BB")==0)
    {
    	char naam[50],deep[4],cha,ffrrom[10],toto[10],rree[50],ooa;
    	int nday;
    	FILE *fp;
    	fp=fopen("HODBB.txt","r+");
    	//fseek(fp,1,SEEK_CUR);
    	while(fscanf(fp,"%s %s %c %d %s %s %s %c",naam,deep,&cha,&nday,ffrrom,toto,rree,&ooa)!=EOF)
    	{
    		if(strcmp(resp_nam,naam)==0)
    		{
    			if(ooa=='Y')
    			{
    				cout<<"LEAVE PROGRESS: Your leave has been forwarded to Admin"<<endl<<endl;
    				fseek(fp,-1,SEEK_CUR);
    				fputc('A',fp);
				}
				else if(ooa=='N')
				{
					cout<<"LEAVE REJECTED: Your leave has been rejected by the HOD"<<endl<<endl;
					fseek(fp,-1,SEEK_CUR);
					fputc('R',fp);
				}
				fseek(fp,1,SEEK_CUR);
				
			}
		}
		fclose(fp);
	}
	
	char nmaa[50],debt[4],oat,ffom[50],tooto[50],adresp[50],adus,dius;
	int enni;
	FILE *fs;
	fs=fopen("ADMIN.txt","r+");
	//fseek(fs,1,SEEK_CUR);
	while(fscanf(fs,"%s %s %c %d %s %s %s %c %c",nmaa,debt,&oat,&enni,ffom,tooto,adresp,&adus,&dius)!=EOF)
	{
		if(strcmp(resp_nam,nmaa)==0)
		{
			if(adus=='Y')
			{
				cout<<"LEAVE PROGRESS: Your leave has been forwarded to the Director"<<endl<<endl;
				fseek(fs,-1,SEEK_CUR);
				fputc('A',fs);
			}
			if(adus=='N')
			{
				cout<<"LEAVE REJECTED: Your leave has been rejected due to lack of leaves"<<endl<<endl;
				fseek(fs,-1,SEEK_CUR);
				fputc('R',fs);
			}
			if(dius=='Y')
			{
				cout<<"LEAVE GRANTED: Your leave has been granted by the Director"<<endl<<endl;
				fseek(fs,-1,SEEK_CUR);
				fputc('A',fs);
			}
			if(dius=='N')
			{
				cout<<"LEAVE REJECTED: Your leave has been rejected by the Director"<<endl<<endl;
				fseek(fs,-1,SEEK_CUR);
				fputc('R',fs);
				
			}
			fseek(fs,1,SEEK_CUR);
		}
		
		
	}
	fclose(fs);
	
	
	
	
	
	
}

}

else if(log_opt=='B')
{
	HOD hd;
	char Name[50],FROM[50],TO[50],DEP[4],RESP[50],STR;
	int nn_days;
	char oopt;
	
	if(strcmp(hd.bran,"CSE")==0)
	{
		FILE *fp;
		//cout<<"1"<<endl;
	
	fp=fopen("HODCS.txt","r+");
	
	//fseek(fp,1,SEEK_CUR);
	while(fscanf(fp,"%s %s %c %d %s %s %s %c",Name,DEP,&oopt,&nn_days,FROM,TO,RESP,&STR)!=EOF)
	{
		
		//cin.ignore();
		
		if(STR=='E')
		{
			
			cout<<"Name: "<<Name<<endl<<"Department: "<<DEP<<endl<<"From Date: "<<FROM<<endl<<"To Date: "<<TO<<endl;
			cout<<endl<<"Do you want to take the responsibility?\n Y/N  ";
			char y_n;
			cin>>y_n;
			
			if(y_n=='Y')
			{
			 STR='Y';
			 cout<<"1"<<endl;
			 char status='E';
			 
			 FILE *fs;
			 char dirst='E';
			 fs=fopen("ADMIN.txt","a");
			 fprintf(fs,"%s %s %c %d %s %s %s %c %c\n",Name,DEP,oopt,nn_days,FROM,TO,RESP,status,dirst);
			 fclose(fs);
		}
		else
		{
			STR='N';
		}
		
			fseek(fp,-1,SEEK_CUR);
			
			fputc(STR,fp);
			fseek(fp,1,SEEK_CUR);
			
			
		
		
	}
	
}

fclose(fp);
}


if(strcmp(hd.bran,"EE")==0)
	{
		FILE *fp;
		//cout<<"1"<<endl;
	
	fp=fopen("HODEE.txt","r+");
	
	//fseek(fp,1,SEEK_CUR);
	while(fscanf(fp,"%s %s %c %d %s %s %s %c",Name,DEP,&oopt,&nn_days,FROM,TO,RESP,&STR)!=EOF)
	{
		
		//cin.ignore();
		
		if(STR=='E')
		{
			
			cout<<"Name: "<<Name<<endl<<"Department: "<<DEP<<endl<<"From Date: "<<FROM<<endl<<"To Date: "<<TO<<endl;
			cout<<endl<<"Do you want to take the responsibility?\n Y/N  ";
			char y_n;
			cin>>y_n;
			
			if(y_n=='Y')
			{
			 STR='Y';
			 cout<<"1"<<endl;
			 char status='E';
			 
			 FILE *fs;
			 char dirst='E';
			 fs=fopen("ADMIN.txt","a");
			 fprintf(fs,"%s %s %c %d %s %s %s %c %c\n",Name,DEP,oopt,nn_days,FROM,TO,RESP,status,dirst);
			 fclose(fs);
		}
		else
		{
			STR='N';
		}
		
			fseek(fp,-1,SEEK_CUR);
			
			fputc(STR,fp);
			fseek(fp,1,SEEK_CUR);
			
			
		
		
	}
	
}

fclose(fp);
}

if(strcmp(hd.bran,"ME")==0)
	{
		FILE *fp;
		//cout<<"1"<<endl;
	
	fp=fopen("HODME.txt","r+");
	
	//fseek(fp,1,SEEK_CUR);
	while(fscanf(fp,"%s %s %c %d %s %s %s %c",Name,DEP,&oopt,&nn_days,FROM,TO,RESP,&STR)!=EOF)
	{
		
		//cin.ignore();
		
		if(STR=='E')
		{
			
			cout<<"Name: "<<Name<<endl<<"Department: "<<DEP<<endl<<"From Date: "<<FROM<<endl<<"To Date: "<<TO<<endl;
			cout<<endl<<"Do you want to take the responsibility?\n Y/N  ";
			char y_n;
			cin>>y_n;
			
			if(y_n=='Y')
			{
			 STR='Y';
			 cout<<"1"<<endl;
			 char status='E';
			 
			 FILE *fs;
			 char dirst='E';
			 fs=fopen("ADMIN.txt","a");
			 fprintf(fs,"%s %s %c %d %s %s %s %c %c\n",Name,DEP,oopt,nn_days,FROM,TO,RESP,status,dirst);
			 fclose(fs);
		}
		else
		{
			STR='N';
		}
		
			fseek(fp,-1,SEEK_CUR);
			
			fputc(STR,fp);
			fseek(fp,1,SEEK_CUR);
			
			
		
		
	}
	
}

fclose(fp);
}

if(strcmp(hd.bran,"BB")==0)
	{
		FILE *fp;
		//cout<<"1"<<endl;
	
	fp=fopen("HODBB.txt","r+");
	
	//fseek(fp,1,SEEK_CUR);
	while(fscanf(fp,"%s %s %c %d %s %s %s %c",Name,DEP,&oopt,&nn_days,FROM,TO,RESP,&STR)!=EOF)
	{
		
		//cin.ignore();
		
		if(STR=='E')
		{
			
			cout<<"Name: "<<Name<<endl<<"Department: "<<DEP<<endl<<"From Date: "<<FROM<<endl<<"To Date: "<<TO<<endl;
			cout<<endl<<"Do you want to take the responsibility?\n Y/N  ";
			char y_n;
			cin>>y_n;
			
			if(y_n=='Y')
			{
			 STR='Y';
			 cout<<"1"<<endl;
			 char status='E';
			 
			 FILE *fs;
			 char dirst='E';
			 fs=fopen("ADMIN.txt","a");
			 fprintf(fs,"%s %s %c %d %s %s %s %c %c\n",Name,DEP,oopt,nn_days,FROM,TO,RESP,status,dirst);
			 fclose(fs);
		}
		else
		{
			STR='N';
		}
		
			fseek(fp,-1,SEEK_CUR);
			
			fputc(STR,fp);
			fseek(fp,1,SEEK_CUR);
			
			
		
		
	}
	
}

fclose(fp);
}	
	
}




else if(log_opt=='C')
{
	Admin ad;
    char nname[50],depp[4],optt,frrom[50],too[50],rresp[50];
	int no_days;
	char stt;	
	char fname[50];
	char ccl[3],sccl[3],vvl[3],ele[3];
	char dirstw;
	
	
	FILE *fp;
	fp=fopen("ADMIN.txt","r+");
//	rewind(fp);
	//fseek(fp,1,SEEK_CUR);
	while(fscanf(fp,"%s %s %c %d %s %s %s %c %c",nname,depp,&optt,&no_days,frrom,too,rresp,&stt,&dirstw)!=EOF)
	{
		if(stt=='E')
		{
			
			FILE *fs;
			fs=fopen("datasheet.txt","r+");
			while(fscanf(fs,"%s %s %s %s %s",fname,ccl,sccl,vvl,ele)!=EOF)
			{
			  
			  int iccl=ccl[0]-'0',jccl=ccl[1]-'0';
			  int isccl=sccl[0]-'0',jsccl=sccl[1]-'0';
			  int ivvl=vvl[0]-'0',jvvl=vvl[1]-'0';
			  int iele=ele[0]-'0',jele=ele[1]-'0';
			  
			  int nccl=(iccl*10)+jccl;
			  int nsccl=(isccl*10)+jsccl;
			  int nvvl=(ivvl*10)+jvvl;
			  int nele=(iele*10)+jele;		
				
				
				//cout<<nccl<<endl;
				
				if(strcmp(fname,nname)==0)
				{
					if(optt=='A')
					{
						
						if(nccl<no_days)
						{
							fseek(fp,-3,SEEK_CUR);
							fputc('N',fp);
							fseek(fp,3,SEEK_CUR);
							
						}
						else
						{
							fseek(fp,-3,SEEK_CUR);
							fputc('Y',fp);
							fseek(fp,3,SEEK_CUR);
						}
					}
					if(optt=='B')
					{
							if(nsccl<no_days)
						{
							fseek(fp,-3,SEEK_CUR);
							fputc('N',fp);
							fseek(fp,3,SEEK_CUR);
						}
						else
						{
							fseek(fp,-3,SEEK_CUR);
							fputc('Y',fp);
							fseek(fp,3,SEEK_CUR);
						}
						
					}
					if(optt=='C')
					{
							if(nvvl<no_days)
						{
							fseek(fp,-3,SEEK_CUR);
							fputc('N',fp);
							fseek(fp,3,SEEK_CUR);
						}
						else
						{
							fseek(fp,-3,SEEK_CUR);
							fputc('Y',fp);
							fseek(fp,3,SEEK_CUR);
						}
					}
					if(optt=='D')
					{
							if(nele<no_days)
						{
							fseek(fp,-3,SEEK_CUR);
							fputc('N',fp);
							fseek(fp,3,SEEK_CUR);
						}
						else
						{
							fseek(fp,-3,SEEK_CUR);
							fputc('Y',fp);
							fseek(fp,3,SEEK_CUR);
						}
					}
				}
			}
			fclose(fs);
		}
		
	
		
		else if(dirstw=='Y' || dirstw=='A')
		{
			
			FILE *fs;
			fs=fopen("datasheet.txt","r+");
			
			//fseek(fs,1,SEEK_CUR);
			while(fscanf(fs,"%s %s %s %s %s",fname,ccl,sccl,vvl,ele)!=EOF)
			{
			//	cout<<fname;
			  int iccl=ccl[0]-'0',jccl=ccl[1]-'0';
			  int isccl=sccl[0]-'0',jsccl=sccl[1]-'0';
			  int ivvl=vvl[0]-'0',jvvl=vvl[1]-'0';
			  int iele=ele[0]-'0',jele=ele[1]-'0';
			  
			  int nccl=(iccl*10)+jccl;
			  int nsccl=(isccl*10)+jsccl;
			  int nvvl=(ivvl*10)+jvvl;
			  int nele=(iele*10)+jele;
			  
		
			 // cout<<nccl<<endl;
			  
				
	          			
				
				
				
				if(strcmp(fname,nname)==0)
				{
					int len=strlen(nname);
			    	if(optt=='A')
					{
					   nccl=nccl-no_days;
					  char ten=(nccl/10)+'0';
			          char one=(nccl%10)+'0';
			          
			          ccl[0]=ten;
			          ccl[1]=one;
			
			          
			        
			          
			          fseek(fs,-(11),SEEK_CUR);
			          fputs(ccl,fs);
						fseek(fs,11,SEEK_CUR);

					 
				    }
				    if(optt=='B')
					{
					   nsccl=nsccl-no_days;
					  char ten=(nsccl/10)+'0';
			          char one=(nsccl%10)+'0';
			          
			          sccl[0]=ten;
			          sccl[1]=one;
			
			          
			        
			          
			          fseek(fs,-(8),SEEK_CUR);
			          fputs(sccl,fs);
						fseek(fs,8,SEEK_CUR);
					 
				    }
				    if(optt=='C')
					{
						nvvl=nvvl-no_days;
					  char ten=(nvvl/10)+'0';
			          char one=(nvvl%10)+'0';
			          
			          vvl[0]=ten;
			          vvl[1]=one;
			
			          
			        
			          
			          fseek(fs,-(5),SEEK_CUR);
			          fputs(vvl,fs);
						fseek(fs,5,SEEK_CUR);
					 
					
				    }
				    if(optt=='D')
					{
							nele=nele-no_days;
					  char ten=(nele/10)+'0';
			          char one=(nele%10)+'0';
			          
			          ele[0]=ten;
			          ele[1]=one;
			
			          
			        
			          
			          fseek(fs,-(2),SEEK_CUR);
			          fputs(ele,fs);
						fseek(fs,2,SEEK_CUR);
					 
				    }
			    }
		    }
		    fclose(fs);
	    }
	    
	    
	    	
}
	
	fclose(fp);
	
}

else if(log_opt=='D')
{
	Director dd;
	char dname[50],dbuil[4],imp,fromm[50],tot[50],ressp[50],adst,dist;
	int emo;
	FILE *fp;
	fp=fopen("ADMIN.txt","r+");
	while(fscanf(fp,"%s %s %c %d %s %s %s %c %c",dname,dbuil,&imp,&emo,fromm,tot,ressp,&adst,&dist)!=EOF)
	{
		if((adst=='Y' || adst=='A') && dist=='E')
		{
			cout<<"Name: "<<dname<<endl<<"No. of days: "<<emo<<endl<<"From Date: "<<fromm<<endl<<"To Date: "<<tot<<endl<<endl<<"Accept?  Y/N  ";
			char yes;
			cin>>yes;
			if(yes=='Y')
			{
				fseek(fp,-1,SEEK_CUR);
				fputc(yes,fp);
				fseek(fp,1,SEEK_CUR);
			}
			if(yes=='N')
			{
				fseek(fp,-1,SEEK_CUR);
				fputc(yes,fp);
				fseek(fp,1,SEEK_CUR);
			}
		}
	}
	fclose(fp);
	
}

 cout<<endl<<"A)LOG OUT\nB)QUIT\n\nenter option: ";
 
 cin>>log1;

   }while(log1 =='A');


	return(0);
}
