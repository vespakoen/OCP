#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <TopoDS_Face.hxx>
#include <TopoDS_Edge.hxx>
#include <TopOpeBRepTool_ShapeClassifier.hxx>
#include <BRepClass3d_SolidClassifier.hxx>
#include <Geom2d_Curve.hxx>
#include <Standard_NullObject.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Shape.hxx>
#include <gp_Pnt.hxx>
#include <Geom_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <Geom_Surface.hxx>
#include <TopoDS_Face.hxx>
#include <BRepAdaptor_Surface.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <gp_Dir.hxx>
#include <TopoDS_Face.hxx>
#include <TopoDS_Solid.hxx>
#include <TopOpeBRepTool_GeomTool.hxx>
#include <TopOpeBRepTool_AncestorsTool.hxx>
#include <TopOpeBRepTool_C2DF.hxx>
#include <TopOpeBRepTool_SolidClassifier.hxx>
#include <TopOpeBRepTool_CurveTool.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <TopOpeBRepTool_BoxSort.hxx>
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <TopOpeBRepTool_ShapeTool.hxx>
#include <TopOpeBRepTool_ShapeClassifier.hxx>
#include <TopOpeBRepTool_connexity.hxx>
#include <TopOpeBRepTool_face.hxx>
#include <TopOpeBRepTool_CLASSI.hxx>
#include <TopOpeBRepTool_TOOL.hxx>
#include <TopOpeBRepTool_CORRISO.hxx>
#include <TopOpeBRepTool_REGUW.hxx>
#include <TopOpeBRepTool_REGUS.hxx>
#include <TopOpeBRepTool_makeTransition.hxx>
#include <TopOpeBRepTool_mkTondgE.hxx>
#include <TopOpeBRepTool_PurgeInternalEdges.hxx>
#include <TopOpeBRepTool_FuseEdges.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopoDS_Face.hxx>
#include <TopOpeBRepTool_C2DF.hxx>
#include <BRepAdaptor_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Edge.hxx>
#include <TopoDS_Vertex.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>
#include <Geom_Curve.hxx>
#include <Geom2d_Curve.hxx>
#include <TopoDS_Shape.hxx>
#include <Standard_NullObject.hxx>

// module includes
#include <TopOpeBRepTool_2d.hxx>
#include <TopOpeBRepTool_REGUS.hxx>
#include <TopOpeBRepTool_Plos.hxx>
#include <TopOpeBRepTool_tol.hxx>
#include <TopOpeBRepTool_PURGE.hxx>
#include <TopOpeBRepTool_ShapeClassifier.hxx>
#include <TopOpeBRepTool_PShapeClassifier.hxx>
#include <TopOpeBRepTool_define.hxx>
#include <TopOpeBRepTool_STATE.hxx>
#include <TopOpeBRepTool_GEOMETRY.hxx>
#include <TopOpeBRepTool_PSoClassif.hxx>
#include <TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF.hxx>
#include <TopOpeBRepTool_defineG.hxx>
#include <TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeface.hxx>
#include <TopOpeBRepTool_GeomTool.hxx>
#include <TopOpeBRepTool_makeTransition.hxx>
#include <TopOpeBRepTool_C2DF.hxx>
#include <TopOpeBRepTool_KRO.hxx>
#include <TopOpeBRepTool_DataMapOfShapeListOfC2DF.hxx>
#include <TopOpeBRepTool_FuseEdges.hxx>
#include <TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF.hxx>
#include <TopOpeBRepTool_ShapeTool.hxx>
#include <TopOpeBRepTool_IndexedDataMapOfSolidClassifier.hxx>
#include <TopOpeBRepTool_box.hxx>
#include <TopOpeBRepTool_REGUW.hxx>
#include <TopOpeBRepTool_EXPORT.hxx>
#include <TopOpeBRepTool.hxx>
#include <TopOpeBRepTool_TOOL.hxx>
#include <TopOpeBRepTool_IndexedDataMapOfShapeconnexity.hxx>
#include <TopOpeBRepTool_DataMapOfShapeface.hxx>
#include <TopOpeBRepTool_CORRISO.hxx>
#include <TopOpeBRepTool_face.hxx>
#include <TopOpeBRepTool_BoxSort.hxx>
#include <TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx>
#include <TopOpeBRepTool_connexity.hxx>
#include <TopOpeBRepTool_IndexedDataMapOfShapeBox.hxx>
#include <TopOpeBRepTool_CurveTool.hxx>
#include <TopOpeBRepTool_AncestorsTool.hxx>
#include <TopOpeBRepTool_CLASSI.hxx>
#include <TopOpeBRepTool_DRAW.hxx>
#include <TopOpeBRepTool_OutCurveType.hxx>
#include <TopOpeBRepTool_mkTondgE.hxx>
#include <TopOpeBRepTool_ListOfC2DF.hxx>
#include <TopOpeBRepTool_SolidClassifier.hxx>
#include <TopOpeBRepTool_ShapeExplorer.hxx>
#include <TopOpeBRepTool_SC.hxx>
#include <TopOpeBRepTool_TOPOLOGY.hxx>
#include <TopOpeBRepTool_ListIteratorOfListOfC2DF.hxx>
#include <TopOpeBRepTool_PurgeInternalEdges.hxx>
#include <TopOpeBRepTool_IndexedDataMapOfShapeBox2d.hxx>
#include <TopOpeBRepTool_PROJECT.hxx>
#include <TopOpeBRepTool_HBoxTool.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/TopOpeBRepTool_2d.hxx
// ./opencascade/TopOpeBRepTool_REGUS.hxx
// ./opencascade/TopOpeBRepTool_Plos.hxx
// ./opencascade/TopOpeBRepTool_tol.hxx
// ./opencascade/TopOpeBRepTool_PURGE.hxx
// ./opencascade/TopOpeBRepTool_ShapeClassifier.hxx
// ./opencascade/TopOpeBRepTool_PShapeClassifier.hxx
// ./opencascade/TopOpeBRepTool_define.hxx
// ./opencascade/TopOpeBRepTool_STATE.hxx
// ./opencascade/TopOpeBRepTool_GEOMETRY.hxx
// ./opencascade/TopOpeBRepTool_PSoClassif.hxx
// ./opencascade/TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeListOfC2DF.hxx
// ./opencascade/TopOpeBRepTool_defineG.hxx
// ./opencascade/TopOpeBRepTool_DataMapIteratorOfDataMapOfShapeface.hxx
// ./opencascade/TopOpeBRepTool_GeomTool.hxx
// ./opencascade/TopOpeBRepTool_makeTransition.hxx
// ./opencascade/TopOpeBRepTool_C2DF.hxx
// ./opencascade/TopOpeBRepTool_KRO.hxx
// ./opencascade/TopOpeBRepTool_DataMapOfShapeListOfC2DF.hxx
// ./opencascade/TopOpeBRepTool_FuseEdges.hxx
// ./opencascade/TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF.hxx
// ./opencascade/TopOpeBRepTool_ShapeTool.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfSolidClassifier.hxx
// ./opencascade/TopOpeBRepTool_box.hxx
// ./opencascade/TopOpeBRepTool_REGUW.hxx
// ./opencascade/TopOpeBRepTool_EXPORT.hxx
// ./opencascade/TopOpeBRepTool.hxx
// ./opencascade/TopOpeBRepTool_TOOL.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeconnexity.hxx
// ./opencascade/TopOpeBRepTool_DataMapOfShapeface.hxx
// ./opencascade/TopOpeBRepTool_CORRISO.hxx
// ./opencascade/TopOpeBRepTool_face.hxx
// ./opencascade/TopOpeBRepTool_BoxSort.hxx
// ./opencascade/TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx
// ./opencascade/TopOpeBRepTool_connexity.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeBox.hxx
// ./opencascade/TopOpeBRepTool_CurveTool.hxx
// ./opencascade/TopOpeBRepTool_AncestorsTool.hxx
// ./opencascade/TopOpeBRepTool_CLASSI.hxx
// ./opencascade/TopOpeBRepTool_DRAW.hxx
// ./opencascade/TopOpeBRepTool_OutCurveType.hxx
// ./opencascade/TopOpeBRepTool_mkTondgE.hxx
// ./opencascade/TopOpeBRepTool_ListOfC2DF.hxx
// ./opencascade/TopOpeBRepTool_SolidClassifier.hxx
// ./opencascade/TopOpeBRepTool_ShapeExplorer.hxx
// ./opencascade/TopOpeBRepTool_SC.hxx
// ./opencascade/TopOpeBRepTool_TOPOLOGY.hxx
// ./opencascade/TopOpeBRepTool_ListIteratorOfListOfC2DF.hxx
// ./opencascade/TopOpeBRepTool_PurgeInternalEdges.hxx
// ./opencascade/TopOpeBRepTool_IndexedDataMapOfShapeBox2d.hxx
// ./opencascade/TopOpeBRepTool_PROJECT.hxx
// ./opencascade/TopOpeBRepTool_HBoxTool.hxx

// user-defined post
