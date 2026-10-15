/*
 * FUN_10008c80 at 10008c80
 * undefined FUN_10008c80(void)
 * Address ranges: 10008c80-10008cd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10008c80(int param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (((param_2 == 0) || (*(uint *)(param_1 + 0x3b8) < param_2)) ||
     (*(int *)(*(int *)(param_1 + 0x3b4) + param_2 * 4 + -4) == 0)) {
    uVar1 = 0;
  }
  else {
    FUN_1000c8c0(param_1,param_2 - 1);
    uVar1 = 1;
  }
  return uVar1;
}

