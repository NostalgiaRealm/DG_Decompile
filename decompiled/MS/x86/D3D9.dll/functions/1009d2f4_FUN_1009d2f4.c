/*
 * FUN_1009d2f4 at 1009d2f4
 * uint __stdcall FUN_1009d2f4(int param_1, uint * param_2, RECT * param_3, uint param_4)
 * Address ranges: 1009d2f4-1009d324
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1009d2f4(int param_1,uint *param_2,RECT *param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = 0x8876086c;
  if ((*(int *)(param_1 + -0x14) == 0) || ((*(uint *)(param_1 + -0x2c) & 0x400) == 0)) {
    uVar1 = FUN_10012c1f((void *)(param_1 + -0x5c),param_2,param_3,param_4,0);
  }
  return uVar1;
}

