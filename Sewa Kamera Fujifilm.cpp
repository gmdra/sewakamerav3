#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>
head()
 {
  puts("***********************************************************");
  puts("*           ****RENTAL KAMERA FUJIFILM****                *");
  puts("*                                                         *");
  puts("***********************************************************");
 }

main()
{
struct{char np[30],
            no_hp[15],
            almt[30];}
            dat;
int i,j;
char kode_k,kasir[20],lagi;
long int total_byr=0,bayar,kembali;
char kode_brg[30],*barang[30];
int harga[30];
int jml_bel[10],lam_sew[5];
long int sub_total[30];

clrscr();
head();
cout<<"KODE KASIR\n";
cout<<"     1. Alpadh\n";
cout<<"     2. Bimo\n";
cout<<"     3. Gilang\n";
cout<<"Masukkan Kode Kasir[1/2/3]  : "; cin>>kode_k;
 switch(kode_k)
 {
 case'1':
 strcpy(kasir,"Alpadh");
 break;
 case'2':
 strcpy(kasir,"Bimo");
 break;
 case'3':
 strcpy(kasir,"Gilang");
 break;
 default:
 strcpy(kasir,"Kode Salah");
 break;
 }
 clrscr();
 head();
 cout<<"     Selamat Datang Di Rental Kamera Fujifilm \n\n";

cout<<"Nama Penyewa      : ";gets(dat.np);
cout<<"No HP             : ";gets(dat.no_hp);
cout<<"Alamat            : ";gets(dat.almt);
cout<<"Jumlah Data       : ";cin>>j;
clrscr();

mulai:
head();
cout<<"KODE Kamera\n";
puts("----------------------------------------------------------");
puts("*                	**** Mirrorless ****                   *");
puts("----------------------------------------------------------");
puts("KODE        Nama Kamera                 Harga Sewa/Hari	 ");
puts("----------------------------------------------------------");
puts("[A]         Fujifilm XA-10               Rp.100.000-,");
puts("[B]         Fujifilm XA-3                Rp.150.000-,");
puts("[C]         Fujifilm XA-2                Rp.155.000-,");
puts("[D]         Fujifilm XT-2                Rp.165.000-,");
puts("----------------------------------------------------------");
puts("*                 **** 	  DSLR 	 ****                   *");
puts("----------------------------------------------------------");
puts("[E]         FinePix SL300                Rp.500.000-,");
puts("[F]         Finepix S4500                Rp.400.000-,");
puts("[G]         Finepix S4200                Rp.300.000-,");
puts("[H]         Finepix S2980                Rp.250.000-,");
puts("----------------------------------------------------------");
puts("*                 **** Insta - X ****                    *");
puts("----------------------------------------------------------");
puts("[I]         instax mini 90               Rp.80.000-,");
puts("[J]         instax mini 9                Rp.70.000-,");
puts("[K]         instax mini 8                Rp.60.000-,");
puts("[L]         instax mini 7s               Rp.50.000-,");
cout<<"--------------------------------------------------------"<<endl;

for(i=1;i<=j;i++)
{
cout<<"Data Ke-"<<i<<endl;
cout<<"Kode Kamera          : ";cin>>kode_brg[i];
cout<<"Jumlah sewa         : ";cin>>jml_bel[i];
cout<<"Lama Sewa           : ";cin>>lam_sew[i];
cout<<"--------------------------------------------------------"<<endl;
}
 for(i=1;i<=j;i++)
 {
   if(kode_brg[i]=='A'||kode_brg[i]=='a')
    {
    barang[i]="Fujifilm XA-10";
    harga[i]=100000;
    }
    else if(kode_brg[i]=='B'||kode_brg[i]=='b')
    {
    barang[i]="Fujifilm XA-3";
    harga[i]=150000;
    }
    else if(kode_brg[i]=='C'||kode_brg[i]=='c')
    {
    barang[i]="Fujifilm XA-2 ";
    harga[i]=155000;
    }
    else if(kode_brg[i]=='D'||kode_brg[i]=='d')
    {
    barang[i]="Fujifilm XT-2";
    harga[i]=165000;
    }
    else if(kode_brg[i]=='E'||kode_brg[i]=='e')
    {
    barang[i]="FinePix SL300";
    harga[i]=500000;
    }
    else if(kode_brg[i]=='F'||kode_brg[i]=='f')
    {
    barang[i]="Finepix S4500";
    harga[i]=400000;
    }
    else if(kode_brg[i]=='G'||kode_brg[i]=='g')
    {
    barang[i]="Finepix S4200";
    harga[i]=300000;
    }
    else if(kode_brg[i]=='H'||kode_brg[i]=='h')
    {
    barang[i]="Finepix S2980";
    harga[i]=250000;
    }
    else if(kode_brg[i]=='I'||kode_brg[i]=='i')
    {
    barang[i]="instax mini 90";
    harga[i]=80000;
    }
    else if(kode_brg[i]=='J'||kode_brg[i]=='j')
    {
    barang[i]="instax mini 9";
    harga[i]=70000;
    }
    else if(kode_brg[i]=='K'||kode_brg[i]=='k')
    {
    barang[i]="instax mini 8";
    harga[i]=60000;
    }
    else if(kode_brg[i]=='L'||kode_brg[i]=='l')
    {
    barang[i]="instax mini 7s";
    harga[i]=50000;
    }
    else
    {
    barang[i]="Kode Salah";
    harga[i]=0;
    }
 }
clrscr();
head();
cout<<"Nama Kasir        : "<<kasir<<endl;
cout<<"--------------------------------"<<endl;
cout<<"Nama Penyewa      : "<<dat.np<<endl;
cout<<"No HP             : "<<dat.no_hp<<endl;
cout<<"Alamat            : "<<dat.almt<<endl;
cout<<"--------------------------------------------------------------------"<<endl;
cout<<"No.|    Nama Kamera   |   Harga   | Jumlah | LamaSewa |  Sub Total | \n";
cout<<"--------------------------------------------------------------------"<<endl;
   for(i=1;i<=j;i++)
   {
      sub_total[i]=jml_bel[i]*harga[i]*lam_sew[i];
      cout<<setiosflags(ios::left)<<setw(5)<<i;
      cout<<setiosflags(ios::left)<<setw(14)<<barang[i];
      cout<<setiosflags(ios::right)<<setw(13)<<harga[i];
      cout<<setiosflags(ios::right)<<setw(8)<<jml_bel[i];
      sub_total[i]=harga[i]*jml_bel[i]*lam_sew[i];
      cout<<setiosflags(ios::right)<<setw(8)<<lam_sew[i];
      cout<<setiosflags(ios::right)<<setw(16)<<sub_total[i]<<endl;
      total_byr=total_byr+sub_total[i];
   }
cout<<"--------------------------------------------------------------------"<<endl;
cout<<"                                        Total Bayar   :Rp. "<<total_byr<<endl;
cout<<"                                        Uang Bayar    :Rp. "; cin>>bayar;
kembali=bayar-total_byr;
cout<<"                                        Uang Kembali  :Rp. "<<kembali<<endl;
cout<<"=========================Terima Kasih===============================\n";
cout<<"Input Lagi [Y/T] : "; cin>>lagi;
 if(lagi=='Y'||lagi=='y')
 goto mulai;
 else
 goto selesai;
   getch();
   selesai:
}