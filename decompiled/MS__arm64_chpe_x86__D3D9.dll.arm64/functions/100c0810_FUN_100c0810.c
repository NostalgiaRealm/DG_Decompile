/*
 * FUN_100c0810 at 100c0810
 * undefined FUN_100c0810(void)
 * Address ranges: 100c0810-100c0827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100c0810(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x130) >> (ulonglong)(param_2 & 0x1f);
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  return uVar1;
}

