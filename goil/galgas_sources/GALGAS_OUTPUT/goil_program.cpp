//---------------------------------------------------------------------------*
//                                                                           *
//                         File 'goil_program.cpp'                           *
//             Generated by version version GALGAS_BETA_VERSION              *
//                    november 17th, 2010, at 19h29'56"                      *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#include "version_libpm.h"
#if CURRENT_LIBPM_VERSION != VERSION_OF_LIBPM_USED_BY_GALGAS_COMPILER
  #error "This file has been compiled with a version of GALGAS that uses libpm version VERSION_OF_LIBPM_USED_BY_GALGAS_COMPILER, different than the current version (CURRENT_LIBPM_VERSION) of libpm"
#endif

//---------------------------------------------------------------------------*

#include "goil_program.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/F_DisplayException.h"
#include "utilities/basic-allocation.h"
#include "utilities/cpp-allocation.h"
#include "command_line_interface/mainForLIBPM.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "command_line_interface/C_builtin_CLI_Options.h"

//---------------------------------------------------------------------------*

#include "goil_grammar.h"

//---------------------------------------------------------------------------*

#ifndef DO_NOT_GENERATE_CHECKINGS
  #define SOURCE_FILE_AT_LINE(line) "goil_program.gProgram", line
  #define COMMA_SOURCE_FILE_AT_LINE(line) , SOURCE_FILE_AT_LINE(line)
#else
  #define SOURCE_FILE_AT_LINE(line) 
  #define COMMA_SOURCE_FILE_AT_LINE(line) 
#endif

//---------------------------------------------------------------------------*
//                                                                           *
//                      M A I N    F O R    L I B P M                        *
//                                                                           *
//---------------------------------------------------------------------------*

int mainForLIBPM  (const int argc, const char * argv []) {
  bool verboseOptionOn = true ;
  PMSInt16 returnCode = 0 ; // No error
  {
  //--- Input/output parameters
    const char * extensions [] = {
      "oil",
      "OIL",
      NULL
    } ;    
    const char * helpMessages [] = {
      "an '.oil' source file",
      "an '.OIL' source file",
      NULL
    } ;    
    TC_UniqueArray <C_String> sourceFilesArray ;
  //--- Analyze Command Line Options
    F_Analyze_CLI_Options (argc, argv,
      #ifndef DO_NOT_GENERATE_CHECKINGS
        "version " "version 2.0b50 build 1206" " [debug]",
      #else
        "version " "version 2.0b50 build 1206",
      #endif
                           sourceFilesArray,
                           extensions,
                           helpMessages) ;
  //--- Build galgas io object
    C_galgas_io * galgasIOptr = NULL ;
    macroMyNew (galgasIOptr, C_galgas_io (HERE)) ;
  //--- Common lexique object
    C_Compiler * commonLexique = NULL ;
    macroMyNew (commonLexique, C_Compiler (NULL, "", "", galgasIOptr COMMA_HERE)) ;
  //--- Ask Save On Close ? (Carbon and Windows SIOUX Only)
    #ifdef SIOUX_IS_IMPLEMENTED
      SIOUXSettings.asktosaveonclose = gOption_generic_5F_cli_5F_options_options_asktosaveonclose.mValue ;
    #endif
  //--- Enable 64 bit alloc debug ? Only if compiled in 64 bit and in debug mode
    #ifndef DO_NOT_GENERATE_CHECKINGS
      #ifdef __LP64__
        if (gOption_generic_5F_cli_5F_options_enable_5F_allocation_5F_debugging.mValue) {
          enableAllocDebugFor64BitTool () ;
        }
      #endif
    #endif
    try{
      verboseOptionOn = gOption_galgas_5F_cli_5F_options_verbose_5F_output.mValue ;
      routine_before (commonLexique COMMA_HERE) ;
      for (PMSInt32 i=0 ; i<sourceFilesArray.count () ; i++) {
        const C_String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GALGAS_string sfp = GALGAS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GALGAS_location location = commonLexique->here () ;
        const GALGAS_lstring sourceFilePath (sfp, location) ;
        PMSInt16 r = 0 ;
        if (fileExtension == "oil") {
          routine_programRule_5F__30_ (sourceFilePath, commonLexique COMMA_HERE) ;
        }else if (fileExtension == "OIL") {
          routine_programRule_5F__31_ (sourceFilePath, commonLexique COMMA_HERE) ;
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString (HERE)) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (commonLexique->totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (commonLexique->totalWarningCount () > 0) {
        if (gOption_galgas_5F_cli_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonLexique COMMA_HERE) ;
    }catch (const M_STD_NAMESPACE exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      throw ;
    }
    macroDetachSharedObject (galgasIOptr) ;
    macroDetachSharedObject (commonLexique) ;
  }
  return returnCode ;
}

//---------------------------------------------------------------------------*
//                                                                           *
//                             Routine 'before'                              *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_before (C_Compiler * /* inCompiler */
                     COMMA_UNUSED_LOCATION_ARGS) {
}


//---------------------------------------------------------------------------*
//                                                                           *
//                          Routine 'programRule_0'                          *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_programRule_5F__30_ (const GALGAS_lstring constinArgument_inSourceFile,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  { //-------- @grammarInstructionWithSourceFileForGeneration
  cGrammar_goil_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile COMMA_SOURCE_FILE_AT_LINE (13)) ;
  } //-------- END @grammarInstructionWithSourceFileForGeneration
}


//---------------------------------------------------------------------------*
//                                                                           *
//                          Routine 'programRule_1'                          *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_programRule_5F__31_ (const GALGAS_lstring constinArgument_inSourceFile,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  { //-------- @grammarInstructionWithSourceFileForGeneration
  cGrammar_goil_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile COMMA_SOURCE_FILE_AT_LINE (17)) ;
  } //-------- END @grammarInstructionWithSourceFileForGeneration
}


//---------------------------------------------------------------------------*
//                                                                           *
//                              Routine 'after'                              *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_after (C_Compiler * /* inCompiler */
                    COMMA_UNUSED_LOCATION_ARGS) {
}


//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


