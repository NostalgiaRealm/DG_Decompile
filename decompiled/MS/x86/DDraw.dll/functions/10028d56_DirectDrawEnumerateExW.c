/*
 * DirectDrawEnumerateExW at 10028d56
 * int __stdcall DirectDrawEnumerateExW(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 10028d56-10028d8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int DirectDrawEnumerateExW(int param_1,undefined4 param_2,uint param_3)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  int iVar1;
  
                    /* 0x28d56  11  DirectDrawEnumerateExW */
  UNRECOVERED_JUMPTABLE = FUN_10023885("DirectDrawEnumerateExW");
  if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10028d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    return iVar1;
  }
  iVar1 = -0x7ff8ffa9;
  if (param_1 != 0) {
    iVar1 = (-(uint)((param_3 & 0xfffffff8) != 0) & 0x6c056) + 0x80004001;
  }
  return iVar1;
}

