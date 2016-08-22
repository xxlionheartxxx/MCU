//
// h4609.h
//
// Code automatically generated by asnparse.
//

#if ! H323_DISABLE_H4609

#ifndef __H4609_H
#define __H4609_H

#ifdef P_USE_PRAGMA
#pragma interface
#endif

#include <ptclib/asner.h>

#include "h225.h"


//
// EstimatedEnd2EndDelay
//

class H4609_EstimatedEnd2EndDelay : public PASN_Integer
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4609_EstimatedEnd2EndDelay, PASN_Integer);
#endif
  public:
    H4609_EstimatedEnd2EndDelay(unsigned tag = UniversalInteger, TagClass tagClass = UniversalTagClass);

    H4609_EstimatedEnd2EndDelay & operator=(int v);
    H4609_EstimatedEnd2EndDelay & operator=(unsigned v);
    PObject * Clone() const;
};


//
// CalculatedJitter
//

class H4609_CalculatedJitter : public PASN_Integer
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4609_CalculatedJitter, PASN_Integer);
#endif
  public:
    H4609_CalculatedJitter(unsigned tag = UniversalInteger, TagClass tagClass = UniversalTagClass);

    H4609_CalculatedJitter & operator=(int v);
    H4609_CalculatedJitter & operator=(unsigned v);
    PObject * Clone() const;
};


//
// Extension
//

class H4609_Extension : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4609_Extension, PASN_Sequence);
#endif
  public:
    H4609_Extension(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_extensionContent
    };

    H225_GenericIdentifier m_extensionId;
    PASN_OctetString m_extensionContent;

    PINDEX GetDataLength() const;
    BOOL Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// QosMonitoringReportData
//

class H4609_PeriodicQoSMonReport;
class H4609_FinalQosMonReport;
class H4609_InterGKQosMonReport;

class H4609_QosMonitoringReportData : public PASN_Choice
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4609_QosMonitoringReportData, PASN_Choice);
#endif
  public:
    H4609_QosMonitoringReportData(unsigned tag = 0, TagClass tagClass = UniversalTagClass);

    enum Choices {
      e_periodic,
      e_final,
      e_interGK
    };

#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H4609_PeriodicQoSMonReport &() const;
#else
    operator H4609_PeriodicQoSMonReport &();
    operator const H4609_PeriodicQoSMonReport &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H4609_FinalQosMonReport &() const;
#else
    operator H4609_FinalQosMonReport &();
    operator const H4609_FinalQosMonReport &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H4609_InterGKQosMonReport &() const;
#else
    operator H4609_InterGKQosMonReport &();
    operator const H4609_InterGKQosMonReport &() const;
#endif

    BOOL CreateObject();
    PObject * Clone() const;
};


//
// RTCPMeasures_mediaSenderMeasures
//

class H4609_RTCPMeasures_mediaSenderMeasures : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4609_RTCPMeasures_mediaSenderMeasures, PASN_Sequence);
#endif
  public:
    H4609_RTCPMeasures_mediaSenderMeasures(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_worstEstimatedEnd2EndDelay,
      e_meanEstimatedEnd2EndDelay
    };

    H4609_EstimatedEnd2EndDelay m_worstEstimatedEnd2EndDelay;
    H4609_EstimatedEnd2EndDelay m_meanEstimatedEnd2EndDelay;

    PINDEX GetDataLength() const;
    BOOL Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// RTCPMeasures_mediaReceiverMeasures
//

class H4609_RTCPMeasures_mediaReceiverMeasures : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4609_RTCPMeasures_mediaReceiverMeasures, PASN_Sequence);
#endif
  public:
    H4609_RTCPMeasures_mediaReceiverMeasures(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_cumulativeNumberOfPacketsLost,
      e_packetLostRate,
      e_worstJitter,
      e_estimatedThroughput,
      e_fractionLostRate,
      e_meanJitter
    };

    PASN_Integer m_cumulativeNumberOfPacketsLost;
    PASN_Integer m_packetLostRate;
    H4609_CalculatedJitter m_worstJitter;
    H225_BandWidth m_estimatedThroughput;
    PASN_Integer m_fractionLostRate;
    H4609_CalculatedJitter m_meanJitter;

    PINDEX GetDataLength() const;
    BOOL Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// ArrayOf_Extension
//

class H4609_Extension;

class H4609_ArrayOf_Extension : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4609_ArrayOf_Extension, PASN_Array);
#endif
  public:
    H4609_ArrayOf_Extension(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H4609_Extension & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_RTCPMeasures
//

class H4609_RTCPMeasures;

class H4609_ArrayOf_RTCPMeasures : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4609_ArrayOf_RTCPMeasures, PASN_Array);
#endif
  public:
    H4609_ArrayOf_RTCPMeasures(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H4609_RTCPMeasures & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_PerCallQoSReport
//

class H4609_PerCallQoSReport;

class H4609_ArrayOf_PerCallQoSReport : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4609_ArrayOf_PerCallQoSReport, PASN_Array);
#endif
  public:
    H4609_ArrayOf_PerCallQoSReport(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H4609_PerCallQoSReport & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// RTCPMeasures
//

class H4609_RTCPMeasures : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4609_RTCPMeasures, PASN_Sequence);
#endif
  public:
    H4609_RTCPMeasures(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_nonStandardData,
      e_mediaSenderMeasures,
      e_mediaReceiverMeasures,
      e_extensions
    };

    H225_TransportChannelInfo m_rtpAddress;
    H225_TransportChannelInfo m_rtcpAddress;
    PASN_Integer m_sessionId;
    H225_NonStandardParameter m_nonStandardData;
    H4609_RTCPMeasures_mediaSenderMeasures m_mediaSenderMeasures;
    H4609_RTCPMeasures_mediaReceiverMeasures m_mediaReceiverMeasures;
    H4609_ArrayOf_Extension m_extensions;

    PINDEX GetDataLength() const;
    BOOL Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PerCallQoSReport
//

class H4609_PerCallQoSReport : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4609_PerCallQoSReport, PASN_Sequence);
#endif
  public:
    H4609_PerCallQoSReport(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_nonStandardData,
      e_mediaChannelsQoS,
      e_extensions
    };

    H225_NonStandardParameter m_nonStandardData;
    H225_CallReferenceValue m_callReferenceValue;
    H225_ConferenceIdentifier m_conferenceID;
    H225_CallIdentifier m_callIdentifier;
    H4609_ArrayOf_RTCPMeasures m_mediaChannelsQoS;
    H4609_ArrayOf_Extension m_extensions;

    PINDEX GetDataLength() const;
    BOOL Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PeriodicQoSMonReport
//

class H4609_PeriodicQoSMonReport : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4609_PeriodicQoSMonReport, PASN_Sequence);
#endif
  public:
    H4609_PeriodicQoSMonReport(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_extensions
    };

    H4609_ArrayOf_PerCallQoSReport m_perCallInfo;
    H4609_ArrayOf_Extension m_extensions;

    PINDEX GetDataLength() const;
    BOOL Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// FinalQosMonReport
//

class H4609_FinalQosMonReport : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4609_FinalQosMonReport, PASN_Sequence);
#endif
  public:
    H4609_FinalQosMonReport(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_nonStandardData,
      e_extensions
    };

    H4609_ArrayOf_RTCPMeasures m_mediaInfo;
    H225_NonStandardParameter m_nonStandardData;
    H4609_ArrayOf_Extension m_extensions;

    PINDEX GetDataLength() const;
    BOOL Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// InterGKQosMonReport
//

class H4609_InterGKQosMonReport : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H4609_InterGKQosMonReport, PASN_Sequence);
#endif
  public:
    H4609_InterGKQosMonReport(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_nonStandardData,
      e_extensions
    };

    H4609_ArrayOf_RTCPMeasures m_mediaInfo;
    H225_NonStandardParameter m_nonStandardData;
    H4609_ArrayOf_Extension m_extensions;

    PINDEX GetDataLength() const;
    BOOL Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


#endif // __H4609_H

#endif // if ! H323_DISABLE_H4609


// End of h4609.h
