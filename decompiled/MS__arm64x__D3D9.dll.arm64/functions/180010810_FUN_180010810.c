/*
 * FUN_180010810 at 180010810
 * undefined FUN_180010810(void)
 * Address ranges: 180010810-180010947
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180010810(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  iVar2 = (int)param_2;
  iVar3 = (int)param_3;
  if (*(int *)(param_1 + (longlong)iVar2 * 4 + 0x478) == iVar3) {
    return;
  }
  if (iVar2 == 0x13) {
    plVar1 = *(longlong **)(param_1 + 0x28);
    pcVar4 = *(code **)(*plVar1 + 0x90);
    if (iVar3 == 0xc) {
      (*pcVar4)(plVar1,0x13,5);
      param_3 = 6;
    }
    else if (iVar3 == 0xd) {
      (*pcVar4)(plVar1,0x13,6);
      param_3 = 5;
    }
    else {
      (*pcVar4)();
      if (1 < *(int *)(param_1 + 0x4c4) - 0xcU) {
        return;
      }
      param_3 = (ulonglong)*(uint *)(param_1 + 0x4c8);
      if (*(uint *)(param_1 + 0x4c8) - 0xc < 2) {
        return;
      }
    }
    param_2 = 0x14;
  }
  else if (iVar2 == 0x14) {
    if (iVar3 - 0xcU < 2) {
      return;
    }
    if (*(int *)(param_1 + 0x4c4) - 0xcU < 2) {
      return;
    }
  }
  else {
    if (iVar2 == 0x1a) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x9cf);
      if (iVar2 == 0) {
        param_3 = 0;
      }
      else if ((iVar2 != 1) || (*(int *)(*(longlong *)(param_1 + 0x18) + 0x9cb) == 0)) {
        param_3 = 1;
      }
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))
                (*(longlong **)(param_1 + 0x28),param_2,param_3);
      *(undefined1 *)(param_1 + 0x2cf) = 1;
      return;
    }
    if (iVar2 == 0x88) {
      return;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))
            (*(longlong **)(param_1 + 0x28),param_2,param_3);
  return;
}

