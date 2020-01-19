#pragma once

// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// includes to resolve forward declarations
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_Graph.hxx>
#include <Interface_Check.hxx>
#include <Standard_TypeMismatch.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_SelectMember.hxx>
#include <Interface_Check.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_Field.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_FieldList.hxx>
#include <StepData_SelectType.hxx>
#include <TCollection_HAsciiString.hxx>
#include <StepData_EnumTool.hxx>
#include <Standard_OutOfRange.hxx>
#include <StepData_Protocol.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <Standard_OutOfRange.hxx>
#include <StepData_Field.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <StepData_ECDescr.hxx>
#include <StepData_Simple.hxx>
#include <StepData_Field.hxx>
#include <Interface_Check.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_Described.hxx>
#include <StepData_StepModel.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <StepData_Protocol.hxx>
#include <Message_Messenger.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_Described.hxx>
#include <TCollection_HAsciiString.hxx>
#include <Interface_UndefinedContent.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepData_StepWriter.hxx>
#include <Interface_CopyTool.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_StepReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_StepModel.hxx>
#include <StepData_UndefinedEntity.hxx>
#include <StepData_SelectType.hxx>
#include <StepData_Field.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_SelectInt.hxx>
#include <StepData_SelectReal.hxx>
#include <StepData_SelectNamed.hxx>
#include <StepData_SelectArrReal.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_FieldList.hxx>
#include <StepData_FieldList1.hxx>
#include <StepData_FieldListN.hxx>
#include <StepData_FieldListD.hxx>
#include <StepData_EDescr.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_ECDescr.hxx>
#include <StepData_Described.hxx>
#include <StepData_Simple.hxx>
#include <StepData_Plex.hxx>
#include <StepData_FreeFormEntity.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_GeneralModule.hxx>
#include <StepData_FileRecognizer.hxx>
#include <StepData_FileProtocol.hxx>
#include <StepData_HeaderTool.hxx>
#include <StepData_EnumTool.hxx>
#include <StepData_DescrProtocol.hxx>
#include <StepData_DescrGeneral.hxx>
#include <StepData_DescrReadWrite.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_StepReaderTool.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_StepDumper.hxx>
#include <StepData_WriterLib.hxx>
#include <StepData_DefaultGeneral.hxx>
#include <StepData_GlobalNodeOfWriterLib.hxx>
#include <StepData_NodeOfWriterLib.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_Check.hxx>
#include <Message_Messenger.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_FileProtocol.hxx>
#include <StepData_FileRecognizer.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_Protocol.hxx>
#include <Interface_Check.hxx>
#include <Interface_InterfaceModel.hxx>
#include <StepData_GlobalNodeOfWriterLib.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_WriterLib.hxx>
#include <Interface_InterfaceModel.hxx>
#include <StepData_EDescr.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_ECDescr.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_NodeOfWriterLib.hxx>
#include <Standard_NoSuchObject.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_GlobalNodeOfWriterLib.hxx>
#include <StepData_EDescr.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <StepData_Simple.hxx>
#include <StepData_Field.hxx>
#include <Interface_Check.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_FileReaderData.hxx>
#include <Interface_Check.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_StepWriter.hxx>
#include <Standard_NoSuchObject.hxx>
#include <TCollection_AsciiString.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_WriterLib.hxx>
#include <StepData_NodeOfWriterLib.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <StepData_ESDescr.hxx>
#include <Interface_Check.hxx>
#include <Interface_EntityIterator.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_Described.hxx>
#include <StepData_SelectMember.hxx>
#include <Interface_EntityIterator.hxx>
#include <Interface_ShareTool.hxx>
#include <Interface_Check.hxx>
#include <Interface_CopyTool.hxx>
#include <StepData_StepModel.hxx>
#include <Interface_InterfaceMismatch.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_WriterLib.hxx>
#include <StepData_Field.hxx>
#include <StepData_PDescr.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_FieldList.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_EDescr.hxx>
#include <StepData_Field.hxx>
#include <Interface_Check.hxx>

// module includes
#include <StepData_HArray1OfField.hxx>
#include <StepData_GeneralModule.hxx>
#include <StepData_SelectInt.hxx>
#include <StepData_FileProtocol.hxx>
#include <StepData_SelectArrReal.hxx>
#include <StepData_SelectType.hxx>
#include <StepData_SelectNamed.hxx>
#include <StepData_SelectMember.hxx>
#include <StepData_StepReaderData.hxx>
#include <StepData_DescrProtocol.hxx>
#include <StepData_FieldList1.hxx>
#include <StepData_DescrGeneral.hxx>
#include <StepData_FieldListN.hxx>
#include <StepData_FieldList.hxx>
#include <StepData_Plex.hxx>
#include <StepData_FreeFormEntity.hxx>
#include <StepData_EDescr.hxx>
#include <StepData_StepDumper.hxx>
#include <StepData_ECDescr.hxx>
#include <StepData_UndefinedEntity.hxx>
#include <StepData_Array1OfField.hxx>
#include <StepData_DescrReadWrite.hxx>
#include <StepData.hxx>
#include <StepData_StepModel.hxx>
#include <StepData_FieldListD.hxx>
#include <StepData_HeaderTool.hxx>
#include <StepData_StepReaderTool.hxx>
#include <StepData_NodeOfWriterLib.hxx>
#include <StepData_Logical.hxx>
#include <StepData_Protocol.hxx>
#include <StepData_WriterLib.hxx>
#include <StepData_Described.hxx>
#include <StepData_ReadWriteModule.hxx>
#include <StepData_FileRecognizer.hxx>
#include <StepData_GlobalNodeOfWriterLib.hxx>
#include <StepData_EnumTool.hxx>
#include <StepData_Simple.hxx>
#include <StepData_ESDescr.hxx>
#include <StepData_Field.hxx>
#include <StepData_SelectReal.hxx>
#include <StepData_DefaultGeneral.hxx>
#include <StepData_StepWriter.hxx>
#include <StepData_PDescr.hxx>

// user-defined pre
#include "OCP_specific.inc"

// Class template handling functions
// ./opencascade/StepData_HArray1OfField.hxx
// ./opencascade/StepData_GeneralModule.hxx
// ./opencascade/StepData_SelectInt.hxx
// ./opencascade/StepData_FileProtocol.hxx
// ./opencascade/StepData_SelectArrReal.hxx
// ./opencascade/StepData_SelectType.hxx
// ./opencascade/StepData_SelectNamed.hxx
// ./opencascade/StepData_SelectMember.hxx
// ./opencascade/StepData_StepReaderData.hxx
// ./opencascade/StepData_DescrProtocol.hxx
// ./opencascade/StepData_FieldList1.hxx
// ./opencascade/StepData_DescrGeneral.hxx
// ./opencascade/StepData_FieldListN.hxx
// ./opencascade/StepData_FieldList.hxx
// ./opencascade/StepData_Plex.hxx
// ./opencascade/StepData_FreeFormEntity.hxx
// ./opencascade/StepData_EDescr.hxx
// ./opencascade/StepData_StepDumper.hxx
// ./opencascade/StepData_ECDescr.hxx
// ./opencascade/StepData_UndefinedEntity.hxx
// ./opencascade/StepData_Array1OfField.hxx
// ./opencascade/StepData_DescrReadWrite.hxx
// ./opencascade/StepData.hxx
// ./opencascade/StepData_StepModel.hxx
// ./opencascade/StepData_FieldListD.hxx
// ./opencascade/StepData_HeaderTool.hxx
// ./opencascade/StepData_StepReaderTool.hxx
// ./opencascade/StepData_NodeOfWriterLib.hxx
// ./opencascade/StepData_Logical.hxx
// ./opencascade/StepData_Protocol.hxx
// ./opencascade/StepData_WriterLib.hxx
// ./opencascade/StepData_Described.hxx
// ./opencascade/StepData_ReadWriteModule.hxx
// ./opencascade/StepData_FileRecognizer.hxx
// ./opencascade/StepData_GlobalNodeOfWriterLib.hxx
// ./opencascade/StepData_EnumTool.hxx
// ./opencascade/StepData_Simple.hxx
// ./opencascade/StepData_ESDescr.hxx
// ./opencascade/StepData_Field.hxx
// ./opencascade/StepData_SelectReal.hxx
// ./opencascade/StepData_DefaultGeneral.hxx
// ./opencascade/StepData_StepWriter.hxx
// ./opencascade/StepData_PDescr.hxx

// user-defined post
