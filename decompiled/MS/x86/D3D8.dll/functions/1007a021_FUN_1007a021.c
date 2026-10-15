/*
 * FUN_1007a021 at 1007a021
 * undefined4 __stdcall FUN_1007a021(int param_1, uint param_2, int param_3, int * param_4)
 * Address ranges: 1007a021-1007a055
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007a021(int param_1,uint param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if ((param_2 < *(uint *)(param_1 + -0x24)) &&
     (((param_3 == 2 || (param_3 == 0)) && (param_4 != (int *)0x0)))) {
    uVar1 = FUN_10003530((void *)(param_1 + -0x70),param_2,param_4);
  }
  return uVar1;
}

