/*
 * FUN_180053e20 at 180053e20
 * undefined __fastcall FUN_180053e20(longlong param_1, undefined4 param_2, uint * param_3, undefined8 param_4, undefined4 param_5, undefined4 param_6, undefined1 param_7)
 * Address ranges: 180053e20-180053fcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180053e20(longlong param_1,undefined4 param_2,uint *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  
  FUN_1800521c0(param_1,(longlong)param_3,'\0');
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  FUN_1800fab60((int *)(lVar2 + 0x12c0));
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    if (*param_3 != *(uint *)(param_1 + 0x100f0)) {
      *(uint *)(param_1 + 0x100f0) = *param_3;
      uVar4 = FUN_18004def4((longlong *)(param_1 + 0xf7b8),param_3);
      *(undefined8 *)(param_1 + 0x100f8) = uVar4;
    }
    param_3 = *(uint **)(param_1 + 0x100f8);
  }
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  bVar7 = (*(uint *)(param_1 + 0x10100) & 0x7fffffff) != 0;
  piVar1 = (int *)(lVar2 + 0x12c0);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar5 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x30);
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar5[1] = 0x30;
      puVar6 = (undefined8 *)((longlong)puVar5 + 0x43U & 0xfffffffffffffff8);
      puVar5[2] = param_1;
      *(undefined4 *)(puVar5 + 3) = param_2;
      *(uint **)((longlong)puVar5 + 0x1c) = param_3;
      *(undefined8 *)((longlong)puVar5 + 0x24) = param_4;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = param_5;
      *(undefined4 *)(puVar5 + 6) = param_6;
      *(undefined1 *)((longlong)puVar5 + 0x34) = param_7;
      *(bool *)(puVar5 + 7) = bVar7;
      *puVar6 = 0;
      *puVar5 = FUN_180053fd0;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar6;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_180053fb9;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 1) = param_2;
  *(uint **)((longlong)plVar3 + 0xc) = param_3;
  *(undefined8 *)((longlong)plVar3 + 0x14) = param_4;
  *(undefined4 *)((longlong)plVar3 + 0x1c) = param_5;
  *(undefined4 *)(plVar3 + 4) = param_6;
  *(undefined1 *)((longlong)plVar3 + 0x24) = param_7;
  *(bool *)(plVar3 + 5) = bVar7;
  FUN_180053fd0(plVar3);
LAB_180053fb9:
  FUN_1800facb0(piVar1);
  return;
}

