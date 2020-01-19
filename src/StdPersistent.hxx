#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <StdObjMgt_MapOfInstantiators.hxx>

// module includes
#include <StdPersistent_TopoDS.hxx>
#include <StdPersistent.hxx>
#include <StdPersistent_DataXtd.hxx>
#include <StdPersistent_DataXtd_PatternStd.hxx>
#include <StdPersistent_DataXtd_Constraint.hxx>
#include <StdPersistent_PPrsStd.hxx>
#include <StdPersistent_TopLoc.hxx>
#include <StdPersistent_HArray1.hxx>
#include <StdPersistent_Naming.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StdPersistent_TopoDS.hxx
// ./opencascade/StdPersistent.hxx
// ./opencascade/StdPersistent_DataXtd.hxx
// ./opencascade/StdPersistent_DataXtd_PatternStd.hxx
// ./opencascade/StdPersistent_DataXtd_Constraint.hxx
// ./opencascade/StdPersistent_PPrsStd.hxx
// ./opencascade/StdPersistent_TopLoc.hxx
// ./opencascade/StdPersistent_HArray1.hxx
// ./opencascade/StdPersistent_Naming.hxx

// user-defined post
