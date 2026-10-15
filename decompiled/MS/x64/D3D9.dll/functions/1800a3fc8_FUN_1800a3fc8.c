/*
 * FUN_1800a3fc8 at 1800a3fc8
 * undefined __fastcall FUN_1800a3fc8(longlong * param_1, undefined4 param_2, undefined8 * param_3, undefined8 * param_4)
 * Address ranges: 1800a3fc8-1800a4125
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a3fc8(longlong *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  
  lVar3 = param_1[1];
  lVar4 = *param_1;
  uVar6 = *param_4;
  uVar7 = param_4[1];
  piVar1 = (int *)(lVar3 + 0x12c0);
  uVar2 = param_4[2];
  uVar8 = *param_3;
  uVar9 = param_3[1];
  uVar10 = param_3[2];
  uVar11 = param_3[3];
  uVar12 = param_3[4];
  uVar13 = param_3[5];
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar3 + 0x14c4) != '\0') {
    puVar14 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x58);
    if (puVar14 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar3 + 0x14c0) = *(int *)(lVar3 + 0x14c0) + 1;
      UNLOCK();
      puVar14[1] = 0x58;
      puVar14[2] = lVar4;
      puVar15 = (undefined8 *)((longlong)puVar14 + 0x6bU & 0xfffffffffffffff8);
      *(undefined4 *)(puVar14 + 3) = param_2;
      *(undefined8 *)((longlong)puVar14 + 0x1c) = uVar8;
      *(undefined8 *)((longlong)puVar14 + 0x24) = uVar9;
      *(undefined8 *)((longlong)puVar14 + 0x2c) = uVar10;
      *(undefined8 *)((longlong)puVar14 + 0x34) = uVar11;
      *(undefined8 *)((longlong)puVar14 + 0x3c) = uVar12;
      *(undefined8 *)((longlong)puVar14 + 0x44) = uVar13;
      *(undefined8 *)((longlong)puVar14 + 0x4c) = uVar6;
      *(undefined8 *)((longlong)puVar14 + 0x54) = uVar7;
      *(undefined8 *)((longlong)puVar14 + 0x5c) = uVar2;
      *puVar15 = 0;
      *puVar14 = FUN_1800a4128;
      *(undefined8 **)(lVar3 + 0x1350 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28) = puVar15;
      if (*(char *)(lVar3 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar3 + 0x1340));
        return;
      }
      goto LAB_1800a40f9;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar5 = *(longlong **)(lVar3 + 0x14a0);
  *plVar5 = lVar4;
  *(undefined4 *)(plVar5 + 1) = param_2;
  *(undefined8 *)((longlong)plVar5 + 0xc) = uVar8;
  *(undefined8 *)((longlong)plVar5 + 0x14) = uVar9;
  *(undefined8 *)((longlong)plVar5 + 0x1c) = uVar10;
  *(undefined8 *)((longlong)plVar5 + 0x24) = uVar11;
  *(undefined8 *)((longlong)plVar5 + 0x2c) = uVar12;
  *(undefined8 *)((longlong)plVar5 + 0x34) = uVar13;
  *(undefined8 *)((longlong)plVar5 + 0x3c) = uVar6;
  *(undefined8 *)((longlong)plVar5 + 0x44) = uVar7;
  *(undefined8 *)((longlong)plVar5 + 0x4c) = uVar2;
  FUN_1800a4128(plVar5);
LAB_1800a40f9:
  FUN_1800facb0(piVar1);
  return;
}

