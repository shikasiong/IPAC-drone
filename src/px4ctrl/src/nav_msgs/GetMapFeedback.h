// Generated by gencpp from file nav_msgs/GetMapFeedback.msg
// DO NOT EDIT!


#ifndef NAV_MSGS_MESSAGE_GETMAPFEEDBACK_H
#define NAV_MSGS_MESSAGE_GETMAPFEEDBACK_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nav_msgs
{
template <class ContainerAllocator>
struct GetMapFeedback_
{
  typedef GetMapFeedback_<ContainerAllocator> Type;

  GetMapFeedback_()
    {
    }
  GetMapFeedback_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }







  typedef boost::shared_ptr< ::nav_msgs::GetMapFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nav_msgs::GetMapFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct GetMapFeedback_

typedef ::nav_msgs::GetMapFeedback_<std::allocator<void> > GetMapFeedback;

typedef boost::shared_ptr< ::nav_msgs::GetMapFeedback > GetMapFeedbackPtr;
typedef boost::shared_ptr< ::nav_msgs::GetMapFeedback const> GetMapFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav_msgs::GetMapFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav_msgs::GetMapFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


} // namespace nav_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::nav_msgs::GetMapFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_msgs::GetMapFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_msgs::GetMapFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_msgs::GetMapFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_msgs::GetMapFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_msgs::GetMapFeedback_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav_msgs::GetMapFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::nav_msgs::GetMapFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::nav_msgs::GetMapFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_msgs/GetMapFeedback";
  }

  static const char* value(const ::nav_msgs::GetMapFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav_msgs::GetMapFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"# no feedback\n"
;
  }

  static const char* value(const ::nav_msgs::GetMapFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav_msgs::GetMapFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetMapFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav_msgs::GetMapFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::nav_msgs::GetMapFeedback_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // NAV_MSGS_MESSAGE_GETMAPFEEDBACK_H