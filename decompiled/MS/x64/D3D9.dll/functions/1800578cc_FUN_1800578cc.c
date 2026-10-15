/*
 * FUN_1800578cc at 1800578cc
 * longlong __fastcall FUN_1800578cc(longlong * param_1, ulonglong * param_2, undefined4 * param_3)
 * Address ranges: 1800578cc-180057a32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800578cc(longlong *param_1,ulonglong *param_2,undefined4 *param_3)

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
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar12 = *(uint *)(param_1 + 2);
  uVar8 = 0;
  uVar4 = *param_2;
  if (uVar12 != 0) {
    uVar10 = 0;
    do {
      uVar8 = uVar12 + uVar10 >> 1;
      uVar11 = *(ulonglong *)(param_1[1] + (ulonglong)uVar8 * 0x18);
      uVar7 = uVar8;
      if (uVar11 <= uVar4) {
        if (uVar4 <= uVar11) break;
        uVar10 = uVar8 + 1;
        uVar7 = uVar12;
        uVar8 = uVar10;
      }
      uVar12 = uVar7;
    } while (uVar12 != uVar10);
  }
  uVar11 = (ulonglong)uVar8;
  if ((uVar8 == *(uint *)(param_1 + 2)) || (*(ulonglong *)(param_1[1] + uVar11 * 0x18) != uVar4)) {
    iVar3 = *(int *)((longlong)param_1 + 0x14);
    if (iVar3 == (int)param_1[2]) {
      uVar14 = (ulonglong)(uint)(iVar3 * 2);
      if (iVar3 == 0) {
        uVar14 = 0x10;
      }
      lVar9 = thunk_FUN_1800fbccc(uVar14 * 0x18);
      if (lVar9 != 0) {
        uVar13 = 0;
        if ((int)param_1[2] != 0) {
          do {
            lVar5 = param_1[1];
            uVar12 = (int)uVar13 + 1;
            puVar1 = (undefined8 *)(lVar5 + uVar13 * 0x18);
            uVar6 = puVar1[1];
            puVar2 = (undefined8 *)(lVar9 + uVar13 * 0x18);
            *puVar2 = *puVar1;
            puVar2[1] = uVar6;
            *(undefined8 *)(lVar9 + 0x10 + uVar13 * 0x18) =
                 *(undefined8 *)(lVar5 + 0x10 + uVar13 * 0x18);
            uVar13 = (ulonglong)uVar12;
          } while (uVar12 < *(uint *)(param_1 + 2));
        }
        FUN_1800fbcf0((LPVOID)*param_1);
        *param_1 = lVar9;
        param_1[1] = lVar9;
        *(int *)((longlong)param_1 + 0x14) = (int)uVar14;
      }
    }
    uVar12 = *(uint *)(param_1 + 2);
    uVar14 = (ulonglong)uVar12;
    if (*(uint *)((longlong)param_1 + 0x14) != uVar12) {
      while (uVar8 < uVar12) {
        lVar9 = param_1[1];
        uVar12 = (int)uVar14 - 1;
        uVar13 = (ulonglong)uVar12;
        puVar1 = (undefined8 *)(lVar9 + uVar13 * 0x18);
        uVar6 = puVar1[1];
        puVar2 = (undefined8 *)(lVar9 + uVar14 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        *(undefined8 *)(lVar9 + 0x10 + uVar14 * 0x18) =
             *(undefined8 *)(lVar9 + 0x10 + uVar13 * 0x18);
        uVar14 = uVar13;
      }
      *(int *)(param_1 + 2) = (int)param_1[2] + 1;
      *(ulonglong *)(param_1[1] + 8 + uVar11 * 0x18) = *param_2;
      *(undefined4 *)(param_1[1] + 0x10 + uVar11 * 0x18) = *param_3;
      *(ulonglong *)(param_1[1] + uVar11 * 0x18) = uVar4;
    }
  }
  else {
    *(undefined4 *)(param_1[1] + 0x10 + uVar11 * 0x18) = *param_3;
  }
  return param_1[1] + uVar11 * 0x18 + 8;
}

