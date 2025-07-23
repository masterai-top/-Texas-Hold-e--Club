#include "AsyncGetUserCallback.h"
#include "RouterServer.h"
#include "globe.h"
#include "LogComm.h"

//
using namespace JFGame;

AsyncGetUserCallback::AsyncGetUserCallback(long uid): uid(uid)
{
    m_createTime = TNOWMS;
}

AsyncGetUserCallback::~AsyncGetUserCallback()
{

}
