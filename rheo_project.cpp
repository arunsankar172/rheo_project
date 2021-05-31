#include<iostream>
#include<stdio.h>
#include<string.h>
void get_cpu(int cpu);
using namespace std;
int main(){
	int cpu_need;
	cout<<"Enter CPU Core needed: ";
	cin>>cpu_need;
	get_cpu(cpu_need);
		
}

void get_cpu(int cpu){
	
	string cpuname[]={"large","xlarge","2xlarge","4xlarge","8xlarge","10xlarge"};	
	int cputype[]={0,0,0,0,0,0};
	
	int core=0;
	
	while(core+32<=cpu){
		core+=32;
		cputype[5]++;
	}
		while(core+16<=cpu){
		core+=16;
		cputype[4]++;
	}
		while(core+8<=cpu){
		core+=8;
		cputype[3]++;
	}
		while(core+4<=cpu){
		core+=4;
		cputype[2]++;
	}
		while(core+2<=cpu){
		core+=2;
		cputype[1]++;
	}
		while(core+1<=cpu){
		core+=1;
		cputype[0]++;
	}
	
	for(int i=5;i>=0;i--){
		if(cputype[i]>0){
			cout<<cpuname[i]<<":"<<cputype[i];
			cout<<endl;
		}
	}
}

