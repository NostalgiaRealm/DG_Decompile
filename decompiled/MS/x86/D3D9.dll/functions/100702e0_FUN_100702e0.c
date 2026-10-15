/*
 * FUN_100702e0 at 100702e0
 * undefined __stdcall FUN_100702e0(int param_1, uint * param_2)
 * Address ranges: 100702e0-10070306
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100702e0(int param_1,uint *param_2)

{
  if ((*param_2 & 0x3f00) == 0) {
    FUN_100c2ed2(param_1 + 0x18,*param_2);
    *param_2 = 0;
  }
  return;
}

