//---------------------------------------------------------------------------*
//                                                                           *
//                           File 'api_scanner.h'                            *
//             Generated by version version GALGAS_BETA_VERSION              *
//                    november 17th, 2010, at 19h29'51"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1


#ifndef api_5F_scanner_CLASS_DEFINED
#define api_5F_scanner_CLASS_DEFINED

//---------------------------------------------------------------------------*

#include "galgas2/C_Lexique.h"
#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------*
//                                                                           *
//                    E X T E R N    R O U T I N E S                         *
//                                                                           *
//---------------------------------------------------------------------------*

//---------------------------------------------------------------------------*
//                                                                           *
//                    E X T E R N    F U N C T I O N S                       *
//                                                                           *
//---------------------------------------------------------------------------*

//---------------------------------------------------------------------------*
//                                                                           *
//                       T O K E N    C L A S S                              *
//                                                                           *
//---------------------------------------------------------------------------*

class cTokenFor_api_5F_scanner : public cToken {
  public : C_String mLexicalAttribute_att_5F_token ;

  public : cTokenFor_api_5F_scanner (void) ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     S C A N N E R    C L A S S                            *
//                                                                           *
//---------------------------------------------------------------------------*

class C_Lexique_api_5F_scanner : public C_Lexique {
//--- Constructors
  public : C_Lexique_api_5F_scanner (C_Compiler * inCallerCompiler,
                       const C_String & inDependencyFileExtension,
                       const C_String & inDependencyFilePath,
                       C_galgas_io * inParametersPtr,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : C_Lexique_api_5F_scanner (C_Compiler * inCallerCompiler,
                       C_galgas_io * inParametersPtr,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~ C_Lexique_api_5F_scanner (void) {}
  #endif


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


//--- Terminal symbols enumeration
  public : enum {kToken_,
   kToken_comment,
   kToken_idf,
   kToken__3B_,
   kToken__7B_,
   kToken__7D_,
   kToken__2D__3E_,
   kToken__28_,
   kToken__29_} ;

//--- Key words table 'delimiters'
  public : static PMSInt16 search_into_delimiters (const C_String & inSearchedString) ;
  

//--- Assign from attribute (v2)
  public : GALGAS_lstring synthetizedAttribute_att_5F_token (void) const ;


//--- Attribute access
  public : C_String attributeValue_att_5F_token (void) const ;


//--- Parse lexical token
  protected : virtual bool parseLexicalToken (void) ;

//--- Append terminal message
  protected : virtual void appendTerminalMessageToSyntaxErrorMessage (const PMSInt16 numeroTerminal,
                                                              C_String & messageErreur) ;

//--- Get terminal count
  public : virtual PMSInt16 terminalVocabularyCount (void) const { return 8 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (const cTokenFor_api_5F_scanner & inToken) ;
} ;

//---------------------------------------------------------------------------*

#endif
