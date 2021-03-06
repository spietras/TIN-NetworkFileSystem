#ifndef MYNFS_REQUEST_H
#define MYNFS_REQUEST_H

#include <session/DomainData.h>

class Request
{
public:
    virtual ~Request() = default;

    /**
     * Get type of request
     */
    virtual uint8_t getType() const = 0;

    /**
     * Serialize request object to plain data
     */
    virtual DomainData serialize() const = 0;
};


#endif //MYNFS_REQUEST_H
