#include<iostream>
#include<stdio.h>
#define max 100
 using namespace std;
    class bank{
  protected :
      string name,bank_name,address;
      string mobile_num;
  public:
      void getdata(){
        cout<<"\n enter the name ,bank name , address,mobile number ...";   // getchar();
         // cin.ignore;
         getline(cin>>ws,name);   getline(cin>>ws,bank_name);   getline(cin>>ws,address);   getline(cin>>ws,mobile_num);

      }
    };

    class account: public bank{
    protected:
        string acc_num;
        double bal,withdraw;
        public:
             void account_detail()
             {
          cout<<"\n enter the accc number...";  cin>>acc_num;
           cout<<"\n enter the amount to be deposited";  cin>>bal;
             }
           void with_draw(){
               cout<<"\n enter the amount to be withdraw...";
                cin>>withdraw;
                  if(bal>withdraw && withdraw!=0)  { cout<<"\n successful withdraw ...";
                        bal= bal - withdraw;
                  }
                  else if(withdraw==0)  cout<<"\n no withdraw...";
                  else  cout<<"\n insufficient balance...";
           }

    };

    class saving_account: public account {
     protected :  double bank_interest;
        public:
            void interest(){ cout<<"\n enter the bank interest..."; cin>>bank_interest;
             bank_interest= bank_interest/100;
                bal= bank_interest*bal + bal;
             }
            void display(){
              cout<<"\nbank holder name is  :"<<name;
               cout<<"\nbank holder userid is :"<<bank_name;
                cout<<"\nbank holder adddress is :"<<address;   cout<<"\nbank holder gender is :"<<mobile_num;
                cout<<"\nbank holder a/c no is :"<<acc_num;
                 cout<<"\nbank holder balance is :"<<bal;
            }

    };

int main()
{

     int choice;

       saving_account obj[max];  int customer; cout<<"\n enter the number of customer...."; cin>>customer;

       for(int i=0 ; i<customer ; i++) {
            cout<<"\n enter the detail of customer "<<i+1;;
        obj[i].getdata();   obj[i].account_detail();   obj[i].with_draw();  obj[i].interest();
       }
      cout<<"\n \t\t\t\t enter customer details are ..... ";
      for(int i=0 ; i<customer  ; i++)
        {
            cout<<"\t\t\t\t********* customer "<<i+1<<"\n";
           obj[i].display();
        }
   return 0;
  }
