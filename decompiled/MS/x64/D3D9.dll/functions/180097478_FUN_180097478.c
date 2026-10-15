/*
 * FUN_180097478 at 180097478
 * undefined8 __fastcall FUN_180097478(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, longlong param_6, longlong param_7, longlong * param_8)
 * Address ranges: 180097478-180097682
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180097478(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,longlong param_6,longlong param_7,longlong *param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  BOOL BVar11;
  undefined8 *puVar12;
  undefined4 extraout_var;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  
  plVar14 = (longlong *)(-(ulonglong)(param_7 != 0) & param_7 - 0x100U);
  cVar10 = (**(code **)(*plVar14 + 0xa8))(plVar14);
  if (cVar10 != '\0') {
    plVar1 = (longlong *)(param_6 + -0x100);
    cVar10 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    if (cVar10 != '\0') {
      fVar16 = (float)(**(code **)(*plVar14 + 0x58))(plVar14);
      fVar17 = (float)(**(code **)(*plVar1 + 0x58))(plVar1);
      if (fVar16 <= fVar17) {
        fVar16 = (float)(**(code **)(*plVar14 + 0x60))(plVar14);
        fVar17 = (float)(**(code **)(*plVar1 + 0x60))(plVar1);
        if (fVar16 <= fVar17) goto LAB_18009752b;
      }
      FUN_1800a2030((longlong)plVar1);
    }
  }
LAB_18009752b:
  lVar3 = *(longlong *)(param_1 + 0x1cf18);
  lVar4 = *param_8;
  lVar5 = param_8[1];
  piVar2 = (int *)(lVar3 + 0x12c0);
  lVar6 = param_8[2];
  lVar7 = param_8[3];
  lVar8 = param_8[4];
  lVar9 = param_8[5];
  FUN_1800fab60(piVar2);
  if (*(char *)(lVar3 + 0x14c4) == '\0') {
LAB_18009761e:
    plVar14 = *(longlong **)(lVar3 + 0x14a0);
    *plVar14 = param_1;
    *(undefined4 *)(plVar14 + 1) = param_2;
    *(undefined4 *)((longlong)plVar14 + 0xc) = param_3;
    *(undefined4 *)(plVar14 + 2) = param_4;
    *(undefined4 *)((longlong)plVar14 + 0x14) = param_5;
    plVar14[3] = param_6;
    plVar14[4] = param_7;
    plVar14[5] = lVar4;
    plVar14[6] = lVar5;
    plVar14[7] = lVar6;
    plVar14[8] = lVar7;
    plVar14[9] = lVar8;
    plVar14[10] = lVar9;
    FUN_180097684(plVar14);
  }
  else {
    puVar12 = (undefined8 *)FUN_1800fab80((longlong)piVar2,0x58);
    if (puVar12 == (undefined8 *)0x0) {
      FUN_1800facb0(piVar2);
      Sleep(100);
      FUN_1800fab60(piVar2);
      goto LAB_18009761e;
    }
    LOCK();
    *(int *)(lVar3 + 0x14c0) = *(int *)(lVar3 + 0x14c0) + 1;
    UNLOCK();
    puVar12[1] = 0x58;
    puVar15 = (undefined8 *)((longlong)puVar12 + 0x6fU & 0xfffffffffffffff8);
    puVar12[2] = param_1;
    *(undefined4 *)(puVar12 + 3) = param_2;
    *(undefined4 *)((longlong)puVar12 + 0x1c) = param_3;
    *(undefined4 *)(puVar12 + 4) = param_4;
    *(undefined4 *)((longlong)puVar12 + 0x24) = param_5;
    puVar12[5] = param_6;
    puVar12[6] = param_7;
    puVar12[7] = lVar4;
    puVar12[8] = lVar5;
    puVar12[9] = lVar6;
    puVar12[10] = lVar7;
    puVar12[0xb] = lVar8;
    puVar12[0xc] = lVar9;
    *puVar15 = 0;
    *puVar12 = FUN_180097684;
    *(undefined8 **)(lVar3 + 0x1350 + (ulonglong)*(uint *)(lVar3 + 0x14bc) * 0x28) = puVar15;
    if (*(char *)(lVar3 + 0x14c5) != '\0') {
      FUN_1800facb0(piVar2);
      BVar11 = SetEvent(*(HANDLE *)(lVar3 + 0x1340));
      uVar13 = CONCAT44(extraout_var,BVar11);
      goto LAB_180097660;
    }
  }
  uVar13 = FUN_1800facb0(piVar2);
LAB_180097660:
  return CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
}

