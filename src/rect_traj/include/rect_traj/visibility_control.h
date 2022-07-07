#ifndef RECT_TRAJ__VISIBILITY_CONTROL_H_
#define RECT_TRAJ__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define RECT_TRAJ_EXPORT __attribute__ ((dllexport))
    #define RECT_TRAJ_IMPORT __attribute__ ((dllimport))
  #else
    #define RECT_TRAJ_EXPORT __declspec(dllexport)
    #define RECT_TRAJ_IMPORT __declspec(dllimport)
  #endif
  #ifdef RECT_TRAJ_BUILDING_LIBRARY
    #define RECT_TRAJ_PUBLIC RECT_TRAJ_EXPORT
  #else
    #define RECT_TRAJ_PUBLIC RECT_TRAJ_IMPORT
  #endif
  #define RECT_TRAJ_PUBLIC_TYPE RECT_TRAJ_PUBLIC
  #define RECT_TRAJ_LOCAL
#else
  #define RECT_TRAJ_EXPORT __attribute__ ((visibility("default")))
  #define RECT_TRAJ_IMPORT
  #if __GNUC__ >= 4
    #define RECT_TRAJ_PUBLIC __attribute__ ((visibility("default")))
    #define RECT_TRAJ_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define RECT_TRAJ_PUBLIC
    #define RECT_TRAJ_LOCAL
  #endif
  #define RECT_TRAJ_PUBLIC_TYPE
#endif
#endif  // RECT_TRAJ__VISIBILITY_CONTROL_H_
// Generated 28-Jun-2022 08:23:25
// Copyright 2019-2020 The MathWorks, Inc.
