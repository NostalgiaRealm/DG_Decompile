/*
 * FUN_100337bb at 100337bb
 * ushort __fastcall FUN_100337bb(int param_1, int * param_2, int * param_3, uint param_4, char param_5)
 * Address ranges: 100337bb-100349c6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort __fastcall FUN_100337bb(int param_1,int *param_2,int *param_3,uint param_4,char param_5)

{
  bool bVar1;
  bool bVar2;
  float10 fVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  byte extraout_DL;
  byte bVar11;
  int extraout_EDX;
  float10 fVar12;
  float10 extraout_ST0;
  float10 fVar13;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 extraout_ST1_02;
  float10 extraout_ST1_03;
  float10 extraout_ST1_04;
  float10 extraout_ST1_05;
  float10 extraout_ST1_06;
  byte bVar14;
  uint uVar15;
  uint local_20;
  float local_1c;
  float local_18;
  uint local_14;
  uint local_10;
  byte local_c;
  
  bVar2 = false;
  bVar11 = 0;
  cVar4 = *(char *)(param_1 + 0x8c);
  if (cVar4 == '\x01') {
    local_14 = FUN_10047b30((int)param_2,1,'\x01');
    bVar2 = true;
    FUN_100486df(param_2,param_3,0x38);
    bVar11 = 0;
LAB_10033870:
    if (local_14 == 0) {
      local_10._0_2_ = 0;
      goto LAB_1003445b;
    }
  }
  else {
    if (cVar4 == '\x02') {
      local_14 = FUN_10047b30((int)param_2,1,'\0');
      FUN_10032c15(param_2,param_3);
      bVar11 = 1;
      goto LAB_10033870;
    }
    if (cVar4 != '\x03') {
      return 0;
    }
    local_14 = 0x190101;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x300) == 0x200) {
    cVar4 = FUN_1002da0b();
    bVar11 = extraout_DL & ~-(cVar4 != '\0');
  }
  if (bVar11 != 0) {
    uVar6 = FUN_10047b30((int)param_2,4,'\x01');
    uVar7 = FUN_10047b30((int)param_2,2,'\x01');
    bVar2 = true;
    FUN_100486df(param_2,param_3,0x34);
    FUN_100486df(param_2,param_3,0x33);
    FUN_100486df(param_2,param_3,0x1c);
    FUN_100486df(param_2,param_3,0x1e);
    FUN_100486df(param_2,param_3,0xa7);
    FUN_100486df(param_2,param_3,0x1e);
    FUN_100486df(param_2,param_3,0xa7);
    FUN_100486df(param_2,param_3,0xa7);
    FUN_100486df(param_2,param_3,0xa7);
    FUN_100486df(param_2,param_3,0xa7);
    FUN_100486df(param_2,param_3,0x1d);
    FUN_100486df(param_2,param_3,1);
    FUN_100486df(param_2,param_3,0x1e);
    FUN_100486df(param_2,param_3,0x1e);
    FUN_100486df(param_2,param_3,0x1e);
    FUN_100486df(param_2,param_3,0x1e);
    FUN_100486df(param_2,param_3,0xa7);
    FUN_100486df(param_2,param_3,0x1e);
    FUN_100486df(param_2,param_3,0xa7);
    FUN_100486df(param_2,param_3,0);
    FUN_100486df(param_2,param_3,0xe);
    FUN_100486df(param_2,param_3,0xa7);
    FUN_100486df(param_2,param_3,0xa7);
    FUN_100486df(param_2,param_3,0);
    FUN_10047bce((int)param_2,uVar7);
    FUN_10047bce((int)param_2,uVar6);
    local_14 = FUN_10047b30((int)param_2,1,'\x01');
    FUN_100486df(param_2,param_3,0x32);
    param_2[3] = param_2[3] | 0x700;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x300) == 0x100) {
LAB_1003490a:
    if (param_5 == '\0') {
      local_10 = 0x70;
    }
    else {
      local_10 = FUN_1003002f((int)param_2,0,0,0,0,7,'\0');
      local_10 = local_10 & 0xffff;
    }
    FUN_1002fbc2((int)param_2,(ushort)local_10,7);
    iVar8 = FUN_10047eeb(param_2,(uint *)(param_2 + 0x56),local_14,0,0,0);
    param_2[0x55] = iVar8;
    bVar14 = 0;
    uVar6 = 0;
    bVar11 = FUN_1003010a((int)param_2,local_10,0xa4);
    iVar8 = FUN_10047bfa(param_2,(uint *)(param_2 + 0x5e),param_2[0x12],0x80,bVar11,uVar6,bVar14);
    param_2[0x5d] = iVar8;
    uVar6 = (param_2[0x55] + param_2[0x4d] + iVar8) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x2038;
LAB_10034547:
    FUN_100487df(param_3,uVar6,param_2 + 0x4d,param_2 + 0x55,param_2 + 0x5d,(int *)0x0);
    goto LAB_1003445b;
  }
  cVar4 = FUN_1002da0b();
  if (extraout_EDX == 0x200) {
    if (cVar4 != '\0') {
      local_10._0_2_ = 0x70;
      FUN_10030396(param_2,0,0x70,0,7,param_3,'\0');
      goto LAB_1003445b;
    }
    if (((ushort)param_4 & 0xff0) == 0x100) {
      if (param_5 == '\0') {
        local_10 = 0x70;
      }
      else {
        local_10 = FUN_1003002f((int)param_2,0,0,0,0,7,'\0');
        local_10 = local_10 & 0xffff;
      }
      FUN_1002fbc2((int)param_2,(ushort)local_10,7);
      iVar8 = FUN_10047eeb(param_2,(uint *)(param_2 + 0x56),local_14 | 0x80000000,0,0,0);
      param_2[0x55] = iVar8;
      FUN_1002ffab(param_2 + 0x5d,-0x1c,(int)(float)extraout_ST0_00);
      uVar6 = (param_2[0x55] + param_2[0x5d] * 2 + param_2[0x4d]) * 0x1000000 + 0x1000000U &
              0x7f000000 | 0x2000;
      goto LAB_10034547;
    }
    if (param_5 == '\0') {
      local_10 = 0x70;
    }
    else {
      local_10 = FUN_1003002f((int)param_2,0,0,0,0,7,'\0');
      local_10 = local_10 & 0xffff;
    }
    uVar6 = FUN_10030161(param_2,param_4,local_10,0,0,0,7,param_3);
    local_20 = uVar6 & 0xffff;
    uVar5 = (ushort)uVar6;
    if (((uVar6 & 0x2000) != 0) || ((uVar5 & 0xf00) == 0x100)) {
      if ((uVar5 & 0xf0) != 0xf0) {
        if ((uVar5 & 0xf0) != 0x80) {
          uVar6 = FUN_1003002f((int)param_2,0,0,0,0,7,'\0');
        }
        local_20 = uVar6 & 0xffff;
      }
      FUN_10030396(param_2,uVar5,local_20,0,7,param_3,'\x01');
    }
    FUN_1002fbc2((int)param_2,(ushort)local_10,7);
    iVar8 = FUN_10047eeb(param_2,(uint *)(param_2 + 0x56),local_14 | 0x80000000,0,0,0);
    param_2[0x55] = iVar8;
    bVar1 = false;
    bVar11 = FUN_1003010a((int)param_2,local_10,0xa4);
    piVar10 = param_2 + 0x5d;
    if ((((ushort)local_20 & 0xff0) != 0x100) &&
       (((uVar6 = local_20 & 0xf00, uVar6 == 0x100 || (uVar6 == 0x200)) || (uVar6 == 0x500)))) {
      bVar1 = true;
    }
    uVar6 = local_20 & 0xf;
    if ((local_20 & 0x1000) != 0) {
      bVar11 = 0xff;
    }
    uVar7 = local_20 & 0xf0;
    if (uVar7 < 0x41) {
      if (uVar7 == 0x40) {
        *piVar10 = 2;
        uVar6 = FUN_100489a4(1,bVar11,1,4,0,0,0);
        param_2[0x5f] = 2;
        goto LAB_10034899;
      }
      if (uVar7 != 0) {
        if (uVar7 == 0x10) {
          *piVar10 = 2;
          uVar7 = FUN_100489a4(0,bVar11,1,4,0,0,0);
          param_2[0x5e] = uVar7;
          param_2[0x5f] = (uint)*(byte *)(param_2 + uVar6 + 0x21);
        }
        else if ((uVar7 == 0x20) || (uVar7 == 0x30)) {
          uVar6 = *(uint *)((int)param_2 +
                           uVar6 * 4 + ((((byte)local_20 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar6 != 0) {
            *piVar10 = 2;
            iVar8 = FUN_10048135(uVar6,0,1,4,0,0);
            param_2[0x5e] = iVar8;
            uVar6 = uVar6 & 0xff;
            goto LAB_10034716;
          }
          goto LAB_1003474f;
        }
        goto LAB_1003489f;
      }
LAB_1003474f:
      uVar5 = (ushort)local_20 & 0xf00;
      if (uVar5 == 0x100) {
        local_1c = 1.0;
      }
      else if (uVar5 == 0x300) {
        local_1c = -0.5;
      }
      else {
        local_1c = 0.0;
      }
      if ((local_20 & 0x2000) != 0) {
        local_1c = local_1c * 255.0;
      }
      if (bVar1) {
        local_1c = -local_1c;
      }
      FUN_1002ffab(piVar10,bVar11,(int)local_1c);
    }
    else {
      if (uVar7 != 0x50) {
        if (uVar7 == 0x80) {
          *piVar10 = 2;
          iVar8 = FUN_10048135(param_2[uVar6 + 0x24],bVar11,1,4,0,0);
          param_2[0x5e] = iVar8;
          uVar6 = (uint)*(byte *)(param_2 + uVar6 + 0x24);
        }
        else {
          if (uVar7 != 0xf0) goto LAB_1003489f;
          *piVar10 = 2;
          iVar8 = FUN_10048135(param_2[0x28],bVar11,1,4,0,0);
          param_2[0x5e] = iVar8;
          uVar6 = (uint)*(byte *)(param_2 + 0x28);
        }
LAB_10034716:
        param_2[0x5f] = uVar6;
        goto LAB_1003489f;
      }
      param_2[2] = param_2[2] | 1;
      param_2[0x5f] = 0;
      if (*param_2 == 0x51) {
        *piVar10 = 4;
        uVar6 = FUN_100489a4(8,bVar11,3,4,0,0,0);
        param_2[0x60] = 0;
        param_2[0x61] = 5;
      }
      else {
        *piVar10 = 3;
        uVar6 = FUN_100489a4(8,bVar11,2,4,0,0,0);
        param_2[0x60] = 5;
      }
LAB_10034899:
      param_2[0x5e] = uVar6;
LAB_1003489f:
      if (bVar1) {
        for (iVar8 = *piVar10; iVar8 != 0; iVar8 = iVar8 + -1) {
          param_2[iVar8 + 0x5e] = param_2[iVar8 + 0x5d];
        }
        param_2[0x5e] = param_2[0x5e] | 0x80000000;
        *piVar10 = *piVar10 + 1;
        param_2[0x5f] = 0x41;
      }
    }
    FUN_100487df(param_3,(param_2[0x55] + *piVar10 * 2 + param_2[0x4d]) * 0x1000000 + 0x1000000U &
                         0x7f000000 | 0x2032,param_2 + 0x4d,param_2 + 0x55,piVar10,piVar10);
  }
  else {
    if (cVar4 != '\0') goto LAB_1003490a;
    if (param_5 == '\0') {
      local_10 = 0x70;
    }
    else {
      local_10 = FUN_1003002f((int)param_2,0,0,0,0,7,'\0');
      local_10 = local_10 & 0xffff;
    }
    uVar6 = FUN_10030161(param_2,param_4,local_10,0,0,0,7,param_3);
    local_20 = uVar6 & 0xffff;
    uVar5 = (ushort)uVar6;
    if (((uVar6 & 0x2000) != 0) || ((uVar5 & 0xf00) == 0x100)) {
      if (((uVar5 & 0xf0) != 0xf0) && ((uVar5 & 0xf0) != 0x80)) {
        local_20 = FUN_1003002f((int)param_2,0,0,0,0,7,'\0');
        local_20 = local_20 & 0xffff;
      }
      FUN_10030396(param_2,uVar5,local_20,0,7,param_3,'\x01');
    }
    uVar6 = FUN_1003002f((int)param_2,local_20,0,0,0,7,'\0');
    uVar7 = uVar6 & 0xffff;
    uVar5 = (ushort)uVar6;
    FUN_1002fbc2((int)param_2,uVar5,7);
    cVar4 = '\0';
    bVar14 = 1;
    bVar11 = FUN_1003010a((int)param_2,uVar7,0xa4);
    FUN_1002fc72(param_2,0,local_20,bVar11,bVar14,cVar4);
    bVar14 = 0;
    uVar15 = 0;
    bVar11 = FUN_1003010a((int)param_2,uVar7,0xa4);
    iVar8 = FUN_10047bfa(param_2,(uint *)(param_2 + 0x5e),param_2[0x12],0x80,bVar11,uVar15,bVar14);
    param_2[0x5d] = iVar8;
    FUN_100487df(param_3,(param_2[0x55] + param_2[0x4d] + iVar8) * 0x1000000 + 0x1000000U &
                         0x7f000000,param_2 + 0x4d,param_2 + 0x55,param_2 + 0x5d,(int *)0x0);
    FUN_1002fbc2((int)param_2,(ushort)local_10,7);
    iVar8 = FUN_10047eeb(param_2,(uint *)(param_2 + 0x56),local_14,0,0,0);
    param_2[0x55] = iVar8;
    bVar1 = false;
    bVar11 = FUN_1003010a((int)param_2,local_10,0xa4);
    if (((uVar5 & 0xff0) != 0x100) &&
       (((uVar15 = uVar6 & 0xf00, uVar15 == 0x100 || (uVar15 == 0x200)) || (uVar15 == 0x500)))) {
      bVar1 = true;
    }
    uVar15 = uVar6 & 0xf;
    if ((uVar6 & 0x1000) != 0) {
      bVar11 = 0xff;
    }
    fVar12 = (float10)-0.5;
    uVar9 = uVar6 & 0xf0;
    fVar13 = (float10)0;
    if (uVar9 < 0x41) {
      if (uVar9 == 0x40) {
        param_2[0x5d] = 2;
        uVar6 = FUN_100489a4(1,bVar11,1,4,0,0,0);
        param_2[0x5e] = uVar6;
        param_2[0x5f] = 2;
        fVar13 = extraout_ST1_01;
        goto LAB_10034105;
      }
      if (uVar9 != 0) {
        if (uVar9 == 0x10) {
          param_2[0x5d] = 2;
          uVar6 = FUN_100489a4(0,bVar11,1,4,0,0,0);
          param_2[0x5e] = uVar6;
          uVar15 = (uint)*(byte *)(param_2 + uVar15 + 0x21);
          fVar13 = extraout_ST1_00;
        }
        else {
          if ((uVar9 != 0x20) && (uVar9 != 0x30)) goto LAB_10034105;
          local_c = (byte)uVar7;
          uVar15 = *(uint *)((int)param_2 +
                            uVar15 * 4 + (((local_c & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar15 == 0) goto LAB_10033f6e;
          param_2[0x5d] = 2;
          iVar8 = FUN_10048135(uVar15,0,1,4,0,0);
          param_2[0x5e] = iVar8;
          uVar15 = uVar15 & 0xff;
          fVar13 = extraout_ST1;
        }
        goto LAB_10033f33;
      }
LAB_10033f6e:
      if ((uVar5 & 0xf00) == 0x100) {
        local_18 = 1.0;
      }
      else {
        fVar3 = fVar13;
        if ((uVar5 & 0xf00) == 0x300) {
          fVar3 = fVar12;
        }
        local_18 = (float)fVar3;
      }
      if ((uVar6 & 0x2000) != 0) {
        local_18 = local_18 * 255.0;
      }
      if (bVar1) {
        local_18 = -local_18;
      }
      FUN_1002ffab(param_2 + 0x5d,bVar11,(int)local_18);
    }
    else {
      if (uVar9 == 0x50) {
        param_2[2] = param_2[2] | 1;
        param_2[0x5f] = 0;
        if (*param_2 == 0x51) {
          param_2[0x5d] = 4;
          uVar6 = FUN_100489a4(8,bVar11,3,4,0,0,0);
          param_2[0x5e] = uVar6;
          param_2[0x60] = 0;
          param_2[0x61] = 5;
          fVar13 = extraout_ST1_04;
        }
        else {
          param_2[0x5d] = 3;
          uVar6 = FUN_100489a4(8,bVar11,2,4,0,0,0);
          param_2[0x5e] = uVar6;
          param_2[0x60] = 5;
          fVar13 = extraout_ST1_05;
        }
      }
      else {
        if (uVar9 == 0x80) {
          param_2[0x5d] = 2;
          iVar8 = FUN_10048135(param_2[uVar15 + 0x24],bVar11,1,4,0,0);
          param_2[0x5e] = iVar8;
          uVar15 = (uint)*(byte *)(param_2 + uVar15 + 0x24);
          fVar13 = extraout_ST1_03;
        }
        else {
          if (uVar9 != 0xf0) goto LAB_10034105;
          param_2[0x5d] = 2;
          iVar8 = FUN_10048135(param_2[0x28],bVar11,1,4,0,0);
          param_2[0x5e] = iVar8;
          uVar15 = (uint)*(byte *)(param_2 + 0x28);
          fVar13 = extraout_ST1_02;
        }
LAB_10033f33:
        param_2[0x5f] = uVar15;
      }
LAB_10034105:
      piVar10 = param_2 + 0x5d;
      if (bVar1) {
        for (iVar8 = *piVar10; iVar8 != 0; iVar8 = iVar8 + -1) {
          param_2[iVar8 + 0x5e] = param_2[iVar8 + 0x5d];
        }
        param_2[0x5e] = param_2[0x5e] | 0x80000000;
        *piVar10 = *piVar10 + 1;
        param_2[0x5f] = 0x41;
      }
    }
    bVar1 = false;
    bVar11 = FUN_1003010a((int)param_2,local_10,0xa4);
    piVar10 = param_2 + 0x65;
    if ((((ushort)local_20 & 0xff0) != 0x100) &&
       (((uVar6 = local_20 & 0xf00, uVar6 == 0x100 || (uVar6 == 0x200)) || (uVar6 == 0x500)))) {
      bVar1 = true;
    }
    uVar6 = local_20 & 0xf;
    if ((local_20 & 0x1000) != 0) {
      bVar11 = 0xff;
    }
    uVar15 = local_20 & 0xf0;
    if (uVar15 < 0x41) {
      if (uVar15 == 0x40) {
        *piVar10 = 2;
        uVar6 = FUN_100489a4(1,bVar11,1,4,0,0,0);
        param_2[0x66] = uVar6;
        param_2[0x67] = 2;
        goto LAB_100343c9;
      }
      if (uVar15 != 0) {
        if (uVar15 == 0x10) {
          *piVar10 = 2;
          uVar15 = FUN_100489a4(0,bVar11,1,4,0,0,0);
          param_2[0x66] = uVar15;
          uVar6 = (uint)*(byte *)(param_2 + uVar6 + 0x21);
        }
        else {
          if ((uVar15 != 0x20) && (uVar15 != 0x30)) goto LAB_100343c9;
          uVar6 = *(uint *)((int)param_2 +
                           uVar6 * 4 + ((((byte)local_20 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar6 == 0) goto LAB_10034257;
          *piVar10 = 2;
          iVar8 = FUN_10048135(uVar6,0,1,4,0,0);
          param_2[0x66] = iVar8;
          uVar6 = uVar6 & 0xff;
        }
        goto LAB_1003421c;
      }
LAB_10034257:
      uVar5 = (ushort)local_20 & 0xf00;
      fVar3 = extraout_ST0;
      if ((uVar5 == 0x100) || (fVar3 = fVar12, uVar5 == 0x300)) {
        fVar13 = fVar3;
      }
      local_18 = (float)fVar13;
      if ((local_20 & 0x2000) != 0) {
        local_18 = (float)(extraout_ST1_06 * (float10)local_18);
      }
      if (bVar1) {
        local_18 = -local_18;
      }
      FUN_1002ffab(piVar10,bVar11,(int)local_18);
    }
    else {
      if (uVar15 == 0x50) {
        param_2[2] = param_2[2] | 1;
        param_2[0x67] = 0;
        if (*param_2 == 0x51) {
          *piVar10 = 4;
          uVar6 = FUN_100489a4(8,bVar11,3,4,0,0,0);
          param_2[0x66] = uVar6;
          param_2[0x68] = 0;
          param_2[0x69] = 5;
        }
        else {
          *piVar10 = 3;
          uVar6 = FUN_100489a4(8,bVar11,2,4,0,0,0);
          param_2[0x66] = uVar6;
          param_2[0x68] = 5;
        }
      }
      else {
        if (uVar15 == 0x80) {
          *piVar10 = 2;
          iVar8 = FUN_10048135(param_2[uVar6 + 0x24],bVar11,1,4,0,0);
          param_2[0x66] = iVar8;
          uVar6 = (uint)*(byte *)(param_2 + uVar6 + 0x24);
        }
        else {
          if (uVar15 != 0xf0) goto LAB_100343c9;
          *piVar10 = 2;
          iVar8 = FUN_10048135(param_2[0x28],bVar11,1,4,0,0);
          param_2[0x66] = iVar8;
          uVar6 = (uint)*(byte *)(param_2 + 0x28);
        }
LAB_1003421c:
        param_2[0x67] = uVar6;
      }
LAB_100343c9:
      if (bVar1) {
        for (iVar8 = *piVar10; iVar8 != 0; iVar8 = iVar8 + -1) {
          param_2[iVar8 + 0x66] = param_2[iVar8 + 0x65];
        }
        param_2[0x66] = param_2[0x66] | 0x80000000;
        *piVar10 = *piVar10 + 1;
        param_2[0x67] = 0x41;
      }
    }
    FUN_100487df(param_3,(*piVar10 + param_2[0x5d] + param_2[0x55] + param_2[0x4d]) * 0x1000000 +
                         0x1000000U & 0x7f000000 | 0x2032,param_2 + 0x4d,param_2 + 0x55,
                 param_2 + 0x5d,piVar10);
    FUN_100300df((int)param_2,uVar7);
  }
  if (((ushort)local_20 != (ushort)param_4) && ((ushort)local_20 != (ushort)local_10)) {
    FUN_100300df((int)param_2,local_20);
  }
LAB_1003445b:
  if (bVar2) {
    FUN_10047bce((int)param_2,local_14);
  }
  return (ushort)local_10;
}

