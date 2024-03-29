ifndef CONE_H
#define CONE_H

class Cone {
public:
    Cone(); // êîíñòðóêòîð ïî óìîë÷àíèþ
    Cone(double x, double y, double z, double r, double h); // êîíñòðóêòîð äëÿ ïðîèçâîëüíîãî êîíóñà
    Cone(double r, double h); // êîíñòðóêòîð äëÿ êîíóñà ñ öåíòðîì â íà÷àëå êîîðäèíàò

    void input();
    void output();
    double surfaceArea();
    double volume();

private:
    double x_, y_, z_; // êîîðäèíàòû öåíòðà îñíîâàíèÿ
    double r_; // ðàäèóñ îñíîâàíèÿ
    double h_; // âûñîòà
};

#endif // CONE_H
