#include "AsyncAssistantCallback.h"
#include "globe.h"
#include "LogComm.h"
#include "RouterServer.h"

AsyncAssistantCallback::AsyncAssistantCallback(const unsigned int iUid): m_iUid(iUid)
{
    m_createTime = TNOWMS;
}

AsyncAssistantCallback::~AsyncAssistantCallback()
{

}

void AsyncAssistantCallback::callback_reportUserOnlineStatus(tars::Int32 ret)
{
    int64_t iCostTime = TNOWMS - m_createTime;
    if (iCostTime > COST_MS)
    {
        ROLLLOG_WARN << "@iCostTime: " << iCostTime << endl;
    }

    if (ret == 0)
    {
        ROLLLOG_DEBUG << "|" << m_iUid << "|" << "report user status success" << endl;
    }
    else
    {
        ROLLLOG_ERROR << "|" << m_iUid << "|" << "report user status error" << endl;
    }
}

void AsyncAssistantCallback::callback_reportUserOnlineStatus_exception(tars::Int32 ret)
{
    ROLLLOG_ERROR << "|" << m_iUid << "|" << ret << "|" << "report user status" << endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

// 查询沉迷状态
void AsyncAssistantCallback::callback_getUserOverPlayStatus(tars::Int32 ret, const assistant::GetUserOverPlayStatusResp &resp)
{
    int64_t iCostTime = TNOWMS - m_createTime;
    if (iCostTime > COST_MS)
    {
        ROLLLOG_WARN << "@iCostTime: " << iCostTime << endl;
    }
}

void AsyncAssistantCallback::callback_getUserOverPlayStatus_exception(tars::Int32 ret)
{
    ROLLLOG_ERROR << "|" << m_iUid << "|" << ret << "|" << "check addict user." << endl;
}
