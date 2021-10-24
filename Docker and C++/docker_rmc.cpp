#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
int key;
cout<<" Remove the container :\n\t Press 1 : Only one Container\n\t Press 2 : All Containers\n";
cout<<"Press the Key [1/2] : ";
cin>>key;
endl(cout);
system("docker ps -a");
if(key==1){
system("tput setaf 2");
cout<<"\n\t\e[1m-----Remove Only one container-----\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is <\e[1mdocker rm -f <container_name/id>\e[0m>:\n\n ";
system("tput setaf 7");
string con;
cout<<"Which One remove Type Container Id/Name : ";
cin>>con;
string cmd="docker rm -f ";
string cmd1= cmd+con;
int n = cmd1.length();
char com[n+1];
strcpy(com,cmd1.c_str());
system(com);
endl(cout);
}

else if(key==2){
system("tput setaf 2");
cout<<"\n\t\e[1m-----Remove all containers-----\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is <\e[1mdocker rm -f $(docker ps -a -q)\e[0m>:\n\n ";
system("tput setaf 7");
system("docker rm -f $(docker ps -a -q)");
endl(cout);
}
}
