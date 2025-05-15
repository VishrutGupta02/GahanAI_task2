// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from training_interfaces:msg/Person.idl
// generated code does not contain a copyright notice

#ifndef TRAINING_INTERFACES__MSG__DETAIL__PERSON__TRAITS_HPP_
#define TRAINING_INTERFACES__MSG__DETAIL__PERSON__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "training_interfaces/msg/detail/person__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace training_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Person & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: age
  {
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Person & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: age
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "age: ";
    rosidl_generator_traits::value_to_yaml(msg.age, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Person & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace training_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use training_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const training_interfaces::msg::Person & msg,
  std::ostream & out, size_t indentation = 0)
{
  training_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use training_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const training_interfaces::msg::Person & msg)
{
  return training_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<training_interfaces::msg::Person>()
{
  return "training_interfaces::msg::Person";
}

template<>
inline const char * name<training_interfaces::msg::Person>()
{
  return "training_interfaces/msg/Person";
}

template<>
struct has_fixed_size<training_interfaces::msg::Person>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<training_interfaces::msg::Person>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<training_interfaces::msg::Person>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRAINING_INTERFACES__MSG__DETAIL__PERSON__TRAITS_HPP_
