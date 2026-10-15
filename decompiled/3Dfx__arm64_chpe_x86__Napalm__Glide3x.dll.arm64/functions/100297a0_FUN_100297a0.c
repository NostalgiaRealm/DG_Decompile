/*
 * FUN_100297a0 at 100297a0
 * undefined FUN_100297a0(void)
 * Address ranges: 100297a0-100297e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100297a0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  *(int *)(iVar2 + 0x43d0) = param_1[3];
  FUN_1000ffc0(iVar2,iVar1,iVar1 + iVar3 * 4,iVar1 + iVar3 * 8,1);
  return;
}

