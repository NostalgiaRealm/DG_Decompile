/*
 * FUN_100ab108 at 100ab108
 * undefined FUN_100ab108(void)
 * Address ranges: 100ab108-100ab177
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ab108(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_100ac418(param_1,uVar1,0);
    FUN_100ff660(param_1 + 0x100a8 + uVar1 * 0xc18,param_1 + 0x1c228,0xc00);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  return;
}

