#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
char disp_name1[100],gen1;

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
		char dup[50];
        
        
        int count;
        
        
        char mail_id[50],response[25];
        char user_1[100],password_1[100];
        char fullname[50],lognch[4];
        faculty()
		{
			 count=5;

        	while(count--) 
			{
				//system("CLS");
			cout<<endl<<"      ---------  "<<endl;
            cout<<"       SIGN IN   "<<endl;
            cout<<"      ---------  "<<endl;
            cout<<"Username : ";
            cin>>user_1;
            cout<<"Password : ";
            cin.ignore();
           cin>>password_1;
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
            
            int flag=0;
            
          while(fscanf(fp,"%s %s %s %c %s %s",user,password,disp_name1,&gen1,fullname,lognch)!=EOF)
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