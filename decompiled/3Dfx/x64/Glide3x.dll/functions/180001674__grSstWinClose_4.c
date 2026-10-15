/*
 * _grSstWinClose@4 at 180001674
 * ulonglong __fastcall _grSstWinClose@4(int param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180001674-18000168e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong _grSstWinClose_4(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  HMODULE pHVar1;
  ulonglong uVar2;
  
                    /* 0x1674  67  _grSstWinClose@4
                       0x1674  167  grSstWinClose */
  pHVar1 = (HMODULE)FUN_1800069ac();
  uVar2 = FUN_180007784(pHVar1,param_1,param_3,param_4);
  return uVar2 & 0xff;
}

