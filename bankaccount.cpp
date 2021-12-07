#include<iostream>
#include<string>
using namespace std;
class account{
    string name,acc_num;
    string acc_type;
    double bal,get_amt;
    public:  
         void getdata();
         void withdraw();
         void deposit();
         void print();

};
 void account :: getdata(){
     cout<<"\n enter the name and aacount num..";
     //getline(cin,name);
     cin>>name;
     //getchar();
     cin>>acc_num;
 }

 void account :: deposit(){
   cout<<"\n enter the amt";
     cin>>bal;
 }
 void account :: withdraw(){
      
   
    cin>>get_amt;
    if(bal>=get_amt)
    {
        cout<<"\n successfully withdraw..\n";
        bal-=get_amt;
    }
    else
    cout<<"\n insufficient amount..\n";
 }

 void account :: print(){
     cout<<"name of customer"<< name<<"a/c no "<< acc_num<<"net balance amount "<< bal<<endl;
 }
int main(){
     int ch,choice,k=0;
      account obj[10];
    do
    {  
    cout<<"\n enter ur choice...";
     cin>>choice;
        switch (choice)
        {
        case 1 :  obj[k].getdata();
            break;
        case 2:   for (int i = 0; i < k; i++)
        {    cout<<"\n enter the deposit of "<<i+1<<"customer";
            obj[i].deposit();
        }
        break;
        case 3 : for(int i=0  ; i<k ; i++)
        {
             cout<<"\n enter the winthdraw amount for"<<i+1;
           obj[i].withdraw();
        }
           break;
        case 4:  for(int i=0 ; i<k ; i++)
            obj[i].print();
            break;
        default:
            break;
        }
        cout<<"\n enter again ,then press 1";
         cin>>ch;
         k++;
    } while (ch==1);
    
//     account ob[2];
//    for (int i = 0; i < 2; i++)
//    {
//         ob[i].getdata();
//         //ob[i].print();
//    }
//    for (int i = 0; i < 2; i++)
//    {   
//         ob[i].deposit();
//         ob[i].withdraw();
//        ob[i].print();
//    }
   

   
}