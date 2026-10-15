/*
 * FUN_1002b0b0 at 1002b0b0
 * uint __fastcall FUN_1002b0b0(int param_1, int * param_2, int * param_3, uint param_4, char param_5)
 * Address ranges: 1002b0b0-1002c366
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1002b0b0(int param_1,int *param_2,int *param_3,uint param_4,char param_5)

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
  byte extraout_DL;
  byte bVar11;
  ushort uVar12;
  int extraout_EDX;
  uint unaff_EDI;
  int *piVar13;
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
  float10 extraout_ST1_07;
  byte bVar16;
  uint uVar17;
  uint local_20;
  float local_18;
  uint local_14;
  float local_c;
  
  cVar3 = *(char *)(param_1 + 0x8c);
  bVar11 = 0;
  local_14 = 0;
  if (cVar3 == '\x01') {
    local_14 = FUN_1004da21((int)param_2,1,'\0');
LAB_1002b11c:
    FUN_10029906(param_2,param_3);
    bVar4 = 1;
LAB_1002b130:
    bVar11 = bVar4;
    if (local_14 == 0) {
      return unaff_EDI;
    }
  }
  else {
    if (cVar3 == '\x02') {
      local_14 = FUN_1004da21((int)param_2,1,'\0');
      goto LAB_1002b11c;
    }
    bVar4 = 0;
    if (cVar3 != '\x03') goto LAB_1002b130;
    local_14 = 0x190101;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x300) == 0x200) {
    cVar3 = FUN_10023e61();
    bVar11 = extraout_DL & ~-(cVar3 != '\0');
  }
  if (bVar11 != 0) {
    uVar5 = FUN_1004da21((int)param_2,4,'\x01');
    uVar6 = FUN_1004da21((int)param_2,2,'\x01');
    FUN_1004e5d0(param_2,param_3,0x34);
    FUN_1004e5d0(param_2,param_3,0x33);
    FUN_1004e5d0(param_2,param_3,0x1c);
    FUN_1004e5d0(param_2,param_3,0x1e);
    FUN_1004e5d0(param_2,param_3,0xa7);
    FUN_1004e5d0(param_2,param_3,0x1e);
    FUN_1004e5d0(param_2,param_3,0xa7);
    FUN_1004e5d0(param_2,param_3,0xa7);
    FUN_1004e5d0(param_2,param_3,0xa7);
    FUN_1004e5d0(param_2,param_3,0xa7);
    FUN_1004e5d0(param_2,param_3,0x1d);
    FUN_1004e5d0(param_2,param_3,1);
    FUN_1004e5d0(param_2,param_3,0x1e);
    FUN_1004e5d0(param_2,param_3,0x1e);
    FUN_1004e5d0(param_2,param_3,0x1e);
    FUN_1004e5d0(param_2,param_3,0x1e);
    FUN_1004e5d0(param_2,param_3,0xa7);
    FUN_1004e5d0(param_2,param_3,0x1e);
    FUN_1004e5d0(param_2,param_3,0xa7);
    FUN_1004e5d0(param_2,param_3,0);
    FUN_1004e5d0(param_2,param_3,0xe);
    FUN_1004e5d0(param_2,param_3,0xa7);
    FUN_1004e5d0(param_2,param_3,0xa7);
    FUN_1004e5d0(param_2,param_3,0);
    FUN_1004dabf((int)param_2,uVar6);
    FUN_1004dabf((int)param_2,uVar5);
    local_14 = FUN_1004da21((int)param_2,1,'\x01');
    FUN_1004e5d0(param_2,param_3,0x32);
    param_2[3] = param_2[3] | 0x700;
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x300) == 0x100) {
LAB_1002c28e:
    if (param_5 == '\0') {
      uVar5 = 0x70;
    }
    else {
      uVar5 = FUN_10026a4e((int)param_2,0,0,0,0,7,'\0');
      uVar5 = uVar5 & 0xffff;
    }
    FUN_1002657e((int)param_2,(ushort)uVar5,7);
    iVar9 = FUN_1004dddc(param_2,(uint *)(param_2 + 0x56),local_14,0,0,0);
    param_2[0x55] = iVar9;
    bVar16 = 0;
    uVar6 = 0;
    bVar4 = FUN_10026b29((int)param_2,uVar5,0xa4);
    iVar9 = FUN_1004daeb(param_2,(uint *)(param_2 + 0x5e),param_2[0x12],0x80,bVar4,uVar6,bVar16);
    param_2[0x5d] = iVar9;
    uVar5 = (param_2[0x55] + param_2[0x4d] + iVar9) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x2038;
LAB_1002c33d:
    FUN_1004e6d0(param_3,uVar5,param_2 + 0x4d,param_2 + 0x55,param_2 + 0x5d,(int *)0x0);
    goto LAB_1002c34d;
  }
  cVar3 = FUN_10023e61();
  if (extraout_EDX == 0x200) {
    if (cVar3 != '\0') {
      FUN_10026db5(param_2,0,0x70,0,7,param_3,'\0');
      goto LAB_1002c34d;
    }
    if (((ushort)param_4 & 0xff0) == 0x100) {
      if (param_5 == '\0') {
        uVar12 = 0x70;
      }
      else {
        uVar5 = FUN_10026a4e((int)param_2,0,0,0,0,7,'\0');
        uVar12 = (ushort)uVar5;
      }
      FUN_1002657e((int)param_2,uVar12,7);
      iVar9 = FUN_1004dddc(param_2,(uint *)(param_2 + 0x56),local_14 | 0x80000000,0,0,0);
      param_2[0x55] = iVar9;
      FUN_100269ca(param_2 + 0x5d,-0x1c,(int)(float)extraout_ST0_00);
      uVar5 = (param_2[0x55] + param_2[0x5d] * 2 + param_2[0x4d]) * 0x1000000 + 0x1000000U &
              0x7f000000 | 0x2000;
      goto LAB_1002c33d;
    }
    if (param_5 == '\0') {
      uVar5 = 0x70;
    }
    else {
      uVar5 = FUN_10026a4e((int)param_2,0,0,0,0,7,'\0');
      uVar5 = uVar5 & 0xffff;
    }
    uVar7 = FUN_10026b80(param_2,param_4,uVar5,0,0,0,7,param_3);
    uVar6 = uVar7 & 0xffff;
    uVar12 = (ushort)uVar7;
    if (((uVar7 & 0x2000) != 0) || ((uVar12 & 0xf00) == 0x100)) {
      if (((uVar12 & 0xf0) != 0xf0) && ((uVar12 & 0xf0) != 0x80)) {
        uVar6 = FUN_10026a4e((int)param_2,0,0,0,0,7,'\0');
        uVar6 = uVar6 & 0xffff;
      }
      FUN_10026db5(param_2,uVar12,uVar6,0,7,param_3,'\x01');
    }
    FUN_1002657e((int)param_2,(ushort)uVar5,7);
    iVar9 = FUN_1004dddc(param_2,(uint *)(param_2 + 0x56),local_14 | 0x80000000,0,0,0);
    param_2[0x55] = iVar9;
    bVar1 = false;
    bVar4 = FUN_10026b29((int)param_2,uVar5,0xa4);
    piVar13 = param_2 + 0x5d;
    uVar12 = (ushort)uVar6;
    if (((uVar12 & 0xff0) != 0x100) &&
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
        *piVar13 = 2;
        uVar7 = FUN_1004e895(1,bVar4,1,4,0,0,0);
        param_2[0x5f] = 2;
        goto LAB_1002c1fd;
      }
      if (uVar8 != 0) {
        if (uVar8 == 0x10) {
          *piVar13 = 2;
          uVar8 = FUN_1004e895(0,bVar4,1,4,0,0,0);
          param_2[0x5e] = uVar8;
          param_2[0x5f] = (uint)*(byte *)(param_2 + uVar7 + 0x21);
        }
        else if ((uVar8 == 0x20) || (uVar8 == 0x30)) {
          uVar7 = *(uint *)((int)param_2 +
                           uVar7 * 4 + ((((byte)uVar6 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar7 != 0) {
            *piVar13 = 2;
            iVar9 = FUN_1004e026(uVar7,0,1,4,0,0);
            param_2[0x5e] = iVar9;
            uVar7 = uVar7 & 0xff;
            goto LAB_1002c035;
          }
          goto LAB_1002c06c;
        }
        goto LAB_1002c203;
      }
LAB_1002c06c:
      if ((uVar12 & 0xf00) == 0x100) {
        local_18 = 1.0;
      }
      else if ((uVar12 & 0xf00) == 0x300) {
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
      FUN_100269ca(piVar13,bVar4,(int)local_18);
    }
    else {
      if (uVar8 != 0x50) {
        if (uVar8 == 0x60) {
          param_2[2] = param_2[2] | 1;
          local_20 = uVar7 * 0x250 + 0x180 >> 4;
          if (*param_2 == 0x51) {
            param_2[0x61] = local_20;
            local_20 = 0;
            iVar9 = 4;
          }
          else {
            iVar9 = 3;
          }
          *piVar13 = iVar9;
          uVar7 = FUN_1004e895(8,bVar4,2,4,0,0,0);
          param_2[0x5e] = uVar7;
          param_2[0x5f] = 0;
          param_2[0x60] = local_20;
        }
        else {
          if (uVar8 == 0x80) {
            *piVar13 = 2;
            iVar9 = FUN_1004e026(param_2[uVar7 + 0x24],bVar4,1,4,0,0);
            param_2[0x5e] = iVar9;
            uVar7 = (uint)*(byte *)(param_2 + uVar7 + 0x24);
          }
          else {
            if (uVar8 != 0xf0) goto LAB_1002c203;
            *piVar13 = 2;
            iVar9 = FUN_1004e026(param_2[0x28],bVar4,1,4,0,0);
            param_2[0x5e] = iVar9;
            uVar7 = (uint)*(byte *)(param_2 + 0x28);
          }
LAB_1002c035:
          param_2[0x5f] = uVar7;
        }
        goto LAB_1002c203;
      }
      param_2[2] = param_2[2] | 1;
      param_2[0x5f] = 0;
      if (*param_2 == 0x51) {
        *piVar13 = 4;
        uVar7 = FUN_1004e895(8,bVar4,3,4,0,0,0);
        param_2[0x60] = 0;
        param_2[0x61] = 5;
      }
      else {
        *piVar13 = 3;
        uVar7 = FUN_1004e895(8,bVar4,2,4,0,0,0);
        param_2[0x60] = 5;
      }
LAB_1002c1fd:
      param_2[0x5e] = uVar7;
LAB_1002c203:
      if (bVar1) {
        for (iVar9 = *piVar13; iVar9 != 0; iVar9 = iVar9 + -1) {
          param_2[iVar9 + 0x5e] = param_2[iVar9 + 0x5d];
        }
        param_2[0x5e] = param_2[0x5e] | 0x80000000;
        *piVar13 = *piVar13 + 1;
        param_2[0x5f] = 0x41;
      }
    }
    FUN_1004e6d0(param_3,(param_2[0x55] + *piVar13 * 2 + param_2[0x4d]) * 0x1000000 + 0x1000000U &
                         0x7f000000 | 0x2032,param_2 + 0x4d,param_2 + 0x55,piVar13,piVar13);
    if ((uVar12 == (ushort)param_4) || (uVar12 == (ushort)uVar5)) goto LAB_1002c34d;
  }
  else {
    if (cVar3 != '\0') goto LAB_1002c28e;
    if (param_5 == '\0') {
      uVar5 = 0x70;
    }
    else {
      uVar5 = FUN_10026a4e((int)param_2,0,0,0,0,7,'\0');
      uVar5 = uVar5 & 0xffff;
    }
    uVar7 = FUN_10026b80(param_2,param_4,uVar5,0,0,0,7,param_3);
    uVar6 = uVar7 & 0xffff;
    uVar12 = (ushort)uVar7;
    if (((uVar7 & 0x2000) != 0) || ((uVar12 & 0xf00) == 0x100)) {
      if (((uVar12 & 0xf0) != 0xf0) && ((uVar12 & 0xf0) != 0x80)) {
        uVar6 = FUN_10026a4e((int)param_2,0,0,0,0,7,'\0');
        uVar6 = uVar6 & 0xffff;
      }
      FUN_10026db5(param_2,uVar12,uVar6,0,7,param_3,'\x01');
    }
    uVar7 = FUN_10026a4e((int)param_2,uVar6,0,0,0,7,'\0');
    uVar8 = uVar7 & 0xffff;
    uVar12 = (ushort)uVar7;
    FUN_1002657e((int)param_2,uVar12,7);
    cVar3 = '\0';
    bVar16 = 1;
    bVar4 = FUN_10026b29((int)param_2,uVar8,0xa4);
    FUN_1002664a(param_2,0,uVar6,bVar4,bVar16,cVar3);
    bVar16 = 0;
    uVar17 = 0;
    bVar4 = FUN_10026b29((int)param_2,uVar8,0xa4);
    iVar9 = FUN_1004daeb(param_2,(uint *)(param_2 + 0x5e),param_2[0x12],0x80,bVar4,uVar17,bVar16);
    param_2[0x5d] = iVar9;
    FUN_1004e6d0(param_3,(param_2[0x55] + param_2[0x4d] + iVar9) * 0x1000000 + 0x1000000U &
                         0x7f000000,param_2 + 0x4d,param_2 + 0x55,param_2 + 0x5d,(int *)0x0);
    FUN_1002657e((int)param_2,(ushort)uVar5,7);
    iVar9 = FUN_1004dddc(param_2,(uint *)(param_2 + 0x56),local_14,0,0,0);
    param_2[0x55] = iVar9;
    bVar1 = false;
    bVar4 = FUN_10026b29((int)param_2,uVar5,0xa4);
    if (((uVar12 & 0xff0) != 0x100) &&
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
        uVar7 = FUN_1004e895(1,bVar4,1,4,0,0,0);
        param_2[0x5e] = uVar7;
        param_2[0x5f] = 2;
        fVar15 = extraout_ST1_01;
        goto LAB_1002b9f5;
      }
      if (uVar10 != 0) {
        if (uVar10 == 0x10) {
          param_2[0x5d] = 2;
          uVar7 = FUN_1004e895(0,bVar4,1,4,0,0,0);
          param_2[0x5e] = uVar7;
          uVar17 = (uint)*(byte *)(param_2 + uVar17 + 0x21);
          fVar15 = extraout_ST1_00;
        }
        else {
          if ((uVar10 != 0x20) && (uVar10 != 0x30)) goto LAB_1002b9f5;
          local_18._0_1_ = (byte)uVar8;
          uVar17 = *(uint *)((int)param_2 +
                            uVar17 * 4 + (((local_18._0_1_ & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar17 == 0) goto LAB_1002b828;
          param_2[0x5d] = 2;
          iVar9 = FUN_1004e026(uVar17,0,1,4,0,0);
          param_2[0x5e] = iVar9;
          uVar17 = uVar17 & 0xff;
          fVar15 = extraout_ST1;
        }
        goto LAB_1002b7f1;
      }
LAB_1002b828:
      if ((uVar12 & 0xf00) == 0x100) {
        local_c = 1.0;
      }
      else {
        fVar2 = fVar15;
        if ((uVar12 & 0xf00) == 0x300) {
          fVar2 = fVar14;
        }
        local_c = (float)fVar2;
      }
      if ((uVar7 & 0x2000) != 0) {
        local_c = local_c * 255.0;
      }
      if (bVar1) {
        local_c = -local_c;
      }
      FUN_100269ca(param_2 + 0x5d,bVar4,(int)local_c);
    }
    else {
      piVar13 = param_2 + 0x5d;
      if (uVar10 == 0x50) {
        param_2[2] = param_2[2] | 1;
        param_2[0x5f] = 0;
        if (*param_2 == 0x51) {
          *piVar13 = 4;
          uVar7 = FUN_1004e895(8,bVar4,3,4,0,0,0);
          param_2[0x5e] = uVar7;
          param_2[0x60] = 0;
          param_2[0x61] = 5;
          fVar15 = extraout_ST1_05;
        }
        else {
          *piVar13 = 3;
          uVar7 = FUN_1004e895(8,bVar4,2,4,0,0,0);
          param_2[0x5e] = uVar7;
          param_2[0x60] = 5;
          fVar15 = extraout_ST1_06;
        }
      }
      else if (uVar10 == 0x60) {
        param_2[2] = param_2[2] | 1;
        local_c = (float)(uVar17 * 0x250 + 0x180 >> 4);
        if (*param_2 == 0x51) {
          param_2[0x61] = (int)local_c;
          local_c = 0.0;
          iVar9 = 4;
        }
        else {
          iVar9 = 3;
        }
        *piVar13 = iVar9;
        uVar7 = FUN_1004e895(8,bVar4,2,4,0,0,0);
        param_2[0x5e] = uVar7;
        param_2[0x5f] = 0;
        param_2[0x60] = (int)local_c;
        fVar15 = extraout_ST1_04;
      }
      else {
        if (uVar10 == 0x80) {
          *piVar13 = 2;
          iVar9 = FUN_1004e026(param_2[uVar17 + 0x24],bVar4,1,4,0,0);
          param_2[0x5e] = iVar9;
          uVar17 = (uint)*(byte *)(param_2 + uVar17 + 0x24);
          fVar15 = extraout_ST1_03;
        }
        else {
          if (uVar10 != 0xf0) goto LAB_1002b9f5;
          *piVar13 = 2;
          iVar9 = FUN_1004e026(param_2[0x28],bVar4,1,4,0,0);
          param_2[0x5e] = iVar9;
          uVar17 = (uint)*(byte *)(param_2 + 0x28);
          fVar15 = extraout_ST1_02;
        }
LAB_1002b7f1:
        param_2[0x5f] = uVar17;
      }
LAB_1002b9f5:
      piVar13 = param_2 + 0x5d;
      if (bVar1) {
        for (iVar9 = *piVar13; iVar9 != 0; iVar9 = iVar9 + -1) {
          param_2[iVar9 + 0x5e] = param_2[iVar9 + 0x5d];
        }
        param_2[0x5e] = param_2[0x5e] | 0x80000000;
        *piVar13 = *piVar13 + 1;
        param_2[0x5f] = 0x41;
      }
    }
    bVar1 = false;
    bVar4 = FUN_10026b29((int)param_2,uVar5,0xa4);
    piVar13 = param_2 + 0x65;
    uVar12 = (ushort)uVar6;
    if (((uVar12 & 0xff0) != 0x100) &&
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
        *piVar13 = 2;
        uVar7 = FUN_1004e895(1,bVar4,1,4,0,0,0);
        param_2[0x66] = uVar7;
        param_2[0x67] = 2;
        goto LAB_1002bd1e;
      }
      if (uVar17 != 0) {
        if (uVar17 == 0x10) {
          *piVar13 = 2;
          uVar17 = FUN_1004e895(0,bVar4,1,4,0,0,0);
          param_2[0x66] = uVar17;
          uVar7 = (uint)*(byte *)(param_2 + uVar7 + 0x21);
        }
        else {
          if ((uVar17 != 0x20) && (uVar17 != 0x30)) goto LAB_1002bd1e;
          uVar7 = *(uint *)((int)param_2 +
                           uVar7 * 4 + ((((byte)uVar6 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar7 == 0) goto LAB_1002bb4f;
          *piVar13 = 2;
          iVar9 = FUN_1004e026(uVar7,0,1,4,0,0);
          param_2[0x66] = iVar9;
          uVar7 = uVar7 & 0xff;
        }
        goto LAB_1002bb14;
      }
LAB_1002bb4f:
      fVar2 = extraout_ST0;
      if (((uVar12 & 0xf00) == 0x100) || (fVar2 = fVar14, (uVar12 & 0xf00) == 0x300)) {
        fVar15 = fVar2;
      }
      local_c = (float)fVar15;
      if ((uVar6 & 0x2000) != 0) {
        local_c = (float)(extraout_ST1_07 * (float10)local_c);
      }
      if (bVar1) {
        local_c = -local_c;
      }
      FUN_100269ca(piVar13,bVar4,(int)local_c);
    }
    else {
      if (uVar17 == 0x50) {
        param_2[2] = param_2[2] | 1;
        param_2[0x67] = 0;
        if (*param_2 == 0x51) {
          *piVar13 = 4;
          uVar7 = FUN_1004e895(8,bVar4,3,4,0,0,0);
          param_2[0x66] = uVar7;
          param_2[0x68] = 0;
          param_2[0x69] = 5;
        }
        else {
          *piVar13 = 3;
          uVar7 = FUN_1004e895(8,bVar4,2,4,0,0,0);
          param_2[0x66] = uVar7;
          param_2[0x68] = 5;
        }
      }
      else if (uVar17 == 0x60) {
        param_2[2] = param_2[2] | 1;
        local_20 = uVar7 * 0x250 + 0x180 >> 4;
        if (*param_2 == 0x51) {
          param_2[0x69] = local_20;
          local_20 = 0;
          iVar9 = 4;
        }
        else {
          iVar9 = 3;
        }
        *piVar13 = iVar9;
        uVar7 = FUN_1004e895(8,bVar4,2,4,0,0,0);
        param_2[0x66] = uVar7;
        param_2[0x67] = 0;
        param_2[0x68] = local_20;
      }
      else {
        if (uVar17 == 0x80) {
          *piVar13 = 2;
          iVar9 = FUN_1004e026(param_2[uVar7 + 0x24],bVar4,1,4,0,0);
          param_2[0x66] = iVar9;
          uVar7 = (uint)*(byte *)(param_2 + uVar7 + 0x24);
        }
        else {
          if (uVar17 != 0xf0) goto LAB_1002bd1e;
          *piVar13 = 2;
          iVar9 = FUN_1004e026(param_2[0x28],bVar4,1,4,0,0);
          param_2[0x66] = iVar9;
          uVar7 = (uint)*(byte *)(param_2 + 0x28);
        }
LAB_1002bb14:
        param_2[0x67] = uVar7;
      }
LAB_1002bd1e:
      if (bVar1) {
        for (iVar9 = *piVar13; iVar9 != 0; iVar9 = iVar9 + -1) {
          param_2[iVar9 + 0x66] = param_2[iVar9 + 0x65];
        }
        param_2[0x66] = param_2[0x66] | 0x80000000;
        *piVar13 = *piVar13 + 1;
        param_2[0x67] = 0x41;
      }
    }
    FUN_1004e6d0(param_3,(*piVar13 + param_2[0x5d] + param_2[0x55] + param_2[0x4d]) * 0x1000000 +
                         0x1000000U & 0x7f000000 | 0x2032,param_2 + 0x4d,param_2 + 0x55,
                 param_2 + 0x5d,piVar13);
    FUN_10026afe((int)param_2,uVar8);
    if ((uVar12 == (ushort)param_4) || (uVar12 == (ushort)uVar5)) goto LAB_1002c34d;
  }
  FUN_10026afe((int)param_2,uVar6);
LAB_1002c34d:
  if (bVar11 != 0) {
    FUN_1004dabf((int)param_2,local_14);
  }
  return unaff_EDI;
}

