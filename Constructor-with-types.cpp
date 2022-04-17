#include<iostream>
using namespace std;
class library 
{
public :
int serial_no;
string library_name;
int book_no;
int shelf_no;
library ( int s_n,string lib_n, int book_n, int shelf_n )
{
serial_no= s_n;
library_name = lib_n;
book_no=book_n;
shelf_no=shelf_n;
cout<<"serial no:"<< serial_no<<endl;
cout<<"library name:"<<library_name<<endl;
cout<<"book no:"<<book_no<<endl;
cout<<"shelf no:"<<shelf_no<<endl;

}
};
int main()
{
library L1 (01," library of ZHSUST", 7600, 670);

cout<<endl;

library L2 (02," library of DU", 12000, 890);

 cout<<endl;

library L3 (03,"library of JU", 10000, 780);
}