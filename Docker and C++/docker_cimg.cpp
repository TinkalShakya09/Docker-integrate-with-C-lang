#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main()
{
string key;
system("tput setaf 2");
cout<<"\t---------To Create own image using dockerfile-----------\n";
system("tput setaf 7");
cout<<"Read carefully - if you don't know the use of vi editor, firstly \e[1mpress i \e[0mfor insert and after inserting complete\e[1m  then Press ecs key\e[0m and\e[1m type ':wq'\e[0m for save and exit the file\n";
system("tput setaf 4");
cout<<"I redirect you to \e[1mvi editor........\e[0m \n";
system("tput setaf 7");
cout<<"Please Type [y] : ";
cin>>key;
if(key=="y" || key=="Y"){
system("vi dockerfile");

string img1, cmd, cmd1;
system("tput setaf 2");
cout<<"\n\t\e[1m-----Building your image--------\e[0m\n";
system("tput setaf 4");
cout<<"backend command run is \e[1m'docker build -t . <image_name:verion>'\e[0m \n ";
system("tput setaf 7");
cout<<"Enter the image name with version : ";
cin>>img1;
cmd="docker build -t ";
cmd1=cmd+img1+" .";
int n = cmd1.length();
char com[n+1];
strcpy(com,cmd1.c_str());
system(com);
}
else{
system("tput setaf 1");
cout<<"Error : invalid key!\n";
system("tput setaf 7");
}
}

