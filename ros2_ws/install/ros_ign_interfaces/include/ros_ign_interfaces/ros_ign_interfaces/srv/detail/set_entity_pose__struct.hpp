// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_ign_interfaces:srv/SetEntityPose.idl
// generated code does not contain a copyright notice

#ifndef ROS_IGN_INTERFACES__SRV__DETAIL__SET_ENTITY_POSE__STRUCT_HPP_
#define ROS_IGN_INTERFACES__SRV__DETAIL__SET_ENTITY_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'entity'
#include "ros_gz_interfaces/msg/detail/entity__struct.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_ign_interfaces__srv__SetEntityPose_Request __attribute__((deprecated))
#else
# define DEPRECATED__ros_ign_interfaces__srv__SetEntityPose_Request __declspec(deprecated)
#endif

namespace ros_ign_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetEntityPose_Request_
{
  using Type = SetEntityPose_Request_<ContainerAllocator>;

  explicit SetEntityPose_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : entity(_init),
    pose(_init)
  {
    (void)_init;
  }

  explicit SetEntityPose_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : entity(_alloc, _init),
    pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _entity_type =
    ros_gz_interfaces::msg::Entity_<ContainerAllocator>;
  _entity_type entity;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__entity(
    const ros_gz_interfaces::msg::Entity_<ContainerAllocator> & _arg)
  {
    this->entity = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_ign_interfaces::srv::SetEntityPose_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ign_interfaces::srv::SetEntityPose_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ign_interfaces::srv::SetEntityPose_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ign_interfaces::srv::SetEntityPose_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ign_interfaces::srv::SetEntityPose_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ign_interfaces::srv::SetEntityPose_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ign_interfaces::srv::SetEntityPose_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ign_interfaces::srv::SetEntityPose_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ign_interfaces::srv::SetEntityPose_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ign_interfaces::srv::SetEntityPose_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ign_interfaces__srv__SetEntityPose_Request
    std::shared_ptr<ros_ign_interfaces::srv::SetEntityPose_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ign_interfaces__srv__SetEntityPose_Request
    std::shared_ptr<ros_ign_interfaces::srv::SetEntityPose_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEntityPose_Request_ & other) const
  {
    if (this->entity != other.entity) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEntityPose_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEntityPose_Request_

// alias to use template instance with default allocator
using SetEntityPose_Request =
  ros_ign_interfaces::srv::SetEntityPose_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_ign_interfaces


#ifndef _WIN32
# define DEPRECATED__ros_ign_interfaces__srv__SetEntityPose_Response __attribute__((deprecated))
#else
# define DEPRECATED__ros_ign_interfaces__srv__SetEntityPose_Response __declspec(deprecated)
#endif

namespace ros_ign_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetEntityPose_Response_
{
  using Type = SetEntityPose_Response_<ContainerAllocator>;

  explicit SetEntityPose_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit SetEntityPose_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_ign_interfaces::srv::SetEntityPose_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_ign_interfaces::srv::SetEntityPose_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_ign_interfaces::srv::SetEntityPose_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_ign_interfaces::srv::SetEntityPose_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_ign_interfaces::srv::SetEntityPose_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_ign_interfaces::srv::SetEntityPose_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_ign_interfaces::srv::SetEntityPose_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_ign_interfaces::srv::SetEntityPose_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_ign_interfaces::srv::SetEntityPose_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_ign_interfaces::srv::SetEntityPose_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_ign_interfaces__srv__SetEntityPose_Response
    std::shared_ptr<ros_ign_interfaces::srv::SetEntityPose_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_ign_interfaces__srv__SetEntityPose_Response
    std::shared_ptr<ros_ign_interfaces::srv::SetEntityPose_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetEntityPose_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetEntityPose_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetEntityPose_Response_

// alias to use template instance with default allocator
using SetEntityPose_Response =
  ros_ign_interfaces::srv::SetEntityPose_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ros_ign_interfaces

namespace ros_ign_interfaces
{

namespace srv
{

struct SetEntityPose
{
  using Request = ros_ign_interfaces::srv::SetEntityPose_Request;
  using Response = ros_ign_interfaces::srv::SetEntityPose_Response;
};

}  // namespace srv

}  // namespace ros_ign_interfaces

#endif  // ROS_IGN_INTERFACES__SRV__DETAIL__SET_ENTITY_POSE__STRUCT_HPP_
