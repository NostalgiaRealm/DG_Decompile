/*
 * FUN_100547f0 at 100547f0
 * undefined FUN_100547f0(void)
 * Address ranges: 100547f0-10054823
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100547f0(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if ((param_2 != (undefined4 *)0x0) && ((*(uint *)(*(int *)(param_1 + 4) + 0x1bc) >> 4 & 1) != 0))
  {
    *param_2 = 0;
    uVar1 = 0;
  }
  return uVar1;
}

