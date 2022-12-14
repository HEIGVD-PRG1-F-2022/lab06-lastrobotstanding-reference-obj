#include <iostream>
#include <libdio/display.h>
#include "Game.h"
#include "RobotDiagonal.cpp"
#include "RobotWait.cpp"

int main() {
    Game G;
    G.addRobot(new RobotDiagonal());
    G.addRobot(new RobotDiagonal());
    G.addRobot(new RobotWait());
    G.addRobot(new RobotWait());

    // Add your robot here

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
