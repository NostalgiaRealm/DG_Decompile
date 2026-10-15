/*
 * FUN_1004ef5e at 1004ef5e
 * undefined __stdcall FUN_1004ef5e(int param_1)
 * Address ranges: 1004ef5e-1004efae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004ef5e(int param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  do {
    FUN_100a068b(param_1,*(uint *)(param_1 + 0x1f8 + uVar1 * 4));
    uVar1 = uVar1 + 1;
  } while (uVar1 < 6);
  uVar1 = 0;
  do {
    FUN_100a068b(param_1,*(uint *)(param_1 + 0x210 + uVar1 * 4));
    uVar1 = uVar1 + 1;
  } while (uVar1 < 6);
  uVar1 = 0;
  do {
    FUN_100a068b(param_1,*(uint *)(param_1 + 0x228 + uVar1 * 4));
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return;
}

