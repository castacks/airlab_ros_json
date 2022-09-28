
#ifndef __AIRLAB_ROS_JSON_AIRLAB_ROS_JSON_HPP__
#define __AIRLAB_ROS_JSON_AIRLAB_ROS_JSON_HPP__

#include <string>

#include "nlohmann/json.hpp"

/**
 * @brief Read a JSON file and return a nlohmann::json object.
 * 
 * @param json_path 
 * @return nlohmann::json 
 */
nlohmann::json read_json(const std::string& json_path);

#endif // __AIRLAB_ROS_JSON_AIRLAB_ROS_JSON_HPP__
