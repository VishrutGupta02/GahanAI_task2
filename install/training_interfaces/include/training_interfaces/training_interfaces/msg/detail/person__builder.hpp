// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from training_interfaces:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef TRAINING_INTERFACES__MSG__DETAIL__PERSON__BUILDER_HPP_
#define TRAINING_INTERFACES__MSG__DETAIL__PERSON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "training_interfaces/msg/detail/person__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace training_interfaces
{

namespace msg
{

namespace builder
{

class Init_Person_age
{
public:
  explicit Init_Person_age(::training_interfaces::msg::Person & msg)
  : msg_(msg)
  {}
  ::training_interfaces::msg::Person age(::training_interfaces::msg::Person::_age_type arg)
  {
    msg_.age = std::move(arg);
    return std::move(msg_);
  }

private:
  ::training_interfaces::msg::Person msg_;
};

class Init_Person_name
{
public:
  Init_Person_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Person_age name(::training_interfaces::msg::Person::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Person_age(msg_);
  }

private:
  ::training_interfaces::msg::Person msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::training_interfaces::msg::Person>()
{
  return training_interfaces::msg::builder::Init_Person_name();
}

}  // namespace training_interfaces

#endif  // TRAINING_INTERFACES__MSG__DETAIL__PERSON__BUILDER_HPP_
