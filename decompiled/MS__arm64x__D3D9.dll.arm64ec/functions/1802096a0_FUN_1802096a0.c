/*
 * FUN_1802096a0 at 1802096a0
 * undefined FUN_1802096a0(void)
 * Address ranges: 1802096a0-18020974f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802096a0(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  code *extraout_x11;
  
  if ((((*param_2 != *(int *)(param_1 + 0x660)) || (param_2[1] != *(int *)(param_1 + 0x664))) ||
      (param_2[2] != *(int *)(param_1 + 0x668))) || (param_2[3] != *(int *)(param_1 + 0x66c))) {
    *(int *)(param_1 + 0x660) = *param_2;
    *(int *)(param_1 + 0x664) = param_2[1];
    *(int *)(param_1 + 0x668) = param_2[2];
    *(int *)(param_1 + 0x66c) = param_2[3];
    FUN_180206ff8(param_1);
    uVar1 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(uVar1,param_2);
  }
  return;
}

