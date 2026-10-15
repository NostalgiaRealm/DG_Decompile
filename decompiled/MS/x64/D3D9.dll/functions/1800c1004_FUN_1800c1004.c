/*
 * FUN_1800c1004 at 1800c1004
 * int __fastcall FUN_1800c1004(longlong param_1)
 * Address ranges: 1800c1004-1800c1046
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c1004(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x28);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  plVar2 = *(longlong **)(param_1 + 0x40);
  iVar3 = iVar3 + 1;
  if (plVar2 == (longlong *)0x0) {
    if (iVar3 == 1) {
      LOCK();
      *(int *)(&DAT_00006844 + *(longlong *)(param_1 + 0x38)) =
           *(int *)(&DAT_00006844 + *(longlong *)(param_1 + 0x38)) + 1;
      UNLOCK();
    }
  }
  else {
    iVar3 = (**(code **)(*plVar2 + 8))(plVar2);
  }
  return iVar3;
}

