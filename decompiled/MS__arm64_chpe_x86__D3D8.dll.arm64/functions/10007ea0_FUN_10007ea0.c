/*
 * FUN_10007ea0 at 10007ea0
 * undefined FUN_10007ea0(void)
 * Address ranges: 10007ea0-10007ef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10007ea0(int param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (((param_2 == 0) || (*(uint *)(param_1 + 0x214) < param_2)) ||
     (*(int *)(*(int *)(param_1 + 0x210) + param_2 * 4 + -4) == 0)) {
    uVar1 = 0;
  }
  else {
    FUN_1000b860(param_1,param_2 - 1);
    uVar1 = 1;
  }
  return uVar1;
}

