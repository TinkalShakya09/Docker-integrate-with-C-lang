#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
string img, cmd,cmd1;
system("tput setaf 2");
cout<<"\n\t\e[1m-----Save the created image to a tar archive-----\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is \e[1m'docker load -i <file_name.tar>'\e[0m \n ";
cout<<"But you can only tpye\e[1m file name\e[0m with\e[1m .tar\e[0m\n";
system("tput setaf 7");
cout<<"Enter the file name : ";
cin>>img;

cmd="docker load -i ";
cmd1=cmd+img;
int n = cmd1.length();
char com[n+1];
strcpy(com,cmd1.c_str());
system(com);

}
