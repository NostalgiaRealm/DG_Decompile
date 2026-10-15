/*
 * DirectDrawCreateEx at 10028c08
 * int __stdcall DirectDrawCreateEx(undefined4 * param_1, undefined4 * param_2, int param_3, int param_4)
 * Address ranges: 10028c08-10028c52
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int DirectDrawCreateEx(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  int iVar1;
  
                    /* 0x28c08  8  DirectDrawCreateEx */
  UNRECOVERED_JUMPTABLE = FUN_10023885("DirectDrawCreateEx");
  if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10028c1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    return iVar1;
  }
  iVar1 = 0;
  do {
    if (*(int *)(param_3 + iVar1 * 4) != (&DAT_100623b0)[iVar1]) {
      return -0x7ff8ffa9;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  iVar1 = FUN_100239a7(0x100623b0,param_1,param_2,param_4);
  return iVar1;
}

