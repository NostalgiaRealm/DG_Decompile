/*
 * FUN_100918b1 at 100918b1
 * uint __stdcall FUN_100918b1(int param_1, int param_2, uint param_3, uint * param_4, RECT * param_5, uint param_6)
 * Address ranges: 100918b1-100918ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_100918b1(int param_1,int param_2,uint param_3,uint *param_4,RECT *param_5,uint param_6)

{
  uint uVar1;
  
  uVar1 = 0x8876086c;
  if ((param_3 == 0) || ((*(uint *)(*(int *)(param_1 + 0x10) + 0x30) & 0x400) == 0)) {
    uVar1 = FUN_100148a0((void *)(param_1 + -0x78),param_2,param_3,param_4,param_5,param_6);
  }
  return uVar1;
}

