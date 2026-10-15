/*
 * entry at 18005d69c
 * ulonglong __fastcall entry(undefined8 param_1, uint param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18005d69c-18005d6f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong entry(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  
  if (param_2 == 1) {
    FUN_18005dbdc();
    _initterm((undefined8 *)&DAT_18006b000,(undefined8 *)&DAT_18006b008);
  }
  uVar1 = FUN_1800035e8(param_1,(ulonglong)param_2,param_3,param_4);
  if (param_2 == 0) {
    FUN_18005dbac();
  }
  return uVar1 & 0xffffffff;
}

