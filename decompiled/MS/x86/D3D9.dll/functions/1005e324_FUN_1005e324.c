/*
 * FUN_1005e324 at 1005e324
 * undefined __stdcall FUN_1005e324(int param_1)
 * Address ranges: 1005e324-1005e374
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e324(int param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  do {
    FUN_100c2ed2(param_1,*(uint *)(param_1 + 0x208 + uVar1 * 4));
    uVar1 = uVar1 + 1;
  } while (uVar1 < 6);
  uVar1 = 0;
  do {
    FUN_100c2ed2(param_1,*(uint *)(param_1 + 0x220 + uVar1 * 4));
    uVar1 = uVar1 + 1;
  } while (uVar1 < 6);
  uVar1 = 0;
  do {
    FUN_100c2ed2(param_1,*(uint *)(param_1 + 0x238 + uVar1 * 4));
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  return;
}

