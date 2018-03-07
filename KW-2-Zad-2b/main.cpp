#include <iostream>

using namespace std;
class Point
{
	private:
		float x,y;
	public:
		void setX(float x)
		{
			this->x=x;
		}
		void setY(float y)
		{
			this->y=y;
		}
		float getX()
		{
			return x;
		}
		float getY()
		{
			return y;
		}
		void move(Point p)
		{
			x+= p.getX();
			y+= p.getY();
		}
		
};

int main(int argc, char** argv) {
	Point w =Point();// konstruktor domyœlny
	w.setX(1.0);
	w.setY(2.0);
	Point p =Point();
	p.setX(5.5);
	p.setY(8.0);
	p.move(w);
	cout<<p.getX()<<" "<<p.getY()<<endl;
	return 0;
}
