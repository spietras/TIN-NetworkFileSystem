#ifndef MYNFS_OPENHANDLER_H
#define MYNFS_OPENHANDLER_H


#include "Handler.h"

class OpenHandler : public Handler
{
public:
    OpenHandler(DomainData requestData, DomainData& replyData, int8_t& replyError);
    void handle() override;
};


#endif //MYNFS_OPENHANDLER_H