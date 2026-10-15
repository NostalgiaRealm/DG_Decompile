/*
 * FUN_1009e173 at 1009e173
 * uint __stdcall FUN_1009e173(int param_1, uint param_2, uint * param_3, RECT * param_4, uint param_5)
 * Address ranges: 1009e173-1009e1ad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1009e173(int param_1,uint param_2,uint *param_3,RECT *param_4,uint param_5)

{
  uint uVar1;
  
  uVar1 = 0x8876086c;
  if ((param_2 == 0) || ((*(uint *)(*(int *)(param_1 + 0x10) + 0x30) & 0x400) == 0)) {
    uVar1 = FUN_100148a0((void *)(param_1 + -0x78),0,param_2,param_3,param_4,param_5);
  }
  return uVar1;
}

