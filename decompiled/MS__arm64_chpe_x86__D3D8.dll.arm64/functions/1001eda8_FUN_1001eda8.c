/*
 * FUN_1001eda8 at 1001eda8
 * undefined FUN_1001eda8(void)
 * Address ranges: 1001eda8-1001f413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte FUN_1001eda8(int *param_1,undefined2 param_2,undefined8 param_3,int param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  undefined3 uVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  bool bVar18;
  undefined2 uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  byte bVar25;
  uint uStack_98;
  uint uStack_94;
  undefined1 local_90;
  undefined2 uStack_8f;
  ushort local_68 [5];
  undefined2 local_5e;
  undefined8 local_5c;
  undefined8 uStack_54;
  
  FUN_100ff690(param_4,0,0x4858);
  iVar4 = *param_1;
  uStack_54 = 0x8000800020002;
  local_5c = 0x3000300010000;
  uVar22 = 0;
  local_68[4] = param_2;
  puVar20 = (uint *)(param_1 + 1);
  local_5e = param_2;
  bVar10 = false;
  bVar12 = iVar4 + 0x1ff00U < 2;
  local_68[0] = 0xc;
  local_68[1] = 0xc;
  local_68[2] = 0x10;
  local_68[3] = 0x10;
  *(char *)(param_4 + 0x4855) = (char)iVar4;
  *(undefined1 *)(param_4 + 0x4854) = 1;
  if (bVar12) {
    do {
      if (bVar10) break;
      uVar2 = 1;
      uStack_94 = 1;
      _local_90 = 0xf0f;
      uVar5 = *puVar20;
      bVar18 = true;
      uVar16 = uVar5 & 0xffff;
      *(int *)(param_4 + 0x4850) = *(int *)(param_4 + 0x4850) + 1;
      uVar1 = uVar5 & 0xffff0000;
      local_90 = 0xf;
      uVar11 = _local_90;
      switch(uVar16) {
      case 0:
        bVar18 = true;
LAB_1001efb4:
        puVar20 = puVar20 + 1;
        goto LAB_1001efb8;
      case 1:
        goto switchD_1001eeb0_caseD_1;
      case 2:
      case 5:
      case 10:
      case 0xb:
      case 0xc:
      case 0xd:
        break;
      case 3:
      case 0x12:
switchD_1001eeb0_caseD_3:
        bVar12 = false;
        uStack_98 = 0;
        goto LAB_1001eff4;
      case 4:
        uStack_98 = 3;
        goto LAB_1001efec;
      case 6:
      case 7:
      case 0xe:
      case 0xf:
switchD_1001eeb0_caseD_6:
        _local_90 = 0x80f;
        goto LAB_1001efe4;
      case 8:
        uVar19 = 7;
        goto LAB_1001eec8;
      case 9:
        bVar18 = false;
        break;
      case 0x10:
        _local_90 = 0xb0f;
LAB_1001efe4:
        bVar18 = false;
switchD_1001eeb0_caseD_1:
        uStack_98 = 1;
        goto LAB_1001efec;
      case 0x11:
        uVar19 = 0xe;
LAB_1001eec8:
        _local_90 = CONCAT21(uVar19,0xf);
        bVar18 = false;
        uStack_98 = 2;
        goto LAB_1001efec;
      case 0x13:
        uVar11 = 0x303;
        local_90 = 3;
        uStack_98 = 1;
        uStack_94 = uVar2;
        goto LAB_1001eff4;
      case 0x14:
        uVar2 = 4;
        bVar18 = false;
        break;
      case 0x15:
        goto LAB_1001ef1c;
      case 0x16:
        _local_90 = 0x70f;
        uVar2 = 4;
        bVar18 = false;
        break;
      case 0x17:
        uVar11 = 0x707;
LAB_1001ef1c:
        local_90 = 7;
        uStack_94 = 3;
LAB_1001ef20:
        bVar18 = false;
        uStack_98 = 2;
        goto LAB_1001eff4;
      case 0x18:
        uVar11 = 0x703;
        local_90 = 3;
        uStack_94 = 2;
        goto LAB_1001ef20;
      default:
        if (uVar16 < 0xfffe) {
          if ((uVar16 == 0x4e) || (uVar16 == 0x4f)) goto switchD_1001eeb0_caseD_6;
          goto switchD_1001eeb0_caseD_3;
        }
        if (0xfffe < uVar16) {
          if (uVar16 != 0xffff) goto switchD_1001eeb0_caseD_3;
          bVar12 = uVar1 == 0;
          bVar10 = true;
          bVar18 = bVar12;
          goto LAB_1001efb4;
        }
        puVar20 = puVar20 + (uVar5 >> 0x10) + 1;
        bVar18 = true;
LAB_1001efb8:
        bVar12 = (bool)(bVar18 & bVar12);
        goto LAB_1001f38c;
      }
      uStack_98 = 2;
LAB_1001efec:
      uVar11 = _local_90;
      uStack_94 = uVar2;
LAB_1001eff4:
      uVar6 = puVar20[1];
      bVar13 = uVar1 == 0;
      uVar22 = uVar22 + 1;
      uVar5 = uVar6 & 0x70000000;
      uVar2 = uVar6 & 0x1fff;
      uVar14 = uVar6 >> 0x10 & 0xf;
      bVar25 = (byte)uVar14;
      uStack_8f._0_1_ = (byte)((uint3)uVar11 >> 8);
      if ((uVar1 == 0) && (uVar22 < 0x81 && (int)uVar6 < 0)) {
        uVar1 = uVar6 & 0xf0000;
        if ((uVar1 == 0) || (bVar9 = 1, uVar1 != 0x10000 && uVar5 == 0x30000000)) {
          bVar9 = 0;
        }
        if ((uVar16 != 0x13) || (bVar8 = 0, (uVar1 - 0x20000 & 0xfffeffff) == 0)) {
          bVar8 = 1;
        }
        if (((((((uVar5 != 0x30000000 && uVar5 != 0) && uVar5 != 0x40000000) && uVar5 != 0x50000000)
               && uVar5 != 0x60000000) || (!(bool)(bVar9 & bVar8))) || ((uVar6 & 0xf000000) != 0))
           || ((uVar6 & 0xf00000) != 0)) goto LAB_1001f0e8;
        iVar15 = 2;
        if (iVar4 == -0x1ff00) {
          iVar15 = 0;
        }
        if (*(ushort *)((int)local_68 + iVar15 + (uVar6 >> 0x1c & 7) * 4) <= uVar2)
        goto LAB_1001f0e8;
        if (uVar5 != 0) {
          uVar14 = uVar14 & local_90;
        }
        bVar25 = (byte)uVar14;
        if (bVar18) {
          uVar14 = uVar14 & (byte)uStack_8f;
        }
        else {
          uVar14 = (uint)(byte)uStack_8f;
        }
        bVar13 = true;
      }
      else {
LAB_1001f0e8:
        uVar14 = (uint)(byte)uStack_8f;
      }
      uVar16 = 0;
      if (uStack_98 != 0) {
        bVar10 = false;
        do {
          if (bVar13 == false) {
            bVar13 = false;
            goto LAB_1001f380;
          }
          bVar13 = false;
          uVar1 = puVar20[uVar16 + 2];
          if ((int)uVar1 < 0) {
            uVar6 = uVar1 & 0x70000000;
            if ((uVar1 & 0x40000000) == 0) {
              bVar9 = 1;
              if (uVar6 != 0x20000000) goto LAB_1001f144;
LAB_1001f150:
              bVar18 = true;
            }
            else {
              bVar9 = 0;
LAB_1001f144:
              if ((uVar1 >> 0xd & 1) == 0) goto LAB_1001f150;
              bVar18 = false;
            }
            uVar3 = uVar1 & 0xff0000;
            uVar7 = 1 << (ulonglong)(uVar3 >> 0x16);
            if ((uVar14 & 8) == 0) {
              uVar7 = 0;
            }
            uVar21 = 1 << (ulonglong)(uVar3 >> 0x14 & 3);
            if ((uVar14 & 4) == 0) {
              uVar21 = 0;
            }
            uVar23 = 1 << (ulonglong)(uVar3 >> 0x12 & 3);
            if ((uVar14 & 2) == 0) {
              uVar23 = 0;
            }
            uVar24 = 1 << (ulonglong)(uVar3 >> 0x10 & 3);
            if ((uVar14 & 1) == 0) {
              uVar24 = 0;
            }
            if ((((bool)(bVar9 & (uVar6 != 0x30000000 || uVar3 == 0))) && (bVar18)) &&
               ((uVar1 & 0xe000000) == 0)) {
              iVar15 = 2;
              if (iVar4 == -0x1ff00) {
                iVar15 = 0;
              }
              uVar3 = uVar1 & 0x1fff;
              if (uVar3 < *(ushort *)((int)local_68 + iVar15 + (uVar1 >> 0x1c & 7) * 4)) {
                uVar7 = uVar24 | uVar23 | uVar21 | uVar7;
                uVar21 = 0;
                uVar23 = 0xff;
                if (uVar16 == uStack_98 - 1) {
                  uVar24 = uStack_94;
                  if (uStack_94 != 0) goto LAB_1001f228;
                }
                else {
                  uVar24 = 1;
LAB_1001f228:
                  do {
                    if (uVar6 < 0x20000000) {
                      if (uVar6 != 0) {
                        if (uVar6 != 0x10000000) goto LAB_1001f29c;
                        pbVar17 = (byte *)(uVar21 + uVar3 + param_4 + 0x10);
                        goto LAB_1001f274;
                      }
                      pbVar17 = (byte *)(uVar21 + uVar3 + param_4 + 0x20);
LAB_1001f294:
                      uVar23 = *pbVar17 & uVar23;
                    }
                    else if (uVar6 < 0x20000001) {
                      pbVar17 = (byte *)(uVar21 + uVar3 + param_4 + 0x41);
LAB_1001f274:
                      uVar23 = uVar23 & 0xf;
                      *pbVar17 = (byte)uVar7 | *pbVar17;
                    }
                    else if (uVar6 == 0x30000000) {
                      pbVar17 = (byte *)(uVar21 + uVar3 + param_4 + 0x40);
                      goto LAB_1001f294;
                    }
LAB_1001f29c:
                    uVar21 = uVar21 + 1;
                  } while (uVar21 < uVar24);
                }
                if ((uVar7 & 0xff & uVar23) == (uVar7 & 0xff)) {
                  if ((uVar1 >> 0xd & 1) != 0) {
                    *(undefined1 *)(param_4 + 0x44e) = 1;
                  }
                  bVar13 = true;
                }
              }
            }
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uStack_98);
        bVar10 = false;
      }
      if (bVar13 != false) {
        if (uVar5 < 0x40000000) {
          if (uVar5 == 0) {
            pbVar17 = (byte *)(uVar2 + param_4 + 0x20);
          }
          else {
            if (uVar5 != 0x30000000) goto LAB_1001f380;
            pbVar17 = (byte *)(uVar2 + param_4 + 0x40);
          }
        }
        else if (uVar5 < 0x40000001) {
          pbVar17 = (byte *)(uVar2 + param_4 + 0x441);
        }
        else if (uVar5 == 0x50000000) {
          pbVar17 = (byte *)(uVar2 + param_4 + 0x444);
        }
        else {
          if (uVar5 != 0x60000000) goto LAB_1001f380;
          pbVar17 = (byte *)(uVar2 + param_4 + 0x446);
        }
        *pbVar17 = bVar25 | *pbVar17;
      }
LAB_1001f380:
      puVar20 = puVar20 + uStack_98 + 2;
      bVar12 = (bool)(bVar12 & bVar13);
LAB_1001f38c:
    } while (bVar12 != false);
  }
  uVar22 = 0;
  do {
    if (*(char *)(param_4 + 0x10 + uVar22) != '\0') {
      *(undefined1 *)(uVar22 + param_4) = (&DAT_1012ca28)[uVar22];
    }
    uVar22 = uVar22 + 1;
  } while (uVar22 < 0x10);
  bVar25 = (*(byte *)(param_4 + 0x441) & 3) == 3 & bVar12;
  if (bVar25 != 0) {
    *param_5 = (int)puVar20 - (int)param_1 >> 2;
  }
  return bVar25;
}

