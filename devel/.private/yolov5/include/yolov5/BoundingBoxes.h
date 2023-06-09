// Generated by gencpp from file yolov5/BoundingBoxes.msg
// DO NOT EDIT!


#ifndef YOLOV5_MESSAGE_BOUNDINGBOXES_H
#define YOLOV5_MESSAGE_BOUNDINGBOXES_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <yolov5/BoundingBox.h>

namespace yolov5
{
template <class ContainerAllocator>
struct BoundingBoxes_
{
  typedef BoundingBoxes_<ContainerAllocator> Type;

  BoundingBoxes_()
    : bounding_boxes()  {
    }
  BoundingBoxes_(const ContainerAllocator& _alloc)
    : bounding_boxes(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::yolov5::BoundingBox_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::yolov5::BoundingBox_<ContainerAllocator> >> _bounding_boxes_type;
  _bounding_boxes_type bounding_boxes;





  typedef boost::shared_ptr< ::yolov5::BoundingBoxes_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::yolov5::BoundingBoxes_<ContainerAllocator> const> ConstPtr;

}; // struct BoundingBoxes_

typedef ::yolov5::BoundingBoxes_<std::allocator<void> > BoundingBoxes;

typedef boost::shared_ptr< ::yolov5::BoundingBoxes > BoundingBoxesPtr;
typedef boost::shared_ptr< ::yolov5::BoundingBoxes const> BoundingBoxesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::yolov5::BoundingBoxes_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::yolov5::BoundingBoxes_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::yolov5::BoundingBoxes_<ContainerAllocator1> & lhs, const ::yolov5::BoundingBoxes_<ContainerAllocator2> & rhs)
{
  return lhs.bounding_boxes == rhs.bounding_boxes;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::yolov5::BoundingBoxes_<ContainerAllocator1> & lhs, const ::yolov5::BoundingBoxes_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace yolov5

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::yolov5::BoundingBoxes_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::yolov5::BoundingBoxes_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yolov5::BoundingBoxes_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::yolov5::BoundingBoxes_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yolov5::BoundingBoxes_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::yolov5::BoundingBoxes_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::yolov5::BoundingBoxes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6c35f598a64a1ba7d1d789178ae581ac";
  }

  static const char* value(const ::yolov5::BoundingBoxes_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6c35f598a64a1ba7ULL;
  static const uint64_t static_value2 = 0xd1d789178ae581acULL;
};

template<class ContainerAllocator>
struct DataType< ::yolov5::BoundingBoxes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "yolov5/BoundingBoxes";
  }

  static const char* value(const ::yolov5::BoundingBoxes_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::yolov5::BoundingBoxes_<ContainerAllocator> >
{
  static const char* value()
  {
    return "BoundingBox[] bounding_boxes\n"
"\n"
"================================================================================\n"
"MSG: yolov5/BoundingBox\n"
"string object_label\n"
"float64 probability\n"
"int64 xmin_cv\n"
"int64 ymin_cv\n"
"int64 xmax_cv\n"
"int64 ymax_cv\n"
"float64 xcenter_cv\n"
"float64 ycenter_cv\n"
"int64 width\n"
"int64 height\n"
;
  }

  static const char* value(const ::yolov5::BoundingBoxes_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::yolov5::BoundingBoxes_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.bounding_boxes);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BoundingBoxes_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::yolov5::BoundingBoxes_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::yolov5::BoundingBoxes_<ContainerAllocator>& v)
  {
    s << indent << "bounding_boxes[]" << std::endl;
    for (size_t i = 0; i < v.bounding_boxes.size(); ++i)
    {
      s << indent << "  bounding_boxes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::yolov5::BoundingBox_<ContainerAllocator> >::stream(s, indent + "    ", v.bounding_boxes[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // YOLOV5_MESSAGE_BOUNDINGBOXES_H
