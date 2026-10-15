/*
 * FUN_1001a108 at 1001a108
 * undefined FUN_1001a108(void)
 * Address ranges: 1001a108-1001aa7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001a108(undefined8 param_1,uint *param_2,int param_3)

{
  short *psVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  undefined2 uVar8;
  ushort uVar9;
  int iVar10;
  int extraout_w1;
  uint extraout_w1_00;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte bVar18;
  byte bVar19;
  undefined1 uVar20;
  int iVar21;
  uint uVar22;
  undefined4 uVar23;
  ulonglong uVar24;
  int iVar25;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  ushort *extraout_w10_02;
  int extraout_w11;
  uint extraout_w12;
  int extraout_w14;
  undefined1 extraout_w15;
  uint uVar26;
  uint uVar27;
  uint auStack_c4 [33];
  
  uVar24 = (ulonglong)*(uint *)(param_3 + 0x4a68) * 0x14;
  uVar23 = (undefined4)uVar24;
  if (uVar24 >> 0x20 != 0) {
    uVar23 = 0xffffffff;
  }
  iVar10 = FUN_101322b0(uVar23);
  if (iVar10 == 0) {
    return 0;
  }
  FUN_101325d0(iVar10,0,((ulonglong)(uint)(*(int *)(param_3 + 0x4a68) * 5) & 0x3fffffff) << 2);
  auStack_c4[1] = 0;
  bVar5 = *(byte *)(param_3 + 0x4a6c);
  uVar27 = 0;
  uVar26 = 0;
switchD_1001a1b8_caseD_0:
  param_2 = param_2 + 1;
LAB_1001a190:
  uVar12 = *param_2;
  iVar25 = 0;
  iVar21 = 0;
  bVar7 = true;
  uVar11 = uVar12 & 0xffff;
  switch(uVar11) {
  case 0:
    goto switchD_1001a1b8_caseD_0;
  case 1:
  case 6:
  case 7:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x13:
  case 0x23:
  case 0x24:
  case 0x2e:
  case 0x4e:
  case 0x4f:
    iVar21 = 1;
    break;
  case 2:
  case 5:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0x11:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x20:
  case 0x21:
  case 0x5e:
  case 0x5f:
    iVar21 = 2;
    break;
  case 3:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x50:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
    break;
  case 4:
  case 0x12:
  case 0x22:
    iVar21 = 3;
    break;
  case 0x19:
    iVar25 = iVar10 + uVar26 * 0x14;
    *(undefined8 *)(iVar25 + 4) = 0;
    *(undefined4 *)(iVar25 + 0xc) = 0;
    *(ushort *)(iVar25 + 0x10) = (ushort)param_2[1] & 0x7ff;
    *(undefined2 *)(iVar25 + 0x12) = 0xffff;
    goto LAB_1001a230;
  case 0x1a:
    iVar21 = iVar10 + uVar26 * 0x14;
    *(undefined8 *)(iVar21 + 4) = 0;
    *(uint *)(iVar21 + 0xc) = 0;
    psVar1 = (short *)(iVar21 + 0x12);
    *(ushort *)(iVar21 + 0x10) = (ushort)param_2[1] & 0x7ff;
    *psVar1 = -1;
    uVar22 = param_2[2];
    uVar6 = (uVar22 & 0x1800 | uVar22 >> 0x14 & 0x7ff) >> 8;
    if (uVar6 == 0xe) {
      *psVar1 = ((ushort)uVar22 & 0x7ff) + 0x43b;
    }
    else if (uVar6 == 0x13) {
      *psVar1 = 0x42a;
      *(undefined1 *)(iVar21 + 3) = 1;
    }
    *(uint *)(iVar21 + 0xc) = (uint)*(byte *)((int)param_2 + 10);
    *(bool *)(iVar21 + 1) = (param_2[2] & 0xf000000) == 0xd000000;
    iVar21 = 0;
    goto LAB_1001a2ec;
  case 0x1b:
    iVar21 = iVar10 + uVar26 * 0x14;
    *(undefined4 *)(iVar21 + 4) = 0;
    auStack_c4[uVar27 + 1] = uVar26;
    uVar27 = uVar27 + 1 & 0xff;
    *(ushort *)(iVar21 + 0x10) = ((ushort)param_2[2] & 0x7ff) + 0x42b;
    *(undefined2 *)(iVar21 + 0x12) = 0;
    *(undefined8 *)(iVar21 + 8) = 0;
    goto LAB_1001a428;
  case 0x1c:
    goto switchD_1001a1b8_caseD_1c;
  case 0x1d:
    uVar22 = auStack_c4[uVar27];
    uVar6 = uVar26;
    while (uVar6 = uVar6 - 1, uVar22 < uVar6) {
      pbVar3 = (byte *)(iVar10 + uVar6 * 0x14);
      bVar19 = *pbVar3 & 0x7f;
      if (bVar19 == 0x27 || bVar19 == 0x1d) break;
      if ((byte)(bVar19 - 0x2c) < 2 || bVar19 == 0x60) {
        *(uint *)(pbVar3 + 4) = uVar26;
      }
    }
    goto LAB_1001a620;
  case 0x1e:
    uVar22 = param_2[1];
    for (uVar6 = uVar26; uVar6 != 0; uVar6 = uVar6 - 1) {
      pbVar3 = (byte *)(iVar10 + uVar6 * 0x14);
      if (((byte)((*pbVar3 & 0x7f) - 0x19) < 2) &&
         ((uint)*(ushort *)(pbVar3 + 0x10) == (uVar22 & 0x7ff))) {
        *(uint *)(pbVar3 + 4) = uVar26;
      }
    }
    *(short *)(iVar10 + uVar26 * 0x14 + 0x10) = (short)(uVar22 & 0x7ff);
    goto LAB_1001a238;
  case 0x1f:
  case 0x2f:
    param_2 = param_2 + 3;
    goto LAB_1001a190;
  case 0x25:
    iVar21 = 1;
    if (bVar5 < 3) {
      iVar21 = 3;
    }
    break;
  case 0x26:
    iVar25 = iVar10 + uVar26 * 0x14;
    *(undefined4 *)(iVar25 + 4) = 0;
    auStack_c4[uVar27 + 1] = uVar26;
    uVar27 = uVar27 + 1 & 0xff;
    *(ushort *)(iVar25 + 0x10) = ((ushort)param_2[1] & 0x7ff) + 0x42b;
    *(undefined2 *)(iVar25 + 0x12) = 0;
    *(undefined8 *)(iVar25 + 8) = 0;
LAB_1001a230:
    *(undefined1 *)(iVar25 + 1) = 0;
LAB_1001a238:
    bVar7 = false;
    param_2 = param_2 + 2;
    break;
  case 0x27:
    uVar22 = auStack_c4[uVar27];
    uVar6 = uVar26;
    while (uVar6 = uVar6 - 1, uVar22 < uVar6) {
      pbVar3 = (byte *)(iVar10 + uVar6 * 0x14);
      bVar19 = *pbVar3 & 0x7f;
      if (bVar19 == 0x27 || bVar19 == 0x1d) break;
      if ((byte)(bVar19 - 0x2c) < 2 || bVar19 == 0x60) {
        *(uint *)(pbVar3 + 4) = uVar26;
      }
    }
LAB_1001a620:
    uVar27 = uVar27 + 0xff & 0xff;
    uVar22 = auStack_c4[uVar27 + 1];
    *(uint *)(iVar10 + uVar22 * 0x14 + 4) = uVar26;
    *(uint *)(iVar10 + uVar26 * 0x14 + 4) = uVar22;
    goto switchD_1001a1b8_caseD_1c;
  case 0x28:
    iVar25 = iVar10 + uVar26 * 0x14;
    *(undefined4 *)(iVar25 + 4) = 0;
    psVar1 = (short *)(iVar25 + 0x10);
    auStack_c4[uVar27 + 1] = uVar26;
    uVar27 = uVar27 + 1 & 0xff;
    psVar1[0] = -1;
    psVar1[1] = -1;
    uVar22 = param_2[1];
    uVar6 = (uVar22 & 0x1800 | uVar22 >> 0x14 & 0x7ff) >> 8;
    if (uVar6 == 0xe) {
      *psVar1 = ((ushort)uVar22 & 0x7ff) + 0x43b;
    }
    else if (uVar6 == 0x13) {
      *psVar1 = 0x42a;
      *(undefined1 *)(iVar25 + 3) = 1;
    }
    *(uint *)(iVar25 + 8) = (uint)*(byte *)((int)param_2 + 6);
    *(undefined4 *)(iVar25 + 0xc) = 0;
    uVar22 = param_2[1];
    goto LAB_1001a390;
  case 0x29:
    *(undefined4 *)(iVar10 + uVar26 * 0x14 + 4) = 0;
    auStack_c4[uVar27 + 1] = uVar26;
    uVar27 = uVar27 + 1 & 0xff;
    goto LAB_1001a3cc;
  case 0x2a:
    auStack_c4[uVar27 + 1] = uVar26;
    uVar22 = auStack_c4[uVar27];
    auStack_c4[uVar27] = uVar26;
    *(uint *)(iVar10 + uVar22 * 0x14 + 4) = uVar26;
    goto switchD_1001a1b8_caseD_1c;
  case 0x2b:
    uVar27 = uVar27 + 0xff & 0xff;
    *(uint *)(iVar10 + auStack_c4[uVar27 + 1] * 0x14 + 4) = uVar26;
    goto switchD_1001a1b8_caseD_1c;
  case 0x2c:
    iVar25 = iVar10 + uVar26 * 0x14;
    *(undefined8 *)(iVar25 + 4) = 0;
    *(undefined8 *)(iVar25 + 0xc) = 0xffffffff00000000;
    *(undefined1 *)(iVar25 + 1) = 0;
switchD_1001a1b8_caseD_1c:
    bVar7 = false;
    param_2 = param_2 + 1;
    break;
  case 0x2d:
    *(undefined4 *)(iVar10 + uVar26 * 0x14 + 4) = 0;
LAB_1001a3cc:
    uVar8 = FUN_1001a070(param_2[1]);
    *(undefined2 *)(extraout_w10 + 0x10) = uVar8;
    uVar8 = FUN_1001a070(param_2[2]);
    *(undefined2 *)(extraout_w10_00 + 0x12) = uVar8;
    *(uint *)(extraout_w10_00 + 8) = (uint)*(byte *)((int)param_2 + 6);
    *(uint *)(extraout_w10_00 + 0xc) = (uint)*(byte *)((int)param_2 + 10);
    *(byte *)(extraout_w10_00 + 2) = (byte)*(undefined2 *)((int)param_2 + 2) & 7;
    iVar21 = extraout_w10_00;
    iVar25 = extraout_w1;
LAB_1001a428:
    *(undefined1 *)(iVar21 + 1) = 0;
    iVar21 = iVar25;
LAB_1001a2ec:
    bVar7 = false;
    param_2 = param_2 + 3;
    break;
  case 0x30:
  case 0x51:
    param_2 = param_2 + 6;
    goto LAB_1001a190;
  case 0x60:
    iVar25 = iVar10 + uVar26 * 0x14;
    *(undefined4 *)(iVar25 + 4) = 0;
    *(undefined4 *)(iVar25 + 0x10) = 0xffff042a;
    *(uint *)(iVar25 + 8) = (uint)*(byte *)((int)param_2 + 6);
    *(undefined4 *)(iVar25 + 0xc) = 0;
    *(undefined1 *)(iVar25 + 2) = 0;
    uVar22 = param_2[1];
LAB_1001a390:
    *(bool *)(iVar25 + 1) = (uVar22 & 0xf000000) == 0xd000000;
    goto LAB_1001a238;
  default:
    if (uVar11 != 0xfffe) {
      if (uVar11 == 0xffff) {
        *(undefined1 *)(iVar10 + uVar26 * 0x14) = 0xff;
        return iVar10;
      }
      break;
    }
    param_2 = param_2 + (uVar12 >> 0x10) + 1;
    goto LAB_1001a190;
  }
  uVar24 = (ulonglong)(uVar26 * 5);
  bVar18 = (byte)uVar12;
  pbVar3 = (byte *)(iVar10 + uVar26 * 0x14);
  *pbVar3 = bVar18;
  bVar19 = bVar18;
  if (((uVar12 & 0xff) == 0x4e) && (bVar19 = 0xe, *(byte *)(param_3 + 0x4a6c) < 2)) {
    bVar19 = bVar18;
  }
  *pbVar3 = bVar19;
  if (bVar7) {
    uVar22 = param_2[1];
    pbVar2 = pbVar3 + 0x13;
    uVar6 = uVar22 >> 0xd & 1;
    if ((uVar12 >> 0x1c & 1) == 0) {
      *pbVar2 = 0xc3;
      uVar14 = uVar6;
    }
    else {
      bVar19 = (byte)*(undefined2 *)((int)param_2 + 10);
      *pbVar2 = bVar19;
      if ((param_2[uVar6 + 2] & 0xf000000) == 0xd000000) {
        *pbVar2 = bVar19 + 1;
      }
      uVar14 = uVar6 + 1;
    }
    uVar16 = ZEXT48(param_2 + 2);
    uVar15 = (ulonglong)uVar14;
    if (uVar11 == 0x5e) {
      pbVar3[9] = (byte)(uVar12 >> 0x10) & 7;
    }
    uVar11 = 0;
    uVar12 = 0;
    if (iVar21 != 0) {
      uVar17 = (ulonglong)(iVar10 + uVar26 * 0x14 + 0xd);
      uVar13 = (ulonglong)(iVar10 + uVar26 * 0x14 + 7);
      do {
        uVar8 = FUN_1001a070(*(undefined4 *)((int)uVar16 + (uVar11 + (int)uVar15) * 4));
        uVar12 = extraout_w12 & 0xf000000;
        *(undefined2 *)(extraout_w11 + uVar11 * 2) = uVar8;
        puVar4 = (undefined1 *)(uVar11 + extraout_w10_01);
        if (uVar12 == 0x1000000) {
          *puVar4 = extraout_w15;
        }
        else if (uVar12 == 0xb000000) {
          *puVar4 = 2;
        }
        else {
          uVar20 = 0;
          if (uVar12 == 0xc000000) {
            uVar20 = 3;
          }
          *puVar4 = uVar20;
        }
        pbVar3 = (byte *)(uVar11 + (int)uVar17);
        if (bVar5 < 2) {
          *pbVar3 = (byte)(extraout_w12 >> 0xd) & 1;
        }
        else {
          *pbVar3 = 0;
          if ((extraout_w12 >> 0xd & 1) != 0) {
            uVar12 = param_2[extraout_w14 + 3];
            uVar14 = (uVar12 & 0x1800 | uVar12 >> 0x14 & 0x7ff) >> 8;
            iVar21 = (int)uVar24;
            if (uVar14 == 3) {
              uVar12 = uVar12 & 0xff0000;
              if (uVar12 < 0xaa0000) {
                if (uVar12 == 0) {
                  *(undefined1 *)(uVar11 + iVar21 * 4 + iVar10 + 0xd) = extraout_w15;
                }
                else if (uVar12 == 0x550000) {
                  *(undefined1 *)(uVar11 + iVar21 * 4 + iVar10 + 0xd) = 2;
                }
              }
              else if (uVar12 < 0xaa0001) {
                *(undefined1 *)(uVar11 + iVar21 * 4 + iVar10 + 0xd) = 3;
              }
              else if (uVar12 == 0xff0000) {
                uVar20 = 4;
                goto LAB_1001a914;
              }
            }
            else if (uVar14 == 0xf) {
              uVar20 = 5;
LAB_1001a914:
              *(undefined1 *)(uVar11 + iVar21 * 4 + iVar10 + 0xd) = uVar20;
            }
            uVar15 = (ulonglong)((int)uVar15 + 1);
          }
        }
        uVar14 = (uint)uVar15;
        puVar4 = (undefined1 *)((int)uVar13 + uVar11);
        uVar11 = uVar11 + 1;
        *puVar4 = (char)(extraout_w12 >> 0x10);
        uVar12 = extraout_w1_00;
      } while (uVar11 < extraout_w1_00);
    }
    param_2 = param_2 + uVar14 + uVar12 + 2;
    if (uVar12 < 3) {
      FUN_101325d0(iVar10 + (uVar12 + uVar26 * 10) * 2 + 1,0xffff,(ulonglong)(3 - uVar12) << 1);
    }
    uVar9 = FUN_1001a070(uVar22);
    *extraout_w10_02 = uVar9;
    *(byte *)(iVar10 + uVar26 * 0x14 + 0x10) = (byte)(uVar22 >> 0x10) & 0xf;
    if ((2 < *(byte *)(param_3 + 0x4a6c)) && ((uVar22 & 0x1800 | uVar22 >> 0x14 & 0x700) == 0x600))
    {
      uVar9 = ((ushort)uVar22 & 0x7ff) + 0x44d;
      *extraout_w10_02 = uVar9;
      if (uVar6 != 0) {
        *extraout_w10_02 = uVar9 | 0x8000;
      }
    }
  }
  else {
    *pbVar3 = bVar19 | 0x80;
  }
  uVar26 = uVar26 + 1;
  goto LAB_1001a190;
}

