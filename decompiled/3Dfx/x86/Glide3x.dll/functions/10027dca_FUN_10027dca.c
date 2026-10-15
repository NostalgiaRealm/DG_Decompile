/*
 * FUN_10027dca at 10027dca
 * uint __fastcall FUN_10027dca(int param_1, int * param_2, int * param_3, uint param_4, char param_5)
 * Address ranges: 10027dca-10028f9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10027dca(int param_1,int *param_2,int *param_3,uint param_4,char param_5)

{
  bool bVar1;
  float10 fVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  byte extraout_DL;
  byte bVar12;
  ushort uVar13;
  int extraout_EDX;
  uint unaff_EDI;
  float10 fVar14;
  float10 extraout_ST0;
  float10 fVar15;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 extraout_ST1_02;
  float10 extraout_ST1_03;
  float10 extraout_ST1_04;
  float10 extraout_ST1_05;
  float10 extraout_ST1_06;
  byte bVar16;
  uint uVar17;
  float local_18;
  uint local_14;
  byte local_c;
  
  cVar3 = *(char *)(param_1 + 0x8c);
  bVar12 = 0;
  local_14 = 0;
  if (cVar3 == '\x01') {
    local_14 = FUN_1004a618((int)param_2,1,'\0');
LAB_10027e36:
    FUN_100267c2(param_2,param_3);
    bVar4 = 1;
LAB_10027e4a:
    bVar12 = bVar4;
    if (local_14 == 0) {
      return unaff_EDI;
    }
  }
  else {
    if (cVar3 == '\x02') {
      local_14 = FUN_1004a618((int)param_2,1,'\0');
      goto LAB_10027e36;
    }
    bVar4 = 0;
    if (cVar3 != '\x03') goto LAB_10027e4a;
    local_14 = 0x190101;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x300) == 0x200) {
    cVar3 = FUN_10021367();
    bVar12 = extraout_DL & ~-(cVar3 != '\0');
  }
  if (bVar12 != 0) {
    uVar5 = FUN_1004a618((int)param_2,4,'\x01');
    uVar6 = FUN_1004a618((int)param_2,2,'\x01');
    FUN_1004b1c7(param_2,param_3,0x34);
    FUN_1004b1c7(param_2,param_3,0x33);
    FUN_1004b1c7(param_2,param_3,0x1c);
    FUN_1004b1c7(param_2,param_3,0x1e);
    FUN_1004b1c7(param_2,param_3,0xa7);
    FUN_1004b1c7(param_2,param_3,0x1e);
    FUN_1004b1c7(param_2,param_3,0xa7);
    FUN_1004b1c7(param_2,param_3,0xa7);
    FUN_1004b1c7(param_2,param_3,0xa7);
    FUN_1004b1c7(param_2,param_3,0xa7);
    FUN_1004b1c7(param_2,param_3,0x1d);
    FUN_1004b1c7(param_2,param_3,1);
    FUN_1004b1c7(param_2,param_3,0x1e);
    FUN_1004b1c7(param_2,param_3,0x1e);
    FUN_1004b1c7(param_2,param_3,0x1e);
    FUN_1004b1c7(param_2,param_3,0x1e);
    FUN_1004b1c7(param_2,param_3,0xa7);
    FUN_1004b1c7(param_2,param_3,0x1e);
    FUN_1004b1c7(param_2,param_3,0xa7);
    FUN_1004b1c7(param_2,param_3,0);
    FUN_1004b1c7(param_2,param_3,0xe);
    FUN_1004b1c7(param_2,param_3,0xa7);
    FUN_1004b1c7(param_2,param_3,0xa7);
    FUN_1004b1c7(param_2,param_3,0);
    FUN_1004a6b6((int)param_2,uVar6);
    FUN_1004a6b6((int)param_2,uVar5);
    local_14 = FUN_1004a618((int)param_2,1,'\x01');
    FUN_1004b1c7(param_2,param_3,0x32);
    param_2[3] = param_2[3] | 0x700;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x300) == 0x100) {
LAB_10028ec6:
    if (param_5 == '\0') {
      uVar5 = 0x70;
    }
    else {
      uVar5 = FUN_10023bdc((int)param_2,0,0,0,0,7,'\0');
      uVar5 = uVar5 & 0xffff;
    }
    FUN_10023753((int)param_2,(ushort)uVar5,7);
    iVar9 = FUN_1004a9d3(param_2,(uint *)(param_2 + 0x56),local_14,0,0,0);
    param_2[0x55] = iVar9;
    bVar16 = 0;
    uVar6 = 0;
    bVar4 = FUN_10023cb7((int)param_2,uVar5,0xa4);
    iVar9 = FUN_1004a6e2(param_2,(uint *)(param_2 + 0x5e),param_2[0x12],0x80,bVar4,uVar6,bVar16);
    param_2[0x5d] = iVar9;
    uVar5 = (param_2[0x55] + param_2[0x4d] + iVar9) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x2038;
LAB_10028f75:
    FUN_1004b2c7(param_3,uVar5,param_2 + 0x4d,param_2 + 0x55,param_2 + 0x5d,(int *)0x0);
    goto LAB_10028f85;
  }
  cVar3 = FUN_10021367();
  if (extraout_EDX == 0x200) {
    if (cVar3 != '\0') {
      FUN_10023f43(param_2,0,0x70,0,7,param_3,'\0');
      goto LAB_10028f85;
    }
    if (((ushort)param_4 & 0xff0) == 0x100) {
      if (param_5 == '\0') {
        uVar13 = 0x70;
      }
      else {
        uVar5 = FUN_10023bdc((int)param_2,0,0,0,0,7,'\0');
        uVar13 = (ushort)uVar5;
      }
      FUN_10023753((int)param_2,uVar13,7);
      iVar9 = FUN_1004a9d3(param_2,(uint *)(param_2 + 0x56),local_14 | 0x80000000,0,0,0);
      param_2[0x55] = iVar9;
      FUN_10023b58(param_2 + 0x5d,-0x1c,(int)(float)extraout_ST0_00);
      uVar5 = (param_2[0x55] + param_2[0x5d] * 2 + param_2[0x4d]) * 0x1000000 + 0x1000000U &
              0x7f000000 | 0x2000;
      goto LAB_10028f75;
    }
    if (param_5 == '\0') {
      uVar5 = 0x70;
    }
    else {
      uVar5 = FUN_10023bdc((int)param_2,0,0,0,0,7,'\0');
      uVar5 = uVar5 & 0xffff;
    }
    uVar7 = FUN_10023d0e(param_2,param_4,uVar5,0,0,0,7,param_3);
    uVar6 = uVar7 & 0xffff;
    uVar13 = (ushort)uVar7;
    if (((uVar7 & 0x2000) != 0) || ((uVar13 & 0xf00) == 0x100)) {
      if (((uVar13 & 0xf0) != 0xf0) && ((uVar13 & 0xf0) != 0x80)) {
        uVar6 = FUN_10023bdc((int)param_2,0,0,0,0,7,'\0');
        uVar6 = uVar6 & 0xffff;
      }
      FUN_10023f43(param_2,uVar13,uVar6,0,7,param_3,'\x01');
    }
    FUN_10023753((int)param_2,(ushort)uVar5,7);
    iVar9 = FUN_1004a9d3(param_2,(uint *)(param_2 + 0x56),local_14 | 0x80000000,0,0,0);
    param_2[0x55] = iVar9;
    bVar1 = false;
    bVar4 = FUN_10023cb7((int)param_2,uVar5,0xa4);
    piVar11 = param_2 + 0x5d;
    uVar13 = (ushort)uVar6;
    if (((uVar13 & 0xff0) != 0x100) &&
       (((uVar7 = uVar6 & 0xf00, uVar7 == 0x100 || (uVar7 == 0x200)) || (uVar7 == 0x500)))) {
      bVar1 = true;
    }
    uVar7 = uVar6 & 0xf;
    if ((uVar6 & 0x1000) != 0) {
      bVar4 = 0xff;
    }
    uVar8 = uVar6 & 0xf0;
    if (uVar8 < 0x41) {
      if (uVar8 == 0x40) {
        *piVar11 = 2;
        uVar7 = FUN_1004b48c(1,bVar4,1,4,0,0,0);
        param_2[0x5f] = 2;
        goto LAB_10028e35;
      }
      if (uVar8 != 0) {
        if (uVar8 == 0x10) {
          *piVar11 = 2;
          uVar8 = FUN_1004b48c(0,bVar4,1,4,0,0,0);
          param_2[0x5e] = uVar8;
          param_2[0x5f] = (uint)*(byte *)(param_2 + uVar7 + 0x21);
        }
        else if ((uVar8 == 0x20) || (uVar8 == 0x30)) {
          uVar7 = *(uint *)((int)param_2 +
                           uVar7 * 4 + ((((byte)uVar6 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar7 != 0) {
            *piVar11 = 2;
            iVar9 = FUN_1004ac1d(uVar7,0,1,4,0,0);
            param_2[0x5e] = iVar9;
            uVar7 = uVar7 & 0xff;
            goto LAB_10028cc4;
          }
          goto LAB_10028cfb;
        }
        goto LAB_10028e3b;
      }
LAB_10028cfb:
      if ((uVar13 & 0xf00) == 0x100) {
        local_18 = 1.0;
      }
      else if ((uVar13 & 0xf00) == 0x300) {
        local_18 = -0.5;
      }
      else {
        local_18 = 0.0;
      }
      if ((uVar6 & 0x2000) != 0) {
        local_18 = local_18 * 255.0;
      }
      if (bVar1) {
        local_18 = -local_18;
      }
      FUN_10023b58(piVar11,bVar4,(int)local_18);
    }
    else {
      if (uVar8 != 0x50) {
        if (uVar8 == 0x80) {
          *piVar11 = 2;
          iVar9 = FUN_1004ac1d(param_2[uVar7 + 0x24],bVar4,1,4,0,0);
          param_2[0x5e] = iVar9;
          uVar7 = (uint)*(byte *)(param_2 + uVar7 + 0x24);
        }
        else {
          if (uVar8 != 0xf0) goto LAB_10028e3b;
          *piVar11 = 2;
          iVar9 = FUN_1004ac1d(param_2[0x28],bVar4,1,4,0,0);
          param_2[0x5e] = iVar9;
          uVar7 = (uint)*(byte *)(param_2 + 0x28);
        }
LAB_10028cc4:
        param_2[0x5f] = uVar7;
        goto LAB_10028e3b;
      }
      param_2[2] = param_2[2] | 1;
      param_2[0x5f] = 0;
      if (*param_2 == 0x51) {
        *piVar11 = 4;
        uVar7 = FUN_1004b48c(8,bVar4,3,4,0,0,0);
        param_2[0x60] = 0;
        param_2[0x61] = 5;
      }
      else {
        *piVar11 = 3;
        uVar7 = FUN_1004b48c(8,bVar4,2,4,0,0,0);
        param_2[0x60] = 5;
      }
LAB_10028e35:
      param_2[0x5e] = uVar7;
LAB_10028e3b:
      if (bVar1) {
        for (iVar9 = *piVar11; iVar9 != 0; iVar9 = iVar9 + -1) {
          param_2[iVar9 + 0x5e] = param_2[iVar9 + 0x5d];
        }
        param_2[0x5e] = param_2[0x5e] | 0x80000000;
        *piVar11 = *piVar11 + 1;
        param_2[0x5f] = 0x41;
      }
    }
    FUN_1004b2c7(param_3,(param_2[0x55] + *piVar11 * 2 + param_2[0x4d]) * 0x1000000 + 0x1000000U &
                         0x7f000000 | 0x2032,param_2 + 0x4d,param_2 + 0x55,piVar11,piVar11);
    if ((uVar13 == (ushort)param_4) || (uVar13 == (ushort)uVar5)) goto LAB_10028f85;
  }
  else {
    if (cVar3 != '\0') goto LAB_10028ec6;
    if (param_5 == '\0') {
      uVar5 = 0x70;
    }
    else {
      uVar5 = FUN_10023bdc((int)param_2,0,0,0,0,7,'\0');
      uVar5 = uVar5 & 0xffff;
    }
    uVar7 = FUN_10023d0e(param_2,param_4,uVar5,0,0,0,7,param_3);
    uVar6 = uVar7 & 0xffff;
    uVar13 = (ushort)uVar7;
    if (((uVar7 & 0x2000) != 0) || ((uVar13 & 0xf00) == 0x100)) {
      if (((uVar13 & 0xf0) != 0xf0) && ((uVar13 & 0xf0) != 0x80)) {
        uVar6 = FUN_10023bdc((int)param_2,0,0,0,0,7,'\0');
        uVar6 = uVar6 & 0xffff;
      }
      FUN_10023f43(param_2,uVar13,uVar6,0,7,param_3,'\x01');
    }
    uVar7 = FUN_10023bdc((int)param_2,uVar6,0,0,0,7,'\0');
    uVar8 = uVar7 & 0xffff;
    uVar13 = (ushort)uVar7;
    FUN_10023753((int)param_2,uVar13,7);
    cVar3 = '\0';
    bVar16 = 1;
    bVar4 = FUN_10023cb7((int)param_2,uVar8,0xa4);
    FUN_1002381f(param_2,0,uVar6,bVar4,bVar16,cVar3);
    bVar16 = 0;
    uVar17 = 0;
    bVar4 = FUN_10023cb7((int)param_2,uVar8,0xa4);
    iVar9 = FUN_1004a6e2(param_2,(uint *)(param_2 + 0x5e),param_2[0x12],0x80,bVar4,uVar17,bVar16);
    param_2[0x5d] = iVar9;
    FUN_1004b2c7(param_3,(param_2[0x55] + param_2[0x4d] + iVar9) * 0x1000000 + 0x1000000U &
                         0x7f000000,param_2 + 0x4d,param_2 + 0x55,param_2 + 0x5d,(int *)0x0);
    FUN_10023753((int)param_2,(ushort)uVar5,7);
    iVar9 = FUN_1004a9d3(param_2,(uint *)(param_2 + 0x56),local_14,0,0,0);
    param_2[0x55] = iVar9;
    bVar1 = false;
    bVar4 = FUN_10023cb7((int)param_2,uVar5,0xa4);
    if (((uVar13 & 0xff0) != 0x100) &&
       (((uVar17 = uVar7 & 0xf00, uVar17 == 0x100 || (uVar17 == 0x200)) || (uVar17 == 0x500)))) {
      bVar1 = true;
    }
    uVar17 = uVar7 & 0xf;
    if ((uVar7 & 0x1000) != 0) {
      bVar4 = 0xff;
    }
    fVar14 = (float10)-0.5;
    uVar10 = uVar7 & 0xf0;
    fVar15 = (float10)0;
    if (uVar10 < 0x41) {
      if (uVar10 == 0x40) {
        param_2[0x5d] = 2;
        uVar7 = FUN_1004b48c(1,bVar4,1,4,0,0,0);
        param_2[0x5e] = uVar7;
        param_2[0x5f] = 2;
        fVar15 = extraout_ST1_01;
        goto LAB_100286e2;
      }
      if (uVar10 != 0) {
        if (uVar10 == 0x10) {
          param_2[0x5d] = 2;
          uVar7 = FUN_1004b48c(0,bVar4,1,4,0,0,0);
          param_2[0x5e] = uVar7;
          uVar17 = (uint)*(byte *)(param_2 + uVar17 + 0x21);
          fVar15 = extraout_ST1_00;
        }
        else {
          if ((uVar10 != 0x20) && (uVar10 != 0x30)) goto LAB_100286e2;
          local_c = (byte)uVar8;
          uVar17 = *(uint *)((int)param_2 +
                            uVar17 * 4 + (((local_c & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar17 == 0) goto LAB_1002854b;
          param_2[0x5d] = 2;
          iVar9 = FUN_1004ac1d(uVar17,0,1,4,0,0);
          param_2[0x5e] = iVar9;
          uVar17 = uVar17 & 0xff;
          fVar15 = extraout_ST1;
        }
        goto LAB_10028510;
      }
LAB_1002854b:
      if ((uVar13 & 0xf00) == 0x100) {
        local_18 = 1.0;
      }
      else {
        fVar2 = fVar15;
        if ((uVar13 & 0xf00) == 0x300) {
          fVar2 = fVar14;
        }
        local_18 = (float)fVar2;
      }
      if ((uVar7 & 0x2000) != 0) {
        local_18 = local_18 * 255.0;
      }
      if (bVar1) {
        local_18 = -local_18;
      }
      FUN_10023b58(param_2 + 0x5d,bVar4,(int)local_18);
    }
    else {
      if (uVar10 == 0x50) {
        param_2[2] = param_2[2] | 1;
        param_2[0x5f] = 0;
        if (*param_2 == 0x51) {
          param_2[0x5d] = 4;
          uVar7 = FUN_1004b48c(8,bVar4,3,4,0,0,0);
          param_2[0x5e] = uVar7;
          param_2[0x60] = 0;
          param_2[0x61] = 5;
          fVar15 = extraout_ST1_04;
        }
        else {
          param_2[0x5d] = 3;
          uVar7 = FUN_1004b48c(8,bVar4,2,4,0,0,0);
          param_2[0x5e] = uVar7;
          param_2[0x60] = 5;
          fVar15 = extraout_ST1_05;
        }
      }
      else {
        if (uVar10 == 0x80) {
          param_2[0x5d] = 2;
          iVar9 = FUN_1004ac1d(param_2[uVar17 + 0x24],bVar4,1,4,0,0);
          param_2[0x5e] = iVar9;
          uVar17 = (uint)*(byte *)(param_2 + uVar17 + 0x24);
          fVar15 = extraout_ST1_03;
        }
        else {
          if (uVar10 != 0xf0) goto LAB_100286e2;
          param_2[0x5d] = 2;
          iVar9 = FUN_1004ac1d(param_2[0x28],bVar4,1,4,0,0);
          param_2[0x5e] = iVar9;
          uVar17 = (uint)*(byte *)(param_2 + 0x28);
          fVar15 = extraout_ST1_02;
        }
LAB_10028510:
        param_2[0x5f] = uVar17;
      }
LAB_100286e2:
      piVar11 = param_2 + 0x5d;
      if (bVar1) {
        for (iVar9 = *piVar11; iVar9 != 0; iVar9 = iVar9 + -1) {
          param_2[iVar9 + 0x5e] = param_2[iVar9 + 0x5d];
        }
        param_2[0x5e] = param_2[0x5e] | 0x80000000;
        *piVar11 = *piVar11 + 1;
        param_2[0x5f] = 0x41;
      }
    }
    bVar1 = false;
    bVar4 = FUN_10023cb7((int)param_2,uVar5,0xa4);
    piVar11 = param_2 + 0x65;
    uVar13 = (ushort)uVar6;
    if (((uVar13 & 0xff0) != 0x100) &&
       (((uVar7 = uVar6 & 0xf00, uVar7 == 0x100 || (uVar7 == 0x200)) || (uVar7 == 0x500)))) {
      bVar1 = true;
    }
    uVar7 = uVar6 & 0xf;
    if ((uVar6 & 0x1000) != 0) {
      bVar4 = 0xff;
    }
    uVar17 = uVar6 & 0xf0;
    if (uVar17 < 0x41) {
      if (uVar17 == 0x40) {
        *piVar11 = 2;
        uVar7 = FUN_1004b48c(1,bVar4,1,4,0,0,0);
        param_2[0x66] = uVar7;
        param_2[0x67] = 2;
        goto LAB_100289ad;
      }
      if (uVar17 != 0) {
        if (uVar17 == 0x10) {
          *piVar11 = 2;
          uVar17 = FUN_1004b48c(0,bVar4,1,4,0,0,0);
          param_2[0x66] = uVar17;
          uVar7 = (uint)*(byte *)(param_2 + uVar7 + 0x21);
        }
        else {
          if ((uVar17 != 0x20) && (uVar17 != 0x30)) goto LAB_100289ad;
          uVar7 = *(uint *)((int)param_2 +
                           uVar7 * 4 + ((((byte)uVar6 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar7 == 0) goto LAB_1002883b;
          *piVar11 = 2;
          iVar9 = FUN_1004ac1d(uVar7,0,1,4,0,0);
          param_2[0x66] = iVar9;
          uVar7 = uVar7 & 0xff;
        }
        goto LAB_10028800;
      }
LAB_1002883b:
      fVar2 = extraout_ST0;
      if (((uVar13 & 0xf00) == 0x100) || (fVar2 = fVar14, (uVar13 & 0xf00) == 0x300)) {
        fVar15 = fVar2;
      }
      local_18 = (float)fVar15;
      if ((uVar6 & 0x2000) != 0) {
        local_18 = (float)(extraout_ST1_06 * (float10)local_18);
      }
      if (bVar1) {
        local_18 = -local_18;
      }
      FUN_10023b58(piVar11,bVar4,(int)local_18);
    }
    else {
      if (uVar17 == 0x50) {
        param_2[2] = param_2[2] | 1;
        param_2[0x67] = 0;
        if (*param_2 == 0x51) {
          *piVar11 = 4;
          uVar7 = FUN_1004b48c(8,bVar4,3,4,0,0,0);
          param_2[0x66] = uVar7;
          param_2[0x68] = 0;
          param_2[0x69] = 5;
        }
        else {
          *piVar11 = 3;
          uVar7 = FUN_1004b48c(8,bVar4,2,4,0,0,0);
          param_2[0x66] = uVar7;
          param_2[0x68] = 5;
        }
      }
      else {
        if (uVar17 == 0x80) {
          *piVar11 = 2;
          iVar9 = FUN_1004ac1d(param_2[uVar7 + 0x24],bVar4,1,4,0,0);
          param_2[0x66] = iVar9;
          uVar7 = (uint)*(byte *)(param_2 + uVar7 + 0x24);
        }
        else {
          if (uVar17 != 0xf0) goto LAB_100289ad;
          *piVar11 = 2;
          iVar9 = FUN_1004ac1d(param_2[0x28],bVar4,1,4,0,0);
          param_2[0x66] = iVar9;
          uVar7 = (uint)*(byte *)(param_2 + 0x28);
        }
LAB_10028800:
        param_2[0x67] = uVar7;
      }
LAB_100289ad:
      if (bVar1) {
        for (iVar9 = *piVar11; iVar9 != 0; iVar9 = iVar9 + -1) {
          param_2[iVar9 + 0x66] = param_2[iVar9 + 0x65];
        }
        param_2[0x66] = param_2[0x66] | 0x80000000;
        *piVar11 = *piVar11 + 1;
        param_2[0x67] = 0x41;
      }
    }
    FUN_1004b2c7(param_3,(*piVar11 + param_2[0x5d] + param_2[0x55] + param_2[0x4d]) * 0x1000000 +
                         0x1000000U & 0x7f000000 | 0x2032,param_2 + 0x4d,param_2 + 0x55,
                 param_2 + 0x5d,piVar11);
    FUN_10023c8c((int)param_2,uVar8);
    if ((uVar13 == (ushort)param_4) || (uVar13 == (ushort)uVar5)) goto LAB_10028f85;
  }
  FUN_10023c8c((int)param_2,uVar6);
LAB_10028f85:
  if (bVar12 != 0) {
    FUN_1004a6b6((int)param_2,local_14);
  }
  return unaff_EDI;
}

