#include <iostream>
#include <string>
#include <string.h>

using namespace std;
string sentmain="(";
int findchar(string mainstr,string tocmp,int start=0){
for(int temp1=start;temp1<mainstr.size();temp1++){
        for(int temp2=0;temp2<tocmp.size();temp2++){
            if(mainstr[temp1]==tocmp[temp2]){
                return temp1;
            }
        }
}
return -1;
}
int findfromthelest(string mainstr,string tocmp,int start=0){
for(int temp1=start;temp1>-1;temp1--){
        for(int temp2=mainstr.size()-1;temp2>-1;temp2--){
            if(mainstr[temp1]==tocmp[temp2]){
                return temp1;
            }
        }
}
return -1;
}
void feck(){
for(int temp1=1;temp1<sentmain.size()-1;temp1++){
    if(sentmain[temp1]==')'){
        printf("syntax error\nenter valid sentence");
                exit(0);
    }
    if(sentmain[temp1]=='('){
        break;
    }
}
for(int temp1=sentmain.size()-2;temp1>0;temp1--){
    if(sentmain[temp1]=='('){
        printf("syntax error\nenter valid sentence ");
                exit(0);
    }
    if(sentmain[temp1]==')'){
        break;
    }
}
        int temp1=0,temp2=0,temp3=0,temp4=0;
        for(int tem1=0;;){
                if(findchar(sentmain,"(",tem1)==-1){
                break;
               }
               if(findchar(sentmain,"(",tem1)!=-1){
                    temp1++;
        tem1=findchar(sentmain,"(",tem1)+1;
               }

        }
        for(int tem1=0;;){
            if(findchar(sentmain,")",tem1)==-1){
                break;
               }
            if(findchar(sentmain,")",tem1)!=-1){
                    temp2++;
            tem1=findchar(sentmain,")",tem1)+1;
               }

        }
        if(temp1!=temp2){
                printf("syntax error\nenter valid sentence");
                exit(0);}

string tocmp = "ABCDEFGHIJKLMNOPQRSTUNVWXYZabcdefghijklmnopwrdtunvwxyz()|~>&";
for(int temp1=0;temp1<sentmain.size();temp1++){
    for(int temp2=0;temp2<tocmp.size();temp2++){
        if(sentmain[temp1]==tocmp[temp2]){
            break;
        }
        if(temp2+1==tocmp.size()){
            printf("syntax error\nenter valid sentence ");
                exit(0);
        }
    }

}

for(int tem1=1;tem1<sentmain.size()-1;tem1++){
    string temppre(1,sentmain[tem1-1]);
    string tempmain(1,sentmain[tem1]);
        string tempnex(1,sentmain[tem1+1]);
        if(sentmain[tem1]=='('){
            if((findchar(temppre,"(&|>~")!=-1)&&(findchar(tempnex,"~ABCDEFGHIJKLMNOPQRSTUNVWXYZabcdefghijklmnopwrdtunvwxyz(")!=-1)){

           }else{
           printf("syntax error\nenter valid sentence ");
                exit(0);
           }
        }
        else if(sentmain[tem1]==')'){
if((findchar(temppre,"ABCDEFGHIJKLMNOPQRSTUNVWXYZabcdefghijklmnopwrdtunvwxyz)")!=-1)&&(findchar(tempnex,"|&>)~")!=-1)){

           }else{
           printf("syntax error\nenter valid sentence");
                exit(0);
           }
        }
        else if(sentmain[tem1]=='~'){
if((findchar(temppre,"(&|>")!=-1)&&(findchar(tempnex,"ABCDEFGHIJKLMNOPQRSTUNVWXYZabcdefghijklmnopwrdtunvwxyz(")!=-1)){

           }else{
           printf("syntax error\nenter valid sentence");
                exit(0);
           }
        }
        else if(findchar(tempmain,"ABCDEFGHIJKLMNOPQRSTUNVWXYZabcdefghijklmnopwrdtunvwxyz")!=-1){

if((findchar(temppre,"(>&|~")!=-1)&&(findchar(tempnex,"|&>)")!=-1)){

           }else{
           printf("syntax error\nenter valid sentence");
                exit(0);
           }
        }
        else{
if((findchar(temppre,"ABCDEFGHIJKLMNOPQRSTUNVWXYZabcdefghijklmnopwrdtunvwxyz)")!=-1)&&(findchar(tempnex,"ABCDEFGHIJKLMNOPQRSTUNVWXYZabcdefghijklmnopwrdtunvwxyz(~")!=-1)){

           }else{
           printf("syntax error\nenter valid sentence");
                exit(0);
           }
        }

}
}
int calctroffal(int &place){
if(sentmain[place-1]=='~'){

string temstr1;
if(sentmain[place]=='1'){
    temstr1="0";
}else if(sentmain[place]=='0'){
    temstr1="1";
}
    sentmain.replace(place-1,2,temstr1);
}
}
void TOrF(){}
int valuecal(string mainstr,string tocmp){
    if((tocmp.size()==1)&&(tocmp[0]=='1')){
        tocmp="true";
    }
    if((tocmp.size()==1)&&(tocmp[0]=='0')){
        tocmp="false";
    }
    for(int temp1=0;temp1<tocmp.size();temp1++){
        if(tolower(mainstr[temp1])!=tolower(tocmp[temp1])){
            return -1;
        }
    }
    return 1;
}
void getval(){
    int tempchar1;

for(int temp1=0;temp1<sentmain.size();temp1++){
        tempchar1=findchar(sentmain,"ABCDEFGHIJKLMNOPQRSTUNVWXYZabcdefghijklmnopwrdtunvwxyz");

    if(tempchar1==-1){
    break;
    }
    string tempstr1(1,sentmain[tempchar1]);
    string tempval1;
        char valoftemp1;
        iferr1:
    cout <<"enter value "<<tempstr1<<" please\n";

        cin>>tempval1;


        int tempvalint1;
            if(valuecal("true",tempval1)==1){
                  valoftemp1='1'  ;
            }else if(valuecal("false",tempval1)==1){
                valoftemp1='0';
            }
            else{
                cout<<"enter valid value\n (True) or (False)";

                goto iferr1;
            }

    for(int temp1=tempchar1;temp1!=-1;){
            sentmain[temp1]=valoftemp1;
calctroffal(temp1);
temp1--;
temp1=findchar(sentmain,tempstr1);


    }

}
}
string calculator______solve(){
for(;;){
    if(sentmain.size()==1){
        if(sentmain[0]=='1'){
            return "True";
        }
        if(sentmain[0]=='0'){
            return "False";
        }
    }
    int bcama=findchar(sentmain,")");
    int fcama=findfromthelest(sentmain,"(",bcama);
for(int temp1=fcama+1;temp1<bcama;temp1++){
    if(sentmain[temp1]=='&')
    {
        if(sentmain[temp1-1]=='1'){
            if(sentmain[temp1+1]=='1'){
                    sentmain.replace(temp1-1,3,"1");temp1--;
            }else if(sentmain[temp1+1]=='0'){
                sentmain.replace(temp1-1,3,"0");temp1--;
            }
        }else if(sentmain[temp1-1]=='0'){
            if(sentmain[temp1+1]=='1'){
                    sentmain.replace(temp1-1,3,"0");temp1--;
            }else if(sentmain[temp1+1]=='0'){
                sentmain.replace(temp1-1,3,"0");temp1--;
            }
        }

    }
    if(sentmain[temp1]=='|')
    {
if(sentmain[temp1-1]=='1'){
            if(sentmain[temp1+1]=='1'){
                    sentmain.replace(temp1-1,3,"1");temp1--;
            }else if(sentmain[temp1+1]=='0'){
                sentmain.replace(temp1-1,3,"1");temp1--;
            }
        }else if(sentmain[temp1-1]=='0'){
            if(sentmain[temp1+1]=='1'){
                    sentmain.replace(temp1-1,3,"1");temp1--;
            }else if(sentmain[temp1+1]=='0'){
                sentmain.replace(temp1-1,3,"0");temp1--;
            }
        }

    }
    }
    for(int temp1=fcama+1;temp1<bcama;temp1++){
    if(sentmain[temp1]=='>')
    {
        if(sentmain[temp1-1]=='1'){
            if(sentmain[temp1+1]=='1'){
                    sentmain.replace(temp1-1,3,"1");temp1--;
            }else if(sentmain[temp1+1]=='0'){
                sentmain.replace(temp1-1,3,"0");temp1--;
            }
        }
        else if(sentmain[temp1-1]=='0'){
            sentmain.replace(temp1-1,3,"1");temp1--;
        }
    }}
    if(sentmain[fcama+1]=='1'){
    sentmain.replace(fcama,3,"1");
    }
    else if(sentmain[fcama+1]=='0'){
        sentmain.replace(fcama,3,"0");
    }
    calctroffal(fcama);
}
}

int main(){
printf("SALAM\nEnter the question to solve it please 🙏.\n");
string temstrm1;
cin >> temstrm1;
sentmain.append(temstrm1);
sentmain.append(")");
feck();
getval();
string val=calculator______solve();
cout<<endl<<endl<<endl<<val<<endl<<endl<<endl<<"\nThe question you entered is equal to : "<<val<<endl;
return 0;
}
