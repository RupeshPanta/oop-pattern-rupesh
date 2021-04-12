#include <iostream>
#include "Socket.h"
#include "Adapter.h"
#include "Keetle.h"
// #include "../include/Socket.h"



int main() {
    Socket* socket = new Socket;
    Adapter* adapter = new Adapter;
    ElectricKettle* kettle = new ElectricKettle;

    /* Pluging in. */
    adapter->plugIn(socket);
    kettle->plugIn(adapter);

    /* Having coffee */
    kettle->boil();

    return 0;
}