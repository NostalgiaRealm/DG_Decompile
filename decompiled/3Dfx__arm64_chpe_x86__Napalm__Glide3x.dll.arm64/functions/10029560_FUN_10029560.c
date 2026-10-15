/*
 * FUN_10029560 at 10029560
 * undefined FUN_10029560(void)
 * Address ranges: 10029560-1002959f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10029560(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  *(int *)(iVar2 + 0x43d0) = param_1[3];
  FUN_1000fe30(iVar2,iVar1,iVar1 + iVar3 * 4,1);
  return;
}

