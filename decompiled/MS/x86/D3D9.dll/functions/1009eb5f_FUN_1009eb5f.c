/*
 * FUN_1009eb5f at 1009eb5f
 * undefined4 __stdcall FUN_1009eb5f(int param_1, int param_2, undefined4 * param_3, uint * param_4)
 * Address ranges: 1009eb5f-1009eba1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009eb5f(int param_1,int param_2,undefined4 *param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),
               (byte)(*(uint *)(*(int *)(param_1 + -0x34) + 0xdd0) >> 2) & 1);
  uVar2 = FUN_10011b87((void *)(iVar1 + -0x40),param_2,param_3,param_4);
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

