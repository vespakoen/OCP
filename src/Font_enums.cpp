
// pybind 11 related includes
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

// Standard Handle
#include <Standard_Handle.hxx>

// user-defined inclusion per module before includes

// includes to resolve forward declarations
#include <Font_FTFont.hxx>
#include <Font_FTLibrary.hxx>
#include <TCollection_HAsciiString.hxx>

// module includes
#include <Font_BRepFont.hxx>
#include <Font_BRepTextBuilder.hxx>
#include <Font_FontAspect.hxx>
#include <Font_FontMgr.hxx>
#include <Font_FTFont.hxx>
#include <Font_FTLibrary.hxx>
#include <Font_NameOfFont.hxx>
#include <Font_NListOfSystemFont.hxx>
#include <Font_Rect.hxx>
#include <Font_SystemFont.hxx>
#include <Font_TextFormatter.hxx>

// template related includes
// ./opencascade/Font_NListOfSystemFont.hxx
#include "NCollection.hxx"


// user-defined pre
#include "OCP_specific.inc"

// user-defined inclusion per module
struct FT_LibraryRec_ {};

// Module definiiton
void register_Font_enums(py::module &main_module) {


py::module m = main_module.def_submodule("Font", R"#()#");

// user-defined inclusion per module in the body

// enums
    py::enum_<Font_FontAspect>(m, "Font_FontAspect",R"#(Specifies aspect of system font.)#")
        .value("Font_FA_Undefined",Font_FontAspect::Font_FA_Undefined)
        .value("Font_FA_Regular",Font_FontAspect::Font_FA_Regular)
        .value("Font_FA_Bold",Font_FontAspect::Font_FA_Bold)
        .value("Font_FA_Italic",Font_FontAspect::Font_FA_Italic)
        .value("Font_FA_BoldItalic",Font_FontAspect::Font_FA_BoldItalic).export_values();

//Python trampoline classes

// pre-register typdefs
    preregister_template_NCollection_List<opencascade::handle<Font_SystemFont> >(m,"Font_NListOfSystemFont");  

// classes forward declarations only
    py::class_<Font_BRepTextBuilder , shared_ptr<Font_BRepTextBuilder>  >(m,"Font_BRepTextBuilder",R"#(Represents class for applying text formatting.)#");
    py::class_<Font_FTFont ,opencascade::handle<Font_FTFont>  , Standard_Transient >(m,"Font_FTFont",R"#(Wrapper over FreeType font. Notice that this class uses internal buffers for loaded glyphs and it is absolutely UNSAFE to load/read glyph from concurrent threads!Wrapper over FreeType font. Notice that this class uses internal buffers for loaded glyphs and it is absolutely UNSAFE to load/read glyph from concurrent threads!)#");
    py::class_<Font_FTLibrary ,opencascade::handle<Font_FTLibrary>  , Standard_Transient >(m,"Font_FTLibrary",R"#(Wrapper over FT_Library. Provides access to FreeType library.Wrapper over FT_Library. Provides access to FreeType library.)#");
    py::class_<Font_FontMgr ,opencascade::handle<Font_FontMgr>  , Standard_Transient >(m,"Font_FontMgr",R"#(Collects and provides information about available fonts in system.Collects and provides information about available fonts in system.Collects and provides information about available fonts in system.)#");
    py::class_<Font_SystemFont ,opencascade::handle<Font_SystemFont>  , Standard_Transient >(m,"Font_SystemFont",R"#(This class stores information about the font, which is merely a file path and cached metadata about the font.This class stores information about the font, which is merely a file path and cached metadata about the font.)#");
    py::class_<Font_TextFormatter , shared_ptr<Font_TextFormatter>  >(m,"Font_TextFormatter",R"#(This class intended to prepare formatted text.)#");

};

// user-defined post-inclusion per module

// user-defined post
