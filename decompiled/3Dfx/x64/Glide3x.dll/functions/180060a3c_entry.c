/*
 * entry at 180060a3c
 * ulonglong __fastcall entry(ulonglong param_1, uint param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 180060a3c-180060a99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong entry(ulonglong param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  
  if (param_2 == 1) {
    FUN_180060fd8();
    _initterm((undefined8 *)&DAT_18006c000,(undefined8 *)&DAT_18006c008);
  }
  uVar1 = FUN_180003428(param_1,(ulonglong)param_2,param_3,param_4);
  if (param_2 == 0) {
    FUN_180060fa8();
  }
  return uVar1 & 0xffffffff;
}

