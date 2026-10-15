/*
 * FUN_100947b9 at 100947b9
 * undefined4 __stdcall FUN_100947b9(int param_1, uint param_2, int param_3)
 * Address ranges: 100947b9-10094815
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100947b9(int param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  uVar2 = 0x8876086c;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  if (param_2 < *(uint *)(*(int *)(iVar1 + 0x50) + 0xf0)) {
    uVar2 = FUN_10092bca((void *)(iVar1 + -0x66b4),param_2,
                         (int *)(-(uint)(param_3 != 0) & param_3 - 0x5cU));
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

