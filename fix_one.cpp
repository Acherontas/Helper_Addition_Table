#include "fix_one.h"
#include <string>
#include <iostream>
using namespace std;
fix_one::fix_one(){/*ctor*/}
fix_one::~fix_one(){/*dtor*/}
fix_one::fix_one(const fix_one& other){/*copy ctor*/}
fix_one& fix_one::operator=(const fix_one& rhs){if(this == &rhs)return *this;/*handle self assignmentassignment operator*/return *this;}

int fix_one::fk_fix(int vl,int pos,int sx){
  vli.clear();
  lk=0;
  vli+=to_string(vl);
  if(sx==1){cout<<"\n";
  cout<<"enter fix with int " << vl <<" and posi " << posi << " ---> ";}
  if(pos==posi){
             if(sx==1){cout<<"leave as is " << "\n";}
             kk=vl;
             if(sx==1){cout<<"returning " << kk << " as " << vl <<" and kratoumeno " << fxkri <<"\n";}
             goto A;}
  if(vl>9){
    //cout<<"vl value " << vl << " with vli " << vli  <<"\n";
    ck=vli.at(0);
    mk=vli.at(1);
    //cout<<"ck " << ck << " and " << mk <<"\n";
    lk=ck - '0';
    kk=mk - '0';
    //cout<<"integers as " << lk << " and " << kk <<"\n";
    fxkri=lk;
  }
  if(vl<=9){
     mk=vli.at(0);
     kk=mk-'0';
     //cout<<"vl value " << vl << " with vli " << vli <<"\n";
     //cout<<"mk " << mk <<"\n";
     //cout<<"integer as " << kk <<"\n";
     }
     A:
  return kk;
}
