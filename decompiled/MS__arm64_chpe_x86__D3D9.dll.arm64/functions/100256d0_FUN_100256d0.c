/*
 * FUN_100256d0 at 100256d0
 * undefined FUN_100256d0(void)
 * Address ranges: 100256d0-100256fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

float FUN_100256d0(float param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(int *)(param_2 + 0xc) + 0x94f);
  if (uVar1 < 9) {
    if (uVar1 != 0) {
      param_1 = (float)uVar1;
    }
  }
  else {
    param_1 = 8.0;
  }
  return param_1;
}

