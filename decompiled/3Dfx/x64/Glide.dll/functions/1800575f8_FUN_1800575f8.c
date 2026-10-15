/*
 * FUN_1800575f8 at 1800575f8
 * longlong __fastcall FUN_1800575f8(longlong * param_1, ulonglong * param_2, undefined8 * param_3)
 * Address ranges: 1800575f8-1800577e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800575f8(longlong *param_1,ulonglong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar4 = *param_2;
  uVar11 = *(uint *)(param_1 + 2);
  uVar8 = 0;
  if (uVar11 != 0) {
    uVar10 = 0;
    do {
      uVar8 = uVar11 + uVar10 >> 1;
      uVar13 = *(ulonglong *)(param_1[1] + (ulonglong)uVar8 * 0x48);
      uVar7 = uVar8;
      if (uVar13 <= uVar4) {
        if (uVar4 <= uVar13) break;
        uVar10 = uVar8 + 1;
        uVar8 = uVar10;
        uVar7 = uVar11;
      }
      uVar11 = uVar7;
    } while (uVar11 != uVar10);
  }
  uVar13 = (ulonglong)uVar8;
  if ((uVar8 == *(uint *)(param_1 + 2)) ||
     (lVar9 = param_1[1], *(ulonglong *)(lVar9 + uVar13 * 0x48) != uVar4)) {
    iVar3 = *(int *)((longlong)param_1 + 0x14);
    if (iVar3 == (int)param_1[2]) {
      uVar14 = (ulonglong)(uint)(iVar3 * 2);
      if (iVar3 == 0) {
        uVar14 = 0x10;
      }
      lVar9 = thunk_FUN_18005db9c(uVar14 * 0x48);
      if (lVar9 != 0) {
        uVar12 = 0;
        if ((int)param_1[2] != 0) {
          do {
            lVar5 = param_1[1];
            uVar11 = (int)uVar12 + 1;
            puVar1 = (undefined8 *)(lVar5 + uVar12 * 0x48);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar9 + uVar12 * 0x48);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar1 = (undefined8 *)(lVar5 + 0x10 + uVar12 * 0x48);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar9 + 0x10 + uVar12 * 0x48);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar12 * 0x48);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar9 + 0x20 + uVar12 * 0x48);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            puVar1 = (undefined8 *)(lVar5 + 0x30 + uVar12 * 0x48);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar9 + 0x30 + uVar12 * 0x48);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            *(undefined8 *)(lVar9 + 0x40 + uVar12 * 0x48) =
                 *(undefined8 *)(lVar5 + 0x40 + uVar12 * 0x48);
            uVar12 = (ulonglong)uVar11;
          } while (uVar11 < *(uint *)(param_1 + 2));
        }
        FUN_18005dbc0((LPVOID)*param_1);
        *param_1 = lVar9;
        param_1[1] = lVar9;
        *(int *)((longlong)param_1 + 0x14) = (int)uVar14;
      }
    }
    uVar11 = *(uint *)(param_1 + 2);
    uVar14 = (ulonglong)uVar11;
    if (*(uint *)((longlong)param_1 + 0x14) != uVar11) {
      while (uVar8 < uVar11) {
        lVar9 = param_1[1];
        uVar11 = (int)uVar14 - 1;
        uVar12 = (ulonglong)uVar11;
        puVar1 = (undefined8 *)(lVar9 + uVar12 * 0x48);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(lVar9 + uVar14 * 0x48);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar1 = (undefined8 *)(lVar9 + 0x10 + uVar12 * 0x48);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(lVar9 + 0x10 + uVar14 * 0x48);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar1 = (undefined8 *)(lVar9 + 0x20 + uVar12 * 0x48);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(lVar9 + 0x20 + uVar14 * 0x48);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar1 = (undefined8 *)(lVar9 + 0x30 + uVar12 * 0x48);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(lVar9 + 0x30 + uVar14 * 0x48);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar9 + 0x40 + uVar14 * 0x48) =
             *(undefined8 *)(lVar9 + 0x40 + uVar12 * 0x48);
        uVar14 = uVar12;
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      *(ulonglong *)(param_1[1] + 8 + uVar13 * 0x48) = *param_2;
      lVar9 = param_1[1];
      uVar6 = param_3[1];
      puVar1 = (undefined8 *)(lVar9 + 0x10 + uVar13 * 0x48);
      *puVar1 = *param_3;
      puVar1[1] = uVar6;
      uVar6 = param_3[3];
      puVar1 = (undefined8 *)(lVar9 + 0x20 + uVar13 * 0x48);
      *puVar1 = param_3[2];
      puVar1[1] = uVar6;
      uVar6 = param_3[5];
      puVar1 = (undefined8 *)(lVar9 + 0x30 + uVar13 * 0x48);
      *puVar1 = param_3[4];
      puVar1[1] = uVar6;
      *(undefined8 *)(lVar9 + 0x40 + uVar13 * 0x48) = param_3[6];
      *(ulonglong *)(param_1[1] + uVar13 * 0x48) = uVar4;
    }
  }
  else {
    uVar6 = param_3[1];
    puVar1 = (undefined8 *)(lVar9 + 0x10 + uVar13 * 0x48);
    *puVar1 = *param_3;
    puVar1[1] = uVar6;
    uVar6 = param_3[3];
    puVar1 = (undefined8 *)(lVar9 + 0x20 + uVar13 * 0x48);
    *puVar1 = param_3[2];
    puVar1[1] = uVar6;
    uVar6 = param_3[5];
    puVar1 = (undefined8 *)(lVar9 + 0x30 + uVar13 * 0x48);
    *puVar1 = param_3[4];
    puVar1[1] = uVar6;
    *(undefined8 *)(lVar9 + 0x40 + uVar13 * 0x48) = param_3[6];
  }
  return param_1[1] + uVar13 * 0x48 + 8;
}

