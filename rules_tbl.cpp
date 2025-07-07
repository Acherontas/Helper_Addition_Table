#include "rules_tbl.h"
#include <iostream>
using namespace std;

rules_tbl::rules_tbl(){/*ctor*/}rules_tbl::~rules_tbl(){/*dtor*/}rules_tbl::rules_tbl(const rules_tbl& other){/*copy ctor*/}
rules_tbl& rules_tbl::operator=(const rules_tbl& rhs){if (this == &rhs) return *this; /*handle self assignment//assignment operator*/return *this;
}

int rules_tbl::rule_three(int x,int y,int sx){
    if(sx==1){cout<<"\n";
    cout<<"@3 ---> ";}
    if(x==3 && (y!=9 || y!=6)){xx=y;yy=x;
                               if(sx==1){cout<<"@3 setting " << xx << " and " << yy <<"\n"; }
                               return 3;}
    else xx=x;yy=y;
    return 0;
}

int rules_tbl::rule_six(int x,int y,int sx){
    if(sx==1){cout<<"\n";
    cout<<"@6 ---> ";}
    if(x==6 && (y!=3 || y!=9)){xx=y;yy=x;
                              if(sx==1){cout<<"@6 setting " << xx << " and " << yy <<"\n"; }
                              return 6;}
    else xx=x; yy=y;
    return 0;
}

int rules_tbl::rule_nine(int x,int y,int sx){
    if(sx==1){cout<<"\n";
    cout<<"@9 ---> ";}
    int l=0;
    if(x==9 && (y!=3 || y!=6)){l=y-1;
                              if(sx==1){cout<<"@9 returning " <<l <<"\n"; }
                              xx=x;yy=y; return l;}
    if(y==9 && (y!=3 || y!=6)){l=x-1;
                               if(sx==1){cout<<"@9 returning " <<l <<"\n"; }
                               xx=x;yy=y; return l;}
    return 0;
}

int rules_tbl::rule_x_equal_y(int x,int y,int sx){
    if(x==y){xx=x;yy=y;return 1;}
    if(x!=y){xx=x;yy=y;return 2;}
}

int rules_tbl::rule_minumum_than_nine(int x,int y,int sx){
    //int l=0;
    //l=x+y;
    //if(l>9){xx=x;yy=y; return 9;}
    //if(l<=9){xx=x;yy=y; return 8;}
    //replace l=x+y with the first digits
    int x_s=0;
    if(x==0 && y<=9){xx=x;yy=y; x_s=x_s+1;}
    if(x==1 && y<=8){xx=x;yy=y; x_s=x_s+1;}
    if(x==2 && y<=7){xx=x;yy=y; x_s=x_s+1;}
    if(x==3 && y<=6){xx=x;yy=y; x_s=x_s+1;}
    if(x==4 && y<=5){xx=x;yy=y; x_s=x_s+1;}
    if(x==5 && y<=4){xx=x;yy=y; x_s=x_s+1;}
    if(x==6 && y<=3){xx=x;yy=y; x_s=x_s+1;}
    if(x==7 && y<=2){xx=x;yy=y; x_s=x_s+1;}
    if(x==8 && y<=1){xx=x;yy=y; x_s=x_s+1;}
    if(x==9 && y<=0){xx=x;yy=y; x_s=x_s+1;}
    if(x_s>0){return 8;}
    if(x_s==0){return 9;}
}
