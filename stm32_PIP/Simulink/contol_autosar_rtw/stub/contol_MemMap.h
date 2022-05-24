/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "contol"
   ARXML schema: "4.3"
   File generated on: "05-Mar-2022 11:08:11"  */

#define MEMMAP_ERROR

/* START_SEC Symbols */
#ifdef contol_START_SEC_CODE
#undef contol_START_SEC_CODE
#undef MEMMAP_ERROR
#elif defined( contol_START_SEC_CONST)
#undef contol_START_SEC_CONST
#undef MEMMAP_ERROR
#elif defined( contol_START_SEC_VAR)
#undef contol_START_SEC_VAR
#undef MEMMAP_ERROR
#endif

/* STOP_SEC symbols */
#ifdef contol_STOP_SEC_CODE
#undef contol_STOP_SEC_CODE
#undef MEMMAP_ERROR
#elif defined( contol_STOP_SEC_CONST)
#undef contol_STOP_SEC_CONST
#undef MEMMAP_ERROR
#elif defined( contol_STOP_SEC_VAR)
#undef contol_STOP_SEC_VAR
#undef MEMMAP_ERROR

/* Error out if none of the expected Memory Section keywords are defined */
#ifdef MEMMAP_ERROR
#error "contol_MemMap.h wrong pragma command"
#endif
#endif
