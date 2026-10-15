/*
 * DirectDrawCreate at 10028bd9
 * undefined __stdcall DirectDrawCreate(undefined4 * param_1, undefined4 * param_2, int param_3)
 * Address ranges: 10028bd9-10028c07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void DirectDrawCreate(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  
                    /* 0x28bd9  6  DirectDrawCreate */
  UNRECOVERED_JUMPTABLE = FUN_10023885("DirectDrawCreate");
  if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10028beb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_100239a7(0x10062380,param_1,param_2,param_3);
  return;
}

