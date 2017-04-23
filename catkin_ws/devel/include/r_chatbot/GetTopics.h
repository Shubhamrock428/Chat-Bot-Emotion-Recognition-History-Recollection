// Generated by gencpp from file r_chatbot/GetTopics.msg
// DO NOT EDIT!


#ifndef R_CHATBOT_MESSAGE_GETTOPICS_H
#define R_CHATBOT_MESSAGE_GETTOPICS_H

#include <ros/service_traits.h>


#include <r_chatbot/GetTopicsRequest.h>
#include <r_chatbot/GetTopicsResponse.h>


namespace r_chatbot
{

struct GetTopics
{

typedef GetTopicsRequest Request;
typedef GetTopicsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetTopics
} // namespace r_chatbot


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::r_chatbot::GetTopics > {
  static const char* value()
  {
    return "879dc9a407babc475af0cd8d1b6e5981";
  }

  static const char* value(const ::r_chatbot::GetTopics&) { return value(); }
};

template<>
struct DataType< ::r_chatbot::GetTopics > {
  static const char* value()
  {
    return "r_chatbot/GetTopics";
  }

  static const char* value(const ::r_chatbot::GetTopics&) { return value(); }
};


// service_traits::MD5Sum< ::r_chatbot::GetTopicsRequest> should match 
// service_traits::MD5Sum< ::r_chatbot::GetTopics > 
template<>
struct MD5Sum< ::r_chatbot::GetTopicsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::r_chatbot::GetTopics >::value();
  }
  static const char* value(const ::r_chatbot::GetTopicsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::r_chatbot::GetTopicsRequest> should match 
// service_traits::DataType< ::r_chatbot::GetTopics > 
template<>
struct DataType< ::r_chatbot::GetTopicsRequest>
{
  static const char* value()
  {
    return DataType< ::r_chatbot::GetTopics >::value();
  }
  static const char* value(const ::r_chatbot::GetTopicsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::r_chatbot::GetTopicsResponse> should match 
// service_traits::MD5Sum< ::r_chatbot::GetTopics > 
template<>
struct MD5Sum< ::r_chatbot::GetTopicsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::r_chatbot::GetTopics >::value();
  }
  static const char* value(const ::r_chatbot::GetTopicsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::r_chatbot::GetTopicsResponse> should match 
// service_traits::DataType< ::r_chatbot::GetTopics > 
template<>
struct DataType< ::r_chatbot::GetTopicsResponse>
{
  static const char* value()
  {
    return DataType< ::r_chatbot::GetTopics >::value();
  }
  static const char* value(const ::r_chatbot::GetTopicsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // R_CHATBOT_MESSAGE_GETTOPICS_H
