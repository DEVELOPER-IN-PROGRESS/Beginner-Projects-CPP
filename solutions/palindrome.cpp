#include<iostream>
using namespace std;
int main(){
string ch;
 int n,m, flag =0;
  cout<<"enter the string:\n";
  cin>>ch;
  n=ch.length()-1; m=0;
  while(m!=n)                               // untile both the ends are not the same
  {  if(ch[n]!=ch[m])                       // check if the char from start index is equal to the char for equivallent index from the back,
       { flag =1 ; 
        cout<<"\nNot palindrome";       //if any mismatch the loop is terminated
         break; 
       }
       m++;n--;                             // increasing the left index and decreasing the right by one.
  }
 if (flag ==0 )
  cout<<"\nPalindrome" ;
return 0;
}
