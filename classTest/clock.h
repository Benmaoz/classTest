#ifndef __CLOCK
#define __CLOCK
using namespace std;

class clock{
	private:
		int min;
		int sec;
		int hour;
	public:
		void setClock(int hour=0,int min=0,int sec=0){
			this->min=min;
			this->sec=sec;
			this->hour=hour;
		}
		void printClock(){
			if (hour<10)
				cout<<"0";
			cout<<hour<<":";
			if(min<10)
				cout<<"0";
			cout<<min<<":";
			if (sec<10)
				cout<<"0";
			cout<<sec;
		}
		void addSecToClock(){
			sec++;
			if(sec>=59){
				sec=0;
				min++;
			}
			if(min>=59){
				min=0;
				hour++;
			}
			if(hour>=12)
				setClock();
		}
};

#endif