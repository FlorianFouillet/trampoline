//---------------------------------------------------------------------------*
//                                                                           *
//                            File 'com_type.h'                              *
//                       Generated by version 1.9.10                         *
//                      april 9th, 2010, at 10h17'48"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef com_type_DEFINED
#define com_type_DEFINED

#include <string.h>

//---------------------------------------------------------------------------*

#include "galgas/GGS__header.h"

//---------------------------------------------------------------------------*

// Include imported semantics
#include "goil_basic_types.h"
#include "goil_routines.h"

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

//---------------------------------------------------------------------------*
//                                                                           *
//                          Class Predeclarations                            *
//                                                                           *
//---------------------------------------------------------------------------*

class GGS_com ;
class cPtr_com ;

//---------------------------------------------------------------------------*
//                                                                           *
//                          GALGAS class 'GGS_com'                           *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_type_descriptorEX kTypeDescriptor_GGS_com ;

//---------------------------------------------------------------------------*

class GGS_com : public GGS_oil_obj {
//--- Default constructor
  public : inline GGS_com (void) :
  GGS_oil_obj () {}

//--- Pointer assignment constructor
  public : GGS_com (const cPtr__AC_galgas_class * inPointer) ;

//--- Object assignment constructor
  public : GGS_com (cPtr__AC_galgas_class & inObject) ;

//--- castFrom class method (implements cast expression)
  public : static GGS_com
  castFrom (C_Compiler & inLexique,
             cPtr__AC_galgas_class * inPointer,
             const bool inUseKindOfClass,
             const GGS_location & inErrorLocation
             COMMA_LOCATION_ARGS) ;

//--- 'new' constructor
  public : static GGS_com constructor_new (C_Compiler & inLexique,
                                const GGS_lstring & argument_0,
                                const GGS_bool& argument_1,
                                const GGS_basic_type & argument_2,
                                const GGS_basic_type & argument_3,
                                const GGS_basic_type & argument_4,
                                const GGS_basic_type & argument_5,
                                const GGS_basic_type & argument_6,
                                const GGS_lstringlist & argument_7,
                                const GGS_lstring & argument_8,
                                const GGS_lstringlist & argument_9
                                COMMA_LOCATION_ARGS) ;

//--- getPtr
  public : inline cPtr_com * getPtr (void) const {
    return (cPtr_com *) mPointer ;
  }

//--- 'description' reader
  public : virtual const char * actualTypeName (void) const ;

//--- Readers
  public : GGS_bool reader_usecom (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_basic_type  reader_timebase (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_basic_type  reader_errorhook (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_basic_type  reader_usegetserviceid (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_basic_type  reader_useparameteraccess (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_basic_type  reader_startcomextension (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_lstringlist  reader_appmodes (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_lstring  reader_status (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;
  public : GGS_lstringlist  reader_uses (C_Compiler & inLexique COMMA_LOCATION_ARGS) const ;

//--- Modifiers

//--- operator ()
  #ifndef DO_NOT_GENERATE_CHECKINGS
    public : cPtr_com * operator () (LOCATION_ARGS) const ;
  #else
    public : inline cPtr_com * operator () (LOCATION_ARGS) const {
      return (cPtr_com *) mPointer ;
    }
  #endif

//--- Introspection
  public : virtual const C_galgas_type_descriptorEX * typeDescriptor (void) const ;

  public : GGS_object reader_object (void) const ;

  public : static GGS_com castFromObject (C_Compiler & inLexique,
                                           const GGS_object & inObject,
                                           const GGS_location & inErrorLocation
                                           COMMA_LOCATION_ARGS) ;

} ;

//---------------------------------------------------------------------------*

extern C_galgasClassRunTimeInformationEX gClassInfoFor__com ;

//---------------------------------------------------------------------------*
//                                                                           *
//                         Function 'void_com_obj'                           *
//                                                                           *
//---------------------------------------------------------------------------*

extern const C_galgas_function_descriptorEX kFunction_descriptor_void_com_obj ;

//---------------------------------------------------------------------------*

GGS_com  function_void_com_obj (C_Compiler & COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                        abstract class 'cPtr_com'                          *
//                                                                           *
//---------------------------------------------------------------------------*

class cPtr_com : public cPtr_oil_obj {
  private : typedef cPtr_oil_obj inherited ;
//--- Constructor
  public : cPtr_com (const GGS_lstring & ,
                                const GGS_bool& ,
                                const GGS_basic_type & ,
                                const GGS_basic_type & ,
                                const GGS_basic_type & ,
                                const GGS_basic_type & ,
                                const GGS_basic_type & ,
                                const GGS_lstringlist & ,
                                const GGS_lstring & ,
                                const GGS_lstringlist & 
                                COMMA_LOCATION_ARGS) ;

//--- Attributes
  public : GGS_bool usecom ;
  public : GGS_basic_type  timebase ;
  public : GGS_basic_type  errorhook ;
  public : GGS_basic_type  usegetserviceid ;
  public : GGS_basic_type  useparameteraccess ;
  public : GGS_basic_type  startcomextension ;
  public : GGS_lstringlist  appmodes ;
  public : GGS_lstring  status ;
  public : GGS_lstringlist  uses ;
//--- Class message
  public : virtual const char * instanceMessage (void) const ;
  public : static const char * _static_message (void) ;

//--- Method for 'description' reader
  public : virtual void
  appendForDescription (C_String & ioString,
                        const PMSInt32 inIndentation) const ;

//--- Comparison
  public : virtual bool
  isEqualToObject (const cPtr__AC_galgas_class * inOperand) const ;

//--- Galgas RTTI
  public : virtual AC_galgasClassRunTimeInformationEX * galgasRTTI (void) const ;

//--- Make clone
  public : virtual cPtr__AC_galgas_class * makeClone (void) const ;
} ;

//---------------------------------------------------------------------------*

#endif
