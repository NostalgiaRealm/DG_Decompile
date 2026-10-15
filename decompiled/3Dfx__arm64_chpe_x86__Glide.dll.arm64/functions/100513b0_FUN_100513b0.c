/*
 * FUN_100513b0 at 100513b0
 * undefined FUN_100513b0(void)
 * Address ranges: 100513b0-10051bf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100513b0(undefined2 *param_1,ushort param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 extraout_x1;
  int *in_w6;
  undefined4 in_w7;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ushort uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  
  uVar8 = FUN_1004d708(in_w6,*param_1,param_1[1],param_1[2],param_1[3],7,1);
  uVar16 = (ushort)uVar8;
  FUN_1004d210(in_w6,uVar16,7);
  if ((param_2 & 0xf0) == 0) {
    uVar16 = param_2 | 0x2000;
  }
  else {
    FUN_10050a20(0x3c23d70a,in_w6,in_w7,param_2,0xa4,uVar16,uVar16,7,1);
  }
  uVar9 = uVar8 & 0xffff;
  if (uVar9 == 0) {
    uVar9 = FUN_1004d708(in_w6,0,0,0,0,7,0);
    uVar9 = uVar9 & 0xffff;
  }
  FUN_1004d210(in_w6,uVar9,7);
  uVar7 = FUN_1004d850(in_w6,uVar9,0xa4);
  FUN_1004d320(in_w6,0,uVar16,uVar7,0,1);
  uVar7 = FUN_1004d850(in_w6,uVar9,0xe4);
  iVar10 = FUN_1006ed70(in_w6,in_w6 + 0x5e,in_w6[0x12],0x40,uVar7,0,0);
  piVar1 = in_w6 + 0x5d;
  piVar2 = in_w6 + 0x55;
  *piVar1 = iVar10;
  piVar3 = in_w6 + 0x4d;
  FUN_10070058(in_w7,(*piVar3 + *piVar2 + iVar10 + 1U & 0x7f) << 0x18 | 0x20,piVar3,piVar2,piVar1,0)
  ;
  uVar17 = uVar8 & 0xffff;
  if (uVar17 == 0) {
    FUN_1004d810(in_w6,uVar9);
  }
  FUN_1004d210(in_w6,uVar17,1);
  FUN_1004d320(in_w6,0,uVar17,0,0,0);
  bVar6 = false;
  if ((uVar8 & 0xff0) != 0x100) {
    bVar6 = (uVar8 & 0xf00) != 0x600 && ((uVar8 & 0xf00) - 0x100 & 0xfffffaff) == 0;
  }
  uVar9 = uVar8 & 0xf;
  uVar17 = uVar8 & 0xf0;
  uVar4 = uVar8 & 0x1000;
  if (uVar17 < 0x40) {
    if ((uVar17 - 0x20 & 0xffffffef) == 0) {
      iVar10 = 0x78;
      if (uVar17 == 0x20) {
        iVar10 = 0x6c;
      }
      uVar13 = *(uint *)(iVar10 + uVar9 * 4 + (int)in_w6);
      if (uVar13 == 0) goto LAB_100517d0;
      *piVar1 = 2;
      iVar10 = FUN_1006f660(uVar13,0,1,4,0,0);
      in_w6[0x5e] = iVar10;
      uVar13 = uVar13 & 0xff;
LAB_10051774:
      in_w6[0x5f] = uVar13;
      goto LAB_1005177c;
    }
    if (uVar17 != 0) {
      if (uVar17 != 0x10) goto LAB_1005177c;
      *piVar1 = 2;
      iVar10 = 0x100556;
      if (uVar4 != 0) {
        iVar10 = 0x100ff6;
      }
      in_w6[0x5e] = iVar10;
      uVar13 = (uint)*(byte *)(in_w6 + uVar9 + 0x21);
      goto LAB_10051774;
    }
LAB_100517d0:
    fVar19 = -0.5;
    if ((uVar8 & 0xf00) != 0x300) {
      fVar19 = 0.0;
    }
    fVar18 = 1.0;
    if ((uVar8 & 0xf00) != 0x100) {
      fVar18 = fVar19;
    }
    if ((uVar8 & 0x2000) != 0) {
      fVar18 = fVar18 * 255.0;
    }
    fVar19 = -fVar18;
    if (!bVar6) {
      fVar19 = fVar18;
    }
    bVar6 = uVar4 != 0;
    iVar10 = 5;
    if (bVar6) {
      iVar10 = 2;
    }
    *piVar1 = iVar10;
    iVar10 = 0x4000;
    if (bVar6) {
      iVar10 = 0x4001;
    }
    iVar11 = 0x4006;
    if (bVar6) {
      iVar11 = iVar10;
    }
    in_w6[0x5e] = iVar11;
    in_w6[0x62] = (int)fVar19;
    in_w6[0x61] = (int)fVar19;
    in_w6[0x60] = (int)fVar19;
    in_w6[0x5f] = (int)fVar19;
  }
  else {
    if (uVar17 < 0x41) {
      *piVar1 = 2;
      iVar10 = 0x101556;
      if (uVar4 != 0) {
        iVar10 = 0x101ff6;
      }
      in_w6[0x5e] = iVar10;
      in_w6[0x5f] = 2;
    }
    else {
      if (uVar17 != 0x50) {
        if (uVar17 == 0x80) {
          pbVar5 = (byte *)(in_w6 + uVar9 + 0x24);
        }
        else {
          if (uVar17 != 0xf0) goto LAB_1005177c;
          pbVar5 = (byte *)(in_w6 + 0x28);
        }
        *piVar1 = 2;
        uVar12 = 0x55;
        if (uVar4 != 0) {
          uVar12 = 0xff;
        }
        iVar10 = FUN_1006f660(*(int *)pbVar5,uVar12,1,4,0,0);
        in_w6[0x5e] = iVar10;
        uVar13 = (uint)*pbVar5;
        goto LAB_10051774;
      }
      in_w6[2] = in_w6[2] | 1;
      if (*in_w6 == 0x51) {
        in_w6[0x61] = 5;
        iVar15 = 0;
        iVar10 = 0x308556;
        iVar11 = 0x308ff6;
        iVar14 = 4;
      }
      else {
        iVar15 = 5;
        iVar14 = 3;
        iVar10 = 0x208556;
        iVar11 = 0x208ff6;
      }
      *piVar1 = iVar14;
      if (uVar4 != 0) {
        iVar10 = iVar11;
      }
      in_w6[0x5e] = iVar10;
      in_w6[0x5f] = 0;
      in_w6[0x60] = iVar15;
    }
LAB_1005177c:
    if (bVar6) {
      for (iVar10 = *piVar1; iVar10 != 0; iVar10 = iVar10 + -1) {
        in_w6[iVar10 + 0x5e] = piVar1[iVar10];
      }
      in_w6[0x5e] = in_w6[0x5e] | 0x80000000;
      in_w6[0x5f] = 0x41;
      *piVar1 = *piVar1 + 1;
    }
  }
  uVar13 = (*piVar1 + *piVar3 + *piVar2 + 1U & 0x7f) << 0x18 | 1;
  FUN_10070058(in_w7,uVar13,piVar3,piVar2,piVar1,0);
  bVar6 = false;
  if ((short)(uVar8 & 0xff0) != 0x100) {
    bVar6 = (uVar8 & 0xf00) != 0x600 && ((uVar8 & 0xf00) - 0x100 & 0xfffffaff) == 0;
  }
  if (uVar17 < 0x40) {
    if ((uVar17 - 0x20 & 0xffffffef) == 0) {
      iVar10 = 0x78;
      if (uVar17 == 0x20) {
        iVar10 = 0x6c;
      }
      uVar9 = *(uint *)(iVar10 + uVar9 * 4 + (int)in_w6);
      if (uVar9 == 0) goto LAB_10051ad0;
      *piVar1 = 2;
      iVar10 = FUN_1006f660(uVar9,0,1,4,0,0);
      in_w6[0x5e] = iVar10;
      uVar9 = uVar9 & 0xff;
    }
    else {
      if (uVar17 == 0) {
LAB_10051ad0:
        fVar19 = -0.5;
        if ((uVar8 & 0xf00) != 0x300) {
          fVar19 = 0.0;
        }
        fVar18 = 1.0;
        if ((uVar8 & 0xf00) != 0x100) {
          fVar18 = fVar19;
        }
        if ((uVar8 & 0x2000) != 0) {
          fVar18 = fVar18 * 255.0;
        }
        fVar19 = -fVar18;
        if (!bVar6) {
          fVar19 = fVar18;
        }
        bVar6 = uVar4 != 0;
        iVar10 = 5;
        if (bVar6) {
          iVar10 = 2;
        }
        *piVar1 = iVar10;
        iVar10 = 0x4000;
        if (bVar6) {
          iVar10 = 0x4001;
        }
        iVar11 = 0x4006;
        if (bVar6) {
          iVar11 = iVar10;
        }
        in_w6[0x5e] = iVar11;
        in_w6[0x62] = (int)fVar19;
        in_w6[0x61] = (int)fVar19;
        in_w6[0x60] = (int)fVar19;
        in_w6[0x5f] = (int)fVar19;
        goto LAB_10051b58;
      }
      if (uVar17 != 0x10) goto LAB_10051a7c;
      *piVar1 = 2;
      iVar10 = 0x100aa6;
      if (uVar4 != 0) {
        iVar10 = 0x100ff6;
      }
      in_w6[0x5e] = iVar10;
      uVar9 = (uint)*(byte *)(in_w6 + uVar9 + 0x21);
    }
LAB_10051a74:
    in_w6[0x5f] = uVar9;
  }
  else if (uVar17 < 0x41) {
    *piVar1 = 2;
    iVar10 = 0x101aa6;
    if (uVar4 != 0) {
      iVar10 = 0x101ff6;
    }
    in_w6[0x5e] = iVar10;
    in_w6[0x5f] = 2;
  }
  else {
    if (uVar17 != 0x50) {
      if (uVar17 == 0x80) {
        *piVar1 = 2;
        pbVar5 = (byte *)(in_w6 + uVar9 + 0x24);
      }
      else {
        if (uVar17 != 0xf0) goto LAB_10051a7c;
        *piVar1 = 2;
        pbVar5 = (byte *)(in_w6 + 0x28);
      }
      uVar12 = 0xaa;
      if (uVar4 != 0) {
        uVar12 = 0xff;
      }
      iVar10 = FUN_1006f660(*(int *)pbVar5,uVar12,1,4,0,0);
      in_w6[0x5e] = iVar10;
      uVar9 = (uint)*pbVar5;
      goto LAB_10051a74;
    }
    in_w6[2] = in_w6[2] | 1;
    if (*in_w6 == 0x51) {
      in_w6[0x61] = 5;
      iVar15 = 0;
      iVar10 = 0x308aa6;
      iVar11 = 0x308ff6;
      iVar14 = 4;
    }
    else {
      iVar15 = 5;
      iVar14 = 3;
      iVar10 = 0x208aa6;
      iVar11 = 0x208ff6;
    }
    *piVar1 = iVar14;
    if (uVar4 != 0) {
      iVar10 = iVar11;
    }
    in_w6[0x5e] = iVar10;
    in_w6[0x5f] = 0;
    in_w6[0x60] = iVar15;
  }
LAB_10051a7c:
  if (bVar6) {
    for (iVar10 = *piVar1; iVar10 != 0; iVar10 = iVar10 + -1) {
      in_w6[iVar10 + 0x5e] = piVar1[iVar10];
    }
    in_w6[0x5e] = in_w6[0x5e] | 0x80000000;
    in_w6[0x5f] = 0x41;
    *piVar1 = *piVar1 + 1;
  }
LAB_10051b58:
  FUN_10070058(in_w7,uVar13,piVar3,piVar2,piVar1,0);
  FUN_1004d680(in_w6,extraout_x1,uVar8 & 0xffff,0);
  FUN_10070058(in_w7,(*piVar2 + 1U & 0x7f) << 0x18 | 0x4000d,piVar2,0,0,0);
  FUN_1004d810(in_w6,0);
  FUN_1004d810(in_w6,uVar8 & 0xffff);
  *(undefined1 *)(in_w6 + 0x29) = 0;
  return;
}

