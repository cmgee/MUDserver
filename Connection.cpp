#ifdef _WIN32

#include <winsock2.h>
#include <ws2tcpip.h>

#else // _WIN32

#include <sys/socket.h>

#endif

#include "Connection.hpp"


Connection::Connection() {
    this->port = (int*) malloc(sizeof (int));
    this->host = (struct addrinfo*) malloc(sizeof (struct addrinfo));
}
