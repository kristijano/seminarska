#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{int n=0, zbirg=0, zbirk=0;

float prosekg, prosekk;
int min, max;
int index1=0, index2=0;
cout<<"Vnesi broj na kamioni"<<endl;
cin>>n; 

int gorivo[n];
cout<<"Vnesi potrosuvacka na gorivo"<<endl;
for(int i=0; i<n; i++)
cin>>gorivo[i];
min=gorivo[0];
for (int i=0; i<n; i++)
{zbirg=zbirg+gorivo[i];
prosekg=zbirg/n;
if(gorivo[i]<min)
min=gorivo[i];
if (gorivo[i]==min)
index1=i+1;}
int kilometri[n];
cout<<"Vnesi pominati kilometri"<<endl;
for(int a=0;a<n; a++)
cin>>kilometri[a];
max=kilometri[0];
for(int a=0; a<n; a++)
{zbirk=zbirk+kilometri[a];

prosekk=zbirk/n;
if(kilometri[a]>max)
max=kilometri[a];
if(kilometri[a]==max)
index2=a+1;
}

cout<<"Pretprijatieto ima: "<<n<<" kamioni, koi vkupno pominale "<<zbirk<<" km, a potrosile "<<zbirg;
cout<<" litri gorivo."<<endl;
cout<<endl;
cout<<"Site kamioni zaedno, prosecno pominale "<<prosekk<< "km, i potrosile "<<prosekg;
cout<<" litri gorivo prosecno."<<endl;
cout<<endl;


    cout<<endl;    
    system("PAUSE");
    return EXIT_SUCCESS;
}
