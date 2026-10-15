/*
 * FUN_1800c10cc at 1800c10cc
 * int __fastcall FUN_1800c10cc(longlong param_1)
 * Address ranges: 1800c10cc-1800c1137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c10cc(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)(param_1 + 0x28) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    plVar3 = *(longlong **)(param_1 + 0x40);
    LOCK();
    piVar1 = (int *)(param_1 + 0x28);
    iVar4 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    iVar4 = iVar4 + -1;
    if (*(int *)(param_1 + 0x2c) + iVar4 == 0) {
      FUN_1800c1164((undefined8 *)(param_1 + -0x80));
    }
    if (plVar3 == (longlong *)0x0) {
      if (iVar4 == 0) {
        FUN_1800b0664(lVar2 + 0x6838);
      }
    }
    else {
      iVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return iVar4;
}

