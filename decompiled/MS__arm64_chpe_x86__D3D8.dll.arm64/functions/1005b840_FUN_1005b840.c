/*
 * FUN_1005b840 at 1005b840
 * undefined FUN_1005b840(void)
 * Address ranges: 1005b840-1005bccb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005b840(int param_1,int param_2,uint *param_3,int param_4,int param_5,int param_6,
                 undefined1 param_7)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint uVar19;
  undefined4 uVar20;
  ulonglong uVar21;
  uint uVar22;
  int *piVar23;
  ulonglong uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  FUN_10058a20(param_1,param_3,0);
  iVar14 = FUN_100fd300(*(int *)(param_1 + 0xd9b8) + 0x11c0);
  if (*(char *)(iVar14 + 300) != '\0') {
    if (*param_3 != *(uint *)(param_1 + 0xddc4)) {
      *(uint *)(param_1 + 0xddc4) = *param_3;
      puVar15 = (undefined4 *)FUN_10057e10(param_1 + 0xda34,param_3);
      if (puVar15 == (undefined4 *)0x0) {
        puVar16 = (undefined8 *)FUN_100febf0(0xb0);
        if (puVar16 != (undefined8 *)0x0) {
          uVar27 = *(undefined8 *)param_3;
          uVar26 = *(undefined8 *)(param_3 + 6);
          uVar25 = *(undefined8 *)(param_3 + 4);
          puVar1 = (uint *)(param_1 + 0xda3c);
          uVar22 = 0;
          puVar16[1] = *(undefined8 *)(param_3 + 2);
          *puVar16 = uVar27;
          puVar16[3] = uVar26;
          puVar16[2] = uVar25;
          uVar27 = *(undefined8 *)(param_3 + 8);
          uVar26 = *(undefined8 *)(param_3 + 0xe);
          uVar25 = *(undefined8 *)(param_3 + 0xc);
          puVar16[5] = *(undefined8 *)(param_3 + 10);
          puVar16[4] = uVar27;
          puVar16[7] = uVar26;
          puVar16[6] = uVar25;
          uVar27 = *(undefined8 *)(param_3 + 0x10);
          uVar26 = *(undefined8 *)(param_3 + 0x16);
          uVar25 = *(undefined8 *)(param_3 + 0x14);
          puVar16[9] = *(undefined8 *)(param_3 + 0x12);
          puVar16[8] = uVar27;
          puVar16[0xb] = uVar26;
          puVar16[10] = uVar25;
          uVar27 = *(undefined8 *)(param_3 + 0x18);
          uVar26 = *(undefined8 *)(param_3 + 0x1e);
          uVar25 = *(undefined8 *)(param_3 + 0x1c);
          puVar16[0xd] = *(undefined8 *)(param_3 + 0x1a);
          puVar16[0xc] = uVar27;
          puVar16[0xf] = uVar26;
          puVar16[0xe] = uVar25;
          uVar27 = *(undefined8 *)(param_3 + 0x20);
          uVar26 = *(undefined8 *)(param_3 + 0x26);
          uVar25 = *(undefined8 *)(param_3 + 0x24);
          puVar16[0x11] = *(undefined8 *)(param_3 + 0x22);
          puVar16[0x10] = uVar27;
          puVar16[0x13] = uVar26;
          puVar16[0x12] = uVar25;
          uVar25 = *(undefined8 *)(param_3 + 0x28);
          puVar16[0x15] = *(undefined8 *)(param_3 + 0x2a);
          puVar16[0x14] = uVar25;
          uVar8 = *puVar1;
          uVar24 = (ulonglong)*param_3;
          if (uVar8 == 0) {
LAB_1005b9a8:
            puVar2 = (uint *)(param_1 + 0xda40);
            uVar19 = *puVar2;
            if (uVar19 == uVar8) {
              uVar8 = 0x10;
              if (uVar19 != 0) {
                uVar8 = uVar19 << 1;
              }
              iVar14 = FUN_100fece0(uVar8 * 0x10 + 0x7f);
              if (iVar14 != 0) {
                uVar18 = iVar14 + 0x7fU & 0xffffff80;
                uVar19 = 0;
                if (*puVar1 != 0) {
                  do {
                    puVar4 = (undefined8 *)(*(int *)(&DAT_0000da38 + param_1) + uVar19 * 0x10);
                    puVar5 = (undefined8 *)(uVar18 + uVar19 * 0x10);
                    uVar19 = uVar19 + 1;
                    uVar25 = *puVar4;
                    puVar5[1] = puVar4[1];
                    *puVar5 = uVar25;
                  } while (uVar19 < *(uint *)(param_1 + 0xda3c));
                }
                FUN_100fed00(*(undefined4 *)(param_1 + 0xda34));
                *(uint *)(&DAT_0000da38 + param_1) = uVar18;
                *(int *)(param_1 + 0xda34) = iVar14;
                *puVar2 = uVar8;
              }
            }
            piVar23 = (int *)(&DAT_0000da38 + param_1);
            uVar8 = *puVar1;
            if (*puVar2 != uVar8) {
              for (; uVar22 < uVar8; uVar8 = uVar8 - 1) {
                puVar4 = (undefined8 *)(*piVar23 + uVar8 * 0x10);
                puVar4[1] = puVar4[-1];
                *puVar4 = puVar4[-2];
              }
              *puVar1 = *puVar1 + 1;
              *(uint *)(*piVar23 + uVar22 * 0x10 + 8) = *param_3;
              *(undefined8 **)(*piVar23 + uVar22 * 0x10 + 0xc) = puVar16;
              *(ulonglong *)(*piVar23 + uVar22 * 0x10) = uVar24;
            }
          }
          else {
            uVar19 = 0;
            uVar18 = uVar8;
            do {
              uVar22 = uVar18 + uVar19 >> 1;
              uVar21 = *(ulonglong *)(*(int *)(&DAT_0000da38 + param_1) + uVar22 * 0x10);
              uVar12 = uVar22;
              if (uVar21 <= uVar24) {
                if (uVar24 <= uVar21) break;
                uVar19 = uVar22 + 1;
                uVar22 = uVar19;
                uVar12 = uVar18;
              }
              uVar18 = uVar12;
            } while (uVar18 != uVar19);
            if ((uVar22 == uVar8) ||
               (puVar3 = (ulonglong *)(*(int *)(&DAT_0000da38 + param_1) + uVar22 * 0x10),
               *puVar3 != uVar24)) goto LAB_1005b9a8;
            *(undefined8 **)((int)puVar3 + 0xc) = puVar16;
          }
          puVar15 = (undefined4 *)FUN_10057e10(param_1 + 0xda34,param_3);
          if (puVar15 != (undefined4 *)0x0) goto LAB_1005bafc;
        }
        uVar20 = 0;
      }
      else {
LAB_1005bafc:
        uVar20 = *puVar15;
      }
      *(undefined4 *)(param_1 + 0xddc8) = uVar20;
    }
    param_3 = *(uint **)(param_1 + 0xddc8);
  }
  iVar14 = *(int *)(param_1 + 0xd9b8);
  bVar11 = true;
  bVar13 = (*(uint *)(param_1 + 0xddcc) & 0x7fffffff) != 0;
  puVar15 = (undefined4 *)(iVar14 + 0x11c0);
  cVar7 = *(char *)(iVar14 + 0x12ec);
  if (cVar7 == '\0') {
LAB_1005bc28:
    if (cVar7 != '\0') goto LAB_1005bc88;
  }
  else {
    puVar17 = (undefined4 *)FUN_100fd1a8(puVar15,0x20);
    if (puVar17 != (undefined4 *)0x0) {
      piVar23 = (int *)(iVar14 + 0x12e8);
      do {
        cVar9 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(ZEXT48(piVar23),0x10);
        if (bVar10) {
          *piVar23 = *piVar23 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      DataMemoryBarrier(2,3);
      puVar17[1] = 0x20;
      puVar17[2] = param_1;
      puVar17[3] = param_2;
      puVar17[4] = param_3;
      puVar17[5] = param_4;
      puVar17[6] = param_5;
      puVar17[7] = param_6;
      *(undefined1 *)(puVar17 + 8) = param_7;
      *(bool *)(puVar17 + 9) = bVar13;
      puVar6 = (undefined4 *)((int)puVar17 + 0x2bU & 0xfffffffc);
      *puVar6 = 0;
      *puVar17 = FUN_1005bcd0;
      puVar15[*(int *)(iVar14 + 0x12e4) * 5 + 0x1a] = puVar6;
      if (*(char *)(iVar14 + 0x12ed) != '\0') {
        *puVar15 = 0;
        (*(code *)PTR_FUN_101340fc)(*(undefined4 *)(iVar14 + 0x1220));
        bVar11 = false;
      }
      goto LAB_1005bc28;
    }
    *puVar15 = 0;
    (*(code *)PTR_FUN_10134114)(100);
    FUN_100fd300(puVar15);
  }
  piVar23 = *(int **)(iVar14 + 0x12d0);
  *piVar23 = param_1;
  piVar23[1] = param_2;
  piVar23[2] = (int)param_3;
  piVar23[3] = param_4;
  piVar23[4] = param_5;
  piVar23[5] = param_6;
  *(undefined1 *)(piVar23 + 6) = param_7;
  *(bool *)(piVar23 + 7) = bVar13;
  FUN_1005bcd0(piVar23);
LAB_1005bc88:
  if (bVar11) {
    *puVar15 = 0;
  }
  return;
}

