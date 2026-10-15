/*
 * DirectDrawEnumerateW at 10028d2d
 * int __stdcall DirectDrawEnumerateW(int param_1)
 * Address ranges: 10028d2d-10028d55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int DirectDrawEnumerateW(int param_1)

{
  FARPROC UNRECOVERED_JUMPTABLE;
  int iVar1;
  
                    /* 0x28d2d  12  DirectDrawEnumerateW */
  UNRECOVERED_JUMPTABLE = FUN_10023885("DirectDrawEnumerateW");
  if (UNRECOVERED_JUMPTABLE != (FARPROC)0x0) {
                    /* WARNING: Could not recover jumptable at 0x10028d3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    return iVar1;
  }
  iVar1 = -0x7fffbfff;
  if (param_1 == 0) {
    iVar1 = -0x7ff8ffa9;
  }
  return iVar1;
}

