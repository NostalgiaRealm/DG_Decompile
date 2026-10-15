/*
 * FUN_1006d9d9 at 1006d9d9
 * undefined __stdcall FUN_1006d9d9(int param_1)
 * Address ranges: 1006d9d9-1006da0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006d9d9(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x184);
  if (((uVar1 & 0x3f00) == 0) && (uVar1 != *(uint *)(param_1 + 0x18c))) {
    FUN_100c2ed2(param_1 + 0x18,uVar1);
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  return;
}

