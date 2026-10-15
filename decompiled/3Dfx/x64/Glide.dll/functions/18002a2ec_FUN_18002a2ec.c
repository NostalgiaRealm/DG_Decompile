/*
 * FUN_18002a2ec at 18002a2ec
 * undefined __fastcall FUN_18002a2ec(longlong param_1, longlong * param_2, undefined8 * param_3)
 * Address ranges: 18002a2ec-18002a4d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002a2ec(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  
  FUN_180026f30(param_1 + 0x34e8);
  uVar4 = param_3[4];
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x2c);
  uVar6 = *(undefined8 *)((longlong)param_2 + 0x34);
  lVar7 = *(longlong *)((longlong)param_3 + 0x2c);
  lVar8 = *(longlong *)((longlong)param_3 + 0x34);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  uVar13 = *param_3;
  uVar14 = param_3[1];
  uVar15 = param_3[2];
  uVar16 = param_3[3];
  uStack_80 = (undefined4)param_3[5];
  lVar17 = param_2[4];
  lVar2 = *(longlong *)(param_1 + 0x31c0);
  uStack_7c = (undefined4)lVar7;
  uStack_c0 = (undefined4)param_2[5];
  piVar1 = (int *)(lVar2 + 0x12c0);
  uStack_bc = (undefined4)uVar5;
  FUN_18005e510(piVar1);
  if (*(char *)(lVar2 + 0x14c4) != '\0') {
    puVar18 = (undefined8 *)FUN_18005e530((longlong)piVar1,0x80);
    if (puVar18 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar2 + 0x14c0) = *(int *)(lVar2 + 0x14c0) + 1;
      UNLOCK();
      puVar18[1] = 0x80;
      puVar19 = (undefined8 *)((longlong)puVar18 + 0x97U & 0xfffffffffffffff8);
      puVar18[2] = param_1;
      puVar18[3] = lVar9;
      puVar18[4] = lVar10;
      puVar18[5] = lVar11;
      puVar18[6] = lVar12;
      puVar18[7] = lVar17;
      puVar18[8] = CONCAT44(uStack_bc,uStack_c0);
      *(undefined8 *)((longlong)puVar18 + 0x44) = uVar5;
      *(undefined8 *)((longlong)puVar18 + 0x4c) = uVar6;
      *(undefined8 *)((longlong)puVar18 + 0x54) = uVar13;
      *(undefined8 *)((longlong)puVar18 + 0x5c) = uVar14;
      *(undefined8 *)((longlong)puVar18 + 100) = uVar15;
      *(undefined8 *)((longlong)puVar18 + 0x6c) = uVar16;
      *(undefined8 *)((longlong)puVar18 + 0x74) = uVar4;
      *(ulonglong *)((longlong)puVar18 + 0x7c) = CONCAT44(uStack_7c,uStack_80);
      puVar18[0x10] = lVar7;
      puVar18[0x11] = lVar8;
      *puVar19 = 0;
      *puVar18 = FUN_18002a4d4;
      *(undefined8 **)(lVar2 + 0x1350 + (ulonglong)*(uint *)(lVar2 + 0x14bc) * 0x28) = puVar19;
      if (*(char *)(lVar2 + 0x14c5) != '\0') {
        FUN_18005e660(piVar1);
        SetEvent(*(HANDLE *)(lVar2 + 0x1340));
        return;
      }
      goto LAB_18002a497;
    }
    FUN_18005e660(piVar1);
    Sleep(100);
    FUN_18005e510(piVar1);
  }
  plVar3 = *(longlong **)(lVar2 + 0x14a0);
  *plVar3 = param_1;
  plVar3[1] = lVar9;
  plVar3[2] = lVar10;
  plVar3[3] = lVar11;
  plVar3[4] = lVar12;
  plVar3[5] = lVar17;
  plVar3[6] = CONCAT44(uStack_bc,uStack_c0);
  *(undefined8 *)((longlong)plVar3 + 0x34) = uVar5;
  *(undefined8 *)((longlong)plVar3 + 0x3c) = uVar6;
  *(undefined8 *)((longlong)plVar3 + 0x44) = uVar13;
  *(undefined8 *)((longlong)plVar3 + 0x4c) = uVar14;
  *(undefined8 *)((longlong)plVar3 + 0x54) = uVar15;
  *(undefined8 *)((longlong)plVar3 + 0x5c) = uVar16;
  *(undefined8 *)((longlong)plVar3 + 100) = uVar4;
  *(ulonglong *)((longlong)plVar3 + 0x6c) = CONCAT44(uStack_7c,uStack_80);
  plVar3[0xe] = lVar7;
  plVar3[0xf] = lVar8;
  FUN_18002a4d4(plVar3);
LAB_18002a497:
  FUN_18005e660(piVar1);
  return;
}

