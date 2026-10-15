/*
 * FUN_10025d70 at 10025d70
 * undefined FUN_10025d70(void)
 * Address ranges: 10025d70-10025db3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025d70(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  *(int *)(iVar2 + 0x4038) = param_1[3];
  FUN_1000e120(iVar2,iVar1,iVar1 + iVar3 * 4,iVar1 + iVar3 * 8,1);
  return;
}

