#include "find_at_tbl.h"
#include "rules_tbl.h"
#include <math.h>
#include <iostream>
using namespace std;

find_at_tbl::find_at_tbl(){/*ctor*/}
find_at_tbl::~find_at_tbl(){/*dtor*/}
find_at_tbl::find_at_tbl(const find_at_tbl& other){/*copy ctor*/}
find_at_tbl& find_at_tbl::operator=(const find_at_tbl& rhs){if (this == &rhs) return *this;/*handle self assignment//assignmentoperator*/return *this;}

int find_at_tbl::find_value(int x,int y,int lz,int kri,int sx){
  if(sx==1){cout<<"the position is : " << lz <<"\n";}
  st=0;
  keep_it=0;
  int z=0;
  rules_tbl *rtbl=new rules_tbl();
  int check_nine=0;
  int check_equal=0;
  int r_three=0,r_six=0,r_nine=0;
  int l=0;
  int lr=0;
  int mx=x;int my=y;
  if(x==3 && y==3){z=6;goto A;}
  if(x==3 && y==6){z=9;goto A;}
  if(x==6 && y==3){z=9;goto A;}
  if(x==6 && y==6){z=3;goto A;}
  if(x==3 && y==9){z=3;goto A;}
  if(x==6 && y==9){z=6;goto A;}
  if(x==9 && y==3){z=3;goto A;}
  if(x==9 && y==6){z=6;goto A;}
  if(x==9 && y==9){z=8;goto A;}
  A:
  if(sx==1){
  cout<<"\n";
  cout<<"using " << x <<" and " << y <<"\n";}
  r_three=rtbl->rule_three(x,y,sx);
  if(sx==1){cout<<"rule three " << r_three <<" || ";}
  x=rtbl->xx;
  y=rtbl->yy;
  r_six=rtbl->rule_six(x,y,sx);
  if(sx==1){cout<<"r six " << r_six <<" || " ;}
  x=rtbl->xx;
  y=rtbl->yy;
  r_nine=rtbl->rule_nine(x,y,sx);
  if(sx==1){cout<<"r nine " << r_nine <<" \n ";}
  x=rtbl->xx;
  y=rtbl->yy;
  //A:
  check_nine=rtbl->rule_minumum_than_nine(x,y,sx);
  if(sx==1){cout<<"check nine result " << check_nine <<" || ";}
  x=rtbl->xx;
  y=rtbl->yy;
  check_equal=rtbl->rule_x_equal_y(x,y,sx);
  if(sx==1){cout<<"check equal result " << check_equal <<"\n";}
  x=rtbl->xx;
  y=rtbl->yy;
  if(sx==1){cout<<"searching tables with " << x << " and " << y <<"\n";}
  if(x==1){for(int i=0;i<=10;i++){if(arr_one[i]==y){i+=1;z=arr_one[i];l=1;
                                                    if(sx==1){cout<<"1 " <<i <<"\n";}
                                                    break;}if(l==1){break;}}}
  if(x==5){for(int i=0;i<=10;i++){if(arr_five[i]==y){i+=1;z=arr_five[i];l=1;
                                                    if(sx==1){cout<<"5 " <<i <<"\n";}
                                                    break;}if(l==1){break;}}}
  if(x==7){for(int i=0;i<=10;i++){if(arr_seven[i]==y){i+=1;z=arr_seven[i];l=1;
                                                      if(sx==1){cout<<"7 " <<i <<"\n";}
                                                      break;}if(l==1){break;}}}
  if(x==8){for(int i=0;i<=10;i++){if(arr_eight[i]==y){i+=1;z=arr_eight[i];l=1;
                                                      if(sx==1){cout<<"8 " <<i <<"\n";}
                                                      break;}if(l==1){break;}}}
  if(x==4){for(int i=0;i<=10;i++){if(arr_four[i]==y){i+=1;z=arr_four[i];l=1;
                                                     if(sx==1){cout<<"4 " <<i <<"\n";}
                                                     break;}if(l==1){break;}}}
  if(x==2){for(int i=0;i<=10;i++){if(arr_two[i]==y){i+=1;z=arr_two[i];l=1;
                                                    if(sx==1){cout<<"2 " <<i <<"\n";}
                                                    break;}if(l==1){break;}}}
  if(check_nine==9 && check_equal==2){
   if(sx==1){cout<<"range is greater than 9 numbers non equals\n";
   cout<<"setting z from " << z << " to " ;}
   if(z!=1){z=z-1;
            if(sx==1){cout<<z <<"\n";}
            goto B;}
   if(z==1){z=10;
            if(sx==1){cout<<z <<"\n";}
            goto B;}
   B:lr=lr+1;
   if(z==10 && lz!=0){z=0;}
  }
  if(check_nine==9 && check_equal==1){
     if(sx==1){cout<<"range is greater than 9 numbers are equals\n";
     cout<<"setting z from " << z << " to " ;}
     if(z>1){z=z-1;
            if(sx==1){cout<<z <<"\n";}
            goto C;}
     if(z==1){z=10;
              if(sx==1){cout<<z <<"\n";}
              goto C;}
     //cout<<z << "\n";
     C:lr=lr+1;
     if(z==10 && lz!=0 ){z=0;}
  }
  if(check_nine==8){
                   if(sx==1){cout<<"range lower than 9 for z " << z << "\n"; }
                   z=z;}
  if(r_nine!=0){z=r_nine;}
  if(z<0){z=0;}
  //if(x==0 || y==0){z=x?:y;}
  if(x==0){z=y;}
  if(y==0){z=x;}
  if(sx==1){cout<<"for " << x << " and " << y <<" with z " << z << "\n";}
  int fnl=0;
  if(lr==1){keep_it+=1;
            if(sx==1){cout<<" @0--------> epistrefoume timi " << z << " me kratoumeno " << keep_it <<" teliki timi " << z <<"\n";}
            fnl=z; st+=1;
            }
  if(kri>0){
    if(sx==1){cout<<" @1------------> epistrefoume teliki timi " << z << " auxanoume me kratoumeno " << kri << " teliki timi " << z+kri <<"\n";}
            fnl=z+kri;st+=1;
            }
  if(lz==0){
          if(sx==1){cout<<" @2-----pos-----> epistrefoume teliki timi " << x+y+kri <<"\n";}
           fnl=x+y+kri; st+=1;}
  if(sx==1){cout<<"\n";
  cout<<"da z is " << z <<"\n";}
  if(st==0){
        if(sx==1){cout<<" @-1---------> epistrefoume teliki timi " << z <<"\n"; } fnl=z;}
  if(sx==1){cout<<"------------------------>with final value " << fnl << " <-----------------\n";}
  fnl_tbl[tf]=fnl;
  tf+=1;
  /*
  for 369 + 936 = 1305
  12 10 5
  */
  /*
  for 8546 + 1456 = 10002
  9 9 10 2
  */
  return keep_it;
}
