/*
 * FUN_180054a88 at 180054a88
 * undefined __fastcall FUN_180054a88(longlong param_1, int param_2, int param_3, undefined8 * param_4)
 * Address ranges: 180054a88-180054baf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180054a88(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    uVar5 = (param_3 - param_2) * 0x10;
    puVar4 = (undefined8 *)FUN_1800fab80((longlong)piVar1,uVar5 + 0x18);
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar4[1] = (ulonglong)(uVar5 + 0x18);
      puVar4[3] = param_1;
      puVar6 = (undefined8 *)((longlong)puVar4 + 0x2fU & 0xfffffffffffffff8);
      *(int *)(puVar4 + 4) = param_2;
      *(int *)((longlong)puVar4 + 0x24) = param_3;
      puVar4[2] = puVar6;
      FUN_1800fbec0(puVar6,param_4,(ulonglong)uVar5);
      *(undefined8 *)((ulonglong)uVar5 + (longlong)puVar6) = 0;
      *puVar4 = FUN_180054bb0;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) =
           (undefined8 *)((ulonglong)uVar5 + (longlong)puVar6);
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_180054b97;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = (longlong)param_4;
  plVar3[1] = param_1;
  *(int *)(plVar3 + 2) = param_2;
  *(int *)((longlong)plVar3 + 0x14) = param_3;
  FUN_180054bb0(plVar3);
LAB_180054b97:
  FUN_1800facb0(piVar1);
  return;
}

