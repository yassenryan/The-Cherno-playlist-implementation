#include <iostream>
#include <string>

using namespace std;

struct vect {

    float x, y;

    vect(float a, float b) :x(a), y(b) {};


    vect ADD(const vect& other) const {
        return vect(x + other.x, y + other.y);
    }

    vect operator +(const vect& other) const {
        return ADD(other);
    }

    vect MULTI(const vect& other) const {
        return vect(x*other.x,y*other.y);
    }

    vect operator *(const vect& other) const {
        return MULTI(other);
    }

    bool operator ==(const vect& other) const {
        return x == other.x && y == other.y;

    }

    bool operator !=(const vect& other) const {
        return x != other.x && y != other.y;

    }
};

ostream& operator << (ostream & stream, const vect & other) {
    stream << other.x << " " << other.y;
    return stream;
}

int main()
{

    vect pos(4, 4);
    vect speed(0.5, 1.5);
    vect powerup(1.1, 1.1);

    vect res = pos.ADD(speed.MULTI(powerup));
    vect res2 = pos + speed * powerup;

    cout << res << endl;
    cout << res2 << endl;


    if (res == res2);
    cout << "LA" << endl;


}

