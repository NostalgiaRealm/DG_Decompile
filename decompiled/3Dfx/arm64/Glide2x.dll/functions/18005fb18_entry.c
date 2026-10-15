/*
 * entry at 18005fb18
 * ulonglong __cdecl entry(undefined8 param_1, int param_2)
 * Address ranges: 18005fb18-18005fb83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong entry(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_2 == 1) {
    FUN_180060228();
    FUN_180060258((undefined8 *)&DAT_18006a000,(undefined8 *)&DAT_18006a008);
  }
  uVar1 = FUN_180005ca0(param_1,param_2);
  if (param_2 == 0) {
    FUN_1800601c8();
  }
  return uVar1 & 0xffffffff;
}

