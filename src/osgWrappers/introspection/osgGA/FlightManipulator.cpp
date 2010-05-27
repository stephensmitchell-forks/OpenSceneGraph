// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/ApplicationUsage>
#include <osg/CopyOp>
#include <osg/Object>
#include <osgGA/FlightManipulator>
#include <osgGA/GUIActionAdapter>
#include <osgGA/GUIEventAdapter>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgGA::FlightManipulator::YawControlMode)
	I_DeclaringFile("osgGA/FlightManipulator");
	I_EnumLabel(osgGA::FlightManipulator::YAW_AUTOMATICALLY_WHEN_BANKED);
	I_EnumLabel(osgGA::FlightManipulator::NO_AUTOMATIC_YAW);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgGA::FlightManipulator)
	I_DeclaringFile("osgGA/FlightManipulator");
	I_BaseType(osgGA::FirstPersonManipulator);
	I_ConstructorWithDefaults1(IN, int, flags, osgGA::StandardManipulator::UPDATE_MODEL_SIZE|osgGA::StandardManipulator::COMPUTE_HOME_USING_BBOX,
	                           Properties::NON_EXPLICIT,
	                           ____FlightManipulator__int,
	                           "",
	                           "");
	I_ConstructorWithDefaults2(IN, const osgGA::FlightManipulator &, fpm, , IN, const osg::CopyOp &, copyOp, osg::CopyOp::SHALLOW_COPY,
	                           ____FlightManipulator__C5_FlightManipulator_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method1(void, setYawControlMode, IN, osgGA::FlightManipulator::YawControlMode, ycm,
	          Properties::VIRTUAL,
	          __void__setYawControlMode__YawControlMode,
	          "",
	          "");
	I_Method0(osgGA::FlightManipulator::YawControlMode, getYawControlMode,
	          Properties::NON_VIRTUAL,
	          __YawControlMode__getYawControlMode,
	          "Returns the Yaw control for the flight model. ",
	          "");
	I_Method2(void, home, IN, const osgGA::GUIEventAdapter &, x, IN, osgGA::GUIActionAdapter &, x,
	          Properties::VIRTUAL,
	          __void__home__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	          "Move the camera to the default position. ",
	          "May be ignored by manipulators if home functionality is not appropriate. ");
	I_Method2(void, init, IN, const osgGA::GUIEventAdapter &, x, IN, osgGA::GUIActionAdapter &, x,
	          Properties::VIRTUAL,
	          __void__init__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	          "Start/restart the manipulator. ",
	          "FIXME: what does this actually mean? Provide examples. ");
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, x,
	          Properties::VIRTUAL,
	          __void__getUsage__osg_ApplicationUsage_R1,
	          "Get the keyboard and mouse usage of this manipulator. ",
	          "");
	I_ProtectedMethod2(bool, handleFrame, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool__handleFrame__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	                   "",
	                   "");
	I_ProtectedMethod2(bool, handleMouseMove, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool__handleMouseMove__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	                   "",
	                   "");
	I_ProtectedMethod2(bool, handleMouseDrag, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool__handleMouseDrag__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	                   "",
	                   "");
	I_ProtectedMethod2(bool, handleMousePush, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool__handleMousePush__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	                   "",
	                   "");
	I_ProtectedMethod2(bool, handleMouseRelease, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool__handleMouseRelease__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	                   "",
	                   "");
	I_ProtectedMethod2(bool, handleKeyDown, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool__handleKeyDown__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	                   "",
	                   "");
	I_ProtectedMethod2(bool, flightHandleEvent, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool__flightHandleEvent__C5_osgGA_GUIEventAdapter_R1__osgGA_GUIActionAdapter_R1,
	                   "",
	                   "");
	I_ProtectedMethod0(bool, performMovement,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool__performMovement,
	                   "",
	                   "");
	I_ProtectedMethod3(bool, performMovementLeftMouseButton, IN, const double, eventTimeDelta, IN, const double, dx, IN, const double, dy,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool__performMovementLeftMouseButton__C5_double__C5_double__C5_double,
	                   "",
	                   "");
	I_ProtectedMethod3(bool, performMovementMiddleMouseButton, IN, const double, eventTimeDelta, IN, const double, dx, IN, const double, dy,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool__performMovementMiddleMouseButton__C5_double__C5_double__C5_double,
	                   "",
	                   "");
	I_ProtectedMethod3(bool, performMovementRightMouseButton, IN, const double, eventTimeDelta, IN, const double, dx, IN, const double, dy,
	                   Properties::VIRTUAL,
	                   Properties::NON_CONST,
	                   __bool__performMovementRightMouseButton__C5_double__C5_double__C5_double,
	                   "",
	                   "");
	I_SimpleProperty(osgGA::FlightManipulator::YawControlMode, YawControlMode, 
	                 __YawControlMode__getYawControlMode, 
	                 __void__setYawControlMode__YawControlMode);
END_REFLECTOR

