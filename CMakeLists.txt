cmake_minimum_required(VERSION 3.30)
project(LarmSystemOOPSlutProjekt)

set(CMAKE_CXX_STANDARD 20)

add_executable(LarmSystemOOPSlutProjekt main.cpp
        AlarmCentral.cpp
        AlarmCentral.h
        Client.cpp
        Client.h
        Booking.cpp
        Booking.h
        AlarmSystem.cpp
        AlarmSystem.h
        Sensor.cpp
        Sensor.h
        AlarmSystemFactory.cpp
        AlarmSystemFactory.h
        SensorFactory.cpp
        SensorFactory.h)
