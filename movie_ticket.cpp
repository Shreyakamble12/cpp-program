
#include<iostream>
#include<iomanip>
using namespace std;
class Movie_tickets
{
        private:
                        int A_tickets,C_tickets,T_tickets,A_price,C_price,T_price,a,c,net_sales,donate_amt;

        public:
                        void set_data()
                        {
                                cout<<"Enter the number of Adult tickets"<<endl;
                                cin>>A_tickets;
                                cout<<"Enter the number of Child tickets"<<endl;
                                cin>>C_tickets;
                                cout<<"Enter the price of one Adult ticket"<<endl;
                                cin>>A_price;
                                cout<<"Enter the price of one Child ticket"<<endl;
                                cin>>C_price;
                        }        
                        void cal_data()
                        {
                                T_tickets=A_tickets+C_tickets;
                                a=A_tickets*A_price;
                                c=C_tickets*C_price;
                                T_price=a+c;
                                net_sales=T_price*0.9;
                                donate_amt=T_price*0.1;
                        }
                        void display()
                        {
                                cout<<"MOVIE NAME**:Spider-man Across the Spyder-verse"<<endl;
                                cout<<"TOTAL TICKETS*:"<<T_tickets<<endl;
                                cout<<"TOTAL TICKETS PRICE*:"<<T_price<<endl;
                                cout<<"PERCENT DONATED*:10%"<<endl;
                                cout<<"AMOUNT DONATED *********:"<<donate_amt<<endl;
                                cout<<"NET SALES*:"<<net_sales<<endl;

                        }
};
int main()
{
        Movie_tickets a;
        a.set_data();
        a.cal_data();
        a.display();
}

