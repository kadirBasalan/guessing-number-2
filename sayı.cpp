#include <iostream.h>
#include <conio.h>

main()
{
int say=0,tahmin,taban=0,tavan,sonuc=-1;
cout << "\n0 ile kac arasinda bir sayi tutacaksiniz?";
cin >> tavan;

	do
	{
	say++;
	tahmin=(taban+tavan)/2;
	cout<<"\nBenim tahminim : "<<tahmin;
	cout<<"\nTahminim dogruysa 0"
		<<"\nTahminim sizin tuttugunuz sayidan KUCUKSE 1"
		<<"\nTahminim sizin tuttugunuz sayidan BUYUKSE 2"
		<<"\nGirin";
	cin>>sonuc;

	if (sonuc==1)
	{
	taban=tahmin;
	continue;
	}
	if (sonuc==2)
	{
	tavan=tahmin;
	}
	}
while (sonuc!=0);
cout << "Aferin bana " << say << " denemede buldum";


getch();
}
