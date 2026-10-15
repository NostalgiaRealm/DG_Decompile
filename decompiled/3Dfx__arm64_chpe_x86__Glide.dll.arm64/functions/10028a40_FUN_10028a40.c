/*
 * FUN_10028a40 at 10028a40
 * undefined FUN_10028a40(void)
 * Address ranges: 10028a40-10028b3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028a40(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x3160);
  FUN_10048850(*piVar1,3,3);
  FUN_10027bd0(*piVar1,param_2,1,param_5);
  FUN_10027bd0(*piVar1,param_3,1,param_5);
  FUN_10027bd0(*piVar1,param_4,1,param_5);
  **(int **)(*piVar1 + 0x28) = *(int *)(*piVar1 + 0x2c) + -3;
  *(int *)(*(int *)(*piVar1 + 0x28) + 4) = *(int *)(*piVar1 + 0x2c) + -2;
  *(int *)(*(int *)(*piVar1 + 0x28) + 8) = *(int *)(*piVar1 + 0x2c) + -1;
  *(int *)(*piVar1 + 0x28) = *(int *)(*piVar1 + 0x28) + 0xc;
  return;
}

