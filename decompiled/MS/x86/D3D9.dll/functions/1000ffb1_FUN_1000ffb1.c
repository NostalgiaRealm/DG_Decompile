/*
 * FUN_1000ffb1 at 1000ffb1
 * int * __stdcall FUN_1000ffb1(uint * param_1, int param_2)
 * Address ranges: 1000ffb1-100107ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1000ffb1(uint *param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  SIZE_T SVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint local_bc [32];
  uint local_3c;
  int *local_38;
  byte *local_34;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  uint local_1c;
  uint local_18;
  byte local_11;
  uint local_10;
  uint local_c;
  byte local_5;
  uint3 uVar9;
  
  lVar1 = (ulonglong)*(uint *)(param_2 + 0x4a68) * 0x14;
  SVar5 = (SIZE_T)lVar1;
  if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
    SVar5 = 0xffffffff;
  }
  piVar6 = (int *)FUN_100cfd89(SVar5);
  if (piVar6 != (int *)0x0) {
    local_38 = piVar6;
    FUN_100cfed0(piVar6,0,*(int *)(param_2 + 0x4a68) * 0x14);
    puVar15 = param_1 + 1;
    local_11 = *(byte *)(param_2 + 0x4a6c);
    uVar11 = 0;
    local_5 = 0;
    local_bc[0] = 0;
    local_10 = 0;
    local_2c = 0x7ff;
    iVar12 = 0;
    param_1 = puVar15;
LAB_10010025:
    local_18 = *puVar15;
    uVar9 = (uint3)((uint)iVar12 >> 8);
    iVar8 = CONCAT31(uVar9,1);
    bVar2 = true;
    local_c = 0;
    local_1c = local_18 >> 0x1c & 0xffffff01;
    local_24 = local_18 & 0xffff;
    if (local_24 < 0xffff) {
      if (local_24 == 0xfffe) {
        puVar15 = puVar15 + (local_18 >> 0x10);
switchD_10010076_caseD_0:
        puVar15 = puVar15 + 1;
        iVar12 = iVar8;
        param_1 = puVar15;
        goto LAB_10010025;
      }
      if (local_24 < 0x1d) {
        if (local_24 == 0x1c) goto LAB_100101c0;
        switch(local_24) {
        case 0:
          goto switchD_10010076_caseD_0;
        case 1:
        case 6:
        case 7:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x13:
          goto switchD_10010076_caseD_1;
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
          local_c = 2;
          break;
        case 4:
        case 0x12:
switchD_10010076_caseD_4:
          local_c = 3;
          break;
        case 0x19:
          piVar6[uVar11 * 5 + 1] = 0;
          piVar6[uVar11 * 5 + 2] = 0;
          piVar6[uVar11 * 5 + 3] = 0;
          *(ushort *)(piVar6 + uVar11 * 5 + 4) = (ushort)puVar15[1] & (ushort)local_2c;
          *(undefined2 *)((int)piVar6 + uVar11 * 0x14 + 0x12) = 0xffff;
          *(undefined1 *)((int)piVar6 + uVar11 * 0x14 + 1) = 0;
          goto LAB_100100c8;
        case 0x1a:
          iVar12 = uVar11 * 0x14;
          piVar6[uVar11 * 5 + 1] = 0;
          piVar6[uVar11 * 5 + 2] = 0;
          piVar6[uVar11 * 5 + 3] = 0;
          *(ushort *)(piVar6 + uVar11 * 5 + 4) = (ushort)puVar15[1] & 0x7ff;
          *(undefined2 *)((int)piVar6 + iVar12 + 0x12) = 0xffff;
          uVar7 = (puVar15[2] >> 0x14 & 0x700 | puVar15[2] & 0x1800) >> 8;
          if (uVar7 == 0xe) {
            *(ushort *)((int)piVar6 + iVar12 + 0x12) = ((ushort)puVar15[2] & 0x7ff) + 0x43b;
          }
          else if (uVar7 == 0x13) {
            *(undefined2 *)((int)piVar6 + iVar12 + 0x12) = 0x42a;
            *(undefined1 *)((int)piVar6 + iVar12 + 3) = 1;
          }
          piVar6[uVar11 * 5 + 3] = (uint)*(byte *)((int)puVar15 + 10);
          *(bool *)((int)piVar6 + iVar12 + 1) = (puVar15[2] & 0xf000000) == 0xd000000;
          goto LAB_10010169;
        case 0x1b:
          uVar7 = (uint)local_5;
          local_5 = local_5 + 1;
          local_bc[uVar7] = uVar11;
          piVar6[uVar11 * 5 + 1] = 0;
          *(ushort *)(piVar6 + uVar11 * 5 + 4) = ((ushort)puVar15[2] & 0x7ff) + 0x42b;
          *(undefined2 *)((int)piVar6 + uVar11 * 0x14 + 0x12) = 0;
          piVar6[uVar11 * 5 + 2] = 0;
          piVar6[uVar11 * 5 + 3] = 0;
          *(undefined1 *)((int)piVar6 + uVar11 * 0x14 + 1) = 0;
LAB_10010169:
          puVar15 = puVar15 + 3;
          goto LAB_100100cb;
        }
        goto switchD_10010076_caseD_3;
      }
      if (local_24 < 0x2b) {
        if (local_24 == 0x2a) {
          uVar7 = local_bc[uVar9 - 1];
          local_bc[uVar9 - 1] = uVar11;
          local_bc[uVar9] = uVar11;
          piVar6[uVar7 * 5 + 1] = uVar11;
          goto LAB_100101c0;
        }
        switch(local_24) {
        case 0x1d:
          uVar7 = local_bc[local_5 - 1];
          while (((uVar11 = uVar11 - 1, uVar7 < uVar11 &&
                  (bVar3 = *(byte *)(piVar6 + uVar11 * 5) & 0x7f, puVar15 = param_1, bVar3 != 0x1d))
                 && (bVar3 != 0x27))) {
            if (((bVar3 == 0x2c) || (bVar3 == 0x2d)) || (bVar3 == 0x60)) {
              piVar6[uVar11 * 5 + 1] = local_10;
            }
          }
          goto LAB_10010392;
        case 0x1e:
          uVar7 = puVar15[1];
          uVar10 = local_10;
          while (uVar10 != 0) {
            if ((((*(byte *)(piVar6 + uVar11 * 5) & 0x7f) == 0x19) ||
                ((*(byte *)(piVar6 + uVar11 * 5) & 0x7f) == 0x1a)) &&
               ((uint)*(ushort *)(piVar6 + uVar11 * 5 + 4) == (uVar7 & 0x7ff))) {
              piVar6[uVar11 * 5 + 1] = local_10;
            }
            uVar11 = uVar11 - 1;
            puVar15 = param_1;
            uVar10 = uVar11;
          }
          *(short *)(piVar6 + local_10 * 5 + 4) = (short)(uVar7 & 0x7ff);
          uVar11 = local_10;
          goto LAB_100100c8;
        case 0x1f:
switchD_100101e3_caseD_1f:
          puVar15 = puVar15 + 3;
          iVar12 = iVar8;
          param_1 = puVar15;
          goto LAB_10010025;
        case 0x20:
        case 0x21:
LAB_1001053b:
          local_c = 2;
          break;
        case 0x22:
          goto switchD_10010076_caseD_4;
        case 0x23:
        case 0x24:
          goto switchD_10010076_caseD_1;
        case 0x25:
          local_c = (-(uint)(local_11 < 3) & 2) + 1;
          break;
        case 0x26:
          uVar7 = (uint)local_5;
          local_5 = local_5 + 1;
          local_bc[uVar7] = uVar11;
          piVar6[uVar11 * 5 + 1] = 0;
          *(ushort *)(piVar6 + uVar11 * 5 + 4) = ((ushort)puVar15[1] & 0x7ff) + 0x42b;
          *(undefined2 *)((int)piVar6 + uVar11 * 0x14 + 0x12) = 0;
          piVar6[uVar11 * 5 + 2] = 0;
          piVar6[uVar11 * 5 + 3] = 0;
          *(undefined1 *)((int)piVar6 + uVar11 * 0x14 + 1) = 0;
          goto LAB_100100c8;
        case 0x27:
          uVar7 = local_bc[local_5 - 1];
          while (((uVar11 = uVar11 - 1, uVar7 < uVar11 &&
                  (bVar3 = *(byte *)(piVar6 + uVar11 * 5) & 0x7f, puVar15 = param_1, bVar3 != 0x1d))
                 && (bVar3 != 0x27))) {
            if (((bVar3 == 0x2c) || (bVar3 == 0x2d)) || (bVar3 == 0x60)) {
              piVar6[uVar11 * 5 + 1] = local_10;
            }
          }
LAB_10010392:
          local_5 = local_5 - 1;
          uVar11 = local_bc[local_5];
          piVar6[uVar11 * 5 + 1] = local_10;
          piVar6[local_10 * 5 + 1] = uVar11;
          uVar11 = local_10;
LAB_100101c0:
          puVar15 = puVar15 + 1;
          goto LAB_100100cb;
        case 0x28:
          uVar7 = (uint)local_5;
          local_5 = local_5 + 1;
          local_bc[uVar7] = uVar11;
          piVar6[uVar11 * 5 + 1] = 0;
          piVar6[uVar11 * 5 + 4] = -1;
          uVar7 = (puVar15[1] >> 0x14 & 0x700 | puVar15[1] & 0x1800) >> 8;
          if (uVar7 == 0xe) {
            *(ushort *)(piVar6 + uVar11 * 5 + 4) = ((ushort)puVar15[1] & 0x7ff) + 0x43b;
          }
          else if (uVar7 == 0x13) {
            *(undefined2 *)(piVar6 + uVar11 * 5 + 4) = 0x42a;
            *(undefined1 *)((int)piVar6 + uVar11 * 0x14 + 3) = 1;
          }
          piVar6[uVar11 * 5 + 2] = (uint)*(byte *)((int)puVar15 + 6);
          piVar6[uVar11 * 5 + 3] = 0;
          *(bool *)((int)piVar6 + uVar11 * 0x14 + 1) = (puVar15[1] & 0xf000000) == 0xd000000;
LAB_100100c8:
          puVar15 = puVar15 + 2;
LAB_100100cb:
          bVar2 = false;
          param_1 = puVar15;
          break;
        case 0x29:
          local_5 = local_5 + 1;
          local_bc[uVar9] = local_10;
LAB_100102b3:
          iVar12 = uVar11 * 0x14;
          piVar6[uVar11 * 5 + 1] = 0;
          uVar7 = FUN_1000fe27(puVar15[1]);
          *(short *)(piVar6 + uVar11 * 5 + 4) = (short)uVar7;
          uVar7 = FUN_1000fe27(puVar15[2]);
          *(short *)((int)piVar6 + iVar12 + 0x12) = (short)uVar7;
          bVar2 = false;
          piVar6[uVar11 * 5 + 2] = (uint)*(byte *)((int)puVar15 + 6);
          piVar6[uVar11 * 5 + 3] = (uint)*(byte *)((int)puVar15 + 10);
          uVar11 = *puVar15;
          puVar15 = puVar15 + 3;
          *(byte *)((int)piVar6 + iVar12 + 2) = (byte)(uVar11 >> 0x10) & 7;
          *(undefined1 *)((int)piVar6 + iVar12 + 1) = 0;
          uVar11 = local_10;
          param_1 = puVar15;
        }
switchD_10010076_caseD_3:
        bVar3 = (byte)local_18;
        pbVar14 = (byte *)(piVar6 + uVar11 * 5);
        local_34 = pbVar14;
        *pbVar14 = bVar3;
        if ((bVar3 == 0x4e) && (1 < *(byte *)(param_2 + 0x4a6c))) {
          *pbVar14 = 0xe;
          bVar3 = 0xe;
        }
        if (bVar2) {
          local_28 = puVar15[1];
          local_3c = local_28 >> 0xd & 0xffffff01;
          param_1 = (uint *)(local_28 >> 0xd & 1);
          if ((char)local_1c == '\0') {
            pbVar14[0x13] = 0xc3;
          }
          else {
            bVar3 = (byte)(puVar15[2] >> 0x10);
            pbVar14[0x13] = bVar3;
            if ((puVar15[(int)param_1 + 2] & 0xf000000) == 0xd000000) {
              pbVar14[0x13] = bVar3 + 1;
            }
            param_1 = (uint *)((int)param_1 + 1);
          }
          if (local_24 == 0x5e) {
            pbVar14[9] = (byte)(local_18 >> 0x10) & 7;
          }
          local_1c = local_10 * 10;
          local_24 = 0;
          if (local_c != 0) {
            local_30 = piVar6 + local_10 * 5;
            uVar11 = 0;
            pbVar13 = pbVar14;
            do {
              local_18 = puVar15[(int)param_1 + uVar11 + 2];
              uVar7 = FUN_1000fe27(local_18);
              *(short *)((int)local_30 + uVar11 * 2 + 1) = (short)uVar7;
              uVar7 = local_18 & 0xf000000;
              if (uVar7 == 0x1000000) {
                pbVar13[uVar11 + 10] = 1;
              }
              else if (uVar7 == 0xb000000) {
                pbVar13[uVar11 + 10] = 2;
              }
              else if (uVar7 == 0xc000000) {
                pbVar13[uVar11 + 10] = 3;
              }
              else {
                pbVar13[uVar11 + 10] = 0;
              }
              pbVar14 = pbVar13;
              if (local_11 < 2) {
                pbVar13[uVar11 + 0xd] = (byte)(local_18 >> 0xd) & 1;
              }
              else {
                pbVar13[uVar11 + 0xd] = 0;
                if ((local_18 & 0x2000) != 0) {
                  uVar7 = puVar15[(int)param_1 + uVar11 + 3];
                  uVar10 = (uVar7 >> 0x14 & 0x700 | uVar7 & 0x1800) >> 8;
                  if (uVar10 == 3) {
                    uVar7 = uVar7 & 0xff0000;
                    if (uVar7 == 0) {
                      pbVar13[uVar11 + 0xd] = 1;
                    }
                    else if (uVar7 == 0x550000) {
                      pbVar13[uVar11 + 0xd] = 2;
                    }
                    else if (uVar7 == 0xaa0000) {
                      pbVar13[uVar11 + 0xd] = 3;
                    }
                    else if (uVar7 == 0xff0000) {
                      pbVar13[uVar11 + 0xd] = 4;
                    }
                  }
                  else if (uVar10 == 0xf) {
                    pbVar13[uVar11 + 0xd] = 5;
                  }
                  param_1 = (uint *)((int)param_1 + 1);
                  pbVar14 = local_34;
                }
              }
              uVar7 = uVar11 + 1;
              pbVar13[uVar11 + 7] = (byte)(local_18 >> 0x10);
              piVar6 = local_38;
              uVar11 = uVar7;
              pbVar13 = pbVar14;
            } while (uVar7 < local_c);
          }
          puVar15 = puVar15 + (int)param_1 + local_c + 2;
          if (local_c < 3) {
            puVar16 = (undefined4 *)((int)piVar6 + (local_c * 2 | 1) + local_1c * 2);
            for (uVar11 = 3 - local_c >> 1; uVar11 != 0; uVar11 = uVar11 - 1) {
              *puVar16 = 0xffffffff;
              puVar16 = puVar16 + 1;
            }
            for (uVar11 = (uint)((3 - local_c & 1) != 0); uVar11 != 0; uVar11 = uVar11 - 1) {
              *(undefined2 *)puVar16 = 0xffff;
              puVar16 = (undefined4 *)((int)puVar16 + 2);
            }
          }
          uVar11 = FUN_1000fe27(local_28);
          *(short *)(pbVar14 + 0x11) = (short)uVar11;
          pbVar14[0x10] = (byte)(local_28 >> 0x10) & 0xf;
          param_1 = puVar15;
          if ((2 < *(byte *)(param_2 + 0x4a6c)) &&
             (((byte)(local_28 >> 0x1c) & 7 | (byte)(local_28 >> 8) & 0x18) == 6)) {
            uVar4 = ((ushort)local_28 & 0x7ff) + 0x44d;
            *(ushort *)(pbVar14 + 0x11) = uVar4;
            if ((char)local_3c != '\0') {
              *(ushort *)(pbVar14 + 0x11) = uVar4 | 0x8000;
            }
          }
        }
        else {
          *pbVar14 = bVar3 | 0x80;
        }
        uVar11 = local_10 + 1;
        local_10 = uVar11;
        iVar12 = (uint)local_5 << 8;
        goto LAB_10010025;
      }
      if (local_24 < 0x4f) {
        if (local_24 == 0x4e) goto switchD_10010076_caseD_1;
        if (local_24 == 0x2b) {
          local_5 = (char)((uint)iVar12 >> 8) - 1;
          piVar6[local_bc[local_5] * 5 + 1] = uVar11;
        }
        else {
          if (local_24 != 0x2c) {
            if (local_24 == 0x2d) goto LAB_100102b3;
            if (local_24 != 0x2e) {
              if (local_24 == 0x2f) goto switchD_100101e3_caseD_1f;
              if (local_24 != 0x30) goto switchD_10010076_caseD_3;
              goto LAB_1001048c;
            }
            goto switchD_10010076_caseD_1;
          }
          piVar6[uVar11 * 5 + 1] = 0;
          piVar6[uVar11 * 5 + 2] = 0;
          piVar6[uVar11 * 5 + 3] = 0;
          piVar6[uVar11 * 5 + 4] = -1;
          *(undefined1 *)((int)piVar6 + uVar11 * 0x14 + 1) = 0;
        }
        goto LAB_100101c0;
      }
      if (local_24 == 0x4f) {
switchD_10010076_caseD_1:
        local_c = 1;
        goto switchD_10010076_caseD_3;
      }
      if (local_24 != 0x51) {
        if ((local_24 == 0x5e) || (local_24 == 0x5f)) goto LAB_1001053b;
        if (local_24 == 0x60) {
          piVar6[uVar11 * 5 + 1] = 0;
          piVar6[uVar11 * 5 + 4] = -0xfbd6;
          piVar6[uVar11 * 5 + 2] = (uint)*(byte *)((int)puVar15 + 6);
          piVar6[uVar11 * 5 + 3] = 0;
          *(undefined1 *)((int)piVar6 + uVar11 * 0x14 + 2) = 0;
          *(bool *)((int)piVar6 + uVar11 * 0x14 + 1) = (puVar15[1] & 0xf000000) == 0xd000000;
          goto LAB_100100c8;
        }
        goto switchD_10010076_caseD_3;
      }
LAB_1001048c:
      puVar15 = puVar15 + 6;
      iVar12 = iVar8;
      param_1 = puVar15;
      goto LAB_10010025;
    }
    if (local_24 != 0xffff) goto switchD_10010076_caseD_3;
    *(undefined1 *)(piVar6 + uVar11 * 5) = 0xff;
  }
  return piVar6;
}

