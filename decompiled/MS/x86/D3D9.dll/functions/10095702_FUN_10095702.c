/*
 * FUN_10095702 at 10095702
 * undefined4 __stdcall FUN_10095702(int param_1, uint param_2, int param_3, int param_4, int param_5)
 * Address ranges: 10095702-10095751
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10095702(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  uVar2 = FUN_100054ed((void *)(iVar1 + -0x66b4),param_2,
                       (int *)(-(uint)(param_3 != 0) & param_3 - 0x68U),param_4,param_5);
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

