#include<iostream>
using namespace std;

                                                              void print(int len,int wth);
  void input(int &len,int &wth);

int main()
{
  int length = 10, width= 5;
  input(length,width);
  print(length,width);
  return0;
  
}
//Do not change the print()function void print(ont len, int wth){
cout<<"length:"<<len
    <<"width:"<<wth<<endl;

}
//implement the input function here void input(int &len,int &wth)
{
  cout<<"Enter the length:";
  cin>>len;
  cout<<:"Enter the width:";
  cin>>wth;
}
