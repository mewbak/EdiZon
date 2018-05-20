#pragma once

#include <switch.h>
#include <string>
#include "types.h"
#include "save.hpp"

class Title {
public:
  Title(FsSaveDataInfo& saveInfo);
  ~Title();

  std::string getTitleName();
  std::string getTitleAuthor();
  u8* getTitleIcon();
  std::vector<u128> getUserIDs();
  void addUserID(u128 userID);
  u64 getTitleID();

private:
  u8 *m_titleIcon;
  u64 m_titleID;
  std::string m_titleName;
  std::string m_titleAuthor;
  std::vector<u128> m_userIDs;
  u8 m_errorCode;
};
