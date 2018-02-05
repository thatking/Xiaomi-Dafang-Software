#ifndef SHAREDMEM_H
#define SHAREDMEM_H

#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>

struct shared_conf {
    int nightmode;
    int flip;
};


class SharedMem {
public:
    SharedMem();

    ~SharedMem();


private:


};


#endif