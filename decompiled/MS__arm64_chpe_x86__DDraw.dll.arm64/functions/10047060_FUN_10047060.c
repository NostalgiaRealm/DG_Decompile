/*
 * FUN_10047060 at 10047060
 * undefined FUN_10047060(void)
 * Address ranges: 10047060-10047093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10047060(undefined8 param_1,uint param_2,int param_3)

{
  undefined8 uVar1;
  
  if (((param_2 & 0x18000) == 0x10000) ||
     (((param_2 & 0x18000) == 0x8000 && ((*(uint *)(param_3 + 0x154) >> 0x10 & 1) != 0)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

