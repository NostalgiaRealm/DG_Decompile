/*
 * FUN_10068ae8 at 10068ae8
 * undefined FUN_10068ae8(void)
 * Address ranges: 10068ae8-10068bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10068ae8(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0x80070057;
  if (((param_2 != (int *)0x0) && (*param_2 == 0x2c)) &&
     (uVar1 = 0x88760305, *(char *)(param_1 + 0xd0) != '\0')) {
    uVar1 = 0;
    param_2[1] = *(int *)(param_1 + 0xa8);
    param_2[2] = *(int *)(param_1 + 0xac);
    param_2[3] = *(uint *)(param_1 + 0xb0);
    param_2[4] = *(uint *)(param_1 + 0xb4);
    param_2[5] = (int)((float)*(uint *)(param_1 + 0xb0) / *(float *)(param_1 + 0xc0));
    param_2[6] = (int)((float)*(uint *)(param_1 + 0xb4) / *(float *)(param_1 + 0xc4));
    param_2[7] = (int)(*(float *)(param_1 + 0xb8) + *(float *)(param_1 + 0xc0));
    param_2[8] = *(int *)(param_1 + 0xbc);
    param_2[9] = 0;
    param_2[10] = 0x3f800000;
  }
  return uVar1;
}

