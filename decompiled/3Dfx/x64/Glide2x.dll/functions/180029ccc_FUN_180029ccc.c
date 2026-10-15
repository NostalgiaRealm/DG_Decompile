/*
 * FUN_180029ccc at 180029ccc
 * undefined __fastcall FUN_180029ccc(longlong param_1, longlong * param_2)
 * Address ranges: 180029ccc-180029e2e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180029ccc(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  FUN_180026a88(param_1 + 0x34e8);
  lVar4 = param_2[4];
  lVar2 = *(longlong *)(param_1 + 0x31c0);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x2c);
  uVar6 = *(undefined8 *)((longlong)param_2 + 0x34);
  lVar7 = *param_2;
  lVar8 = param_2[1];
  lVar9 = param_2[2];
  lVar10 = param_2[3];
  piVar1 = (int *)(lVar2 + 0x12c0);
  uStack_50 = (undefined4)param_2[5];
  uStack_4c = (undefined4)uVar5;
  FUN_18005e070(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar11 = (undefined8 *)FUN_18005e090((longlong)piVar1,0x48);
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar11[1] = 0x48;
      puVar12 = (undefined8 *)((longlong)puVar11 + 0x5bU & 0xfffffffffffffff8);
      puVar11[2] = param_1;
      puVar11[3] = lVar7;
      puVar11[4] = lVar8;
      puVar11[5] = lVar9;
      puVar11[6] = lVar10;
      puVar11[7] = lVar4;
      puVar11[8] = CONCAT44(uStack_4c,uStack_50);
      *(undefined8 *)((longlong)puVar11 + 0x44) = uVar5;
      *(undefined8 *)((longlong)puVar11 + 0x4c) = uVar6;
      *puVar12 = 0;
      *puVar11 = FUN_180029e30;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar12;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_18005e1c0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_180029e03;
    }
    FUN_18005e1c0(piVar1);
    Sleep(100);
    FUN_18005e070(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  plVar3[1] = lVar7;
  plVar3[2] = lVar8;
  plVar3[3] = lVar9;
  plVar3[4] = lVar10;
  plVar3[5] = lVar4;
  plVar3[6] = CONCAT44(uStack_4c,uStack_50);
  *(undefined8 *)((longlong)plVar3 + 0x34) = uVar5;
  *(undefined8 *)((longlong)plVar3 + 0x3c) = uVar6;
  FUN_180029e30(plVar3);
LAB_180029e03:
  FUN_18005e1c0(piVar1);
  return;
}

