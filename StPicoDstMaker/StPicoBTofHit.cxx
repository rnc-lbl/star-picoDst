#include <limits>

#include "St_base/StMessMgr.h"
#include "StPicoBTofHit.h"

ClassImp(StPicoBTofHit)

StPicoBTofHit::StPicoBTofHit() : mId(0) {}
StPicoBTofHit::StPicoBTofHit(int id): StPicoBTofHit()
{
  if(id  <0)
  {
    mId   = 0;
  }
  else
  {
    mId   = (id > std::numeric_limits<short>::max()) ? std::numeric_limits<short>::max() : (Short_t)id;
  }
}

//----------------------------------------------------------------------------------
StPicoBTofHit::~StPicoBTofHit()
{ /* noop */ }

//----------------------------------------------------------------------------------
void StPicoBTofHit::Print(const Char_t *option) const {
  LOG_INFO << " Id = " << id() << endm;
}