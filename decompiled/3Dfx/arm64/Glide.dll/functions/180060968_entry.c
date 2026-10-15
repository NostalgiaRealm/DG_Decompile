/*
 * entry at 180060968
 * ulonglong __cdecl entry(HMODULE param_1, int param_2)
 * Address ranges: 180060968-1800609d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong entry(HMODULE param_1,int param_2)

{
  ulonglong uVar1;
  
  if (param_2 == 1) {
    FUN_180061078();
    FUN_1800610a8((undefined8 *)&DAT_18006b000,(undefined8 *)&DAT_18006b008);
  }
  uVar1 = FUN_180006750(param_1,param_2);
  if (param_2 == 0) {
    FUN_180061018();
  }
  return uVar1 & 0xffffffff;
}

