#include <OOC/Config/CCompiler.d>
#include <__oo2c.h>
#include <setjmp.h>

OOC_CHAR8 OOC_Config_CCompiler__HaveLibtool(void) {
  register OOC_INT32 i0,i1;

  i0 = (OOC_INT32)OOC_Config_CCompiler__libtool;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1344))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1344))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1359)))), &_td_Config__StringVarDesc, 1359)), 1369));
  i1 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 1359)))), &_td_Config__StringVarDesc, 1359)), 1369));
  i0 = OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1376)))), Object__StringDesc_Equals)),Object__StringDesc_Equals)((Object__String)i1, (Object__Object)((OOC_INT32)_c0));
  return (!i0);
  ;
}

OOC_CHAR8 OOC_Config_CCompiler__SkipCallCC(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)OOC_Config_CCompiler__cc;
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 1567))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)(_check_pointer((_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1582)))), &_td_Config__StringVarDesc, 1582)), 1592));
  i0 = *(OOC_INT32*)(_check_pointer(i0, 1599));
  return (i0==0);
  ;
}

static ADT_StringBuffer__StringBuffer OOC_Config_CCompiler__SetCommand(Object__String mode) {
  register OOC_INT32 i0,i1,i2;
  ADT_StringBuffer__StringBuffer sb;

  i0 = (OOC_INT32)ADT_StringBuffer__New((Object__String)((OOC_INT32)_c1));
  sb = (ADT_StringBuffer__StringBuffer)i0;
  i1 = (OOC_INT32)mode;
  i2 = *(OOC_INT32*)(_check_pointer(i1, 1788));
  i2 = i2!=0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = OOC_Config_CCompiler__HaveLibtool();
  
l5:
  if (!i2) goto l10;
  i2 = (OOC_INT32)OOC_Config_CCompiler__libtool;
  i2 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i2, 1845))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1830)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i2);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1862)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c2));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1891)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1914)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c3));
  i1 = OOC_Logger__silence;
  if (!i1) goto l10;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 1967)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c4));
l10:
  i1 = (OOC_INT32)OOC_Config_CCompiler__cc;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2024))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2014)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2039)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c5));
  return (ADT_StringBuffer__StringBuffer)i0;
  ;
}

Object__String OOC_Config_CCompiler__CompileFileCmd(URI__URI in, URI__URI out, OOC_CHAR8 forLibrary) {
  register OOC_INT32 i0,i1,i2,i3,i4,i5,i6;
  ADT_StringBuffer__StringBuffer sb;
  URI_Scheme_File__URI f;
  Object__StringArrayPtr include;
  OOC_INT32 i;
  auto URI_Scheme_File__URI OOC_Config_CCompiler__CompileFileCmd_GetURIofRT(void);
    
    URI_Scheme_File__URI OOC_Config_CCompiler__CompileFileCmd_GetURIofRT(void) {
      register OOC_INT32 i0;
      OOC_Repository__Module m;
      URI__HierarchicalURI uri;
      URI_Scheme_File__URI f;

      i0 = (OOC_INT32)OOC_Config__repositories;
      i0 = (OOC_INT32)OOC_Config_Repositories__SectionDesc_GetModule((OOC_Config_Repositories__Section)i0, "RT0", 4);
      m = (OOC_Repository__Module)i0;
      _assert((i0!=(OOC_INT32)0), 127, 2482);
      i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2565)))), OOC_Repository__ModuleDesc_GetURI)),OOC_Repository__ModuleDesc_GetURI)((OOC_Repository__Module)i0, 0, 1u);
      uri = (URI__HierarchicalURI)i0;
      i0 = _type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2630)))), &_td_URI_Scheme_File__URIDesc, 2630);
      f = (URI_Scheme_File__URI)i0;
      OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2643)))), URI_Scheme_Hierarchical__GenericDesc_StripSegments)),URI_Scheme_Hierarchical__GenericDesc_StripSegments)((URI_Scheme_Hierarchical__Generic)i0, 1);
      return (URI_Scheme_File__URI)i0;
      ;
    }


  i0 = forLibrary;
  if (i0) goto l3;
  i0 = (OOC_INT32)OOC_Config_CCompiler__SetCommand((Object__String)((OOC_INT32)_c6));
  sb = (ADT_StringBuffer__StringBuffer)i0;
  
  goto l4;
l3:
  i0 = (OOC_INT32)OOC_Config_CCompiler__SetCommand((Object__String)((OOC_INT32)_c7));
  sb = (ADT_StringBuffer__StringBuffer)i0;
  
l4:
  i1 = (OOC_INT32)OOC_Config_CCompiler__cflags;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2835))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2821)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2850)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c8));
  i1 = (OOC_INT32)OOC_Config_CCompiler__cppflags;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 2886))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 2870)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  i0 = (OOC_INT32)OOC_Config_CCompiler__CompileFileCmd_GetURIofRT();
  f = (URI_Scheme_File__URI)i0;
  i1 = (OOC_INT32)sb;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3302)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i1, (Object__Object)((OOC_INT32)_c9));
  i0 = (OOC_INT32)URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3324)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i1, (Object__Object)i0);
  i0 = (OOC_INT32)OOC_Config__repositories;
  i0 = (OOC_INT32)OOC_Config_Repositories__SectionDesc_GetIncludePaths((OOC_Config_Repositories__Section)i0);
  include = (Object__StringArrayPtr)i0;
  i = 0;
  i2 = OOC_ARRAY_LENGTH((_check_pointer(i0, 3436)), 0);
  i3 = 0<i2;
  if (!i3) goto l12;
  i3 = (OOC_INT32)_c10;
  i4=0;
l7_loop:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3452)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i1, (Object__Object)i3);
  i5 = _check_pointer(i0, 3491);
  i6 = OOC_ARRAY_LENGTH(i5, 0);
  i5 = (OOC_INT32)*(OOC_INT32*)(i5+(_check_index(i4, i6, OOC_UINT32, 3491))*4);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3476)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i1, (Object__Object)i5);
  i4 = i4+1;
  i = i4;
  i5 = i4<i2;
  if (i5) goto l7_loop;
l12:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3517)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i1, (Object__Object)((OOC_INT32)_c11));
  i0 = (OOC_INT32)in;
  i0 = (OOC_INT32)URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3556)))), &_td_URI_Scheme_File__URIDesc, 3556)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3540)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i1, (Object__Object)i0);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3579)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i1, (Object__Object)((OOC_INT32)_c12));
  i0 = (OOC_INT32)out;
  i0 = (OOC_INT32)URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i0, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3619)))), &_td_URI_Scheme_File__URIDesc, 3619)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3602)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i1, (Object__Object)i0);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3649)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i1);
  return (Object__String)i0;
  ;
}

Object__String OOC_Config_CCompiler__LinkProgramCmd(URI__URI execFile, OOC_Package__Library forLibrary) {
  register OOC_INT32 i0,i1,i2;
  ADT_StringBuffer__StringBuffer sb;

  i0 = (OOC_INT32)OOC_Config_CCompiler__SetCommand((Object__String)((OOC_INT32)_c13));
  sb = (ADT_StringBuffer__StringBuffer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3881)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c14));
  i1 = (OOC_INT32)execFile;
  i1 = (OOC_INT32)URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 3925)))), &_td_URI_Scheme_File__URIDesc, 3925)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3903)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  i1 = (OOC_INT32)forLibrary;
  i2 = i1!=(OOC_INT32)0;
  if (i2) goto l3;
  i2=0u;
  goto l5;
l3:
  i2 = OOC_Config_CCompiler__HaveLibtool();
  
l5:
  if (!i2) goto l7;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 3997)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c15));
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4057))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4033)))), ADT_StringBuffer__StringBufferDesc_AppendLatin1)),ADT_StringBuffer__StringBufferDesc_AppendLatin1)((ADT_StringBuffer__StringBuffer)i0, (void*)((_check_pointer(i1, 4065))+12), 32);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4082)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c16));
  i1 = (OOC_INT32)OOC_Config_CCompiler__libdir;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4125))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4111)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
l7:
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4149)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c17));
  i1 = (OOC_INT32)OOC_Config_CCompiler__ldflags;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4184))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4169)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4206)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
  return (Object__String)i0;
  ;
}

Object__String OOC_Config_CCompiler__InstallDirectoryCmd(Object__String path) {
  register OOC_INT32 i0,i1;
  ADT_StringBuffer__StringBuffer sb;

  i0 = (OOC_INT32)OOC_Config_CCompiler__install;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4379))+8);
  i0 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i0, 4379))+8);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4385)))), Config__VariableDesc_ToString)),Config__VariableDesc_ToString)((Config__Variable)i0);
  i0 = (OOC_INT32)ADT_StringBuffer__New((Object__String)i0);
  sb = (ADT_StringBuffer__StringBuffer)i0;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4405)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c18));
  i1 = (OOC_INT32)path;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4428)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4456)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
  return (Object__String)i0;
  ;
}

Object__String OOC_Config_CCompiler__InstallProgramCmd(URI__URI file, OOC_CHAR8 asLibrary) {
  register OOC_INT32 i0,i1;
  ADT_StringBuffer__StringBuffer sb;

  i0 = (OOC_INT32)ADT_StringBuffer__New((Object__String)((OOC_INT32)_c19));
  sb = (ADT_StringBuffer__StringBuffer)i0;
  i1 = OOC_Config_CCompiler__HaveLibtool();
  if (!i1) goto l3;
  i1 = (OOC_INT32)OOC_Config_CCompiler__libtool;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4700))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4685)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4717)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c20));
l3:
  i1 = (OOC_INT32)OOC_Config_CCompiler__installProgram;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4788))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4766)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4803)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c21));
  i1 = (OOC_INT32)file;
  i1 = (OOC_INT32)URI_Scheme_File__URIDesc_GetPath((URI_Scheme_File__URI)(_type_guard(i1, ((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i1, 4841)))), &_td_URI_Scheme_File__URIDesc, 4841)));
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4823)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4864)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c22));
  i1 = asLibrary;
  if (i1) goto l6;
  i1 = (OOC_INT32)OOC_Config_CCompiler__bindir;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4962))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4948)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  goto l7;
l6:
  i1 = (OOC_INT32)OOC_Config_CCompiler__libdir;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 4922))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4908)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
l7:
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 4993)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
  return (Object__String)i0;
  ;
}

Object__String OOC_Config_CCompiler__UninstallProgramCmd(Object__String path, OOC_CHAR8 asLibrary) {
  register OOC_INT32 i0,i1;
  ADT_StringBuffer__StringBuffer sb;

  i0 = (OOC_INT32)ADT_StringBuffer__New((Object__String)((OOC_INT32)_c23));
  sb = (ADT_StringBuffer__StringBuffer)i0;
  i1 = OOC_Config_CCompiler__HaveLibtool();
  if (!i1) goto l4;
  i1 = (OOC_INT32)OOC_Config_CCompiler__libtool;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5236))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5221)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5253)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c24));
l4:
  i1 = (OOC_INT32)OOC_Config_CCompiler__uninstall;
  i1 = (OOC_INT32)*(OOC_INT32*)((_check_pointer(i1, 5321))+8);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5304)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5336)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)((OOC_INT32)_c25));
  i1 = (OOC_INT32)path;
  OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5356)))), ADT_StringBuffer__StringBufferDesc_Append)),ADT_StringBuffer__StringBufferDesc_Append)((ADT_StringBuffer__StringBuffer)i0, (Object__Object)i1);
  i0 = (OOC_INT32)OOC_TBCALL(((OOC_INT32)OOC_TBPROC_ADR(((OOC_INT32)OOC_TYPE_TAG((_check_pointer(i0, 5384)))), ADT_StringBuffer__StringBufferDesc_ToString)),ADT_StringBuffer__StringBufferDesc_ToString)((ADT_StringBuffer__StringBuffer)i0);
  return (Object__String)i0;
  ;
}

void OOC_Config_CCompiler__RegisterConfig(void) {
  register OOC_INT32 i0;

  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c26));
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c27), (Config__Variable)i0);
  OOC_Config_CCompiler__cc = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c28));
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c29), (Config__Variable)i0);
  OOC_Config_CCompiler__cppflags = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c30));
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c31), (Config__Variable)i0);
  OOC_Config_CCompiler__cflags = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c32));
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c33), (Config__Variable)i0);
  OOC_Config_CCompiler__ldflags = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c34));
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c35), (Config__Variable)i0);
  OOC_Config_CCompiler__libs = (Config_Section_Options__Option)i0;
  OOC_Config__AddCmdLine("--cc", 5, "<options><set name=\047cc\047>$1</set></options>", 43);
  OOC_Config__AddCmdLine("--cppflags", 11, "<options><set name=\047cppflags\047>$1</set></options>", 49);
  OOC_Config__AddCmdLine("--cflags", 9, "<options><set name=\047cflags\047>$1</set></options>", 47);
  OOC_Config__AddCmdLine("--ldflags", 10, "<options><set name=\047ldflags\047>$1</set></options>", 48);
  OOC_Config__AddCmdLine("--libs", 7, "<options><set name=\047libs\047>$1</set></options>", 45);
  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c36));
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c37), (Config__Variable)i0);
  OOC_Config_CCompiler__libtool = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c38));
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c39), (Config__Variable)i0);
  OOC_Config_CCompiler__libdir = (Config_Section_Options__Option)i0;
  OOC_Config__AddCmdLine("--libtool", 10, "<options><set name=\047libtool\047>$1</set></options>", 48);
  OOC_Config__AddCmdLine("--libdir", 9, "<options><set name=\047libdir\047>$1</set></options>", 47);
  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c40));
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c41), (Config__Variable)i0);
  OOC_Config_CCompiler__install = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c42));
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c43), (Config__Variable)i0);
  OOC_Config_CCompiler__installProgram = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c44));
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c45), (Config__Variable)i0);
  OOC_Config_CCompiler__installData = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c46));
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c47), (Config__Variable)i0);
  OOC_Config_CCompiler__uninstall = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c48));
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c49), (Config__Variable)i0);
  OOC_Config_CCompiler__bindir = (Config_Section_Options__Option)i0;
  i0 = (OOC_INT32)Config__NewStringVar((Object__String8)((OOC_INT32)_c50));
  i0 = (OOC_INT32)OOC_Config__AddOption((Object__String)((OOC_INT32)_c51), (Config__Variable)i0);
  OOC_Config_CCompiler__oocdir = (Config_Section_Options__Option)i0;
  OOC_Config__AddCmdLine("--install", 10, "<options><set name=\047install\047>$1</set></options>", 48);
  OOC_Config__AddCmdLine("--install-program", 18, "<options><set name=\047installProgram\047>$1</set></options>", 55);
  OOC_Config__AddCmdLine("--install-data", 15, "<options><set name=\047installData\047>$1</set></options>", 52);
  OOC_Config__AddCmdLine("--uninstall", 12, "<options><set name=\047uninstall\047>$1</set></options>", 50);
  OOC_Config__AddCmdLine("--bindir", 9, "<options><set name=\047bindir\047>$1</set></options>", 47);
  OOC_Config__AddCmdLine("--oocdir", 9, "<options><set name=\047oocdir\047>$1</set></options>", 47);
  return;
  ;
}

void OOC_OOC_Config_CCompiler_init(void) {
  _c0 = Object__NewLatin1Region("no", 3, 0, 2);
  _c1 = Object__NewLatin1Region("", 1, 0, 0);
  _c2 = Object__NewLatin1Region(" --mode=", 9, 0, 8);
  _c3 = Object__NewLatin1Char(32u);
  _c4 = Object__NewLatin1Region("--quiet ", 9, 0, 8);
  _c5 = Object__NewLatin1Char(32u);
  _c6 = Object__NewLatin1Region("", 1, 0, 0);
  _c7 = Object__NewLatin1Region("compile", 8, 0, 7);
  _c8 = Object__NewLatin1Char(32u);
  _c9 = Object__NewLatin1Region(" -I", 4, 0, 3);
  _c10 = Object__NewLatin1Region(" -I", 4, 0, 3);
  _c11 = Object__NewLatin1Region(" -c ", 5, 0, 4);
  _c12 = Object__NewLatin1Region(" -o ", 5, 0, 4);
  _c13 = Object__NewLatin1Region("link", 5, 0, 4);
  _c14 = Object__NewLatin1Region("-o ", 4, 0, 3);
  _c15 = Object__NewLatin1Region(" -version-info ", 16, 0, 15);
  _c16 = Object__NewLatin1Region(" -rpath ", 9, 0, 8);
  _c17 = Object__NewLatin1Char(32u);
  _c18 = Object__NewLatin1Region(" -d ", 5, 0, 4);
  _c19 = Object__NewLatin1Region("", 1, 0, 0);
  _c20 = Object__NewLatin1Region(" --mode=install ", 17, 0, 16);
  _c21 = Object__NewLatin1Char(32u);
  _c22 = Object__NewLatin1Char(32u);
  _c23 = Object__NewLatin1Region("", 1, 0, 0);
  _c24 = Object__NewLatin1Region(" --mode=uninstall ", 19, 0, 18);
  _c25 = Object__NewLatin1Char(32u);
  _c26 = Object__NewLatin1Region("gcc", 4, 0, 3);
  _c27 = Object__NewLatin1Region("cc", 3, 0, 2);
  _c28 = Object__NewLatin1Region("", 1, 0, 0);
  _c29 = Object__NewLatin1Region("cppflags", 9, 0, 8);
  _c30 = Object__NewLatin1Region("-O2 -g", 7, 0, 6);
  _c31 = Object__NewLatin1Region("cflags", 7, 0, 6);
  _c32 = Object__NewLatin1Region("", 1, 0, 0);
  _c33 = Object__NewLatin1Region("ldflags", 8, 0, 7);
  _c34 = Object__NewLatin1Region("-lgc", 5, 0, 4);
  _c35 = Object__NewLatin1Region("libs", 5, 0, 4);
  _c36 = Object__NewLatin1Region("libtool", 8, 0, 7);
  _c37 = Object__NewLatin1Region("libtool", 8, 0, 7);
  _c38 = Object__NewLatin1Region("libdir", 7, 0, 6);
  _c39 = Object__NewLatin1Region("libdir", 7, 0, 6);
  _c40 = Object__NewLatin1Region("install -c", 11, 0, 10);
  _c41 = Object__NewLatin1Region("install", 8, 0, 7);
  _c42 = Object__NewLatin1Region("install -c", 11, 0, 10);
  _c43 = Object__NewLatin1Region("installProgram", 15, 0, 14);
  _c44 = Object__NewLatin1Region("install -c -m 644", 18, 0, 17);
  _c45 = Object__NewLatin1Region("installData", 12, 0, 11);
  _c46 = Object__NewLatin1Region("rm -f", 6, 0, 5);
  _c47 = Object__NewLatin1Region("uninstall", 10, 0, 9);
  _c48 = Object__NewLatin1Region("bindir", 7, 0, 6);
  _c49 = Object__NewLatin1Region("bindir", 7, 0, 6);
  _c50 = Object__NewLatin1Region("oocdir", 7, 0, 6);
  _c51 = Object__NewLatin1Region("oocdir", 7, 0, 6);

  return;
  ;
}

/* --- */