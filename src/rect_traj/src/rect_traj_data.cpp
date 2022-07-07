/*
 * rect_traj_data.cpp
 *
 * Code generation for model "rect_traj".
 *
 * Model version              : 1.78
 * Simulink Coder version : 9.7 (R2022a) 13-Nov-2021
 * C++ source code generated on : Tue Jun 28 08:23:07 2022
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "rect_traj.h"

/* Block parameters (default storage) */
P_rect_traj_T rect_traj_P = {
  /* Computed Parameter: Constant_Value
   * Referenced by: '<S1>/Constant'
   */
  {
    {
      0U,                              /* Seq */

      {
        0.0,                           /* Sec */
        0.0                            /* Nsec */
      },                               /* Stamp */

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                /* FrameId */

      {
        0U,                            /* CurrentLength */
        0U                             /* ReceivedLength */
      }                                /* FrameId_SL_Info */
    },                                 /* Header */

    {
      {
        0.0,                           /* X */
        0.0,                           /* Y */
        0.0                            /* Z */
      },                               /* Position */

      {
        0.0,                           /* X */
        0.0,                           /* Y */
        0.0,                           /* Z */
        0.0                            /* W */
      }                                /* Orientation */
    }                                  /* Pose */
  },

  /* Computed Parameter: Out1_Y0
   * Referenced by: '<S5>/Out1'
   */
  {
    {
      0U,                              /* Seq */

      {
        0.0,                           /* Sec */
        0.0                            /* Nsec */
      },                               /* Stamp */

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                /* FrameId */

      {
        0U,                            /* CurrentLength */
        0U                             /* ReceivedLength */
      }                                /* FrameId_SL_Info */
    },                                 /* Header */

    {
      {
        0.0,                           /* X */
        0.0,                           /* Y */
        0.0                            /* Z */
      },                               /* Position */

      {
        0.0,                           /* X */
        0.0,                           /* Y */
        0.0,                           /* Z */
        0.0                            /* W */
      }                                /* Orientation */
    }                                  /* Pose */
  },

  /* Computed Parameter: Constant_Value_l
   * Referenced by: '<S4>/Constant'
   */
  {
    {
      0U,                              /* Seq */

      {
        0.0,                           /* Sec */
        0.0                            /* Nsec */
      },                               /* Stamp */

      {
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U, 0U,
        0U, 0U }
      ,                                /* FrameId */

      {
        0U,                            /* CurrentLength */
        0U                             /* ReceivedLength */
      }                                /* FrameId_SL_Info */
    },                                 /* Header */

    {
      {
        0.0,                           /* X */
        0.0,                           /* Y */
        0.0                            /* Z */
      },                               /* Position */

      {
        0.0,                           /* X */
        0.0,                           /* Y */
        0.0,                           /* Z */
        0.0                            /* W */
      }                                /* Orientation */
    }                                  /* Pose */
  }
};
