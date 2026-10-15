/*
 * FUN_100820b2 at 100820b2
 * undefined4 __stdcall FUN_100820b2(int param_1, int param_2)
 * Address ranges: 100820b2-100820ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100820b2(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),
               (byte)(*(uint *)(*(int *)(param_1 + -0x38) + 0xb0c) >> 2) & 1);
  uVar2 = FUN_1000da6a((void *)(iVar1 + -0x44),param_2);
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

