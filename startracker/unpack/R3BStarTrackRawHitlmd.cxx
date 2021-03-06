// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                        R3BStarTrackRawHit                         -----
// -----                           Version 0.1                             -----
// -----                    Created 28.05.2013 by M. Labiche               -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#include "R3BStarTrackRawHit.h"


R3BStarTrackRawHit::R3BStarTrackRawHit()
  : fWRvhb(0),
    fWRhb(0),
    fWRlb(0),
fWordType(0),
fHitBit(0),
fModuleId(0),
fSide(0),
fAsicId(0),
fStripId(0),
fADCdata(0),
fTimevhb(0),
fTimehb(0),
fTimelb(0),
fTimeExtvhb(0),
fTimeExthb(0),
fTimeExtlb(0),
fInfoCode(0),
fInfoField(0)
{
}

//R3BStarTrackRawHit::R3BStarTrackRawHit(UInt_t wrvhb, UInt_t wrhb, UInt_t wrlb, UInt_t wordtype, UInt_t hitbit, UInt_t moduleId, UInt_t side, UInt_t asicId, UInt_t stripId, UInt_t adc_data, UInt_t timevhb, UInt_t timehb, UInt_t timelb, UInt_t timeExtvhb, UInt_t timeExthb, UInt_t timeExtlb, UInt_t infofield, UInt_t infocode)
R3BStarTrackRawHit::R3BStarTrackRawHit(UInt_t wrvhb, UInt_t wrhb, UInt_t wrlb, UInt_t wordtype, UInt_t hitbit, UInt_t moduleId, UInt_t side, UInt_t asicId, UInt_t stripId, UInt_t adc_data, ULong_t timevhb, ULong_t timehb, UInt_t timelb, UInt_t timeExtvhb, UInt_t timeExthb, UInt_t timeExtlb, UInt_t infofield, UInt_t infocode)
  : fWRvhb(wrvhb),
fWRhb(wrhb),
fWRlb(wrlb),
fWordType(wordtype),
fHitBit(hitbit),
fModuleId(moduleId),
fSide(side),
fAsicId(asicId),
fStripId(stripId),
fADCdata(adc_data),
fTimevhb(timevhb),
fTimehb(timehb),
fTimelb(timelb),
fTimeExtvhb(timeExtvhb),
fTimeExthb(timeExthb),
fTimeExtlb(timeExtlb),
fInfoCode(infocode),
fInfoField(infofield)
{
}


ClassImp(R3BStarTrackRawHit)
