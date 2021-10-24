#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
string name, img, cmd,cmd1;
system("tput setaf 2");
cout<<"\n\t\e[1m-----Save the created image to a tar archive-----\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is \e[1m'docker save <image_name> <file_name.tar>'\e[0m \n ";
cout<<"But you can only tpye\e[1m image name\e[0m and\e[1m file name\e[0m (what you want to give) with\e[1m .tar\e[0m\n";
cout<<"If you provided a version while creating the image, please write that as well like : <image_name>:version -> os1:v1\n\n ";
system("tput setaf 7");
cout<<"Enter the image name : ";
cin>>name;
cout<<"Enter the file name : ";
cin>>img;

cmd="docker save ";
cmd1=cmd+name+" -o  "+img;
int n = cmd1.length();
char com[n+1];
strcpy(com,cmd1.c_str());
system(com);

}
