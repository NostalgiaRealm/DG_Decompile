/*
 * FUN_100b6db0 at 100b6db0
 * undefined FUN_100b6db0(void)
 * Address ranges: 100b6db0-100b6e4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b6db0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_30 [16];
  
  FUN_10121020(auStack_30);
  FUN_10006600(param_1,param_2,param_3);
  FUN_100b59e0(param_1,0);
  FUN_100b5780(param_1,0);
  if (*(int *)(param_1 + 0xb04) == 1) {
    if ((*(uint *)(param_1 + 0xb0c) >> 5 & 1) == 0) goto LAB_100b6e30;
  }
  else if (*(int *)(param_1 + 0xb04) != 3) goto LAB_100b6e30;
  *(undefined4 *)(param_1 + 0x4f0) = 1;
LAB_100b6e30:
  FUN_100b1930(param_1);
  FUN_10120f70(auStack_30);
  return;
}

