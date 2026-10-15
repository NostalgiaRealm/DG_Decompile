/*
 * FUN_1007bfa4 at 1007bfa4
 * int __stdcall FUN_1007bfa4(int param_1, int * param_2)
 * Address ranges: 1007bfa4-1007c027
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007bfa4(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar2 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  piVar3 = param_2;
  iVar4 = FUN_100148cc((void *)(iVar2 + -0x58e0),param_2);
  if (-1 < iVar4) {
    iVar1 = *(int *)(*(int *)(iVar2 + -0x56d0) + -4 + *piVar3 * 4);
    FUN_10005b6a(iVar2 + -0x530,iVar1 + 0x8a54,*(uint *)(iVar2 + -0x4dd0));
    FUN_10005b6a(iVar2 + -0x130,iVar1 + 0x9258,8);
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return iVar4;
}

