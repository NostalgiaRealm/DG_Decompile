/*
 * FUN_10014ac8 at 10014ac8
 * bool __fastcall FUN_10014ac8(uint param_1, int param_2)
 * Address ranges: 10014ac8-10014ae5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10014ac8(uint param_1,int param_2)

{
  uint uVar1;
  int extraout_EDX;
  
  if (param_2 != 3) {
    uVar1 = FUN_10014ab8(param_1);
    return (uVar1 & 1) == (uint)(extraout_EDX != 1);
  }
  return true;
}

