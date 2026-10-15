/*
 * FUN_1800511b0 at 1800511b0
 * undefined __fastcall FUN_1800511b0(longlong param_1, undefined4 param_2, undefined8 * param_3)
 * Address ranges: 1800511b0-180051359
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800511b0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  lVar2 = *(longlong *)(param_1 + 0xf6e0);
  uVar4 = param_3[10];
  lVar5 = *(longlong *)((longlong)param_3 + 0x5c);
  lVar6 = *(longlong *)((longlong)param_3 + 100);
  piVar1 = (int *)(lVar2 + 0x12c0);
  uVar7 = *param_3;
  uVar8 = param_3[1];
  uVar9 = param_3[2];
  uVar10 = param_3[3];
  uVar11 = param_3[4];
  uVar12 = param_3[5];
  uVar13 = param_3[6];
  uVar14 = param_3[7];
  uVar15 = param_3[8];
  uVar16 = param_3[9];
  uStack_a0 = (undefined4)param_3[0xb];
  uStack_9c = (undefined4)lVar5;
  FUN_1800fab60(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar17 = (undefined8 *)FUN_1800fab80((longlong)piVar1,0x78);
    if (puVar17 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar17[1] = 0x78;
      puVar18 = (undefined8 *)((longlong)puVar17 + 0x8fU & 0xfffffffffffffff8);
      puVar17[2] = param_1;
      *(undefined4 *)(puVar17 + 3) = param_2;
      *(undefined8 *)((longlong)puVar17 + 0x1c) = uVar7;
      *(undefined8 *)((longlong)puVar17 + 0x24) = uVar8;
      *(undefined8 *)((longlong)puVar17 + 0x2c) = uVar9;
      *(undefined8 *)((longlong)puVar17 + 0x34) = uVar10;
      *(undefined8 *)((longlong)puVar17 + 0x3c) = uVar11;
      *(undefined8 *)((longlong)puVar17 + 0x44) = uVar12;
      *(undefined8 *)((longlong)puVar17 + 0x4c) = uVar13;
      *(undefined8 *)((longlong)puVar17 + 0x54) = uVar14;
      *(undefined8 *)((longlong)puVar17 + 0x5c) = uVar15;
      *(undefined8 *)((longlong)puVar17 + 100) = uVar16;
      *(undefined8 *)((longlong)puVar17 + 0x6c) = uVar4;
      *(ulonglong *)((longlong)puVar17 + 0x74) = CONCAT44(uStack_9c,uStack_a0);
      puVar17[0xf] = lVar5;
      puVar17[0x10] = lVar6;
      *puVar18 = 0;
      *puVar17 = FUN_18005135c;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar18;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_180051324;
    }
    FUN_1800facb0(piVar1);
    Sleep(100);
    FUN_1800fab60(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 1) = param_2;
  *(undefined8 *)((longlong)plVar3 + 0xc) = uVar7;
  *(undefined8 *)((longlong)plVar3 + 0x14) = uVar8;
  *(undefined8 *)((longlong)plVar3 + 0x1c) = uVar9;
  *(undefined8 *)((longlong)plVar3 + 0x24) = uVar10;
  *(undefined8 *)((longlong)plVar3 + 0x2c) = uVar11;
  *(undefined8 *)((longlong)plVar3 + 0x34) = uVar12;
  *(undefined8 *)((longlong)plVar3 + 0x3c) = uVar13;
  *(undefined8 *)((longlong)plVar3 + 0x44) = uVar14;
  *(undefined8 *)((longlong)plVar3 + 0x4c) = uVar15;
  *(undefined8 *)((longlong)plVar3 + 0x54) = uVar16;
  *(undefined8 *)((longlong)plVar3 + 0x5c) = uVar4;
  *(ulonglong *)((longlong)plVar3 + 100) = CONCAT44(uStack_9c,uStack_a0);
  plVar3[0xd] = lVar5;
  plVar3[0xe] = lVar6;
  FUN_18005135c(plVar3);
LAB_180051324:
  FUN_1800facb0(piVar1);
  return;
}

