#include <iostream>
#include "find_at_tbl.h"
#include "rules_tbl.h"
#include "fix_one.h"
using namespace std;

int main(int argc, char** argv)
{
    cout<<"voyeristic behaviours and others have fun xD\n";
    cout<<"warning not finished please cross check the resuts via normal calculation\n";
    cout<<"enter equal length numbers\n";
    cout<<"if not equal lenght use zeroes in front of number\n";
    string s1,s2;int sxolia=0;
    cout<<"enter number one \n";
    cout<<"enter number two \n";
    cout<<"enter sxolia 0 or 1 \n";
    s1=argv[1];
    //cin>>s1;
    s2=argv[2];
    //cin>>s2;
    sxolia=stoi(argv[3]);
    if(s1.size()-1!=s2.size()-1){cout<<"need equal size \n";return 0;}
    find_at_tbl *fatb=new find_at_tbl();
    int lo[100];int xlo=0;int kr=0;
    for(int i=s1.size()-1;i>=0;i--){
       char k,m;
       int x=0,y=0;
       k=s1.at(i);
       m=s2.at(i);
       x=k - '0';
       y=m - '0';
       if(sxolia==1){ cout<<"Splitting and passing " <<x << " " <<y <<" "; }
       if(xlo==0){kr=0;}
       if(xlo>0){kr=lo[xlo-1]; lo[xlo-1]=0;}
       lo[xlo]=fatb->find_value(x,y,i,kr,sxolia);
       xlo+=1;
       if(sxolia==1){cout<<"\n";}
    }
    cout<<"\n";
    int ms1=stoi(s1);
    int ms2=stoi(s2);
    cout<<"for " << s1 << " + " << s2 << " = "<< ms1+ms2 <<"\n";
    for(int i=fatb->tf-1;i>=0;i--){
      cout<<fatb->fnl_tbl[i] <<" " ;
    }
    cout<<"\n";
    cout<<"\n";
    fix_one *fxi=new fix_one(); fxi->posi=fatb->tf-1;
    int lfxi=0;
    int tmpkri=0;
    int mlfi=0;
    int flik[100];int fi=0;
    for(int i=0;i<=fatb->tf-1;i++){
      if(sxolia==1){cout<<"using pos of " << i <<" :: ";}
      if(i==fatb->tf-1){lfxi=0;lfxi=fxi->fk_fix(fatb->fnl_tbl[i],i,sxolia);tmpkri=fxi->fxkri;goto B;}
      lfxi=fxi->fk_fix(fatb->fnl_tbl[i],i,sxolia);
      tmpkri=fxi->fxkri;
      B:
      if(sxolia==1){cout<<"exiting with  mlfi value of " << mlfi << " lfxi of value " << lfxi << " and tmp " << tmpkri <<" --> ";}
      mlfi=lfxi+tmpkri;
      if(tmpkri==1){fxi->status+=1;}
      if(fxi->status==2){cout<<"KRATOUMENO \n";}
      if(sxolia==1){cout<<"using lfxi " << lfxi << "  and tmpkri " << tmpkri <<"\n";}
      if(sxolia==1){cout<<"moving with mlfi value of " << mlfi << " lfxi of value " << lfxi <<  " and tmp " << tmpkri <<" --> ";}
      if(mlfi>9 && i!=fatb->tf-1){
                                 if(sxolia==1){cout<<"bigger than 9 non equal to final value i | ";}
                                 lfxi=fxi->fk_fix(mlfi,i,sxolia); tmpkri=fxi->fxkri;goto A;}
      if(mlfi>9 && i==fatb->tf-1){lfxi=mlfi; tmpkri=0;goto A;}
      A:
      if(sxolia==1){
      cout<<"\n";
      cout<<"number lxfi  " << lfxi << " :: ";
      cout<<"number mlfi  " << mlfi << " :: " ;
      cout<<" ----with kratoumeno----> " << tmpkri  <<"\n";
      cout<<"\n";}
      flik[fi]=lfxi;
      if(fxi->status==2){flik[fi]=mlfi; fxi->status=0;tmpkri=0;fxi->fxkri=0; if(mlfi>9){flik[fi]=lfxi;}}
      fi+=1;
      if(lfxi==0 && mlfi>9){fxi->fxkri=1; tmpkri=fxi->fxkri;}
    }
    cout<<"\n";
    for(int i=fi-1;i>=0;i--){
       cout<<flik[i] << " " ;
    }
    cout<<"\n";
    cout<<"please cross-check the resuts \n";
    return 0;
}
