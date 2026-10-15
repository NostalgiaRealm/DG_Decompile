/*
 * FUN_10024b5f at 10024b5f
 * undefined __fastcall FUN_10024b5f(int * param_1, ushort * param_2, ushort param_3, byte param_4, byte param_5, void * param_6)
 * Address ranges: 10024b5f-1002645f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10024b5f(int *param_1,ushort *param_2,ushort param_3,byte param_4,byte param_5,void *param_6)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ushort uVar12;
  uint extraout_EDX;
  undefined2 extraout_var;
  undefined4 extraout_EDX_00;
  undefined4 uVar13;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  float10 fVar15;
  float10 extraout_ST0;
  float10 fVar16;
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
  float10 extraout_ST1_08;
  int *piVar17;
  int *piVar18;
  byte bVar19;
  uint local_44;
  uint local_40;
  short local_3c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  uint local_14;
  uint local_10;
  uint local_c;
  undefined2 uVar14;
  
  uVar1 = param_2[1];
  cVar7 = FUN_10021367();
  uVar9 = extraout_EDX;
  if ((cVar7 == '\0') &&
     (cVar7 = FUN_10021367(), uVar9 = (uint)uVar1, uVar14 = extraout_var, cVar7 == '\0')) {
LAB_10024bdb:
    local_10 = FUN_10023bdc((int)param_1,CONCAT22(uVar14,*param_2),(uint)param_2[3],0,0,param_4,
                            '\x01');
    local_10 = local_10 & 0xffff;
    uVar9 = FUN_1002426b(param_1,param_2[1],param_2[2],0,local_10,0,param_4,param_5,param_6,'\0',0);
    if ((char)uVar9 == '\0') {
      local_10 = local_10 | 0x2000;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  else {
    local_10 = uVar9 & 0xffff;
    fVar15 = FUN_100216fb(uVar9);
    uVar13 = extraout_EDX_00;
    if ((float10)0 != fVar15) {
      uVar13 = 0;
      local_10 = ~-(uint)(((ushort)extraout_EDX_00 & 0xff0) != 0x300) & uVar9 & 0xffff;
    }
    uVar14 = (undefined2)((uint)uVar13 >> 0x10);
    if ((short)local_10 == 0) goto LAB_10024bdb;
  }
  local_14 = (uint)*param_2;
  fVar15 = FUN_100216fb(local_14);
  uVar1 = (ushort)local_10;
  uVar9 = extraout_EDX_01;
  if (((float10)0 != fVar15) && ((uVar1 & 0xff0) != 0x300)) {
    uVar9 = FUN_10023bdc((int)param_1,local_10,(uint)param_2[3],0,0,param_4,'\x01');
    uVar9 = uVar9 & 0xffff;
    uVar10 = FUN_1002426b(param_1,*param_2,0,0,uVar9,0,param_4,param_5,param_6,'\0',0);
    if ((char)uVar10 == '\0') {
      uVar9 = uVar9 | 0x2000;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    local_14 = uVar9;
  }
  if ((uVar9 & 0x2000) == 0) {
    local_38 = 1.0;
  }
  else {
    local_38 = 255.0;
  }
  fVar2 = 1.0;
  if ((local_10 & 0x2000) != 0) {
    fVar2 = 255.0;
  }
  uVar6 = param_2[4];
  fVar2 = fVar2 * local_38;
  fVar3 = (float)(1 << ((byte)uVar6 & 0x1f));
  local_c = (uint)param_3;
  bVar5 = false;
  cVar7 = FUN_10021367();
  uVar12 = (ushort)local_14;
  local_3c = (short)(local_10 & 0x2000);
  uVar9 = extraout_EDX_02;
  fVar15 = extraout_ST0;
  if (cVar7 == '\0') {
LAB_100250e2:
    fVar16 = fVar15;
    if ((uVar9 & 0xf0) != 0) {
      fVar16 = FUN_100216fb(uVar9);
      fVar15 = (float10)0;
      uVar9 = extraout_EDX_04;
    }
    local_34 = (float)fVar16;
    if ((uVar9 & 0x2000) == 0) {
      local_28 = 1.0;
    }
    else {
      local_28 = 255.0;
    }
    if (fVar2 != local_28) {
      local_c = local_14;
      if (((uVar12 & 0xf0) != 0x80) && ((uVar12 & 0xf0) != 0xf0)) {
        local_c = local_10;
      }
      uVar12 = (ushort)local_c & 0xf0;
      if ((uVar12 != 0x80) && (uVar12 != 0xf0)) {
        local_c = FUN_10023bdc((int)param_1,0,0,0,0,param_4,'\0');
        local_c = local_c & 0xffff;
        bVar5 = true;
      }
      uVar12 = (ushort)local_c;
      FUN_10023753((int)param_1,uVar12,param_4);
      cVar7 = '\0';
      bVar19 = 0;
      bVar8 = FUN_10023cb7((int)param_1,local_c,param_5);
      FUN_1002381f(param_1,0,local_14,bVar8,bVar19,cVar7);
      bVar4 = false;
      bVar8 = FUN_10023cb7((int)param_1,local_c,param_5);
      piVar17 = param_1 + 0x5d;
      if (((uVar1 & 0xff0) != 0x100) &&
         (((uVar9 = local_10 & 0xf00, uVar9 == 0x100 || (uVar9 == 0x200)) || (uVar9 == 0x500)))) {
        bVar4 = true;
      }
      uVar9 = local_10 & 0xf;
      if ((local_10 & 0x1000) != 0) {
        bVar8 = 0xff;
      }
      uVar10 = local_10 & 0xf0;
      if (uVar10 < 0x41) {
        if (uVar10 == 0x40) {
          *piVar17 = 2;
          uVar9 = FUN_1004b48c(1,bVar8,1,4,0,0,0);
          param_1[0x5e] = uVar9;
          param_1[0x5f] = 2;
          goto LAB_10025b64;
        }
        if (uVar10 != 0) {
          if (uVar10 == 0x10) {
            *piVar17 = 2;
            uVar10 = FUN_1004b48c(0,bVar8,1,4,0,0,0);
            param_1[0x5e] = uVar10;
            uVar9 = (uint)*(byte *)(param_1 + uVar9 + 0x21);
          }
          else {
            if ((uVar10 != 0x20) && (uVar10 != 0x30)) goto LAB_10025b64;
            uVar9 = *(uint *)((int)param_1 +
                             uVar9 * 4 + ((((byte)local_10 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
            if (uVar9 == 0) goto LAB_10025a0f;
            *piVar17 = 2;
            iVar11 = FUN_1004ac1d(uVar9,0,1,4,0,0);
            param_1[0x5e] = iVar11;
            uVar9 = uVar9 & 0xff;
          }
          goto LAB_100259dc;
        }
LAB_10025a0f:
        if ((uVar1 & 0xf00) == 0x100) {
          local_24 = 1.0;
        }
        else if ((uVar1 & 0xf00) == 0x300) {
          local_24 = -0.5;
        }
        else {
          local_24 = 0.0;
        }
        if (local_3c != 0) {
          local_24 = local_24 * 255.0;
        }
        if (bVar4) {
          local_24 = -local_24;
        }
        FUN_10023b58(piVar17,bVar8,(int)local_24);
      }
      else {
        if (uVar10 == 0x50) {
          param_1[2] = param_1[2] | 1;
          param_1[0x5f] = 0;
          if (*param_1 == 0x51) {
            *piVar17 = 4;
            uVar9 = FUN_1004b48c(8,bVar8,3,4,0,0,0);
            param_1[0x5e] = uVar9;
            param_1[0x60] = 0;
            param_1[0x61] = 5;
          }
          else {
            *piVar17 = 3;
            uVar9 = FUN_1004b48c(8,bVar8,2,4,0,0,0);
            param_1[0x5e] = uVar9;
            param_1[0x60] = 5;
          }
        }
        else {
          if (uVar10 == 0x80) {
            *piVar17 = 2;
            iVar11 = FUN_1004ac1d(param_1[uVar9 + 0x24],bVar8,1,4,0,0);
            param_1[0x5e] = iVar11;
            uVar9 = (uint)*(byte *)(param_1 + uVar9 + 0x24);
          }
          else {
            if (uVar10 != 0xf0) goto LAB_10025b64;
            *piVar17 = 2;
            iVar11 = FUN_1004ac1d(param_1[0x28],bVar8,1,4,0,0);
            param_1[0x5e] = iVar11;
            uVar9 = (uint)*(byte *)(param_1 + 0x28);
          }
LAB_100259dc:
          param_1[0x5f] = uVar9;
        }
LAB_10025b64:
        if (bVar4) {
          for (iVar11 = *piVar17; iVar11 != 0; iVar11 = iVar11 + -1) {
            param_1[iVar11 + 0x5e] = param_1[iVar11 + 0x5d];
          }
          param_1[0x5e] = param_1[0x5e] | 0x80000000;
          *piVar17 = *piVar17 + 1;
          param_1[0x5f] = 0x41;
        }
      }
      FUN_1004b2c7(param_6,(*piVar17 + param_1[0x55] + param_1[0x4d]) * 0x1000000 + 0x1000000U &
                           0x7f000000 | 0x38,param_1 + 0x4d,param_1 + 0x55,piVar17,(int *)0x0);
      if ((local_34 == 0.0) && ((char)param_2[4] == '\0')) {
        local_2c = (float)(uint)param_3;
        local_40 = 0x2000;
      }
      else {
        local_40 = 0;
        local_2c = (float)local_c;
      }
      if (fVar2 == 1.0) {
LAB_10025ca4:
        if (local_28 != 1.0) {
          FUN_10023753((int)param_1,SUB42(local_2c,0),param_4);
          cVar7 = '\0';
          bVar19 = 0;
          bVar8 = FUN_10023cb7((int)param_1,(uint)local_2c,param_5);
          FUN_1002381f(param_1,0,(uint)param_2[3],bVar8,bVar19,cVar7);
          FUN_10023b58(piVar17,param_5,(int)(1.0 / local_28));
          bVar4 = false;
          bVar8 = FUN_10023cb7((int)param_1,(uint)local_2c,param_5);
          piVar18 = param_1 + 0x65;
          if (((uVar12 & 0xff0) != 0x100) &&
             (((uVar9 = local_c & 0xf00, uVar9 == 0x100 || (uVar9 == 0x200)) || (uVar9 == 0x500))))
          {
            bVar4 = true;
          }
          uVar9 = local_c & 0xf;
          if ((local_c & 0x1000) != 0) {
            bVar8 = 0xff;
          }
          uVar10 = local_c & 0xf0;
          if (uVar10 < 0x41) {
            if (uVar10 == 0x40) {
              *piVar18 = 2;
              uVar9 = FUN_1004b48c(1,bVar8,1,4,0,0,0);
              param_1[0x67] = 2;
              goto LAB_10025f9a;
            }
            if (uVar10 != 0) {
              if (uVar10 == 0x10) {
                *piVar18 = 2;
                uVar10 = FUN_1004b48c(0,bVar8,1,4,0,0,0);
                param_1[0x66] = uVar10;
                param_1[0x67] = (uint)*(byte *)(param_1 + uVar9 + 0x21);
              }
              else if ((uVar10 == 0x20) || (uVar10 == 0x30)) {
                uVar9 = *(uint *)((int)param_1 +
                                 uVar9 * 4 + ((((byte)local_c & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
                if (uVar9 != 0) {
                  *piVar18 = 2;
                  iVar11 = FUN_1004ac1d(uVar9,0,1,4,0,0);
                  param_1[0x66] = iVar11;
                  uVar9 = uVar9 & 0xff;
                  goto LAB_10025df3;
                }
                goto LAB_10025e32;
              }
              goto LAB_10025fa0;
            }
LAB_10025e32:
            if ((uVar12 & 0xf00) == 0x100) {
              local_24 = 1.0;
            }
            else if ((uVar12 & 0xf00) == 0x300) {
              local_24 = -0.5;
            }
            else {
              local_24 = 0.0;
            }
            if ((local_c & 0x2000) != 0) {
              local_24 = local_24 * 255.0;
            }
            if (bVar4) {
              local_24 = -local_24;
            }
            FUN_10023b58(param_1 + 0x65,bVar8,(int)local_24);
          }
          else {
            if (uVar10 != 0x50) {
              if (uVar10 == 0x80) {
                *piVar18 = 2;
                iVar11 = FUN_1004ac1d(param_1[uVar9 + 0x24],bVar8,1,4,0,0);
                param_1[0x66] = iVar11;
                uVar9 = (uint)*(byte *)(param_1 + uVar9 + 0x24);
              }
              else {
                if (uVar10 != 0xf0) goto LAB_10025fa0;
                *piVar18 = 2;
                iVar11 = FUN_1004ac1d(param_1[0x28],bVar8,1,4,0,0);
                param_1[0x66] = iVar11;
                uVar9 = (uint)*(byte *)(param_1 + 0x28);
              }
LAB_10025df3:
              param_1[0x67] = uVar9;
              goto LAB_10025fa0;
            }
            param_1[2] = param_1[2] | 1;
            param_1[0x67] = 0;
            if (*param_1 == 0x51) {
              *piVar18 = 4;
              uVar9 = FUN_1004b48c(8,bVar8,3,4,0,0,0);
              param_1[0x68] = 0;
              param_1[0x69] = 5;
            }
            else {
              *piVar18 = 3;
              uVar9 = FUN_1004b48c(8,bVar8,2,4,0,0,0);
              param_1[0x68] = 5;
            }
LAB_10025f9a:
            param_1[0x66] = uVar9;
LAB_10025fa0:
            piVar18 = param_1 + 0x65;
            if (bVar4) {
              for (iVar11 = *piVar18; iVar11 != 0; iVar11 = iVar11 + -1) {
                param_1[iVar11 + 0x66] = param_1[iVar11 + 0x65];
              }
              param_1[0x66] = param_1[0x66] | 0x80000000;
              *piVar18 = *piVar18 + 1;
              param_1[0x67] = 0x41;
            }
          }
          FUN_1004b2c7(param_6,(param_1[0x65] + *piVar17 + param_1[0x55] + param_1[0x4d]) *
                               0x1000000 + 0x1000000U & 0x7f000000 | local_40 | 0x32,param_1 + 0x4d,
                       param_1 + 0x55,piVar17,param_1 + 0x65);
        }
      }
      else if (local_28 != 1.0) {
        FUN_10023753((int)param_1,uVar12,param_4);
        cVar7 = '\0';
        bVar19 = 0;
        bVar8 = FUN_10023cb7((int)param_1,(uint)local_2c,param_5);
        FUN_1002381f(param_1,0,local_c,bVar8,bVar19,cVar7);
        FUN_10023b58(piVar17,param_5,(int)(1.0 / fVar2));
        FUN_1004b2c7(param_6,(*piVar17 + param_1[0x55] + param_1[0x4d]) * 0x1000000 + 0x1000000U &
                             0x7f000000 | 0x38,param_1 + 0x4d,param_1 + 0x55,piVar17,(int *)0x0);
        goto LAB_10025ca4;
      }
      if ((fVar2 != 1.0) && (local_28 == 1.0)) {
        FUN_10023753((int)param_1,SUB42(local_2c,0),param_4);
        cVar7 = '\0';
        bVar19 = 0;
        bVar8 = FUN_10023cb7((int)param_1,(uint)local_2c,param_5);
        FUN_1002381f(param_1,0,local_c,bVar8,bVar19,cVar7);
        FUN_10023b58(piVar17,param_5,(int)(1.0 / fVar2));
        bVar4 = false;
        bVar8 = FUN_10023cb7((int)param_1,(uint)local_2c,param_5);
        piVar18 = param_1 + 0x65;
        uVar1 = param_2[3];
        uVar9 = (uint)uVar1;
        if (((uVar1 & 0xff0) != 0x100) &&
           (((uVar10 = uVar9 & 0xf00, uVar10 == 0x100 || (uVar10 == 0x200)) || (uVar10 == 0x500))))
        {
          bVar4 = true;
        }
        uVar10 = uVar9 & 0xf;
        if ((uVar1 & 0x1000) != 0) {
          bVar8 = 0xff;
        }
        uVar9 = uVar9 & 0xf0;
        if (uVar9 < 0x41) {
          if (uVar9 == 0x40) {
            *piVar18 = 2;
            uVar9 = FUN_1004b48c(1,bVar8,1,4,0,0,0);
            param_1[0x67] = 2;
            goto LAB_100262d8;
          }
          if ((uVar1 & 0xf0) != 0) {
            if (uVar9 == 0x10) {
              *piVar18 = 2;
              uVar9 = FUN_1004b48c(0,bVar8,1,4,0,0,0);
              param_1[0x66] = uVar9;
              param_1[0x67] = (uint)*(byte *)(param_1 + uVar10 + 0x21);
            }
            else if ((uVar9 == 0x20) || (uVar9 == 0x30)) {
              local_2c._0_1_ = (byte)uVar1;
              uVar9 = *(uint *)((int)param_1 +
                               uVar10 * 4 + (((local_2c._0_1_ & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
              if (uVar9 != 0) {
                *piVar18 = 2;
                iVar11 = FUN_1004ac1d(uVar9,0,1,4,0,0);
                param_1[0x66] = iVar11;
                uVar9 = uVar9 & 0xff;
                goto LAB_1002616f;
              }
              goto LAB_100261a6;
            }
            goto LAB_100262de;
          }
LAB_100261a6:
          if ((uVar1 & 0xf00) == 0x100) {
            local_2c = 1.0;
          }
          else if ((uVar1 & 0xf00) == 0x300) {
            local_2c = -0.5;
          }
          else {
            local_2c = 0.0;
          }
          if ((uVar1 & 0x2000) != 0) {
            local_2c = local_2c * 255.0;
          }
          if (bVar4) {
            local_2c = -local_2c;
          }
          FUN_10023b58(piVar18,bVar8,(int)local_2c);
        }
        else {
          if (uVar9 != 0x50) {
            if (uVar9 == 0x80) {
              *piVar18 = 2;
              iVar11 = FUN_1004ac1d(param_1[uVar10 + 0x24],bVar8,1,4,0,0);
              param_1[0x66] = iVar11;
              uVar9 = (uint)*(byte *)(param_1 + uVar10 + 0x24);
            }
            else {
              if (uVar9 != 0xf0) goto LAB_100262de;
              *piVar18 = 2;
              iVar11 = FUN_1004ac1d(param_1[0x28],bVar8,1,4,0,0);
              param_1[0x66] = iVar11;
              uVar9 = (uint)*(byte *)(param_1 + 0x28);
            }
LAB_1002616f:
            param_1[0x67] = uVar9;
            goto LAB_100262de;
          }
          param_1[2] = param_1[2] | 1;
          param_1[0x67] = 0;
          if (*param_1 == 0x51) {
            *piVar18 = 4;
            uVar9 = FUN_1004b48c(8,bVar8,3,4,0,0,0);
            param_1[0x68] = 0;
            param_1[0x69] = 5;
          }
          else {
            *piVar18 = 3;
            uVar9 = FUN_1004b48c(8,bVar8,2,4,0,0,0);
            param_1[0x68] = 5;
          }
LAB_100262d8:
          param_1[0x66] = uVar9;
LAB_100262de:
          if (bVar4) {
            for (iVar11 = *piVar18; iVar11 != 0; iVar11 = iVar11 + -1) {
              param_1[iVar11 + 0x66] = param_1[iVar11 + 0x65];
            }
            param_1[0x66] = param_1[0x66] | 0x80000000;
            *piVar18 = *piVar18 + 1;
            param_1[0x67] = 0x41;
          }
        }
        FUN_1004b2c7(param_6,(*piVar18 + *piVar17 + param_1[0x55] + param_1[0x4d]) * 0x1000000 +
                             0x1000000U & 0x7f000000 | local_40 | 0x32,param_1 + 0x4d,param_1 + 0x55
                     ,piVar17,piVar18);
      }
      FUN_10023753((int)param_1,param_3,param_4);
      FUN_1002381f(param_1,0,local_c,param_5,0,'\0');
      if (local_34 != 0.0) {
        if ((char)param_2[4] != '\0') {
          fVar15 = (float10)FUN_10023b58(piVar17,param_5,(int)fVar3);
          FUN_10023b58(param_1 + 0x65,param_5,
                       (int)(float)((fVar15 * extraout_ST1_08) / (float10)local_28));
          goto LAB_10025830;
        }
        FUN_10023b58(piVar17,param_5,(int)(local_34 / local_28));
        iVar11 = *piVar17 + param_1[0x55] + param_1[0x4d];
        goto LAB_10025802;
      }
      if ((char)param_2[4] == '\0') goto LAB_10026437;
      FUN_10023b58(piVar17,param_5,(int)fVar3);
      iVar11 = *piVar17 + param_1[0x55] + param_1[0x4d];
      goto LAB_1002641c;
    }
    local_44 = 0x2000;
    if (((local_28 != 1.0) || ((byte)uVar6 != 0)) || ((float10)local_34 != fVar15)) {
      local_c = local_14;
      if (((uVar12 & 0xf0) != 0x80) && ((uVar12 & 0xf0) != 0xf0)) {
        local_c = local_10;
      }
      uVar12 = (ushort)local_c & 0xf0;
      if ((uVar12 != 0x80) && (uVar12 != 0xf0)) {
        local_c = FUN_10023bdc((int)param_1,0,0,0,0,param_4,'\0');
        local_c = local_c & 0xffff;
        bVar5 = true;
      }
      local_44 = 0;
    }
    FUN_10023753((int)param_1,(ushort)local_c,param_4);
    cVar7 = '\0';
    bVar19 = 0;
    bVar8 = FUN_10023cb7((int)param_1,local_c,param_5);
    FUN_1002381f(param_1,0,local_14,bVar8,bVar19,cVar7);
    bVar4 = false;
    bVar8 = FUN_10023cb7((int)param_1,local_c,param_5);
    piVar18 = param_1 + 0x5d;
    if (((uVar1 & 0xff0) != 0x100) &&
       (((uVar9 = local_10 & 0xf00, uVar9 == 0x100 || (uVar9 == 0x200)) || (uVar9 == 0x500)))) {
      bVar4 = true;
    }
    uVar9 = local_10 & 0xf;
    if ((local_10 & 0x1000) != 0) {
      bVar8 = 0xff;
    }
    fVar15 = (float10)-0.5;
    uVar10 = local_10 & 0xf0;
    if (uVar10 < 0x41) {
      if (uVar10 == 0x40) {
        *piVar18 = 2;
        uVar9 = FUN_1004b48c(1,bVar8,1,4,0,0,0);
        param_1[0x5f] = 2;
        fVar15 = extraout_ST1_01;
        goto LAB_1002543d;
      }
      if (uVar10 != 0) {
        if (uVar10 == 0x10) {
          *piVar18 = 2;
          uVar10 = FUN_1004b48c(0,bVar8,1,4,0,0,0);
          param_1[0x5e] = uVar10;
          param_1[0x5f] = (uint)*(byte *)(param_1 + uVar9 + 0x21);
          fVar15 = extraout_ST1_00;
        }
        else if ((uVar10 == 0x20) || (uVar10 == 0x30)) {
          uVar9 = *(uint *)((int)param_1 +
                           uVar9 * 4 + ((((byte)local_10 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar9 != 0) {
            *piVar18 = 2;
            iVar11 = FUN_1004ac1d(uVar9,0,1,4,0,0);
            param_1[0x5e] = iVar11;
            uVar9 = uVar9 & 0xff;
            fVar15 = extraout_ST1;
            goto LAB_100252d0;
          }
          goto LAB_10025305;
        }
        goto LAB_10025443;
      }
LAB_10025305:
      if ((uVar1 & 0xf00) == 0x100) {
        local_1c = 1.0;
      }
      else if ((uVar1 & 0xf00) == 0x300) {
        local_1c = (float)fVar15;
      }
      else {
        local_1c = 0.0;
      }
      if (local_3c != 0) {
        local_1c = local_1c * 255.0;
      }
      if (bVar4) {
        local_1c = -local_1c;
      }
      FUN_10023b58(piVar18,bVar8,(int)local_1c);
    }
    else {
      if (uVar10 != 0x50) {
        if (uVar10 == 0x80) {
          *piVar18 = 2;
          iVar11 = FUN_1004ac1d(param_1[uVar9 + 0x24],bVar8,1,4,0,0);
          param_1[0x5e] = iVar11;
          uVar9 = (uint)*(byte *)(param_1 + uVar9 + 0x24);
          fVar15 = extraout_ST1_03;
        }
        else {
          if (uVar10 != 0xf0) goto LAB_10025443;
          *piVar18 = 2;
          iVar11 = FUN_1004ac1d(param_1[0x28],bVar8,1,4,0,0);
          param_1[0x5e] = iVar11;
          uVar9 = (uint)*(byte *)(param_1 + 0x28);
          fVar15 = extraout_ST1_02;
        }
LAB_100252d0:
        param_1[0x5f] = uVar9;
        goto LAB_10025443;
      }
      param_1[2] = param_1[2] | 1;
      param_1[0x5f] = 0;
      if (*param_1 == 0x51) {
        *piVar18 = 4;
        uVar9 = FUN_1004b48c(8,bVar8,3,4,0,0,0);
        param_1[0x60] = 0;
        param_1[0x61] = 5;
        fVar15 = extraout_ST1_04;
      }
      else {
        *piVar18 = 3;
        uVar9 = FUN_1004b48c(8,bVar8,2,4,0,0,0);
        param_1[0x60] = 5;
        fVar15 = extraout_ST1_05;
      }
LAB_1002543d:
      param_1[0x5e] = uVar9;
LAB_10025443:
      if (bVar4) {
        for (iVar11 = *piVar18; iVar11 != 0; iVar11 = iVar11 + -1) {
          param_1[iVar11 + 0x5e] = param_1[iVar11 + 0x5d];
        }
        param_1[0x5e] = param_1[0x5e] | 0x80000000;
        *piVar18 = *piVar18 + 1;
        param_1[0x5f] = 0x41;
      }
    }
    bVar4 = false;
    bVar8 = FUN_10023cb7((int)param_1,local_c,param_5);
    piVar17 = param_1 + 0x65;
    uVar1 = param_2[3];
    uVar9 = (uint)uVar1;
    if (((uVar1 & 0xff0) != 0x100) &&
       (((uVar10 = uVar9 & 0xf00, uVar10 == 0x100 || (uVar10 == 0x200)) || (uVar10 == 0x500)))) {
      bVar4 = true;
    }
    uVar10 = uVar9 & 0xf;
    if ((uVar1 & 0x1000) != 0) {
      bVar8 = 0xff;
    }
    uVar9 = uVar9 & 0xf0;
    if (uVar9 < 0x41) {
      if (uVar9 == 0x40) {
        *piVar17 = 2;
        uVar9 = FUN_1004b48c(1,bVar8,1,4,0,0,0);
        param_1[0x66] = uVar9;
        param_1[0x67] = 2;
        goto LAB_100256ef;
      }
      if ((uVar1 & 0xf0) != 0) {
        if (uVar9 == 0x10) {
          *piVar17 = 2;
          uVar9 = FUN_1004b48c(0,bVar8,1,4,0,0,0);
          param_1[0x66] = uVar9;
          uVar9 = (uint)*(byte *)(param_1 + uVar10 + 0x21);
        }
        else {
          if ((uVar9 != 0x20) && (uVar9 != 0x30)) goto LAB_100256ef;
          local_2c._0_1_ = (byte)uVar1;
          uVar9 = *(uint *)((int)param_1 +
                           uVar10 * 4 + (((local_2c._0_1_ & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar9 == 0) goto LAB_10025597;
          *piVar17 = 2;
          iVar11 = FUN_1004ac1d(uVar9,0,1,4,0,0);
          param_1[0x66] = iVar11;
          uVar9 = uVar9 & 0xff;
        }
        goto LAB_10025560;
      }
LAB_10025597:
      if ((uVar1 & 0xf00) == 0x100) {
        fVar16 = (float10)1;
      }
      else {
        fVar16 = extraout_ST0_00;
        if ((uVar1 & 0xf00) == 0x300) {
          fVar16 = fVar15;
        }
      }
      local_1c = (float)fVar16;
      if ((uVar1 & 0x2000) != 0) {
        local_1c = (float)(extraout_ST1_06 * (float10)local_1c);
      }
      if (bVar4) {
        local_1c = -local_1c;
      }
      FUN_10023b58(piVar17,bVar8,(int)local_1c);
    }
    else {
      if (uVar9 == 0x50) {
        param_1[2] = param_1[2] | 1;
        param_1[0x67] = 0;
        if (*param_1 == 0x51) {
          *piVar17 = 4;
          uVar9 = FUN_1004b48c(8,bVar8,3,4,0,0,0);
          param_1[0x66] = uVar9;
          param_1[0x68] = 0;
          param_1[0x69] = 5;
        }
        else {
          *piVar17 = 3;
          uVar9 = FUN_1004b48c(8,bVar8,2,4,0,0,0);
          param_1[0x66] = uVar9;
          param_1[0x68] = 5;
        }
      }
      else {
        if (uVar9 == 0x80) {
          *piVar17 = 2;
          iVar11 = FUN_1004ac1d(param_1[uVar10 + 0x24],bVar8,1,4,0,0);
          param_1[0x66] = iVar11;
          uVar9 = (uint)*(byte *)(param_1 + uVar10 + 0x24);
        }
        else {
          if (uVar9 != 0xf0) goto LAB_100256ef;
          *piVar17 = 2;
          iVar11 = FUN_1004ac1d(param_1[0x28],bVar8,1,4,0,0);
          param_1[0x66] = iVar11;
          uVar9 = (uint)*(byte *)(param_1 + 0x28);
        }
LAB_10025560:
        param_1[0x67] = uVar9;
      }
LAB_100256ef:
      if (bVar4) {
        for (iVar11 = *piVar17; iVar11 != 0; iVar11 = iVar11 + -1) {
          param_1[iVar11 + 0x66] = param_1[iVar11 + 0x65];
        }
        param_1[0x66] = param_1[0x66] | 0x80000000;
        *piVar17 = *piVar17 + 1;
        param_1[0x67] = 0x41;
      }
    }
    FUN_1004b2c7(param_6,(*piVar17 + *piVar18 + param_1[0x55] + param_1[0x4d]) * 0x1000000 +
                         0x1000000U & 0x7f000000 | local_44 | 0x32,param_1 + 0x4d,param_1 + 0x55,
                 piVar18,piVar17);
    FUN_10023753((int)param_1,param_3,param_4);
    FUN_1002381f(param_1,0,local_c,param_5,0,'\0');
    fVar15 = (float10)FUN_10023b58(piVar18,param_5,(int)(fVar3 / local_28));
    fVar15 = (float10)FUN_10023b58(piVar17,param_5,
                                   (int)(float)(((float10)local_34 * extraout_ST1_07) / fVar15));
    if ((float10)0 == fVar15) {
      iVar11 = -1;
    }
    else {
      iVar11 = 0;
    }
    if ((local_28 == 1.0) && ((char)param_2[4] == '\0')) {
      if (iVar11 != 0) goto LAB_10026437;
      iVar11 = *piVar17 + param_1[0x55] + param_1[0x4d];
LAB_10025802:
      piVar18 = (int *)0x0;
      uVar9 = iVar11 * 0x1000000 + 0x1000000U & 0x7f000000 | 0x2000;
    }
    else {
      if ((float10)0 == fVar15) {
        iVar11 = *piVar18 + param_1[0x55];
        goto LAB_100250da;
      }
LAB_10025830:
      piVar18 = param_1 + 0x65;
      piVar17 = param_1 + 0x5d;
      uVar9 = (*piVar18 + *piVar17 + param_1[0x55] + param_1[0x4d]) * 0x1000000 + 0x1000000U &
              0x7f000000 | 0x2032;
    }
  }
  else {
    fVar16 = FUN_100216fb(extraout_EDX_02);
    fVar15 = (float10)0;
    uVar9 = extraout_EDX_03;
    if (fVar15 != fVar16) goto LAB_100250e2;
    fVar3 = fVar3 / fVar2;
    if (fVar3 != 1.0) {
      local_c = local_14;
      if (((uVar12 & 0xf0) != 0x80) && ((uVar12 & 0xf0) != 0xf0)) {
        local_c = local_10;
      }
      uVar12 = (ushort)local_c & 0xf0;
      if ((uVar12 != 0x80) && (uVar12 != 0xf0)) {
        local_c = FUN_10023bdc((int)param_1,0,0,0,0,param_4,'\0');
        local_c = local_c & 0xffff;
        bVar5 = true;
      }
    }
    FUN_10023753((int)param_1,(ushort)local_c,param_4);
    cVar7 = '\0';
    bVar19 = 0;
    bVar8 = FUN_10023cb7((int)param_1,local_c,param_5);
    FUN_1002381f(param_1,0,local_14,bVar8,bVar19,cVar7);
    bVar4 = false;
    bVar8 = FUN_10023cb7((int)param_1,local_c,param_5);
    piVar17 = param_1 + 0x5d;
    if (((uVar1 & 0xff0) != 0x100) &&
       (((uVar9 = local_10 & 0xf00, uVar9 == 0x100 || (uVar9 == 0x200)) || (uVar9 == 0x500)))) {
      bVar4 = true;
    }
    uVar9 = local_10 & 0xf;
    if ((local_10 & 0x1000) != 0) {
      bVar8 = 0xff;
    }
    uVar10 = local_10 & 0xf0;
    if (uVar10 < 0x41) {
      if (uVar10 == 0x40) {
        *piVar17 = 2;
        uVar9 = FUN_1004b48c(1,bVar8,1,4,0,0,0);
        param_1[0x5f] = 2;
        goto LAB_1002500c;
      }
      if (uVar10 != 0) {
        if (uVar10 == 0x10) {
          *piVar17 = 2;
          uVar10 = FUN_1004b48c(0,bVar8,1,4,0,0,0);
          param_1[0x5e] = uVar10;
          param_1[0x5f] = (uint)*(byte *)(param_1 + uVar9 + 0x21);
        }
        else if ((uVar10 == 0x20) || (uVar10 == 0x30)) {
          uVar9 = *(uint *)((int)param_1 +
                           uVar9 * 4 + ((((byte)local_10 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar9 != 0) {
            *piVar17 = 2;
            iVar11 = FUN_1004ac1d(uVar9,0,1,4,0,0);
            param_1[0x5e] = iVar11;
            uVar9 = uVar9 & 0xff;
            goto LAB_10024ead;
          }
          goto LAB_10024ee1;
        }
        goto LAB_10025012;
      }
LAB_10024ee1:
      if ((uVar1 & 0xf00) == 0x100) {
        local_20 = 1.0;
      }
      else if ((uVar1 & 0xf00) == 0x300) {
        local_20 = -0.5;
      }
      else {
        local_20 = 0.0;
      }
      if (local_3c != 0) {
        local_20 = local_20 * 255.0;
      }
      if (bVar4) {
        local_20 = -local_20;
      }
      FUN_10023b58(piVar17,bVar8,(int)local_20);
    }
    else {
      if (uVar10 != 0x50) {
        if (uVar10 == 0x80) {
          *piVar17 = 2;
          iVar11 = FUN_1004ac1d(param_1[uVar9 + 0x24],bVar8,1,4,0,0);
          param_1[0x5e] = iVar11;
          uVar9 = (uint)*(byte *)(param_1 + uVar9 + 0x24);
        }
        else {
          if (uVar10 != 0xf0) goto LAB_10025012;
          *piVar17 = 2;
          iVar11 = FUN_1004ac1d(param_1[0x28],bVar8,1,4,0,0);
          param_1[0x5e] = iVar11;
          uVar9 = (uint)*(byte *)(param_1 + 0x28);
        }
LAB_10024ead:
        param_1[0x5f] = uVar9;
        goto LAB_10025012;
      }
      param_1[2] = param_1[2] | 1;
      param_1[0x5f] = 0;
      if (*param_1 == 0x51) {
        *piVar17 = 4;
        uVar9 = FUN_1004b48c(8,bVar8,3,4,0,0,0);
        param_1[0x60] = 0;
        param_1[0x61] = 5;
      }
      else {
        *piVar17 = 3;
        uVar9 = FUN_1004b48c(8,bVar8,2,4,0,0,0);
        param_1[0x60] = 5;
      }
LAB_1002500c:
      param_1[0x5e] = uVar9;
LAB_10025012:
      if (bVar4) {
        for (iVar11 = *piVar17; iVar11 != 0; iVar11 = iVar11 + -1) {
          param_1[iVar11 + 0x5e] = param_1[iVar11 + 0x5d];
        }
        param_1[0x5e] = param_1[0x5e] | 0x80000000;
        *piVar17 = *piVar17 + 1;
        param_1[0x5f] = 0x41;
      }
    }
    piVar18 = param_1 + 0x55;
    if (fVar3 == 1.0) {
      uVar9 = 0x2038;
    }
    else {
      uVar9 = 0x38;
    }
    FUN_1004b2c7(param_6,(*piVar17 + *piVar18 + param_1[0x4d] + 1 & 0x7fU) << 0x18 | uVar9,
                 param_1 + 0x4d,piVar18,piVar17,(int *)0x0);
    if (fVar3 == 1.0) goto LAB_10026437;
    FUN_10023753((int)param_1,param_3,param_4);
    FUN_1002381f(param_1,0,local_c,param_5,0,'\0');
    FUN_10023b58(piVar17,param_5,(int)fVar3);
    iVar11 = *piVar17 + *piVar18;
LAB_100250da:
    iVar11 = iVar11 + param_1[0x4d];
LAB_1002641c:
    piVar17 = param_1 + 0x5d;
    piVar18 = (int *)0x0;
    uVar9 = iVar11 * 0x1000000 + 0x1000000U & 0x7f000000 | 0x2038;
  }
  FUN_1004b2c7(param_6,uVar9,param_1 + 0x4d,param_1 + 0x55,piVar17,piVar18);
LAB_10026437:
  FUN_10023c8c((int)param_1,local_14);
  FUN_10023c8c((int)param_1,local_10);
  if (bVar5) {
    FUN_10023c8c((int)param_1,local_c);
  }
  return;
}

