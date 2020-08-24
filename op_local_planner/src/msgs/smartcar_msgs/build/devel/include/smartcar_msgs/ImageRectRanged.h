// Generated by gencpp from file smartcar_msgs/ImageRectRanged.msg
// DO NOT EDIT!


#ifndef SMARTCAR_MSGS_MESSAGE_IMAGERECTRANGED_H
#define SMARTCAR_MSGS_MESSAGE_IMAGERECTRANGED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <smartcar_msgs/ImageRect.h>

namespace smartcar_msgs
{
template <class ContainerAllocator>
struct ImageRectRanged_
{
  typedef ImageRectRanged_<ContainerAllocator> Type;

  ImageRectRanged_()
    : rect()
    , range(0.0)
    , min_height(0.0)
    , max_height(0.0)  {
    }
  ImageRectRanged_(const ContainerAllocator& _alloc)
    : rect(_alloc)
    , range(0.0)
    , min_height(0.0)
    , max_height(0.0)  {
  (void)_alloc;
    }



   typedef  ::smartcar_msgs::ImageRect_<ContainerAllocator>  _rect_type;
  _rect_type rect;

   typedef float _range_type;
  _range_type range;

   typedef float _min_height_type;
  _min_height_type min_height;

   typedef float _max_height_type;
  _max_height_type max_height;





  typedef boost::shared_ptr< ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> const> ConstPtr;

}; // struct ImageRectRanged_

typedef ::smartcar_msgs::ImageRectRanged_<std::allocator<void> > ImageRectRanged;

typedef boost::shared_ptr< ::smartcar_msgs::ImageRectRanged > ImageRectRangedPtr;
typedef boost::shared_ptr< ::smartcar_msgs::ImageRectRanged const> ImageRectRangedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace smartcar_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'smartcar_msgs': ['/home/zy/Desktop/smartcar-dev_sunm/src/msgs/smartcar_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3781b4778925185f71f990932766044c";
  }

  static const char* value(const ::smartcar_msgs::ImageRectRanged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3781b4778925185fULL;
  static const uint64_t static_value2 = 0x71f990932766044cULL;
};

template<class ContainerAllocator>
struct DataType< ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "smartcar_msgs/ImageRectRanged";
  }

  static const char* value(const ::smartcar_msgs::ImageRectRanged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ImageRect rect\n\
float32 range\n\
float32 min_height\n\
float32 max_height\n\
\n\
================================================================================\n\
MSG: smartcar_msgs/ImageRect\n\
int32 x\n\
int32 y\n\
int32 height\n\
int32 width\n\
float32 score\n\
";
  }

  static const char* value(const ::smartcar_msgs::ImageRectRanged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.rect);
      stream.next(m.range);
      stream.next(m.min_height);
      stream.next(m.max_height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ImageRectRanged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::smartcar_msgs::ImageRectRanged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::smartcar_msgs::ImageRectRanged_<ContainerAllocator>& v)
  {
    s << indent << "rect: ";
    s << std::endl;
    Printer< ::smartcar_msgs::ImageRect_<ContainerAllocator> >::stream(s, indent + "  ", v.rect);
    s << indent << "range: ";
    Printer<float>::stream(s, indent + "  ", v.range);
    s << indent << "min_height: ";
    Printer<float>::stream(s, indent + "  ", v.min_height);
    s << indent << "max_height: ";
    Printer<float>::stream(s, indent + "  ", v.max_height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SMARTCAR_MSGS_MESSAGE_IMAGERECTRANGED_H
