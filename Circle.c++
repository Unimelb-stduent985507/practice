#include<iostream>
using namespace std;

#define PI 3.14

struct Point{
    public:
        Point(){}
        Point(int x, int y){
            m_x = x;
            m_y = y;
        }
    public:
        int m_x;
        int m_y;
};

class Circle{
    public:
        Circle(Point p, int radiux){
            m_p = p;
            m_radiux = radiux;
        }
        void relation(Point p){
            double s1 = m_radiux * m_radiux;
            double s2 = (m_p.m_x-p.m_x)*(m_p.m_x-p.m_x) + (m_p.m_y-p.m_y)*(m_p.m_y-p.m_y);
            if(s1 > s2){
                cout << "The point is inside the circle." << endl; 
            }
            else if(s1 < s2){
                cout << "The point is outside the circle." << endl; 
            }
            else{
                cout << "The point is on the circle." << endl; 
            }
        }
    private:
        Point m_p;
        int m_radiux;
};

int main(){    
    Point p(0, 0);
    int radiux = 3;
    Circle circle(p, radiux);

    Point p2(2, 2);
    circle.relation(p2);

    return 0;
}