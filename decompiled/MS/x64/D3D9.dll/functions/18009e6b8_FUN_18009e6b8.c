/*
 * FUN_18009e6b8 at 18009e6b8
 * undefined __fastcall FUN_18009e6b8(longlong param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 18009e6b8-18009e7c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009e6b8(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((*(int *)(param_1 + -0xd4) - 0x24U & 0xfffffffa) == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + -0xa8);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar4 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x10);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar4[1] = 0x10;
      puVar4[2] = param_1 + -0x100;
      puVar5 = (undefined8 *)((longlong)puVar4 + 0x27U & 0xfffffffffffffff8);
      *(undefined4 *)(puVar4 + 3) = param_2;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = param_3;
      *puVar5 = 0;
      *puVar4 = FUN_18009e7c4;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar5;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18009e7b1;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1 + -0x100;
  *(undefined4 *)(plVar3 + 1) = param_2;
  *(undefined4 *)((longlong)plVar3 + 0xc) = param_3;
  FUN_18009e7c4(plVar3);
LAB_18009e7b1:
  FUN_1800facb0(piVar1);
  return;
}

