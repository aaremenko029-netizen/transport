add_library(domain_lib STATIC
    src/Vehicle.cpp
    src/Car.cpp
)

target_include_directories(domain_lib PUBLIC include)
