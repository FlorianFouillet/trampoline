//---------------------------------------------------------------------------*
//                                                                           *
//                        File 'template_scanner.h'                          *
//             Generated by version version GALGAS_BETA_VERSION              *
//                    november 17th, 2010, at 19h29'50"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1


#ifndef template_5F_scanner_CLASS_DEFINED
#define template_5F_scanner_CLASS_DEFINED

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

class cTokenFor_template_5F_scanner : public cToken {
  public : C_String mLexicalAttribute_a_5F_string ;
  public : double mLexicalAttribute_floatValue ;
  public : C_String mLexicalAttribute_identifierString ;
  public : C_String mLexicalAttribute_tokenString ;
  public : PMUInt64 mLexicalAttribute_uint_36__34_value ;

  public : cTokenFor_template_5F_scanner (void) ;
} ;

//---------------------------------------------------------------------------*
//                                                                           *
//                     S C A N N E R    C L A S S                            *
//                                                                           *
//---------------------------------------------------------------------------*

class C_Lexique_template_5F_scanner : public C_Lexique {
//--- Constructors
  public : C_Lexique_template_5F_scanner (C_Compiler * inCallerCompiler,
                       const C_String & inDependencyFileExtension,
                       const C_String & inDependencyFilePath,
                       C_galgas_io * inParametersPtr,
                       const C_String & inSourceFileName
                       COMMA_LOCATION_ARGS) ;

  public : C_Lexique_template_5F_scanner (C_Compiler * inCallerCompiler,
                       C_galgas_io * inParametersPtr,
                       const C_String & inSourceString,
                       const C_String & inStringForError
                       COMMA_LOCATION_ARGS) ;

//--- Declaring a protected virtual destructor enables the compiler to raise
//    an error if a direct delete is performed; only the static method
//    C_SharedObject::detachPointer may invoke delete.
  #ifndef DO_NOT_GENERATE_CHECKINGS
    protected : virtual ~ C_Lexique_template_5F_scanner (void) {}
  #endif

//--- Scanner mode for template scanner
  private : PMSInt32 mMatchedTemplateDelimiterIndex ;


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


//--- Terminal symbols enumeration
  public : enum {kToken_,
   kToken_identifier,
   kToken_literal_5F_double,
   kToken_unsigned_5F_literal_5F_integer_36__34_,
   kToken__2E_,
   kToken__2E__3D_,
   kToken__2E__2E__2E_,
   kToken__3C_,
   kToken__3C__3D_,
   kToken__3C__3C_,
   kToken_string,
   kToken_comment,
   kToken_after,
   kToken_before,
   kToken_between,
   kToken_block,
   kToken_default,
   kToken_do,
   kToken_else,
   kToken_elsif,
   kToken_emptylist,
   kToken_end,
   kToken_error,
   kToken_exists,
   kToken_false,
   kToken_for,
   kToken_foreach,
   kToken_from,
   kToken_here,
   kToken_if,
   kToken_in,
   kToken_let,
   kToken_loop,
   kToken_mod,
   kToken_no,
   kToken_not,
   kToken_or,
   kToken_prefixedby,
   kToken_template,
   kToken_templateresult,
   kToken_then,
   kToken_to,
   kToken_true,
   kToken_yes,
   kToken_warning,
   kToken_while,
   kToken_write,
   kToken__2A_,
   kToken__7C_,
   kToken__2C_,
   kToken__2B_,
   kToken__2D__2D_,
   kToken__3A__3A_,
   kToken__3E_,
   kToken__3B_,
   kToken__3A_,
   kToken__2D_,
   kToken__28_,
   kToken__29_,
   kToken__2D__3E_,
   kToken__3F_,
   kToken__3D__3D_,
   kToken__3F__3F_,
   kToken__21_,
   kToken__3A__3D_,
   kToken__2B__2B_,
   kToken__5B_,
   kToken__5D_,
   kToken__2B__3D_,
   kToken__3F__21_,
   kToken__21__3F_,
   kToken__2F_,
   kToken__21__3D_,
   kToken__3E__3D_,
   kToken__26_,
   kToken__7B_,
   kToken__7D_,
   kToken__2B__3E_,
   kToken__2D__3D_,
   kToken__5E_,
   kToken__3E__3E_,
   kToken__7E_,
   kToken__3C__2D_} ;

//--- Key words table 'goilTemplateKeyWordList'
  public : static PMSInt16 search_into_goilTemplateKeyWordList (const C_String & inSearchedString) ;

//--- Key words table 'galgasDelimitorsList'
  public : static PMSInt16 search_into_galgasDelimitorsList (const C_String & inSearchedString) ;
  

//--- Assign from attribute (v2)
  public : GALGAS_lstring synthetizedAttribute_a_5F_string (void) const ;
  public : GALGAS_ldouble synthetizedAttribute_floatValue (void) const ;
  public : GALGAS_lstring synthetizedAttribute_identifierString (void) const ;
  public : GALGAS_lstring synthetizedAttribute_tokenString (void) const ;
  public : GALGAS_luint_36__34_ synthetizedAttribute_uint_36__34_value (void) const ;


//--- Attribute access
  public : C_String attributeValue_a_5F_string (void) const ;
  public : double attributeValue_floatValue (void) const ;
  public : C_String attributeValue_identifierString (void) const ;
  public : C_String attributeValue_tokenString (void) const ;
  public : PMUInt64 attributeValue_uint_36__34_value (void) const ;


//--- Parse lexical token
  protected : virtual bool parseLexicalToken (void) ;

//--- Append terminal message
  protected : virtual void appendTerminalMessageToSyntaxErrorMessage (const PMSInt16 numeroTerminal,
                                                              C_String & messageErreur) ;

//--- Get terminal count
  public : virtual PMSInt16 terminalVocabularyCount (void) const { return 82 ; }

//--- Get Token String
  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;

//--- Enter Token
  protected : void enterToken (const cTokenFor_template_5F_scanner & inToken) ;
} ;

//---------------------------------------------------------------------------*

#endif
