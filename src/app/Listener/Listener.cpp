#include "Listener.h"

Listener::Listener(Button *modeButton ,Button *button, Controller *control, ClockCheck *clock)
{
    this -> modeButton = modeButton;
    this -> powerButton = button = powerButton;
    this -> controller = control;
    this -> clockCheck = clock;
}

Listener::~Listener()
{
}

void Listener::checkEvent()
{
    if (modeButton->getState() == RELEASE_ACTIVE)
    {
        controller->updateEvent("modeButton");
    }

    if (modeButton->getState() == RELEASE_ACTIVE)
    {
        controller->updateEvent("powerButton");
    }
}