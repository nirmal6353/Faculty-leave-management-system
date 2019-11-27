#include<bits/stdc++.h>
using namespace std;
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
