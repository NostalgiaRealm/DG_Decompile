/*
 * FUN_10030e10 at 10030e10
 * undefined FUN_10030e10(void)
 * Address ranges: 10030e10-10030e7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030e10(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_10032010(param_1,uVar1,0);
    FUN_100917a0(param_1 + 0xa8 + uVar1 * 0xc18,param_1 + 0xc228,0xc00);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return;
}

