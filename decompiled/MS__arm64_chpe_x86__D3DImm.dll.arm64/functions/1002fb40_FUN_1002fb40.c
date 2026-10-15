/*
 * FUN_1002fb40 at 1002fb40
 * undefined FUN_1002fb40(void)
 * Address ranges: 1002fb40-100300cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002fb40(int param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 undefined1 param_7)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  iVar15 = FUN_10081528(*(int *)(param_1 + 0x1d54) + 0x11c0);
  if (*(char *)(iVar15 + 300) != '\0') {
    if (*param_3 != *(uint *)(param_1 + 0x2140)) {
      *(uint *)(param_1 + 0x2140) = *param_3;
      puVar1 = (uint *)(param_1 + 0x1dd8);
      uVar9 = *puVar1;
      if (uVar9 == 0) {
LAB_1002fc50:
        puVar16 = (undefined8 *)FUN_10081cb0(0xb0);
        if (puVar16 != (undefined8 *)0x0) {
          uVar29 = *(undefined8 *)param_3;
          uVar28 = *(undefined8 *)(param_3 + 6);
          uVar27 = *(undefined8 *)(param_3 + 4);
          puVar16[1] = *(undefined8 *)(param_3 + 2);
          *puVar16 = uVar29;
          puVar16[3] = uVar28;
          puVar16[2] = uVar27;
          uVar29 = *(undefined8 *)(param_3 + 8);
          uVar28 = *(undefined8 *)(param_3 + 0xe);
          uVar27 = *(undefined8 *)(param_3 + 0xc);
          puVar16[5] = *(undefined8 *)(param_3 + 10);
          puVar16[4] = uVar29;
          puVar16[7] = uVar28;
          puVar16[6] = uVar27;
          uVar29 = *(undefined8 *)(param_3 + 0x10);
          uVar28 = *(undefined8 *)(param_3 + 0x16);
          uVar27 = *(undefined8 *)(param_3 + 0x14);
          puVar16[9] = *(undefined8 *)(param_3 + 0x12);
          puVar16[8] = uVar29;
          puVar16[0xb] = uVar28;
          puVar16[10] = uVar27;
          uVar29 = *(undefined8 *)(param_3 + 0x18);
          uVar28 = *(undefined8 *)(param_3 + 0x1e);
          uVar27 = *(undefined8 *)(param_3 + 0x1c);
          puVar16[0xd] = *(undefined8 *)(param_3 + 0x1a);
          puVar16[0xc] = uVar29;
          puVar16[0xf] = uVar28;
          puVar16[0xe] = uVar27;
          uVar29 = *(undefined8 *)(param_3 + 0x20);
          uVar28 = *(undefined8 *)(param_3 + 0x26);
          uVar27 = *(undefined8 *)(param_3 + 0x24);
          puVar16[0x11] = *(undefined8 *)(param_3 + 0x22);
          puVar16[0x10] = uVar29;
          puVar16[0x13] = uVar28;
          puVar16[0x12] = uVar27;
          uVar27 = *(undefined8 *)(param_3 + 0x28);
          puVar16[0x15] = *(undefined8 *)(param_3 + 0x2a);
          puVar16[0x14] = uVar27;
          uVar9 = *puVar1;
          uVar26 = (ulonglong)*param_3;
          if (uVar9 == 0) {
            uVar21 = 0;
          }
          else {
            uVar23 = 0;
            uVar18 = uVar9;
            do {
              uVar21 = uVar18 + uVar23 >> 1;
              uVar25 = *(ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar21 * 0x10);
              uVar24 = uVar21;
              if (uVar25 <= uVar26) {
                if (uVar26 <= uVar25) break;
                uVar23 = uVar21 + 1;
                uVar21 = uVar23;
                uVar24 = uVar18;
              }
              uVar18 = uVar24;
            } while (uVar18 != uVar23);
          }
          puVar19 = (uint *)(param_1 + 0x1dd4);
          if ((uVar21 == uVar9) ||
             (puVar4 = (ulonglong *)(*puVar19 + uVar21 * 0x10), *puVar4 != uVar26)) {
            puVar2 = (uint *)(param_1 + 0x1ddc);
            uVar23 = *puVar2;
            if (uVar23 == uVar9) {
              uVar9 = 0x10;
              if (uVar23 != 0) {
                uVar9 = uVar23 << 1;
              }
              iVar15 = FUN_10081da0(uVar9 * 0x10 + 0x7f);
              if (iVar15 != 0) {
                uVar18 = iVar15 + 0x7fU & 0xffffff80;
                uVar23 = 0;
                if (*puVar1 != 0) {
                  do {
                    puVar5 = (undefined8 *)(*puVar19 + uVar23 * 0x10);
                    puVar6 = (undefined8 *)(uVar18 + uVar23 * 0x10);
                    uVar23 = uVar23 + 1;
                    uVar27 = *puVar5;
                    puVar6[1] = puVar5[1];
                    *puVar6 = uVar27;
                  } while (uVar23 < *puVar1);
                }
                FUN_10081dc0(*(int *)(param_1 + 0x1dd0));
                *(int *)(param_1 + 0x1dd0) = iVar15;
                *puVar19 = uVar18;
                *puVar2 = uVar9;
              }
            }
            uVar9 = *puVar1;
            if (*puVar2 != uVar9) {
              for (; uVar21 < uVar9; uVar9 = uVar9 - 1) {
                puVar5 = (undefined8 *)(*puVar19 + uVar9 * 0x10);
                puVar5[1] = puVar5[-1];
                *puVar5 = puVar5[-2];
              }
              *puVar1 = *puVar1 + 1;
              *(uint *)(*puVar19 + uVar21 * 0x10 + 8) = *param_3;
              *(undefined8 **)(*puVar19 + uVar21 * 0x10 + 0xc) = puVar16;
              *(ulonglong *)(*puVar19 + uVar21 * 0x10) = uVar26;
            }
          }
          else {
            *(undefined8 **)((int)puVar4 + 0xc) = puVar16;
          }
          uVar9 = *puVar1;
          if (uVar9 == 0) {
LAB_1002fee4:
            puVar20 = (undefined4 *)0x0;
          }
          else {
            uVar21 = 0;
            uVar23 = *param_3;
            uVar18 = uVar9;
            do {
              uVar24 = uVar18 + uVar21 >> 1;
              uVar26 = *(ulonglong *)(*puVar19 + uVar24 * 0x10);
              uVar14 = uVar24;
              if (uVar26 <= uVar23) {
                if (uVar23 <= uVar26) break;
                uVar21 = uVar24 + 1;
                uVar24 = uVar21;
                uVar14 = uVar18;
              }
              uVar18 = uVar14;
            } while (uVar18 != uVar21);
            if ((uVar24 == uVar9) ||
               (puVar4 = (ulonglong *)(*puVar19 + uVar24 * 0x10),
               puVar20 = (undefined4 *)((int)puVar4 + 0xc), *puVar4 != (ulonglong)uVar23))
            goto LAB_1002fee4;
          }
          if (puVar20 != (undefined4 *)0x0) goto LAB_1002fef0;
        }
        uVar22 = 0;
      }
      else {
        uVar23 = *param_3;
        uVar21 = 0;
        uVar18 = uVar9;
        do {
          uVar24 = uVar18 + uVar21 >> 1;
          uVar26 = *(ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar24 * 0x10);
          uVar14 = uVar24;
          if (uVar26 <= uVar23) {
            if (uVar23 <= uVar26) break;
            uVar21 = uVar24 + 1;
            uVar24 = uVar21;
            uVar14 = uVar18;
          }
          uVar18 = uVar14;
        } while (uVar18 != uVar21);
        if (((uVar24 == uVar9) ||
            (puVar4 = (ulonglong *)(*(int *)(param_1 + 0x1dd4) + uVar24 * 0x10),
            *puVar4 != (ulonglong)uVar23)) ||
           (puVar20 = (undefined4 *)((int)puVar4 + 0xc), puVar20 == (undefined4 *)0x0))
        goto LAB_1002fc50;
LAB_1002fef0:
        uVar22 = *puVar20;
      }
      *(undefined4 *)(param_1 + 0x2144) = uVar22;
    }
    param_3 = *(uint **)(param_1 + 0x2144);
  }
  bVar13 = true;
  iVar15 = *(int *)(*(int *)(param_4 + 0x28) + *(int *)(param_4 + 0x38) * 8);
  iVar10 = *(int *)(param_1 + 0x1d54);
  puVar20 = (undefined4 *)(iVar10 + 0x11c0);
  cVar8 = *(char *)(iVar10 + 0x12ec);
  if (cVar8 == '\0') {
LAB_10030038:
    if (cVar8 != '\0') goto LAB_1003008c;
  }
  else {
    puVar17 = (undefined4 *)FUN_100813d0(puVar20,0x1c);
    if (puVar17 != (undefined4 *)0x0) {
      piVar3 = (int *)(iVar10 + 0x12e8);
      do {
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(ZEXT48(piVar3),0x10);
        if (bVar12) {
          *piVar3 = *piVar3 + 1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      DataMemoryBarrier(2,3);
      puVar17[1] = 0x1c;
      puVar17[2] = param_1;
      puVar17[3] = param_2;
      puVar17[4] = param_3;
      puVar17[5] = iVar15;
      puVar17[6] = param_5;
      puVar17[7] = param_6;
      *(undefined1 *)(puVar17 + 8) = param_7;
      puVar7 = (undefined4 *)((int)puVar17 + 0x27U & 0xfffffffc);
      *puVar7 = 0;
      *puVar17 = FUN_100300e0;
      puVar20[*(int *)(iVar10 + 0x12e4) * 5 + 0x1a] = puVar7;
      if (*(char *)(iVar10 + 0x12ed) != '\0') {
        *puVar20 = 0;
        (*(code *)PTR_FUN_100a1064)(*(undefined4 *)(iVar10 + 0x1220));
        bVar13 = false;
      }
      goto LAB_10030038;
    }
    *puVar20 = 0;
    (*(code *)PTR_FUN_100a1074)(100);
    FUN_10081528(puVar20);
  }
  piVar3 = *(int **)(iVar10 + 0x12d0);
  *piVar3 = param_1;
  piVar3[1] = param_2;
  piVar3[2] = (int)param_3;
  piVar3[3] = iVar15;
  piVar3[4] = param_5;
  piVar3[5] = param_6;
  *(undefined1 *)(piVar3 + 6) = param_7;
  FUN_100300e0(piVar3);
LAB_1003008c:
  if (bVar13) {
    *puVar20 = 0;
  }
  return;
}

