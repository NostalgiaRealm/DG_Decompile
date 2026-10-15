/*
 * FUN_180050aec at 180050aec
 * undefined __fastcall FUN_180050aec(longlong param_1, undefined4 param_2, undefined8 * param_3)
 * Address ranges: 180050aec-180050c30
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050aec(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  uVar4 = *param_3;
  uVar5 = param_3[1];
  piVar1 = (int *)(lVar2 + 0x12c0);
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = param_3[4];
  uVar9 = param_3[5];
  uVar10 = param_3[6];
  uVar11 = param_3[7];
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar12 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x50);
    if (puVar12 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar12[1] = 0x50;
      puVar12[2] = param_1;
      puVar13 = (undefined8 *)((longlong)puVar12 + 99U & 0xfffffffffffffff8);
      *(undefined4 *)(puVar12 + 3) = param_2;
      *(undefined8 *)((longlong)puVar12 + 0x1c) = uVar4;
      *(undefined8 *)((longlong)puVar12 + 0x24) = uVar5;
      *(undefined8 *)((longlong)puVar12 + 0x2c) = uVar6;
      *(undefined8 *)((longlong)puVar12 + 0x34) = uVar7;
      *(undefined8 *)((longlong)puVar12 + 0x3c) = uVar8;
      *(undefined8 *)((longlong)puVar12 + 0x44) = uVar9;
      *(undefined8 *)((longlong)puVar12 + 0x4c) = uVar10;
      *(undefined8 *)((longlong)puVar12 + 0x54) = uVar11;
      *puVar13 = 0;
      *puVar12 = FUN_180050c34;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar13;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_180050c0a;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 1) = param_2;
  *(undefined8 *)((longlong)plVar3 + 0xc) = uVar4;
  *(undefined8 *)((longlong)plVar3 + 0x14) = uVar5;
  *(undefined8 *)((longlong)plVar3 + 0x1c) = uVar6;
  *(undefined8 *)((longlong)plVar3 + 0x24) = uVar7;
  *(undefined8 *)((longlong)plVar3 + 0x2c) = uVar8;
  *(undefined8 *)((longlong)plVar3 + 0x34) = uVar9;
  *(undefined8 *)((longlong)plVar3 + 0x3c) = uVar10;
  *(undefined8 *)((longlong)plVar3 + 0x44) = uVar11;
  FUN_180050c34(plVar3);
LAB_180050c0a:
  FUN_1800facb0(piVar1);
  return;
}

