/*
 * FUN_1800e2798 at 1800e2798
 * undefined FUN_1800e2798(void)
 * Address ranges: 1800e2798-1800e2843
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e2798(longlong param_1,ulonglong param_2,float *param_3)

{
  undefined8 uVar1;
  
  param_1 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  if ((((*param_3 != *(float *)(param_1 + 0xb80)) || (param_3[1] != *(float *)(param_1 + 0xb84))) ||
      (param_3[2] != *(float *)(param_1 + 0xb88))) ||
     (((param_3[3] != *(float *)(param_1 + 0xb8c) || (param_3[4] != *(float *)(param_1 + 0xb90))) ||
      (param_3[5] != *(float *)(param_1 + 0xb94))))) {
    (**(code **)(**(longlong **)(param_1 + 0x6b8) + 0x160))
              (*(longlong **)(param_1 + 0x6b8),1,param_3);
    uVar1 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 0xb88) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_1 + 0xb80) = uVar1;
    *(undefined8 *)(param_1 + 0xb90) = *(undefined8 *)(param_3 + 4);
  }
  return;
}

