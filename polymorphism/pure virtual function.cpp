#include<iostream>
using namespace std;

class mobile
{
	public:
		void call()
		{
			cout<<"This mobile has calling feature!!"<<endl;
		}
		void msg()
		{
			cout<<"This mobile has messaging feature!!"<<endl;
		}
		void virtual internet()=0;
		void virtual mp3()=0;
		void virtual video()=0;
		void virtual camera()=0;
};

class feature: public mobile
{
	public:
		void internet()
		{
			cout<<"This mobile has internet feature!!"<<endl;
		}
		void mp3()
		{
			cout<<"This mobile has mp3 feature!!"<<endl;
		}
		void video()
		{
			cout<<"This mobile has video feature!!"<<endl;
		}
		void camera()
		{
			cout<<"This mobile has camera feature!!"<<endl;
		}
};
int main()
{
 	feature f;
 	f.call();
 	f.msg();
 	f.internet();
 	f.mp3();
 	f.video();
 	f.camera();
}
