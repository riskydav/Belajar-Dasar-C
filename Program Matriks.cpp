#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int matrikA[100][100];
	int matrikB[100][100];
	int matrikC[100][100];
	int matrik[100][100];
	int i,j,kolom,baris,skalar;

cout<<"--------------------------------------------"<<endl;
cout<<"                program matriks           "<<endl;
cout<<"--------------------------------------------"<<endl;
cout<<"\n\n";

cout<<"masukkan banyak baris yang anda inginkan : ";
cin >>baris;
cout<<"masukkan banyak kolom yang anda inginkan : ";
cin >>kolom;
cout<<"\n\n";

// pemasukkan nilai matriks

cout<<"silakan masukkan nilai matrik anda : "<<endl;

for(i=1;i<=baris;i++)
{
	for(j=1;j<=kolom;j++)
	{
		cout<<"matrik ["<<i<<","<<j<<"] : ";
		cin >>matrik[i][j];
	}
}
cout<<endl;

//penampilan matriks

cout<<"matrik anda adalah : "<<endl;
cout<<"\n";
for(i=1;i<=baris;i++)
{
	for(j=1;j<=kolom;j++)
	{
		cout<<matrik[i][j]<<"\t";
	}
		cout<<endl;
}
cout<<endl;

//transpose matrik

cout<<"matrik transpose anda adalah : "<<endl;
cout<<"\n";
for(i=1;i<=baris;i++)
{
	for(j=1;j<=kolom;j++)
	{
		cout<<matrik[j][i]<<"\t";
	}
		cout<<endl;
}
cout<<endl;

//perkalian matriks dengan skalar

cout<<"untuk perkalian matrik anda dengan skalar "<<endl;
cout<<"masukkan bilangan yang anda inginkan : ";
cin >>skalar;
cout<<endl;
cout<<"matrik anda sekarang : "<<endl;
for(i=1;i<=baris;i++)
{
	for(j=1;j<=kolom;j++)
	{
		cout<<(skalar*matrik[i][j])<<"\t";
	}
		cout<<endl;
}
cout<<endl;

// untuk perkalian duah buah matriks

cout<<"perkalian dua buah matrik 3x3"<<endl;

// untuk pemasukkan nilai matrik pertama
cout<<"masukkan nilai matrik pertama anda :"<<endl;
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
		cout<<"matrik ["<<i<<","<<j<<"] : ";
		cin >>matrikA[i][j];
	}
}
cout<<endl;

// untuk pemasukkan nilai matrik kedua
cout<<"masukkan nilai matrik kedua anda :"<<endl;
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
		cout<<"matrik ["<<i<<","<<j<<"] : ";
		cin >>matrikB[i][j];
	}
}
cout<<endl;

// penampilan nilai matrik
cout<<"matrik pertama anda adalah :"<<endl;
cout<<"\n";
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
		cout<<matrikA[i][j]<<"\t";
	}
		cout<<endl;
}
cout<<endl;

cout<<"matrik kedua anda adalah "<<endl;
cout<<"\n";
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
		cout<<matrikB[i][j]<<"\t";
	}
		cout<<endl;
}
cout<<endl;

// perkalian matrik
cout<<"perkalian matrik anda adalah :"<<endl;
cout<<"\n";
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
		matrikC[1][1]=(matrikA[1][1]*matrikB[1][1])+(matrikA[1][2]*matrikB[2][1])+(matrikA[1][3]*matrikB[3][1]);
		matrikC[1][2]=(matrikA[1][1]*matrikB[1][2])+(matrikA[1][2]*matrikB[2][2])+(matrikA[1][3]*matrikB[3][2]);
		matrikC[1][3]=(matrikA[1][1]*matrikB[1][3])+(matrikA[1][2]*matrikB[2][3])+(matrikA[1][3]*matrikB[3][3]);
		matrikC[2][1]=(matrikA[2][1]*matrikB[1][1])+(matrikA[2][2]*matrikB[2][1])+(matrikA[2][3]*matrikB[3][1]);
		matrikC[2][2]=(matrikA[2][1]*matrikB[1][2])+(matrikA[2][2]*matrikB[2][2])+(matrikA[2][3]*matrikB[3][2]);
		matrikC[2][3]=(matrikA[2][1]*matrikB[1][3])+(matrikA[2][2]*matrikB[2][3])+(matrikA[2][3]*matrikB[3][3]);
		matrikC[3][1]=(matrikA[3][1]*matrikB[1][1])+(matrikA[3][2]*matrikB[2][1])+(matrikA[3][3]*matrikB[3][1]);
		matrikC[3][2]=(matrikA[3][1]*matrikB[1][2])+(matrikA[3][2]*matrikB[2][2])+(matrikA[3][3]*matrikB[3][2]);
		matrikC[3][3]=(matrikA[3][1]*matrikB[1][3])+(matrikA[3][2]*matrikB[2][3])+(matrikA[3][3]*matrikB[3][3]);
	}
}
for(i=1;i<=3;i++)
{
	for(j=1;j<=3;j++)
	{
		cout<<matrikC[i][j]<<"\t";
	}
		cout<<endl;
}
cout<<endl;
cout<<endl;

}



