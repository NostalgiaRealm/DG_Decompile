/*
 * entry at 180063650
 * ulonglong __cdecl entry(undefined8 param_1, int param_2)
 * Address ranges: 180063650-1800636bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong entry(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_2 == 1) {
    FUN_180063da0();
    FUN_180063dd0((undefined8 *)&DAT_18006e000,(undefined8 *)&DAT_18006e008);
  }
  uVar1 = FUN_180005ea0(param_1,param_2);
  if (param_2 == 0) {
    FUN_180063d40();
  }
  return uVar1 & 0xffffffff;
}

