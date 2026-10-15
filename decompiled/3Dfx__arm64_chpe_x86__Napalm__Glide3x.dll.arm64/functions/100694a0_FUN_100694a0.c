/*
 * FUN_100694a0 at 100694a0
 * undefined FUN_100694a0(void)
 * Address ranges: 100694a0-100694c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100694a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x8dc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x8dc) + 0xc);
  }
  return uVar1;
}

