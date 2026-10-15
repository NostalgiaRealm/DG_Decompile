/*
 * FUN_18001b37c at 18001b37c
 * undefined __fastcall FUN_18001b37c(longlong param_1, undefined8 param_2, ulonglong param_3)
 * Address ranges: 18001b37c-18001b48c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001b37c(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_2;
  iVar5 = (int)param_3;
  if (*(int *)(param_1 + 0x478 + (longlong)iVar4 * 4) == iVar5) {
    return;
  }
  if (iVar4 == 0x13) {
    plVar2 = *(longlong **)(param_1 + 0x28);
    pcVar3 = *(code **)(*plVar2 + 0x90);
    if (iVar5 == 0xc) {
      (*pcVar3)(plVar2,0x13,5);
      param_3 = 6;
    }
    else {
      if (iVar5 != 0xd) {
        (*pcVar3)(plVar2,0x13);
        if (1 < *(int *)(param_1 + 0x4c4) - 0xcU) {
          return;
        }
        uVar1 = *(uint *)(param_1 + 0x4c8);
        param_3 = (ulonglong)uVar1;
        goto LAB_18001b470;
      }
      (*pcVar3)(plVar2,0x13,6);
      param_3 = 5;
    }
  }
  else {
    if (iVar4 != 0x14) {
      if (iVar4 == 0x1a) {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x9cf);
        if (iVar4 == 0) {
          param_3 = 0;
        }
        else if ((iVar4 != 1) || (*(int *)(*(longlong *)(param_1 + 0x18) + 0x9cb) == 0)) {
          param_3 = 1;
        }
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))
                  (*(longlong **)(param_1 + 0x28),0x1a,param_3);
        *(undefined1 *)(param_1 + 0x2cf) = 1;
        return;
      }
      if (iVar4 == 0x88) {
        return;
      }
      goto LAB_18001b47a;
    }
    if (iVar5 - 0xcU < 2) {
      return;
    }
    uVar1 = *(uint *)(param_1 + 0x4c4);
LAB_18001b470:
    if (uVar1 - 0xc < 2) {
      return;
    }
  }
  param_2 = 0x14;
LAB_18001b47a:
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))
            (*(longlong **)(param_1 + 0x28),param_2,param_3);
  return;
}

