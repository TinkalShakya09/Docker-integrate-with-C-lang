#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
string name, img, cmd,cmd1;
system("tput setaf 2");
cout<<"\n\t\e[1m-----Run the docker image in a new container-----\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is \e[1mdocker run -it --name <name> <image_name>\e[0m\n ";
cout<<"But you can only tpye\e[1m any name\e[0m(what you want to give) and\e[1m image name\e[0m\n\n";
system("tput setaf 7");
cout<<"Enter the name : ";
cin>>name;
cout<<"Enter the image name : ";
cin>>img;

cmd="docker run -it --name ";
cmd1=cmd+name+" "+img;
int n = cmd1.length();
char com[n+1];
strcpy(com,cmd1.c_str());
system(com);

}
