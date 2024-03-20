#ifndef MAP_INTERFACE__MAP_GENERATOR_INTERFACE_HPP_
#define MAP_INTERFACE__MAP_GENERATOR_INTERFACE_HPP_

#include <string>

namespace autonomous {
namespace map_interface {

class MapGeneratorInterface
{
public:
    MapGeneratorInterface();
    ~MapGeneratorInterface();

    virtual bool Create() = 0; 

    virtual bool Create(std::string& filename) = 0; 
};

}  // map_interface
}  // autonomous

#endif   // MAP_INTERFACE__MAP_GENERATOR_INTERFACE_HPP_