#ifndef _ASYNC_GET_USER_CB_H_
#define _ASYNC_GET_USER_CB_H_

#include "HallServant.h"
#include "OuterFactoryImp.h"

//
using namespace hall;

/**
* 查询账户信息
*/
class AsyncGetUserCallback : public HallServantPrxCallback
{
public:
    AsyncGetUserCallback(long uid);
    ~AsyncGetUserCallback();

private:
    //用户标识
    unsigned long uid;
    //创建时间
    int64_t m_createTime;
};

#endif


