/*
 * FUN_1009ec21 at 1009ec21
 * undefined4 __stdcall FUN_1009ec21(int param_1, uint * param_2, uint * param_3, uint param_4)
 * Address ranges: 1009ec21-1009ec66
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009ec21(int param_1,uint *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),
               (byte)(*(uint *)(*(int *)(param_1 + -0x34) + 0xdd0) >> 2) & 1);
  uVar2 = FUN_10015102((void *)(iVar1 + -0x90),param_2,param_3,param_4);
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

