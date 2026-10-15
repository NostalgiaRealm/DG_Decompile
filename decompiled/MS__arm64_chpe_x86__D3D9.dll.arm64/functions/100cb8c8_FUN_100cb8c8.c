/*
 * FUN_100cb8c8 at 100cb8c8
 * undefined FUN_100cb8c8(void)
 * Address ranges: 100cb8c8-100cb937
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100cb8c8(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_100ccc08(param_1,uVar1,0);
    FUN_101325a0(param_1 + 0x100a8 + uVar1 * 0xc18,param_1 + 0x1c228,0xc00);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return;
}

