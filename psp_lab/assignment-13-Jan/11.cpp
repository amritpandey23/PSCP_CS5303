/* TITLE:
DATE:
AUTHOR: */
#include <iostream>
#include <math.h>
#define PI 3.141592654
using namespace std;

int main() {
    // D = 3963 * 0.868976 * acos(sin L1 * sin L2 + cos L1 * cos L2 * cos(G2 – G1))
    // 180 = PI, 1 = PI/180
    float l1, l2, g1, g2, dis;
    cout << "Enter latitude and longitude of position 1 (in degrees): ";
    cin >> l1 >> g1;
    cout << "Enter latitude and longitude of position 2 (in degrees): ";
    cin >> l2 >> g2;
    l1 *= PI / 180;
    g1 *= PI / 180;
    l2 *= PI / 180;
    g2 *= PI / 180;
    dis = 3963 * 0.868976 * acos(sin(l1) * sin(l2) + cos(l1) * cos(l2) * cos(g2-g1));
    cout << "The net distance between these two positions = " << dis << " nauts." << endl;
    return 0;
}