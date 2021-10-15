#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d,e;
	 
	
	cin>>t;
	while(t--){
	    int data[5],i;
	    int eng_count=0,india_count=0,draw_count =0;
	    for (i=0;i<5;i++){
	        cin>>data[i];
	    }
	   for (i=0;i<5;i++){
	    if(data[i]==1){
	        india_count++;
	        
	    }
	    else if (data[i]==2){
	        eng_count++;
	       }
	    else if (data[i]==0){
	        draw_count++;
	    }
	   }
	   // cout <<"india_count:"<<india_count<<endl<< "eng_count:"<<eng_count<<endl<<"draw_count:"<<draw_count <<endl;
	    if (india_count>eng_count){
	        cout<<"INDIA"<<endl;
	    }
	    else if (eng_count>india_count){
	        cout<<"ENGLAND"<<endl;
	    }
	    else if (india_count==eng_count){
	        cout<<"DRAW"<<endl;
	    }
	}
	
	return 0;
}
