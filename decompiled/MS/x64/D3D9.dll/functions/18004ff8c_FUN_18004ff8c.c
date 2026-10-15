/*
 * FUN_18004ff8c at 18004ff8c
 * undefined __fastcall FUN_18004ff8c(longlong param_1, undefined4 param_2)
 * Address ranges: 18004ff8c-180050072
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004ff8c(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  uVar5 = (undefined1)param_2;
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    param_2 = 0x10;
    puVar4 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x10);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar4[1] = 0x10;
      puVar4[2] = param_1;
      puVar6 = (undefined8 *)((longlong)puVar4 + 0x23U & 0xfffffffffffffff8);
      *(undefined1 *)(puVar4 + 3) = uVar5;
      *puVar6 = 0;
      *puVar4 = FUN_180050074;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar6;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_180050062;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  *(undefined1 *)(plVar3 + 1) = uVar5;
  FUN_180050074(plVar3,param_2);
LAB_180050062:
  FUN_1800facb0(piVar1);
  return;
}

