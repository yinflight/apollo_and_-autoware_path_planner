// Generated by gencpp from file smartcar_msgs/ControlCommand.msg
// DO NOT EDIT!


#ifndef SMARTCAR_MSGS_MESSAGE_CONTROLCOMMAND_H
#define SMARTCAR_MSGS_MESSAGE_CONTROLCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace smartcar_msgs
{
template <class ContainerAllocator>
struct ControlCommand_
{
  typedef ControlCommand_<ContainerAllocator> Type;

  ControlCommand_()
    : linear_velocity(0.0)
    , linear_acceleration(0.0)
    , steering_angle(0.0)  {
    }
  ControlCommand_(const ContainerAllocator& _alloc)
    : linear_velocity(0.0)
    , linear_acceleration(0.0)
    , steering_angle(0.0)  {
  (void)_alloc;
    }



   typedef double _linear_velocity_type;
  _linear_velocity_type linear_velocity;

   typedef double _linear_acceleration_type;
  _linear_acceleration_type linear_acceleration;

   typedef double _steering_angle_type;
  _steering_angle_type steering_angle;





  typedef boost::shared_ptr< ::smartcar_msgs::ControlCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::smartcar_msgs::ControlCommand_<ContainerAllocator> const> ConstPtr;

}; // struct ControlCommand_

typedef ::smartcar_msgs::ControlCommand_<std::allocator<void> > ControlCommand;

typedef boost::shared_ptr< ::smartcar_msgs::ControlCommand > ControlCommandPtr;
typedef boost::shared_ptr< ::smartcar_msgs::ControlCommand const> ControlCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::smartcar_msgs::ControlCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::smartcar_msgs::ControlCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace smartcar_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'smartcar_msgs': ['/home/zy/Desktop/op_local_planner/src/msgs/smartcar_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::smartcar_msgs::ControlCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::smartcar_msgs::ControlCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::smartcar_msgs::ControlCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::smartcar_msgs::ControlCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::smartcar_msgs::ControlCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::smartcar_msgs::ControlCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::smartcar_msgs::ControlCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "97bdb8c6dda03d6c6f5a1a98c32d26b8";
  }

  static const char* value(const ::smartcar_msgs::ControlCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x97bdb8c6dda03d6cULL;
  static const uint64_t static_value2 = 0x6f5a1a98c32d26b8ULL;
};

template<class ContainerAllocator>
struct DataType< ::smartcar_msgs::ControlCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "smartcar_msgs/ControlCommand";
  }

  static const char* value(const ::smartcar_msgs::ControlCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::smartcar_msgs::ControlCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 linear_velocity\n\
float64 linear_acceleration #m/s^2\n\
float64 steering_angle\n\
";
  }

  static const char* value(const ::smartcar_msgs::ControlCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::smartcar_msgs::ControlCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.linear_velocity);
      stream.next(m.linear_acceleration);
      stream.next(m.steering_angle);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ControlCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::smartcar_msgs::ControlCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::smartcar_msgs::ControlCommand_<ContainerAllocator>& v)
  {
    s << indent << "linear_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.linear_velocity);
    s << indent << "linear_acceleration: ";
    Printer<double>::stream(s, indent + "  ", v.linear_acceleration);
    s << indent << "steering_angle: ";
    Printer<double>::stream(s, indent + "  ", v.steering_angle);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SMARTCAR_MSGS_MESSAGE_CONTROLCOMMAND_H
