/*
 * entry at 18005db3c
 * ulonglong __fastcall entry(undefined8 param_1, uint param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 18005db3c-18005db99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong entry(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  
  if (param_2 == 1) {
    FUN_18005e07c();
    _initterm((undefined8 *)&DAT_18006b000,(undefined8 *)&DAT_18006b008);
  }
  uVar1 = FUN_180003808(param_1,(ulonglong)param_2,param_3,param_4);
  if (param_2 == 0) {
    FUN_18005e04c();
  }
  return uVar1 & 0xffffffff;
}

