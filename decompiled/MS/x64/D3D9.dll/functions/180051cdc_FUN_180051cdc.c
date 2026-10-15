/*
 * FUN_180051cdc at 180051cdc
 * undefined __fastcall FUN_180051cdc(longlong param_1, int param_2, int param_3, undefined8 * param_4)
 * Address ranges: 180051cdc-180051f5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180051cdc(longlong param_1,int param_2,int param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  
  iVar4 = param_2 + 0x200;
  if ((uint)(param_3 - param_2) < 0x201) {
    iVar4 = param_3;
  }
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar2 + 0x14c4) == '\0') {
LAB_180051e06:
    puVar3 = *(undefined8 **)(lVar2 + 0x14a0);
    *puVar3 = param_4;
    puVar3[1] = param_1;
    *(int *)(puVar3 + 2) = param_2;
    *(int *)((longlong)puVar3 + 0x14) = iVar4;
    FUN_180051f5c(puVar3);
LAB_180051e24:
    FUN_1800facb0(piVar1);
  }
  else {
    uVar7 = (iVar4 - param_2) * 0x10;
    puVar3 = (undefined8 *)FUN_1800fab80((longlong)piVar1,uVar7 + 0x18);
    if (puVar3 == (undefined8 *)0x0) {
      FUN_1800facb0(piVar1);
      Sleep(100);
      FUN_1800fab60(piVar1);
      goto LAB_180051e06;
    }
    LOCK();
    *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
    UNLOCK();
    puVar3[1] = (ulonglong)(uVar7 + 0x18);
    puVar3[3] = param_1;
    puVar5 = (undefined8 *)((longlong)puVar3 + 0x2fU & 0xfffffffffffffff8);
    *(int *)(puVar3 + 4) = param_2;
    *(int *)((longlong)puVar3 + 0x24) = iVar4;
    puVar3[2] = puVar5;
    FUN_1800fbec0(puVar5,param_4,(ulonglong)uVar7);
    *(undefined8 *)((ulonglong)uVar7 + (longlong)puVar5) = 0;
    *puVar3 = FUN_180051f5c;
    *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) =
         (undefined8 *)((ulonglong)uVar7 + (longlong)puVar5);
    if (*(char *)(lVar2 + 0x14c5) == '\0') goto LAB_180051e24;
    FUN_1800facb0(piVar1);
    SetEvent(*(HANDLE *)(lVar2 + 0x1340));
  }
  if (iVar4 == param_3) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  piVar1 = (int *)(lVar2 + 0x12c0);
  FUN_1800fab60(piVar1);
  puVar3 = (undefined8 *)((longlong)param_4 + (ulonglong)(uint)(iVar4 * 4) * 4);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    uVar7 = (param_3 - iVar4) * 0x10;
    puVar5 = (undefined8 *)FUN_1800fab80((longlong)piVar1,uVar7 + 0x18);
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar5[1] = (ulonglong)(uVar7 + 0x18);
      puVar5[3] = param_1;
      puVar6 = (undefined8 *)((longlong)puVar5 + 0x2fU & 0xfffffffffffffff8);
      *(int *)(puVar5 + 4) = iVar4;
      *(int *)((longlong)puVar5 + 0x24) = param_3;
      puVar5[2] = puVar6;
      FUN_1800fbec0(puVar6,puVar3,(ulonglong)uVar7);
      *(undefined8 *)((ulonglong)uVar7 + (longlong)puVar6) = 0;
      *puVar5 = FUN_180051f5c;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) =
           (undefined8 *)((ulonglong)uVar7 + (longlong)puVar6);
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_180051f3f;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  puVar5 = *(undefined8 **)(lVar2 + 0x14a0);
  *puVar5 = puVar3;
  puVar5[1] = param_1;
  *(int *)(puVar5 + 2) = iVar4;
  *(int *)((longlong)puVar5 + 0x14) = param_3;
  FUN_180051f5c(puVar5);
LAB_180051f3f:
  FUN_1800facb0(piVar1);
  return;
}

