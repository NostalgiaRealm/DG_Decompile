/*
 * FUN_10017c98 at 10017c98
 * undefined FUN_10017c98(void)
 * Address ranges: 10017c98-100190af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10017c98(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8,uint param_9,undefined4 param_10,byte param_11)

{
  byte *pbVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  ulonglong uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  byte bVar13;
  ulonglong *puVar14;
  bool bVar15;
  uint uVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  int local_fc;
  undefined4 *local_f8;
  int local_dc;
  int local_c4;
  int local_a8;
  ulonglong local_78 [4];
  undefined4 *local_58;
  int iStack_54;
  undefined1 local_50;
  
  if (*(char *)(param_3 + 7) == -1) {
    uVar22 = 0;
  }
  else {
    uVar22 = (uint)*(byte *)((int)param_3 + 0x1d);
  }
  if (*(uint *)(param_1 + 0x18f0) < uVar22) {
    uVar22 = *(uint *)(param_1 + 0x18f0);
  }
  uVar23 = (uint)(*(char *)(param_3 + 0xf) != -1);
  if (*(char *)(param_3 + 0x11) != -1) {
    uVar23 = *(char *)(param_3 + 0xf) != -1 | 2;
  }
  if (*(char *)(param_3 + 0xb) != -1) {
    uVar23 = uVar23 | 4;
  }
  if (*(char *)(param_3 + 0x13) != -1) {
    uVar23 = uVar23 | 8;
  }
  if (*(char *)(param_3 + 0x15) != -1) {
    uVar23 = uVar23 | 0x10;
  }
  if (*(char *)(param_3 + 0x17) != -1) {
    uVar23 = uVar23 | 0x20;
  }
  if (*(char *)(param_3 + 0x19) != -1) {
    uVar23 = uVar23 | 0x40;
  }
  if (*(char *)(param_3 + 0x1b) != -1) {
    uVar23 = uVar23 | 0x80;
  }
  if (*(char *)(param_3 + 0x1d) != -1) {
    uVar23 = uVar23 | 0x100;
  }
  if (*(char *)(param_3 + 0x1f) != -1) {
    uVar23 = uVar23 | 0x200;
  }
  if (*(char *)(param_3 + 0x21) != -1) {
    uVar23 = uVar23 | 0x400;
  }
  if (*(char *)(param_3 + 7) != -1) {
    uVar23 = *(uint *)(&DAT_1009d518 + uVar22 * 4) | uVar23;
  }
  pbVar1 = (byte *)((int)param_3 + 0x4d);
  if ((((*(uint *)(param_1 + 0xf24) == (uint)*pbVar1) &&
       (*(uint *)(param_1 + 0xf34) == (uint)*(byte *)((int)param_3 + 0x55))) &&
      (*(uint *)(param_1 + 0xf44) == (uint)*(byte *)((int)param_3 + 0x5d))) &&
     (((*(uint *)(param_1 + 0xf54) == (uint)*(byte *)((int)param_3 + 0x65) &&
       (*(uint *)(param_1 + 0xf64) == (uint)*(byte *)((int)param_3 + 0x6d))) &&
      ((*(uint *)(param_1 + 0xf74) == (uint)*(byte *)((int)param_3 + 0x75) &&
       ((*(uint *)(param_1 + 0xf84) == (uint)*(byte *)((int)param_3 + 0x7d) &&
        (*(uint *)(param_1 + 0xf94) == (uint)*(byte *)((int)param_3 + 0x85))))))))) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  puVar7 = (uint *)(param_1 + 0x18f8);
  if (param_3[1] == 0) {
    local_dc = 0;
    if (*(char *)(param_1 + 0x1907) != '\0') {
      local_dc = 6;
    }
  }
  else {
    if (((*puVar7 >> 2 & 1) == 0) || (*(int *)(param_1 + 0x18f4) == 0)) {
      iVar21 = 1;
      local_dc = 2;
    }
    else {
      iVar21 = 3;
      local_dc = 4;
    }
    if (((*(char *)(param_1 + 0x78) != '\0') && (*(char *)(param_1 + 0x1903) == '\0')) &&
       (uVar22 = (*(uint *)(param_1 + 0x444) & 0xaaaaaaaa) >> 1 |
                 (*(uint *)(param_1 + 0x444) & 0x55555555) << 1,
       uVar22 = (uVar22 & 0xcccccccc) >> 2 | (uVar22 & 0x33333333) << 2,
       uVar22 = (uVar22 & 0xf0f0f0f0) >> 4 | (uVar22 & 0xf0f0f0f) << 4,
       uVar22 = (uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8,
       (uint)LZCOUNT(uVar22 >> 0x10 | uVar22 << 0x10) < 5)) {
      local_dc = 5;
    }
    if (*(char *)(param_1 + 0xc) == '\0') {
      bVar17 = param_11 == 0;
    }
    else {
      bVar17 = *(char *)(param_3 + 0xb) == -1 || param_11 == 0;
    }
    if (bVar17) {
      local_dc = iVar21;
    }
    if (((uVar23 & 0x7800) == 0) && (*(char *)(param_1 + 0x1907) == '\0')) {
      bVar17 = false;
    }
    else {
      bVar17 = true;
    }
    if (bVar17) {
      local_dc = local_dc + 6;
    }
  }
  if (*(char *)(param_1 + 0x1d4a) != '\0') {
    FUN_10032a98(param_1);
  }
  uVar22 = 0;
  local_fc = 0;
  local_a8 = 0;
  if (bVar15) {
    *(uint *)(param_1 + 0x44c) =
         (uint)*pbVar1 |
         ((uint)*(byte *)((int)param_3 + 0x55) |
         ((uint)*(byte *)((int)param_3 + 0x5d) |
         ((uint)*(byte *)((int)param_3 + 0x65) |
         ((uint)*(byte *)((int)param_3 + 0x6d) |
         ((uint)*(byte *)((int)param_3 + 0x75) |
         (uint)(*(byte *)((int)param_3 + 0x7d) | *(byte *)((int)param_3 + 0x85)) << 3) << 3) << 3)
         << 3) << 3) << 3;
  }
  if (*(int *)(*(int *)(param_1 + 0x1d58) + local_dc * 4 + 0xe4) != 0) goto LAB_100187f0;
  uVar22 = *(uint *)(param_1 + 0x18f4);
  if ((*puVar7 & 4) == 0) {
    uVar22 = 0;
  }
  iVar21 = param_1;
  uVar18 = FUN_100324d0(param_1);
  *(uint *)(iVar21 + 0x48c) =
       *(uint *)(iVar21 + 0x48c) & 0x7fd00000 | (uint)param_11 << 0x1f | uVar23 & 0xfffff;
  FUN_1001be48((undefined8 *)(iVar21 + 0x448),uVar18,local_78);
  puVar2 = (uint *)(iVar21 + 0x1dc4);
  uVar24 = *puVar2;
  if (uVar24 == 0) {
LAB_10018348:
    local_f8 = (undefined4 *)FUN_10081cb0(0x124);
    if (local_f8 == (undefined4 *)0x0) goto LAB_100187f0;
    uVar18 = *(undefined1 *)(iVar21 + 0x1db8);
    uVar10 = *(undefined4 *)(iVar21 + 0x1db4);
    uVar11 = *(undefined4 *)(iVar21 + 0x1db0);
    *local_f8 = &PTR_FUN_1009c778;
    *(undefined8 *)(local_f8 + 1) = 0;
    local_f8[4] = &PTR_FUN_1009c934;
    local_f8[3] = 0;
    uVar32 = *(undefined8 *)(iVar21 + 0x448);
    uVar31 = *(undefined8 *)(iVar21 + 0x460);
    uVar30 = *(undefined8 *)(iVar21 + 0x458);
    uVar25 = 0;
    *(undefined8 *)(local_f8 + 8) = *(undefined8 *)(iVar21 + 0x450);
    *(undefined8 *)(local_f8 + 6) = uVar32;
    *(undefined8 *)(local_f8 + 0xc) = uVar31;
    *(undefined8 *)(local_f8 + 10) = uVar30;
    uVar32 = *(undefined8 *)(iVar21 + 0x468);
    uVar31 = *(undefined8 *)(iVar21 + 0x480);
    uVar30 = *(undefined8 *)(iVar21 + 0x478);
    *(undefined8 *)(local_f8 + 0x10) = *(undefined8 *)(iVar21 + 0x470);
    *(undefined8 *)(local_f8 + 0xe) = uVar32;
    *(undefined8 *)(local_f8 + 0x14) = uVar31;
    *(undefined8 *)(local_f8 + 0x12) = uVar30;
    *(undefined8 *)(local_f8 + 0x16) = *(undefined8 *)(iVar21 + 0x488);
    *local_f8 = &PTR_FUN_1009c780;
    local_f8[1] = uVar11;
    *(undefined8 *)(local_f8 + 0x18) = 0;
    *(undefined8 *)(local_f8 + 0x1a) = 0;
    *(undefined1 *)(local_f8 + 0x48) = uVar18;
    local_f8[2] = uVar10;
    local_f8[3] = local_f8 + 0x18;
    uVar24 = *puVar2;
    if (uVar24 != 0) {
      uVar26 = 0;
      uVar27 = uVar24;
      do {
        uVar25 = uVar27 + uVar26 >> 1;
        puVar14 = (ulonglong *)(*(int *)(iVar21 + 0x1dc0) + uVar25 * 0x28);
        iVar28 = 0;
        if (((*puVar14 == local_78[0]) && (iVar28 = 1, puVar14[1] == local_78[1])) &&
           ((iVar28 = 2, puVar14[2] == local_78[2] && (iVar28 = 3, puVar14[3] == local_78[3]))))
        break;
        uVar16 = uVar25;
        if (puVar14[iVar28] <= local_78[iVar28]) {
          iVar28 = 0;
          if ((((*puVar14 == local_78[0]) && (iVar28 = 1, puVar14[1] == local_78[1])) &&
              ((iVar28 = 2, puVar14[2] == local_78[2] && (iVar28 = 3, puVar14[3] == local_78[3]))))
             || (local_78[iVar28] <= puVar14[iVar28])) break;
          uVar26 = uVar25 + 1;
          uVar25 = uVar26;
          uVar16 = uVar27;
        }
        uVar27 = uVar16;
      } while (uVar27 != uVar26);
    }
    if (uVar25 == uVar24) {
LAB_10018588:
      uVar26 = *(uint *)(iVar21 + 0x1dc8);
      if (uVar26 == uVar24) {
        iVar28 = 0x10;
        if (uVar26 != 0) {
          iVar28 = uVar26 << 1;
        }
        iVar19 = FUN_10081da0(iVar28 * 0x28);
        if (iVar19 != 0) {
          uVar24 = 0;
          if (*puVar2 != 0) {
            do {
              puVar4 = (undefined8 *)(iVar19 + uVar24 * 0x28);
              puVar6 = (undefined8 *)(*(int *)(iVar21 + 0x1dc0) + uVar24 * 0x28);
              uVar24 = uVar24 + 1;
              uVar32 = *puVar6;
              uVar31 = puVar6[3];
              uVar30 = puVar6[2];
              puVar4[1] = puVar6[1];
              *puVar4 = uVar32;
              puVar4[3] = uVar31;
              puVar4[2] = uVar30;
              puVar4[4] = puVar6[4];
            } while (uVar24 < *(uint *)(iVar21 + 0x1dc4));
          }
          FUN_10081dc0(*(int *)(iVar21 + 0x1dbc));
          *(int *)(iVar21 + 0x1dbc) = iVar19;
          *(int *)(iVar21 + 0x1dc0) = iVar19;
          *(int *)(iVar21 + 0x1dc8) = iVar28;
        }
      }
      uVar24 = *(uint *)(iVar21 + 0x1dc4);
      if (*(uint *)(iVar21 + 0x1dc8) == uVar24) goto LAB_100187c8;
      if (uVar25 < uVar24) {
        if (3 < uVar24 - uVar25) {
          piVar20 = (int *)(iVar21 + 0x1dc0);
          do {
            iVar19 = uVar24 - 3;
            puVar4 = (undefined8 *)(*piVar20 + uVar24 * 0x28);
            puVar4[1] = puVar4[-4];
            *puVar4 = puVar4[-5];
            puVar4[3] = puVar4[-2];
            puVar4[2] = puVar4[-3];
            puVar4[4] = puVar4[-1];
            puVar4 = (undefined8 *)(*piVar20 + (uVar24 - 2) * 0x28);
            iVar28 = *piVar20 + uVar24 * 0x28;
            uVar32 = *puVar4;
            uVar31 = puVar4[3];
            uVar30 = puVar4[2];
            *(undefined8 *)(iVar28 + -0x20) = puVar4[1];
            *(undefined8 *)(iVar28 + -0x28) = uVar32;
            *(undefined8 *)(iVar28 + -0x10) = uVar31;
            *(undefined8 *)(iVar28 + -0x18) = uVar30;
            *(undefined8 *)(iVar28 + -8) = puVar4[4];
            puVar4 = (undefined8 *)(*piVar20 + iVar19 * 0x28);
            puVar6 = (undefined8 *)(*piVar20 + (uVar24 - 2) * 0x28);
            uVar32 = *puVar4;
            uVar31 = puVar4[3];
            uVar30 = puVar4[2];
            puVar6[1] = puVar4[1];
            *puVar6 = uVar32;
            puVar6[3] = uVar31;
            puVar6[2] = uVar30;
            puVar6[4] = puVar4[4];
            iVar28 = uVar24 - 4;
            uVar24 = uVar24 - 4;
            puVar4 = (undefined8 *)(*piVar20 + iVar28 * 0x28);
            puVar6 = (undefined8 *)(*piVar20 + iVar19 * 0x28);
            uVar32 = *puVar4;
            uVar31 = puVar4[3];
            uVar30 = puVar4[2];
            puVar6[1] = puVar4[1];
            *puVar6 = uVar32;
            puVar6[3] = uVar31;
            puVar6[2] = uVar30;
            puVar6[4] = puVar4[4];
          } while (uVar25 + 3 < uVar24);
        }
        if (uVar25 < uVar24) {
          do {
            puVar4 = (undefined8 *)(*(int *)(iVar21 + 0x1dc0) + uVar24 * 0x28);
            uVar24 = uVar24 - 1;
            puVar4[1] = puVar4[-4];
            *puVar4 = puVar4[-5];
            puVar4[3] = puVar4[-2];
            puVar4[2] = puVar4[-3];
            puVar4[4] = puVar4[-1];
          } while (uVar25 < uVar24);
        }
      }
      *puVar2 = *(int *)(iVar21 + 0x1dc4) + 1;
      puVar14 = (ulonglong *)(*(int *)(iVar21 + 0x1dc0) + uVar25 * 0x28);
      puVar14[1] = local_78[1];
      *puVar14 = local_78[0];
      puVar14[3] = local_78[3];
      puVar14[2] = local_78[2];
      iVar21 = *(int *)(iVar21 + 0x1dc0) + uVar25 * 0x28;
    }
    else {
      uVar26 = 0;
      do {
        if (*(ulonglong *)(*(int *)(iVar21 + 0x1dc0) + uVar25 * 0x28 + uVar26 * 8) !=
            local_78[uVar26]) goto LAB_10018588;
        uVar26 = uVar26 + 1;
      } while (uVar26 < 4);
      iVar21 = *(int *)(iVar21 + 0x1dc0) + uVar25 * 0x28;
    }
    *(undefined4 **)(iVar21 + 0x20) = local_f8;
  }
  else {
    uVar25 = 0;
    uVar26 = uVar24;
    do {
      uVar27 = uVar26 + uVar25 >> 1;
      puVar14 = (ulonglong *)(*(int *)(iVar21 + 0x1dc0) + uVar27 * 0x28);
      iVar28 = 0;
      if (((*puVar14 == local_78[0]) && (iVar28 = 1, puVar14[1] == local_78[1])) &&
         ((iVar28 = 2, puVar14[2] == local_78[2] && (iVar28 = 3, puVar14[3] == local_78[3]))))
      break;
      uVar16 = uVar27;
      if (puVar14[iVar28] <= local_78[iVar28]) {
        iVar28 = 0;
        if (((((*puVar14 == local_78[0]) && (iVar28 = 1, puVar14[1] == local_78[1])) &&
             (iVar28 = 2, puVar14[2] == local_78[2])) && (iVar28 = 3, puVar14[3] == local_78[3])) ||
           (local_78[iVar28] <= puVar14[iVar28])) break;
        uVar25 = uVar27 + 1;
        uVar27 = uVar25;
        uVar16 = uVar26;
      }
      uVar26 = uVar16;
    } while (uVar26 != uVar25);
    if (uVar27 == uVar24) goto LAB_10018348;
    uVar24 = 0;
    do {
      if (*(ulonglong *)(*(int *)(iVar21 + 0x1dc0) + uVar27 * 0x28 + uVar24 * 8) != local_78[uVar24]
         ) goto LAB_10018348;
      uVar24 = uVar24 + 1;
    } while (uVar24 < 4);
    local_f8 = (undefined4 *)(*(int *)(iVar21 + 0x1dc0) + uVar27 * 0x28 + 0x20);
    if (local_f8 == (undefined4 *)0x0) goto LAB_10018348;
    local_f8 = (undefined4 *)*local_f8;
  }
LAB_100187c8:
  piVar20 = (int *)FUN_1001bb80(local_f8,uVar22);
  if (piVar20 != (int *)0x0) {
    local_fc = *piVar20;
    local_a8 = piVar20[1];
  }
LAB_100187f0:
  if (((*puVar7 >> 2 & 1) != 0) && (local_dc == 0 || local_dc == 6)) {
    FUN_10032770(param_1);
  }
  if (local_fc == 0) {
    local_fc = *(int *)(*(int *)(param_1 + 0x1d58) + local_dc * 4 + 0xe4);
    iStack_54 = local_dc;
  }
  else {
    iStack_54 = 0xc;
  }
  local_50 = 0;
  uVar25 = 0;
  bVar17 = local_dc == 5 || local_dc == 0xb;
  cVar12 = *(char *)(param_1 + 0x191b);
  *(bool *)(param_1 + 0x191b) = bVar17;
  *(byte *)(param_1 + 0x1d38) = bVar17 != (bool)cVar12 | *(byte *)(param_1 + 0x1d38);
  piVar20 = (int *)(param_1 + 0x1d94);
  puVar7 = (uint *)(param_1 + 0x1d9c);
  uVar24 = *puVar7;
  uVar8 = CONCAT44(iStack_54,*param_3);
  if (uVar24 != 0) {
    uVar26 = 0;
    uVar27 = uVar24;
    do {
      uVar25 = uVar27 + uVar26 >> 1;
      uVar29 = *(ulonglong *)(*piVar20 + uVar25 * 0x18);
      uVar16 = uVar25;
      if (uVar29 <= uVar8) {
        if (uVar8 <= uVar29) break;
        uVar26 = uVar25 + 1;
        uVar25 = uVar26;
        uVar16 = uVar27;
      }
      uVar27 = uVar16;
    } while (uVar27 != uVar26);
  }
  local_58 = param_3;
  if ((uVar25 == uVar24) || (*(ulonglong *)(uVar25 * 0x18 + *piVar20) != uVar8)) {
    puVar2 = (uint *)(param_1 + 0x1d98);
    uVar26 = *puVar2;
    if (uVar24 == uVar26) {
      uVar24 = uVar26 * 2;
      iVar21 = uVar26 * 0x30;
      if ((ulonglong)uVar24 * 0x18 >> 0x20 != 0) {
        iVar21 = -1;
      }
      iVar21 = FUN_10081da0(iVar21);
      if (iVar21 != 0) {
        iVar28 = iVar21;
        if (3 < uVar24) {
          puVar3 = (undefined8 *)(iVar21 + 8);
          puVar4 = (undefined8 *)(iVar21 + 0x20);
          puVar5 = (undefined8 *)(iVar21 + 0x38);
          puVar6 = (undefined8 *)(iVar21 + 0x50);
          do {
            *puVar3 = 0;
            *(undefined1 *)(puVar3 + 1) = 0;
            *puVar4 = 0;
            uVar24 = uVar24 - 4;
            *(undefined1 *)(puVar4 + 1) = 0;
            *puVar5 = 0;
            iVar28 = iVar28 + 0x60;
            *(undefined1 *)(puVar5 + 1) = 0;
            *puVar6 = 0;
            puVar3 = puVar3 + 0xc;
            *(undefined1 *)(puVar6 + 1) = 0;
            puVar4 = puVar4 + 0xc;
            puVar5 = puVar5 + 0xc;
            puVar6 = puVar6 + 0xc;
          } while (3 < uVar24);
        }
        if (uVar24 != 0) {
          puVar4 = (undefined8 *)(iVar28 + 8);
          do {
            *puVar4 = 0;
            *(undefined1 *)(puVar4 + 1) = 0;
            uVar24 = uVar24 - 1;
            puVar4 = puVar4 + 3;
          } while (uVar24 != 0);
        }
        uVar24 = 0;
        if (*puVar2 != 0) {
          do {
            puVar4 = (undefined8 *)(iVar21 + uVar24 * 0x18);
            puVar6 = (undefined8 *)(*piVar20 + uVar24 * 0x18);
            uVar24 = uVar24 + 1;
            uVar30 = *puVar6;
            puVar4[1] = puVar6[1];
            *puVar4 = uVar30;
            puVar4[2] = puVar6[2];
          } while (uVar24 < *puVar2);
        }
        FUN_10081dc0(*piVar20);
        *piVar20 = iVar21;
        *puVar2 = *puVar2 << 1;
      }
    }
    uVar24 = *puVar7;
    if (uVar25 < uVar24) {
      if (3 < uVar24 - uVar25) {
        do {
          puVar4 = (undefined8 *)(*piVar20 + uVar24 * 0x18);
          puVar4[1] = puVar4[-2];
          *puVar4 = puVar4[-3];
          puVar4[2] = puVar4[-1];
          puVar4 = (undefined8 *)(*piVar20 + (uVar24 - 2) * 0x18);
          iVar21 = *piVar20 + uVar24 * 0x18;
          uVar30 = *puVar4;
          *(undefined8 *)(iVar21 + -0x10) = puVar4[1];
          *(undefined8 *)(iVar21 + -0x18) = uVar30;
          *(undefined8 *)(iVar21 + -8) = puVar4[2];
          iVar21 = uVar24 - 3;
          puVar4 = (undefined8 *)(*piVar20 + iVar21 * 0x18);
          puVar6 = (undefined8 *)(*piVar20 + (uVar24 - 2) * 0x18);
          uVar30 = *puVar4;
          puVar6[1] = puVar4[1];
          *puVar6 = uVar30;
          puVar6[2] = puVar4[2];
          iVar28 = uVar24 - 4;
          uVar24 = uVar24 - 4;
          puVar4 = (undefined8 *)(*piVar20 + iVar28 * 0x18);
          puVar6 = (undefined8 *)(*piVar20 + iVar21 * 0x18);
          uVar30 = *puVar4;
          puVar6[1] = puVar4[1];
          *puVar6 = uVar30;
          puVar6[2] = puVar4[2];
        } while (uVar25 + 3 < uVar24);
      }
      for (; uVar25 < uVar24; uVar24 = uVar24 - 1) {
        puVar4 = (undefined8 *)(*piVar20 + uVar24 * 0x18);
        puVar4[1] = puVar4[-2];
        *puVar4 = puVar4[-3];
        puVar4[2] = puVar4[-1];
      }
    }
    FUN_1001a2d8(piVar20,uVar25,uVar8,&local_58);
    *puVar7 = *puVar7 + 1;
  }
  iVar21 = *(int *)(uVar25 * 0x18 + *piVar20 + 0x14);
  uVar24 = (0x1000 - *(int *)(param_1 + 0x54)) - *(int *)(param_1 + 0x50);
  uVar25 = (0x1000 - *(int *)(param_1 + 0x68)) - *(int *)(param_1 + 0x6c);
  puVar9 = (undefined *)0x100a2170;
  if (*(char *)(param_1 + 0x1904) == '\0') {
    puVar9 = &DAT_100a2190;
  }
  if (((((*(char *)(param_1 + 0x1905) != '\0') || (*(uint *)(param_1 + 0x990) != uVar23 || bVar15))
       || (*(int *)(param_1 + 0x4f4) != param_6)) ||
      (((*(int *)(param_1 + 0x4b0) != param_7 || (*(int *)(param_1 + 0x1f38) != param_5)) ||
       ((*(int *)(param_1 + 0x1ef8) != param_4 ||
        ((*(int *)(param_1 + 0x1eec) != local_fc || (*(int *)(param_1 + 0x18e0) != param_3[1])))))))
      ) || ((*(int *)(param_1 + 0x1f4c) != *(int *)(puVar9 + param_2 * 4) ||
            ((((*(int *)(param_1 + 0x6c) != 0) != (param_9 != 0) || uVar24 < param_8) ||
              uVar25 < param_9 || (*(int *)(param_1 + 0x1ee8) != iVar21)))))) {
    iVar28 = param_7;
    if (param_4 != *(int *)(param_1 + 0x1d74)) {
      iVar28 = 0;
    }
    FUN_10017a70(param_1,uVar24 < param_8,uVar25 < param_9,iVar28);
    local_c4 = param_6;
    if (param_4 == *(int *)(param_1 + 0x1d74)) {
      local_c4 = *(int *)(param_1 + 0x5c);
    }
    if (*(char *)(param_1 + 0x1905) != '\0') {
      *(undefined1 *)(param_1 + 0x1d39) = 1;
      *(byte *)(param_1 + 0x1d34) = *(byte *)(param_1 + 0x1d34) | 1;
    }
    if (bVar15) {
      *(uint *)(param_1 + 0xf24) = (uint)*pbVar1;
      *(uint *)(param_1 + 0xf34) = (uint)*(byte *)((int)param_3 + 0x55);
      *(uint *)(param_1 + 0xf44) = (uint)*(byte *)((int)param_3 + 0x5d);
      *(uint *)(param_1 + 0xf54) = (uint)*(byte *)((int)param_3 + 0x65);
      *(uint *)(param_1 + 0xf64) = (uint)*(byte *)((int)param_3 + 0x6d);
      *(uint *)(param_1 + 0xf74) = (uint)*(byte *)((int)param_3 + 0x75);
      *(uint *)(param_1 + 0xf84) = (uint)*(byte *)((int)param_3 + 0x7d);
      *(uint *)(param_1 + 0xf94) = (uint)*(byte *)((int)param_3 + 0x85);
      *(undefined1 *)(param_1 + 0x1d41) = 1;
    }
    if (*(uint *)(param_1 + 0x990) != uVar23) {
      *(uint *)(param_1 + 0x990) = uVar23;
      *(undefined1 *)(param_1 + 0x1d41) = 1;
    }
    if (*(int *)(param_1 + 0x4b0) != param_7) {
      *(int *)(param_1 + 0x4b0) = param_7;
      *(undefined1 *)(param_1 + 0x1d3f) = 1;
    }
    if (*(int *)(param_1 + 0x1ef8) != param_4) {
      *(int *)(param_1 + 0x1ef8) = param_4;
      *(undefined1 *)(param_1 + 0x1d3f) = 1;
    }
    if (*(int *)(param_1 + 0x4f4) != local_c4) {
      *(int *)(param_1 + 0x4f4) = local_c4;
      *(undefined1 *)(param_1 + 0x1d3f) = 1;
    }
    if (*(int *)(param_1 + 0x1f38) != param_5) {
      *(int *)(param_1 + 0x1f38) = param_5;
      *(undefined1 *)(param_1 + 0x1d40) = 1;
    }
    if (*(int *)(param_1 + 0x1ee8) != iVar21) {
      *(int *)(param_1 + 0x1ee8) = iVar21;
      *(undefined1 *)(param_1 + 0x2270) = 1;
    }
    if (*(int *)(param_1 + 0x1ef4) != local_a8) {
      *(int *)(param_1 + 0x1ef4) = local_a8;
      *(undefined1 *)(param_1 + 0x2270) = 1;
    }
    if (*(int *)(param_1 + 0x1eec) != local_fc) {
      *(int *)(param_1 + 0x1eec) = local_fc;
      iVar21 = *(int *)(param_1 + 0x1d58);
      if ((((local_fc == *(int *)(iVar21 + 0xf4)) || (local_fc == *(int *)(iVar21 + 0xf0))) ||
          (local_fc == *(int *)(iVar21 + 0x10c))) || (local_fc == *(int *)(iVar21 + 0x108))) {
        uVar22 = uVar22 | 0x3f;
      }
      *(uint *)(param_1 + 0x1f50) = uVar22 & 0x3f;
      *(undefined1 *)(param_1 + 0x2270) = 1;
    }
    if ((*(int *)(param_1 + 0x18e0) != param_3[1]) || (*(char *)(param_1 + 0x1905) != '\0')) {
      *(int *)(param_1 + 0x18e0) = param_3[1];
      *(undefined1 *)(param_1 + 0x1d3e) = 1;
    }
    if (*(int *)(param_1 + 0x1f4c) != *(int *)(puVar9 + param_2 * 4)) {
      *(int *)(param_1 + 0x1f4c) = *(int *)(puVar9 + param_2 * 4);
      *(undefined1 *)(param_1 + 0x2270) = 1;
    }
    bVar13 = *(byte *)(param_1 + 0x1905);
    *(byte *)(param_1 + 0x1d3c) = *(byte *)(param_1 + 0x1d3c) | bVar13;
    *(byte *)(param_1 + 0x1d3b) = *(byte *)(param_1 + 0x1d3b) | bVar13;
    *(byte *)(param_1 + 0x1d3d) = *(byte *)(param_1 + 0x1d3d) | bVar13;
    *(byte *)(param_1 + 0x1d38) = *(byte *)(param_1 + 0x1d38) | bVar13;
    if (bVar13 != 0) {
      *(undefined1 *)(param_1 + 0x1905) = 0;
      FUN_10032568(param_1);
    }
  }
  return;
}

