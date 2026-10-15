/*
 * FUN_180012514 at 180012514
 * undefined1 * __fastcall FUN_180012514(undefined8 param_1, longlong param_2, longlong param_3)
 * Address ranges: 180012514-180012e74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 * FUN_180012514(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  uint *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  char cVar15;
  ushort uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong local_res8;
  uint local_d8;
  uint auStack_bc [33];
  
  auVar3 = ZEXT816(0x14) * ZEXT416(*(uint *)(param_3 + 0x4a68));
  uVar6 = auVar3._0_8_;
  if (auVar3._8_8_ != 0) {
    uVar6 = 0xffffffffffffffff;
  }
  puVar7 = (undefined1 *)thunk_FUN_1800fbccc(uVar6);
  if (puVar7 == (undefined1 *)0x0) {
    return (undefined1 *)0x0;
  }
  FUN_1800fbea0(puVar7,0,(ulonglong)*(uint *)(param_3 + 0x4a68) * 0x14);
  bVar2 = *(byte *)(param_3 + 0x4a6c);
  uVar6 = 3;
  puVar12 = (uint *)(param_2 + 4);
  local_res8 = 0;
  uVar11 = 0;
  auStack_bc[1] = 0;
  uVar17 = 0;
LAB_1800125c6:
  while( true ) {
    uVar22 = *puVar12;
    bVar4 = true;
    uVar18 = uVar22 & 0xffff;
    local_d8 = 0;
    uVar21 = (uint)uVar17;
    uVar20 = local_d8;
    if (0xfffe < uVar18) {
      if (uVar18 == 0xffff) {
        puVar7[uVar17 * 0x14] = 0xff;
        return puVar7;
      }
      goto LAB_180012bd4;
    }
    if (uVar18 != 0xfffe) break;
    puVar12 = puVar12 + ((uVar22 >> 0x10) + 1);
  }
  cVar15 = (char)uVar11;
  bVar5 = false;
  if (uVar18 < 0x1d) {
    if (uVar18 == 0x1c) goto LAB_1800128d8;
    if (0xe < uVar18) {
      if (uVar18 < 0x16) {
        if (uVar18 != 0x15) {
          if ((uVar18 != 0xf) && (uVar18 != 0x10)) {
            if (uVar18 == 0x11) goto LAB_180012661;
            if (uVar18 == 0x12) {
LAB_180012822:
              uVar20 = (uint)uVar6;
              goto LAB_180012bd4;
            }
            iVar19 = uVar18 - 0x13;
            if (iVar19 != 0) goto LAB_180012658;
          }
          goto LAB_18001262f;
        }
      }
      else if (((uVar18 != 0x16) && (uVar18 != 0x17)) && (uVar18 != 0x18)) {
        if (uVar18 == 0x19) {
          *(undefined8 *)(puVar7 + uVar17 * 0x14 + 4) = 0;
          *(undefined4 *)(puVar7 + uVar17 * 0x14 + 0xc) = 0;
          uVar16 = (ushort)puVar12[1] & 0x7ff;
          *(undefined2 *)(puVar7 + uVar17 * 0x14 + 0x12) = 0xffff;
LAB_1800127bf:
          *(ushort *)(puVar7 + uVar17 * 0x14 + 0x10) = uVar16;
          puVar7[uVar17 * 0x14 + 1] = 0;
          goto LAB_1800127c9;
        }
        if (uVar18 == 0x1a) {
          *(undefined8 *)(puVar7 + uVar17 * 0x14 + 4) = 0;
          *(undefined4 *)(puVar7 + uVar17 * 0x14 + 0xc) = 0;
          uVar20 = puVar12[1];
          *(undefined2 *)(puVar7 + uVar17 * 0x14 + 0x12) = 0xffff;
          *(ushort *)(puVar7 + uVar17 * 0x14 + 0x10) = (ushort)uVar20 & 0x7ff;
          uVar20 = (puVar12[2] >> 0x14 & 0x700 | puVar12[2] & 0x1800) >> 8;
          if (uVar20 == 0xe) {
            *(ushort *)(puVar7 + uVar17 * 0x14 + 0x12) = ((ushort)puVar12[2] & 0x7ff) + 0x43b;
          }
          else if (uVar20 == 0x13) {
            *(undefined2 *)(puVar7 + uVar17 * 0x14 + 0x12) = 0x42a;
            puVar7[uVar17 * 0x14 + 3] = 1;
          }
          *(uint *)(puVar7 + uVar17 * 0x14 + 0xc) = (uint)*(byte *)((longlong)puVar12 + 10);
          puVar7[uVar17 * 0x14 + 1] = (puVar12[2] & 0xf000000) == 0xd000000;
        }
        else {
          if (uVar18 != 0x1b) goto LAB_180012bd4;
          uVar8 = uVar11 & 0xff;
          uVar11 = (ulonglong)(byte)(cVar15 + 1U);
          *(undefined4 *)(puVar7 + uVar17 * 0x14 + 4) = 0;
          local_res8 = (ulonglong)(byte)(cVar15 + 1U);
          auStack_bc[uVar8 + 1] = uVar21;
          uVar20 = puVar12[2];
          *(undefined2 *)(puVar7 + uVar17 * 0x14 + 0x12) = 0;
          *(undefined8 *)(puVar7 + uVar17 * 0x14 + 8) = 0;
          *(ushort *)(puVar7 + uVar17 * 0x14 + 0x10) = ((ushort)uVar20 & 0x7ff) + 0x42b;
          puVar7[uVar17 * 0x14 + 1] = 0;
        }
LAB_180012705:
        puVar12 = puVar12 + 3;
        uVar20 = local_d8;
        bVar4 = bVar5;
        goto LAB_180012bd4;
      }
LAB_180012661:
      uVar20 = 2;
      goto LAB_180012bd4;
    }
    if (uVar18 == 0xe) goto LAB_18001262f;
    if (7 < uVar18) {
      if ((((uVar18 != 8) && (uVar18 != 9)) && (uVar18 != 10)) &&
         ((uVar18 != 0xb && (iVar19 = uVar18 - 0xc, iVar19 != 0)))) {
LAB_180012658:
        if (iVar19 != 1) goto LAB_180012bd4;
      }
      goto LAB_180012661;
    }
    if (uVar18 != 7) {
      if (uVar18 == 0) {
        puVar12 = puVar12 + 1;
        goto LAB_1800125c6;
      }
      if (uVar18 != 1) {
        if (uVar18 != 2) {
          if (uVar18 == 4) goto LAB_180012822;
          if (uVar18 != 5) {
            if (uVar18 != 6) goto LAB_180012bd4;
            goto LAB_18001262f;
          }
        }
        goto LAB_180012661;
      }
    }
  }
  else if (uVar18 < 0x2b) {
    if (uVar18 == 0x2a) {
      uVar8 = uVar11 & 0xff;
      uVar20 = auStack_bc[uVar8];
      auStack_bc[uVar8] = uVar21;
      auStack_bc[uVar8 + 1] = uVar21;
      *(uint *)(puVar7 + (ulonglong)uVar20 * 0x14 + 4) = uVar21;
      goto LAB_1800128d8;
    }
    if (uVar18 < 0x24) {
      if (uVar18 == 0x23) goto LAB_18001262f;
      if (uVar18 == 0x1d) {
        uVar20 = auStack_bc[uVar11 & 0xff];
        uVar10 = uVar21;
        while( true ) {
          uVar10 = uVar10 - 1;
          if (((uVar10 <= uVar20) ||
              (bVar9 = puVar7[(ulonglong)uVar10 * 0x14] & 0x7f, bVar9 == 0x1d)) || (bVar9 == 0x27))
          break;
          if (((byte)(bVar9 - 0x2c) < 2) || (bVar9 == 0x60)) {
            *(uint *)(puVar7 + (ulonglong)uVar10 * 0x14 + 4) = uVar21;
          }
        }
LAB_1800128b4:
        uVar11 = (ulonglong)(byte)(cVar15 - 1U);
        local_res8 = (ulonglong)(byte)(cVar15 - 1U);
        uVar20 = auStack_bc[uVar11 + 1];
        *(uint *)(puVar7 + (ulonglong)uVar20 * 0x14 + 4) = uVar21;
        *(uint *)(puVar7 + uVar17 * 0x14 + 4) = uVar20;
        goto LAB_1800128d8;
      }
      if (uVar18 == 0x1e) {
        uVar20 = puVar12[1];
        uVar8 = uVar17;
        uVar10 = uVar21;
        while (uVar10 != 0) {
          if (((byte)((puVar7[uVar8 * 0x14] & 0x7f) - 0x19) < 2) &&
             ((uint)*(ushort *)(puVar7 + uVar8 * 0x14 + 0x10) == (uVar20 & 0x7ff))) {
            *(uint *)(puVar7 + uVar8 * 0x14 + 4) = uVar21;
          }
          uVar10 = (int)uVar8 - 1;
          uVar8 = (ulonglong)uVar10;
        }
        *(short *)(puVar7 + uVar17 * 0x14 + 0x10) = (short)(uVar20 & 0x7ff);
LAB_1800127c9:
        puVar12 = puVar12 + 2;
        uVar20 = local_d8;
        bVar4 = bVar5;
      }
      else {
        if (uVar18 == 0x1f) {
LAB_18001282e:
          puVar12 = puVar12 + 3;
          goto LAB_1800125c6;
        }
        if ((uVar18 == 0x20) || (uVar18 == 0x21)) goto LAB_180012661;
        if (uVar18 == 0x22) goto LAB_180012822;
      }
      goto LAB_180012bd4;
    }
    if (uVar18 != 0x24) {
      uVar20 = (-(uint)(bVar2 < 3) & 2) + 1;
      if (uVar18 != 0x25) {
        if (uVar18 == 0x26) {
          uVar8 = uVar11 & 0xff;
          uVar11 = (ulonglong)(byte)(cVar15 + 1U);
          *(undefined4 *)(puVar7 + uVar17 * 0x14 + 4) = 0;
          local_res8 = (ulonglong)(byte)(cVar15 + 1U);
          auStack_bc[uVar8 + 1] = uVar21;
          uVar20 = puVar12[1];
          *(undefined2 *)(puVar7 + uVar17 * 0x14 + 0x12) = 0;
          uVar16 = ((ushort)uVar20 & 0x7ff) + 0x42b;
          *(undefined8 *)(puVar7 + uVar17 * 0x14 + 8) = 0;
          goto LAB_1800127bf;
        }
        if (uVar18 == 0x27) {
          uVar20 = auStack_bc[uVar11 & 0xff];
          uVar10 = uVar21;
          while( true ) {
            uVar10 = uVar10 - 1;
            if (((uVar10 <= uVar20) ||
                (bVar9 = puVar7[(ulonglong)uVar10 * 0x14] & 0x7f, bVar9 == 0x1d)) || (bVar9 == 0x27)
               ) break;
            if (((byte)(bVar9 - 0x2c) < 2) || (bVar9 == 0x60)) {
              *(uint *)(puVar7 + (ulonglong)uVar10 * 0x14 + 4) = uVar21;
            }
          }
          goto LAB_1800128b4;
        }
        if (uVar18 == 0x28) {
          uVar8 = uVar11 & 0xff;
          uVar11 = (ulonglong)(byte)(cVar15 + 1U);
          *(undefined4 *)(puVar7 + uVar17 * 0x14 + 4) = 0;
          *(undefined4 *)(puVar7 + uVar17 * 0x14 + 0x10) = 0xffffffff;
          local_res8 = (ulonglong)(byte)(cVar15 + 1U);
          auStack_bc[uVar8 + 1] = uVar21;
          uVar20 = (puVar12[1] >> 0x14 & 0x700 | puVar12[1] & 0x1800) >> 8;
          if (uVar20 == 0xe) {
            *(ushort *)(puVar7 + uVar17 * 0x14 + 0x10) = ((ushort)puVar12[1] & 0x7ff) + 0x43b;
          }
          else if (uVar20 == 0x13) {
            *(undefined2 *)(puVar7 + uVar17 * 0x14 + 0x10) = 0x42a;
            puVar7[uVar17 * 0x14 + 3] = 1;
          }
          *(uint *)(puVar7 + uVar17 * 0x14 + 8) = (uint)*(byte *)((longlong)puVar12 + 6);
          *(undefined4 *)(puVar7 + uVar17 * 0x14 + 0xc) = 0;
          puVar7[uVar17 * 0x14 + 1] = (puVar12[1] & 0xf000000) == 0xd000000;
          goto LAB_1800127c9;
        }
        uVar20 = local_d8;
        if (uVar18 == 0x29) {
          uVar8 = uVar11 & 0xff;
          uVar11 = (ulonglong)(byte)(cVar15 + 1U);
          local_res8 = (ulonglong)(byte)(cVar15 + 1U);
          auStack_bc[uVar8 + 1] = uVar21;
          goto LAB_180012930;
        }
      }
      goto LAB_180012bd4;
    }
  }
  else {
    if (0x4e < uVar18) {
      if (uVar18 == 0x4f) goto LAB_18001262f;
      if (uVar18 != 0x51) {
        if ((uVar18 == 0x5e) || (uVar18 == 0x5f)) goto LAB_180012661;
        if (uVar18 == 0x60) {
          *(undefined4 *)(puVar7 + uVar17 * 0x14 + 4) = 0;
          *(undefined4 *)(puVar7 + uVar17 * 0x14 + 0x10) = 0xffff042a;
          *(uint *)(puVar7 + uVar17 * 0x14 + 8) = (uint)*(byte *)((longlong)puVar12 + 6);
          *(undefined4 *)(puVar7 + uVar17 * 0x14 + 0xc) = 0;
          puVar7[uVar17 * 0x14 + 2] = 0;
          puVar1 = puVar12 + 1;
          puVar12 = puVar12 + 2;
          puVar7[uVar17 * 0x14 + 1] = (*puVar1 & 0xf000000) == 0xd000000;
          bVar4 = bVar5;
        }
        goto LAB_180012bd4;
      }
LAB_180012af0:
      puVar12 = puVar12 + 6;
      goto LAB_1800125c6;
    }
    if (uVar18 != 0x4e) {
      if (uVar18 == 0x2b) {
        uVar11 = (ulonglong)(byte)(cVar15 - 1U);
        local_res8 = (ulonglong)(byte)(cVar15 - 1U);
        *(uint *)(puVar7 + (ulonglong)auStack_bc[uVar11 + 1] * 0x14 + 4) = uVar21;
      }
      else {
        if (uVar18 != 0x2c) {
          if (uVar18 == 0x2d) {
LAB_180012930:
            *(undefined4 *)(puVar7 + uVar17 * 0x14 + 4) = 0;
            uVar20 = FUN_1800123a4(puVar12[1]);
            *(short *)(puVar7 + uVar17 * 0x14 + 0x10) = (short)uVar20;
            uVar20 = FUN_1800123a4(puVar12[2]);
            *(short *)(puVar7 + uVar17 * 0x14 + 0x12) = (short)uVar20;
            *(uint *)(puVar7 + uVar17 * 0x14 + 8) = (uint)*(byte *)((longlong)puVar12 + 6);
            *(uint *)(puVar7 + uVar17 * 0x14 + 0xc) = (uint)*(byte *)((longlong)puVar12 + 10);
            puVar7[uVar17 * 0x14 + 2] = (byte)(*puVar12 >> 0x10) & 7;
            puVar7[uVar17 * 0x14 + 1] = 0;
            goto LAB_180012705;
          }
          if (uVar18 != 0x2e) {
            if (uVar18 == 0x2f) goto LAB_18001282e;
            if (uVar18 != 0x30) goto LAB_180012bd4;
            goto LAB_180012af0;
          }
          goto LAB_18001262f;
        }
        *(undefined8 *)(puVar7 + uVar17 * 0x14 + 4) = 0;
        *(undefined4 *)(puVar7 + uVar17 * 0x14 + 0xc) = 0;
        *(undefined4 *)(puVar7 + uVar17 * 0x14 + 0x10) = 0xffffffff;
        puVar7[uVar17 * 0x14 + 1] = 0;
      }
LAB_1800128d8:
      puVar12 = puVar12 + 1;
      uVar20 = local_d8;
      bVar4 = bVar5;
      goto LAB_180012bd4;
    }
  }
LAB_18001262f:
  uVar20 = 1;
LAB_180012bd4:
  local_d8 = uVar20;
  pbVar14 = puVar7 + uVar17 * 0x14;
  bVar9 = (byte)uVar22;
  *pbVar14 = bVar9;
  if (bVar9 == 0x4e) {
    if (*(byte *)(param_3 + 0x4a6c) < 2) {
      bVar9 = 0x4e;
    }
    else {
      *pbVar14 = 0xe;
      bVar9 = 0xe;
    }
  }
  if (bVar4) {
    uVar17 = (ulonglong)puVar12[1];
    uVar20 = puVar12[1] & 0x2000;
    uVar11 = (ulonglong)(uVar20 != 0);
    if ((uVar22 >> 0x1c & 1) == 0) {
      pbVar14[0x13] = 0xc3;
    }
    else {
      bVar9 = (byte)(puVar12[2] >> 0x10);
      pbVar14[0x13] = bVar9;
      if ((puVar12[(ulonglong)(uVar20 != 0) + 2] & 0xf000000) == 0xd000000) {
        pbVar14[0x13] = bVar9 + 1;
      }
      uVar11 = (ulonglong)((uVar20 != 0) + 1);
    }
    iVar19 = (int)uVar11;
    if (uVar18 == 0x5e) {
      pbVar14[9] = (byte)(uVar22 >> 0x10) & 7;
    }
    uVar8 = 0;
    if (local_d8 != 0) {
      do {
        iVar19 = (int)uVar8 + (int)uVar11;
        uVar22 = puVar12[iVar19 + 2];
        uVar18 = FUN_1800123a4(uVar22);
        *(short *)(pbVar14 + uVar8 * 2 + 1) = (short)uVar18;
        uVar18 = uVar22 & 0xf000000;
        if (uVar18 == 0x1000000) {
          pbVar14[uVar8 + 10] = 1;
        }
        else if (uVar18 == 0xb000000) {
          pbVar14[uVar8 + 10] = 2;
        }
        else {
          pbVar14[uVar8 + 10] = (uVar18 != 0xc000000) - 1U & 3;
        }
        if (bVar2 < 2) {
          pbVar14[uVar8 + 0xd] = (byte)(uVar22 >> 0xd) & 1;
        }
        else {
          pbVar14[uVar8 + 0xd] = 0;
          if ((uVar22 >> 0xd & 1) != 0) {
            uVar18 = puVar12[iVar19 + 3];
            uVar10 = (uVar18 >> 0x14 & 0x700 | uVar18 & 0x1800) >> 8;
            if (uVar10 == 3) {
              uVar18 = uVar18 & 0xff0000;
              if (uVar18 == 0) {
                pbVar14[uVar8 + 0xd] = 1;
              }
              else if (uVar18 == 0x550000) {
                pbVar14[uVar8 + 0xd] = 2;
              }
              else if (uVar18 == 0xaa0000) {
                pbVar14[uVar8 + 0xd] = 3;
              }
              else if (uVar18 == 0xff0000) {
                pbVar14[uVar8 + 0xd] = 4;
              }
            }
            else if (uVar10 == 0xf) {
              pbVar14[uVar8 + 0xd] = 5;
            }
            uVar11 = (ulonglong)((int)uVar11 + 1);
          }
        }
        iVar19 = (int)uVar11;
        pbVar14[uVar8 + 7] = (byte)(uVar22 >> 0x10);
        uVar22 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar22;
      } while (uVar22 < local_d8);
    }
    uVar6 = 3;
    puVar12 = puVar12 + (iVar19 + 2 + local_d8);
    if (local_d8 < 3) {
      pbVar13 = pbVar14 + ((ulonglong)local_d8 * 2 | 1);
      for (uVar11 = (ulonglong)(3 - local_d8); uVar11 != 0; uVar11 = uVar11 - 1) {
        pbVar13[0] = 0xff;
        pbVar13[1] = 0xff;
        pbVar13 = pbVar13 + 2;
      }
    }
    uVar22 = FUN_1800123a4((uint)uVar17);
    *(short *)(pbVar14 + 0x11) = (short)uVar22;
    pbVar14[0x10] = (byte)(uVar17 >> 0x10) & 0xf;
    uVar11 = local_res8;
    if (((byte)uVar6 <= *(byte *)(param_3 + 0x4a6c)) &&
       (((byte)((uVar17 >> 0x14) >> 8) & 7 | (byte)(uVar17 >> 8) & 0x18) == 6)) {
      uVar16 = ((ushort)uVar17 & 0x7ff) + 0x44d;
      *(ushort *)(pbVar14 + 0x11) = uVar16;
      if (uVar20 != 0) {
        *(ushort *)(pbVar14 + 0x11) = uVar16 | 0x8000;
      }
    }
  }
  else {
    *pbVar14 = bVar9 | 0x80;
  }
  uVar17 = (ulonglong)(uVar21 + 1);
  goto LAB_1800125c6;
}

