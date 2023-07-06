//Variable y in class Y, will be...

class X {
private:     int x;
protected:   int y;
public:      int z;
};
class Y : protected X {
};

