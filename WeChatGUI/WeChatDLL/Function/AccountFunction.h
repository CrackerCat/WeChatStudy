#pragma once
#include <string>
#include <mutex>
#include <vector>

enum WeChatVersion;
class AccountFunction
{
public:
	static AccountFunction& Instance();
	bool InitAccountModule(WeChatVersion ver);
	//��ȡ��ǰwxid
	std::wstring getCurrentUserWxid();
public:
	std::wstring currentUserWxid;
	std::vector<unsigned char> currentQRCode;
	std::mutex qrcodeMutex;
private:
	WeChatVersion WeChatVer;
};