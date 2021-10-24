#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
string img, cmd,cmd1;
system("tput setaf 2");
cout<<"\n\t\e[1m-----Run the created docker image-----\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is \e[1mdocker run -it <image_name:version>\e[0m\n ";
system("tput setaf 7");
cout<<"Enter the image name with version : ";
cin>>img;

cmd="docker run -it ";
cmd1=cmd+img;
int n = cmd1.length();
char com[n+1];
strcpy(com,cmd1.c_str());
system(com);

}
