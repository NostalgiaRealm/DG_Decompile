/*
 * FUN_1007c81d at 1007c81d
 * undefined4 __stdcall FUN_1007c81d(int param_1, uint param_2, int param_3, int param_4)
 * Address ranges: 1007c81d-1007c86a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007c81d(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  uVar2 = FUN_10004d0f((void *)(iVar1 + -0x58e0),param_2,
                       (int *)(-(uint)(param_3 != 0) & param_3 - 0x68U),extraout_ECX,param_4);
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar2;
}

