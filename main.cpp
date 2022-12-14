#include "Game.h"
#include "RobotSmart.h"
#include "RobotsSimple.h"
#include <iostream>
#include <libdio/display.h>

int main() {
    Game G;
    for (int i = 0; i < 2; i++) {
        G.addRobot(new RobotDiagonal());
        G.addRobot(new RobotSmart());
        G.addRobot(new RobotWait());
        // Add your robot here
    }

    auto winner = G.play();
    cout << Display::DString(Display::Color::YELLOW);
    if (winner == nullptr) {
        cout << "The game ended in a draw..." << endl;
    } else {
        cout << "Winner is: " << winner->getName() << endl;
    }
    Display::DString().resetColor().print();

    return 0;
}
