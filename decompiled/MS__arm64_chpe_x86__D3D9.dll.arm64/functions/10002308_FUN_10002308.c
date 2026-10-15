/*
 * FUN_10002308 at 10002308
 * undefined FUN_10002308(void)
 * Address ranges: 10002308-1000238b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10002308(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1 + 2;
  iVar4 = FUN_101322b0(param_2 + *piVar1 * 2);
  iVar2 = *param_1;
  iVar3 = param_1[1];
  FUN_101325a0(iVar4,iVar2,*piVar1);
  FUN_101322d0(*param_1);
  *param_1 = iVar4;
  param_1[1] = (iVar3 - iVar2) + iVar4;
  *piVar1 = param_2 + *piVar1 * 2;
  return;
}

