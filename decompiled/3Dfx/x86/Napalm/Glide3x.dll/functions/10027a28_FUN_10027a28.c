/*
 * FUN_10027a28 at 10027a28
 * undefined __fastcall FUN_10027a28(int * param_1, ushort * param_2, ushort param_3, byte param_4, byte param_5, void * param_6)
 * Address ranges: 10027a28-100295a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10027a28(int *param_1,ushort *param_2,ushort param_3,byte param_4,byte param_5,void *param_6)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  float fVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  ushort uVar14;
  uint extraout_EDX;
  undefined2 extraout_var;
  undefined4 extraout_EDX_00;
  undefined4 uVar15;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  uint extraout_EDX_03;
  uint extraout_EDX_04;
  float10 fVar17;
  float10 extraout_ST0;
  float10 fVar18;
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
  float10 extraout_ST1_09;
  int *piVar19;
  int *piVar20;
  byte bVar21;
  uint local_44;
  uint local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_24;
  uint local_1c;
  uint local_10;
  uint local_c;
  undefined2 uVar16;
  
  uVar1 = param_2[1];
  cVar8 = FUN_10023e61();
  uVar10 = extraout_EDX;
  if ((cVar8 == '\0') &&
     (cVar8 = FUN_10023e61(), uVar10 = (uint)uVar1, uVar16 = extraout_var, cVar8 == '\0')) {
LAB_10027a9d:
    local_10 = FUN_10026a4e((int)param_1,CONCAT22(uVar16,*param_2),(uint)param_2[3],0,0,param_4,
                            '\x01');
    local_10 = local_10 & 0xffff;
    uVar10 = FUN_100270dd(param_1,param_2[1],param_2[2],0,local_10,0,param_4,param_5,param_6,'\0',0)
    ;
    if ((char)uVar10 == '\0') {
      local_10 = local_10 | 0x2000;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  else {
    local_10 = uVar10 & 0xffff;
    fVar17 = FUN_100241f5(uVar10);
    uVar15 = extraout_EDX_00;
    if ((float10)0 != fVar17) {
      uVar15 = 0;
      local_10 = ~-(uint)(((ushort)extraout_EDX_00 & 0xff0) != 0x300) & uVar10 & 0xffff;
    }
    uVar16 = (undefined2)((uint)uVar15 >> 0x10);
    if ((short)local_10 == 0) goto LAB_10027a9d;
  }
  local_1c = (uint)*param_2;
  fVar17 = FUN_100241f5(local_1c);
  uVar1 = (ushort)local_10;
  uVar10 = extraout_EDX_01;
  if (((float10)0 != fVar17) && ((uVar1 & 0xff0) != 0x300)) {
    uVar10 = FUN_10026a4e((int)param_1,local_10,(uint)param_2[3],0,0,param_4,'\x01');
    uVar10 = uVar10 & 0xffff;
    uVar11 = FUN_100270dd(param_1,*param_2,0,0,uVar10,0,param_4,param_5,param_6,'\0',0);
    if ((char)uVar11 == '\0') {
      uVar10 = uVar10 | 0x2000;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    local_1c = uVar10;
  }
  if ((uVar10 & 0x2000) == 0) {
    local_3c = 1.0;
  }
  else {
    local_3c = 255.0;
  }
  fVar2 = 1.0;
  if ((local_10 & 0x2000) != 0) {
    fVar2 = 255.0;
  }
  uVar6 = param_2[4];
  fVar2 = fVar2 * local_3c;
  local_c = (uint)param_3;
  fVar3 = (float)(1 << ((byte)uVar6 & 0x1f));
  bVar5 = false;
  cVar8 = FUN_10023e61();
  uVar14 = (ushort)local_1c;
  local_40._0_2_ = (short)(local_10 & 0x2000);
  uVar10 = extraout_EDX_02;
  fVar17 = extraout_ST0;
  if (cVar8 == '\0') {
LAB_10028042:
    fVar18 = fVar17;
    if ((uVar10 & 0xf0) != 0) {
      fVar18 = FUN_100241f5(uVar10);
      fVar17 = (float10)0;
      uVar10 = extraout_EDX_04;
    }
    local_38 = (float)fVar18;
    if ((uVar10 & 0x2000) == 0) {
      local_34 = 1.0;
    }
    else {
      local_34 = 255.0;
    }
    fVar7 = local_34;
    if (fVar2 != local_34) {
      local_c = local_1c;
      if (((uVar14 & 0xf0) != 0x80) && ((uVar14 & 0xf0) != 0xf0)) {
        local_c = local_10;
      }
      uVar14 = (ushort)local_c & 0xf0;
      if ((uVar14 != 0x80) && (uVar14 != 0xf0)) {
        local_c = FUN_10026a4e((int)param_1,0,0,0,0,param_4,'\0');
        local_c = local_c & 0xffff;
        bVar5 = true;
      }
      uVar14 = (ushort)local_c;
      FUN_1002657e((int)param_1,uVar14,param_4);
      cVar8 = '\0';
      bVar21 = 0;
      bVar9 = FUN_10026b29((int)param_1,local_c,param_5);
      FUN_1002664a(param_1,0,local_1c,bVar9,bVar21,cVar8);
      bVar4 = false;
      bVar9 = FUN_10026b29((int)param_1,local_c,param_5);
      piVar20 = param_1 + 0x5d;
      if (((uVar1 & 0xff0) != 0x100) &&
         (((uVar10 = local_10 & 0xf00, uVar10 == 0x100 || (uVar10 == 0x200)) || (uVar10 == 0x500))))
      {
        bVar4 = true;
      }
      uVar10 = local_10 & 0xf;
      if ((local_10 & 0x1000) != 0) {
        bVar9 = 0xff;
      }
      uVar11 = local_10 & 0xf0;
      iVar12 = 4;
      if (uVar11 < 0x41) {
        if (uVar11 == 0x40) {
          *piVar20 = 2;
          uVar10 = FUN_1004e895(1,bVar9,1,4,0,0,0);
          param_1[0x5e] = uVar10;
          param_1[0x5f] = 2;
          goto LAB_10028bed;
        }
        if (uVar11 != 0) {
          if (uVar11 == 0x10) {
            *piVar20 = 2;
            uVar11 = FUN_1004e895(0,bVar9,1,4,0,0,0);
            param_1[0x5e] = uVar11;
            uVar10 = (uint)*(byte *)(param_1 + uVar10 + 0x21);
          }
          else {
            if ((uVar11 != 0x20) && (uVar11 != 0x30)) goto LAB_10028bed;
            uVar10 = *(uint *)((int)param_1 +
                              uVar10 * 4 + ((((byte)local_10 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
            if (uVar10 == 0) goto LAB_10028a44;
            *piVar20 = 2;
            iVar13 = FUN_1004e026(uVar10,0,1,4,0,0);
            param_1[0x5e] = iVar13;
            uVar10 = uVar10 & 0xff;
          }
          goto LAB_10028a11;
        }
LAB_10028a44:
        if ((uVar1 & 0xf00) == 0x100) {
          local_28 = 1.0;
        }
        else if ((uVar1 & 0xf00) == 0x300) {
          local_28 = -0.5;
        }
        else {
          local_28 = 0.0;
        }
        if ((short)local_40 != 0) {
          local_28 = local_28 * 255.0;
        }
        if (bVar4) {
          local_28 = -local_28;
        }
        FUN_100269ca(piVar20,bVar9,(int)local_28);
      }
      else {
        if (uVar11 == 0x50) {
          param_1[2] = param_1[2] | 1;
          param_1[0x5f] = 0;
          if (*param_1 == 0x51) {
            *piVar20 = 4;
            uVar10 = FUN_1004e895(8,bVar9,3,4,0,0,0);
            param_1[0x5e] = uVar10;
            param_1[0x60] = 0;
            param_1[0x61] = 5;
          }
          else {
            *piVar20 = 3;
            uVar10 = FUN_1004e895(8,bVar9,2,4,0,0,0);
            param_1[0x5e] = uVar10;
            param_1[0x60] = 5;
          }
        }
        else if (uVar11 == 0x60) {
          param_1[2] = param_1[2] | 1;
          local_44 = uVar10 * 0x250 + 0x180 >> 4;
          if (*param_1 == 0x51) {
            param_1[0x61] = local_44;
            local_44 = 0;
            iVar13 = iVar12;
          }
          else {
            iVar13 = 3;
          }
          *piVar20 = iVar13;
          uVar10 = FUN_1004e895(8,bVar9,2,4,0,0,0);
          param_1[0x5e] = uVar10;
          param_1[0x5f] = 0;
          param_1[0x60] = local_44;
        }
        else {
          if (uVar11 == 0x80) {
            *piVar20 = 2;
            iVar13 = FUN_1004e026(param_1[uVar10 + 0x24],bVar9,1,4,0,0);
            param_1[0x5e] = iVar13;
            uVar10 = (uint)*(byte *)(param_1 + uVar10 + 0x24);
          }
          else {
            if (uVar11 != 0xf0) goto LAB_10028bed;
            *piVar20 = 2;
            iVar13 = FUN_1004e026(param_1[0x28],bVar9,1,4,0,0);
            param_1[0x5e] = iVar13;
            uVar10 = (uint)*(byte *)(param_1 + 0x28);
          }
LAB_10028a11:
          param_1[0x5f] = uVar10;
        }
LAB_10028bed:
        if (bVar4) {
          for (iVar13 = *piVar20; iVar13 != 0; iVar13 = iVar13 + -1) {
            param_1[iVar13 + 0x5e] = param_1[iVar13 + 0x5d];
          }
          param_1[0x5e] = param_1[0x5e] | 0x80000000;
          *piVar20 = *piVar20 + 1;
          param_1[0x5f] = 0x41;
        }
      }
      FUN_1004e6d0(param_6,(*piVar20 + param_1[0x55] + param_1[0x4d]) * 0x1000000 + 0x1000000U &
                           0x7f000000 | 0x38,param_1 + 0x4d,param_1 + 0x55,piVar20,(int *)0x0);
      if ((local_38 == 0.0) && ((char)param_2[4] == '\0')) {
        local_28 = (float)(uint)param_3;
        local_44 = 0x2000;
      }
      else {
        local_44 = 0;
        local_28 = (float)local_c;
      }
      if (fVar2 == 1.0) {
LAB_10028d2d:
        if (local_34 != 1.0) {
          FUN_1002657e((int)param_1,SUB42(local_28,0),param_4);
          cVar8 = '\0';
          bVar21 = 0;
          bVar9 = FUN_10026b29((int)param_1,(uint)local_28,param_5);
          FUN_1002664a(param_1,0,(uint)param_2[3],bVar9,bVar21,cVar8);
          FUN_100269ca(piVar20,param_5,(int)(1.0 / local_34));
          bVar4 = false;
          bVar9 = FUN_10026b29((int)param_1,(uint)local_28,param_5);
          piVar19 = param_1 + 0x65;
          if (((uVar14 & 0xff0) != 0x100) &&
             (((uVar10 = local_c & 0xf00, uVar10 == 0x100 || (uVar10 == 0x200)) || (uVar10 == 0x500)
              ))) {
            bVar4 = true;
          }
          uVar10 = local_c & 0xf;
          if ((local_c & 0x1000) != 0) {
            bVar9 = 0xff;
          }
          uVar11 = local_c & 0xf0;
          if (uVar11 < 0x41) {
            if (uVar11 == 0x40) {
              *piVar19 = 2;
              uVar10 = FUN_1004e895(1,bVar9,1,4,0,0,0);
              param_1[0x67] = 2;
              goto LAB_1002907b;
            }
            if (uVar11 != 0) {
              if (uVar11 == 0x10) {
                *piVar19 = 2;
                uVar11 = FUN_1004e895(0,bVar9,1,4,0,0,0);
                param_1[0x66] = uVar11;
                param_1[0x67] = (uint)*(byte *)(param_1 + uVar10 + 0x21);
              }
              else if ((uVar11 == 0x20) || (uVar11 == 0x30)) {
                uVar10 = *(uint *)((int)param_1 +
                                  uVar10 * 4 + ((((byte)local_c & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
                if (uVar10 != 0) {
                  *piVar19 = 2;
                  iVar13 = FUN_1004e026(uVar10,0,1,4,0,0);
                  param_1[0x66] = iVar13;
                  uVar10 = uVar10 & 0xff;
                  goto LAB_10028e77;
                }
                goto LAB_10028eb6;
              }
              goto LAB_10029081;
            }
LAB_10028eb6:
            if ((uVar14 & 0xf00) == 0x100) {
              local_30 = 1.0;
            }
            else if ((uVar14 & 0xf00) == 0x300) {
              local_30 = -0.5;
            }
            else {
              local_30 = 0.0;
            }
            if ((local_c & 0x2000) != 0) {
              local_30 = local_30 * 255.0;
            }
            if (bVar4) {
              local_30 = -local_30;
            }
            FUN_100269ca(param_1 + 0x65,bVar9,(int)local_30);
          }
          else {
            if (uVar11 != 0x50) {
              if (uVar11 == 0x60) {
                param_1[2] = param_1[2] | 1;
                local_40 = uVar10 * 0x250 + 0x180 >> 4;
                if (*param_1 == 0x51) {
                  param_1[0x69] = local_40;
                  local_40 = 0;
                  iVar13 = iVar12;
                }
                else {
                  iVar13 = 3;
                }
                *piVar19 = iVar13;
                uVar10 = FUN_1004e895(8,bVar9,2,4,0,0,0);
                param_1[0x66] = uVar10;
                param_1[0x67] = 0;
                param_1[0x68] = local_40;
              }
              else {
                if (uVar11 == 0x80) {
                  *piVar19 = 2;
                  iVar13 = FUN_1004e026(param_1[uVar10 + 0x24],bVar9,1,4,0,0);
                  param_1[0x66] = iVar13;
                  uVar10 = (uint)*(byte *)(param_1 + uVar10 + 0x24);
                }
                else {
                  if (uVar11 != 0xf0) goto LAB_10029081;
                  *piVar19 = 2;
                  iVar13 = FUN_1004e026(param_1[0x28],bVar9,1,4,0,0);
                  param_1[0x66] = iVar13;
                  uVar10 = (uint)*(byte *)(param_1 + 0x28);
                }
LAB_10028e77:
                param_1[0x67] = uVar10;
              }
              goto LAB_10029081;
            }
            param_1[2] = param_1[2] | 1;
            param_1[0x67] = 0;
            if (*param_1 == 0x51) {
              *piVar19 = 4;
              uVar10 = FUN_1004e895(8,bVar9,3,4,0,0,0);
              param_1[0x68] = 0;
              param_1[0x69] = 5;
            }
            else {
              *piVar19 = 3;
              uVar10 = FUN_1004e895(8,bVar9,2,4,0,0,0);
              param_1[0x68] = 5;
            }
LAB_1002907b:
            param_1[0x66] = uVar10;
LAB_10029081:
            piVar19 = param_1 + 0x65;
            if (bVar4) {
              for (iVar13 = *piVar19; iVar13 != 0; iVar13 = iVar13 + -1) {
                param_1[iVar13 + 0x66] = param_1[iVar13 + 0x65];
              }
              param_1[0x66] = param_1[0x66] | 0x80000000;
              *piVar19 = *piVar19 + 1;
              param_1[0x67] = 0x41;
            }
          }
          FUN_1004e6d0(param_6,(param_1[0x65] + *piVar20 + param_1[0x55] + param_1[0x4d]) *
                               0x1000000 + 0x1000000U & 0x7f000000 | local_44 | 0x32,param_1 + 0x4d,
                       param_1 + 0x55,piVar20,param_1 + 0x65);
        }
      }
      else if (local_34 != 1.0) {
        FUN_1002657e((int)param_1,uVar14,param_4);
        cVar8 = '\0';
        bVar21 = 0;
        bVar9 = FUN_10026b29((int)param_1,(uint)local_28,param_5);
        FUN_1002664a(param_1,0,local_c,bVar9,bVar21,cVar8);
        FUN_100269ca(piVar20,param_5,(int)(1.0 / fVar2));
        FUN_1004e6d0(param_6,(*piVar20 + param_1[0x55] + param_1[0x4d]) * 0x1000000 + 0x1000000U &
                             0x7f000000 | 0x38,param_1 + 0x4d,param_1 + 0x55,piVar20,(int *)0x0);
        goto LAB_10028d2d;
      }
      if ((fVar2 != 1.0) && (local_34 == 1.0)) {
        FUN_1002657e((int)param_1,SUB42(local_28,0),param_4);
        cVar8 = '\0';
        bVar21 = 0;
        bVar9 = FUN_10026b29((int)param_1,(uint)local_28,param_5);
        FUN_1002664a(param_1,0,local_c,bVar9,bVar21,cVar8);
        FUN_100269ca(piVar20,param_5,(int)(1.0 / fVar2));
        bVar4 = false;
        bVar9 = FUN_10026b29((int)param_1,(uint)local_28,param_5);
        piVar20 = param_1 + 0x65;
        uVar1 = param_2[3];
        uVar10 = (uint)uVar1;
        if (((uVar1 & 0xff0) != 0x100) &&
           (((uVar11 = uVar10 & 0xf00, uVar11 == 0x100 || (uVar11 == 0x200)) || (uVar11 == 0x500))))
        {
          bVar4 = true;
        }
        uVar11 = uVar10 & 0xf;
        if ((uVar1 & 0x1000) != 0) {
          bVar9 = 0xff;
        }
        uVar10 = uVar10 & 0xf0;
        if (uVar10 < 0x41) {
          if (uVar10 == 0x40) {
            *piVar20 = 2;
            uVar10 = FUN_1004e895(1,bVar9,1,4,0,0,0);
            param_1[0x67] = 2;
            goto LAB_100293f6;
          }
          if ((uVar1 & 0xf0) != 0) {
            if (uVar10 == 0x10) {
              *piVar20 = 2;
              uVar10 = FUN_1004e895(0,bVar9,1,4,0,0,0);
              param_1[0x66] = uVar10;
              param_1[0x67] = (uint)*(byte *)(param_1 + uVar11 + 0x21);
            }
            else if ((uVar10 == 0x20) || (uVar10 == 0x30)) {
              local_40._0_1_ = (byte)uVar1;
              uVar10 = *(uint *)((int)param_1 +
                                uVar11 * 4 + ((((byte)local_40 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
              if (uVar10 != 0) {
                *piVar20 = 2;
                iVar12 = FUN_1004e026(uVar10,0,1,4,0,0);
                param_1[0x66] = iVar12;
                uVar10 = uVar10 & 0xff;
                goto LAB_1002923c;
              }
              goto LAB_10029272;
            }
            goto LAB_100293fc;
          }
LAB_10029272:
          if ((uVar1 & 0xf00) == 0x100) {
            local_34 = 1.0;
          }
          else if ((uVar1 & 0xf00) == 0x300) {
            local_34 = -0.5;
          }
          else {
            local_34 = 0.0;
          }
          if ((uVar1 & 0x2000) != 0) {
            local_34 = local_34 * 255.0;
          }
          if (bVar4) {
            local_34 = -local_34;
          }
          FUN_100269ca(piVar20,bVar9,(int)local_34);
        }
        else {
          if (uVar10 != 0x50) {
            if (uVar10 == 0x60) {
              param_1[2] = param_1[2] | 1;
              local_40 = uVar11 * 0x250 + 0x180 >> 4;
              if (*param_1 == 0x51) {
                param_1[0x69] = local_40;
                local_40 = 0;
              }
              else {
                iVar12 = 3;
              }
              *piVar20 = iVar12;
              uVar10 = FUN_1004e895(8,bVar9,2,4,0,0,0);
              param_1[0x66] = uVar10;
              param_1[0x67] = 0;
              param_1[0x68] = local_40;
            }
            else {
              if (uVar10 == 0x80) {
                *piVar20 = 2;
                iVar12 = FUN_1004e026(param_1[uVar11 + 0x24],bVar9,1,4,0,0);
                param_1[0x66] = iVar12;
                uVar10 = (uint)*(byte *)(param_1 + uVar11 + 0x24);
              }
              else {
                if (uVar10 != 0xf0) goto LAB_100293fc;
                *piVar20 = 2;
                iVar12 = FUN_1004e026(param_1[0x28],bVar9,1,4,0,0);
                param_1[0x66] = iVar12;
                uVar10 = (uint)*(byte *)(param_1 + 0x28);
              }
LAB_1002923c:
              param_1[0x67] = uVar10;
            }
            goto LAB_100293fc;
          }
          param_1[2] = param_1[2] | 1;
          param_1[0x67] = 0;
          if (*param_1 == 0x51) {
            *piVar20 = 4;
            uVar10 = FUN_1004e895(8,bVar9,3,4,0,0,0);
            param_1[0x68] = 0;
            param_1[0x69] = 5;
          }
          else {
            *piVar20 = 3;
            uVar10 = FUN_1004e895(8,bVar9,2,4,0,0,0);
            param_1[0x68] = 5;
          }
LAB_100293f6:
          param_1[0x66] = uVar10;
LAB_100293fc:
          if (bVar4) {
            for (iVar12 = *piVar20; iVar12 != 0; iVar12 = iVar12 + -1) {
              param_1[iVar12 + 0x66] = param_1[iVar12 + 0x65];
            }
            param_1[0x66] = param_1[0x66] | 0x80000000;
            *piVar20 = *piVar20 + 1;
            param_1[0x67] = 0x41;
          }
        }
        FUN_1004e6d0(param_6,(*piVar20 + param_1[0x5d] + param_1[0x55] + param_1[0x4d]) * 0x1000000
                             + 0x1000000U & 0x7f000000 | local_44 | 0x32,param_1 + 0x4d,
                     param_1 + 0x55,param_1 + 0x5d,piVar20);
      }
      piVar20 = param_1 + 0x5d;
      FUN_1002657e((int)param_1,param_3,param_4);
      FUN_1002664a(param_1,0,local_c,param_5,0,'\0');
      if (local_38 == 0.0) {
        if ((char)param_2[4] == '\0') goto LAB_1002801a;
        FUN_100269ca(piVar20,param_5,(int)fVar3);
        uVar10 = (*piVar20 + param_1[0x55] + param_1[0x4d]) * 0x1000000 + 0x1000000U & 0x7f000000 |
                 0x2038;
LAB_1002954f:
        piVar20 = (int *)0x0;
      }
      else {
        if ((char)param_2[4] == '\0') {
          FUN_100269ca(piVar20,param_5,(int)(local_38 / fVar7));
          uVar10 = (*piVar20 + param_1[0x55] + param_1[0x4d]) * 0x1000000 + 0x1000000U & 0x7f000000
                   | 0x2000;
          goto LAB_1002954f;
        }
        fVar17 = (float10)FUN_100269ca(piVar20,param_5,(int)fVar3);
        piVar20 = param_1 + 0x65;
        FUN_100269ca(piVar20,param_5,(int)(float)((fVar17 * extraout_ST1_09) / (float10)fVar7));
        uVar10 = (*piVar20 + param_1[0x5d] + param_1[0x55] + param_1[0x4d]) * 0x1000000 + 0x1000000U
                 & 0x7f000000 | 0x2032;
      }
      FUN_1004e6d0(param_6,uVar10,param_1 + 0x4d,param_1 + 0x55,param_1 + 0x5d,piVar20);
      goto LAB_1002801a;
    }
    local_24 = 0x2000;
    if (((local_34 != 1.0) || ((byte)uVar6 != 0)) || ((float10)local_38 != fVar17)) {
      local_c = local_1c;
      if (((uVar14 & 0xf0) != 0x80) && ((uVar14 & 0xf0) != 0xf0)) {
        local_c = local_10;
      }
      uVar14 = (ushort)local_c & 0xf0;
      if ((uVar14 != 0x80) && (uVar14 != 0xf0)) {
        local_c = FUN_10026a4e((int)param_1,0,0,0,0,param_4,'\0');
        local_c = local_c & 0xffff;
        bVar5 = true;
      }
      local_24 = 0;
    }
    FUN_1002657e((int)param_1,(ushort)local_c,param_4);
    cVar8 = '\0';
    bVar21 = 0;
    bVar9 = FUN_10026b29((int)param_1,local_c,param_5);
    FUN_1002664a(param_1,0,local_1c,bVar9,bVar21,cVar8);
    bVar4 = false;
    bVar9 = FUN_10026b29((int)param_1,local_c,param_5);
    piVar20 = param_1 + 0x5d;
    if (((uVar1 & 0xff0) != 0x100) &&
       (((uVar10 = local_10 & 0xf00, uVar10 == 0x100 || (uVar10 == 0x200)) || (uVar10 == 0x500)))) {
      bVar4 = true;
    }
    uVar10 = local_10 & 0xf;
    if ((local_10 & 0x1000) != 0) {
      bVar9 = 0xff;
    }
    fVar17 = (float10)-0.5;
    uVar11 = local_10 & 0xf0;
    iVar12 = 4;
    if (uVar11 < 0x41) {
      if (uVar11 == 0x40) {
        *piVar20 = 2;
        uVar10 = FUN_1004e895(1,bVar9,1,4,0,0,0);
        param_1[0x5f] = 2;
        fVar17 = extraout_ST1_01;
        goto LAB_10028413;
      }
      if (uVar11 != 0) {
        if (uVar11 == 0x10) {
          *piVar20 = 2;
          uVar11 = FUN_1004e895(0,bVar9,1,4,0,0,0);
          param_1[0x5e] = uVar11;
          param_1[0x5f] = (uint)*(byte *)(param_1 + uVar10 + 0x21);
          fVar17 = extraout_ST1_00;
        }
        else if ((uVar11 == 0x20) || (uVar11 == 0x30)) {
          uVar10 = *(uint *)((int)param_1 +
                            uVar10 * 4 + ((((byte)local_10 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar10 != 0) {
            *piVar20 = 2;
            iVar13 = FUN_1004e026(uVar10,0,1,4,0,0);
            param_1[0x5e] = iVar13;
            uVar10 = uVar10 & 0xff;
            fVar17 = extraout_ST1;
            goto LAB_100281ea;
          }
          goto LAB_10028283;
        }
        goto LAB_10028419;
      }
LAB_10028283:
      if ((uVar1 & 0xf00) == 0x100) {
        local_28 = 1.0;
      }
      else if ((uVar1 & 0xf00) == 0x300) {
        local_28 = (float)fVar17;
      }
      else {
        local_28 = 0.0;
      }
      if ((short)local_40 != 0) {
        local_28 = local_28 * 255.0;
      }
      if (bVar4) {
        local_28 = -local_28;
      }
      FUN_100269ca(piVar20,bVar9,(int)local_28);
    }
    else {
      if (uVar11 != 0x50) {
        if (uVar11 == 0x60) {
          param_1[2] = param_1[2] | 1;
          local_44 = uVar10 * 0x250 + 0x180 >> 4;
          if (*param_1 == 0x51) {
            param_1[0x61] = local_44;
            local_44 = 0;
            iVar13 = iVar12;
          }
          else {
            iVar13 = 3;
          }
          *piVar20 = iVar13;
          uVar10 = FUN_1004e895(8,bVar9,2,4,0,0,0);
          param_1[0x5e] = uVar10;
          param_1[0x5f] = 0;
          param_1[0x60] = local_44;
          fVar17 = extraout_ST1_04;
        }
        else {
          if (uVar11 == 0x80) {
            *piVar20 = 2;
            iVar13 = FUN_1004e026(param_1[uVar10 + 0x24],bVar9,1,4,0,0);
            param_1[0x5e] = iVar13;
            uVar10 = (uint)*(byte *)(param_1 + uVar10 + 0x24);
            fVar17 = extraout_ST1_03;
          }
          else {
            if (uVar11 != 0xf0) goto LAB_10028419;
            *piVar20 = 2;
            iVar13 = FUN_1004e026(param_1[0x28],bVar9,1,4,0,0);
            param_1[0x5e] = iVar13;
            uVar10 = (uint)*(byte *)(param_1 + 0x28);
            fVar17 = extraout_ST1_02;
          }
LAB_100281ea:
          param_1[0x5f] = uVar10;
        }
        goto LAB_10028419;
      }
      param_1[2] = param_1[2] | 1;
      param_1[0x5f] = 0;
      if (*param_1 == 0x51) {
        *piVar20 = 4;
        uVar10 = FUN_1004e895(8,bVar9,3,4,0,0,0);
        param_1[0x60] = 0;
        param_1[0x61] = 5;
        fVar17 = extraout_ST1_05;
      }
      else {
        *piVar20 = 3;
        uVar10 = FUN_1004e895(8,bVar9,2,4,0,0,0);
        param_1[0x60] = 5;
        fVar17 = extraout_ST1_06;
      }
LAB_10028413:
      param_1[0x5e] = uVar10;
LAB_10028419:
      if (bVar4) {
        for (iVar13 = *piVar20; iVar13 != 0; iVar13 = iVar13 + -1) {
          param_1[iVar13 + 0x5e] = param_1[iVar13 + 0x5d];
        }
        param_1[0x5e] = param_1[0x5e] | 0x80000000;
        *piVar20 = *piVar20 + 1;
        param_1[0x5f] = 0x41;
      }
    }
    bVar4 = false;
    bVar9 = FUN_10026b29((int)param_1,local_c,param_5);
    piVar20 = param_1 + 0x65;
    uVar1 = param_2[3];
    uVar10 = (uint)uVar1;
    if (((uVar1 & 0xff0) != 0x100) &&
       (((uVar11 = uVar10 & 0xf00, uVar11 == 0x100 || (uVar11 == 0x200)) || (uVar11 == 0x500)))) {
      bVar4 = true;
    }
    uVar11 = uVar10 & 0xf;
    if ((uVar1 & 0x1000) != 0) {
      bVar9 = 0xff;
    }
    uVar10 = uVar10 & 0xf0;
    if (uVar10 < 0x41) {
      if (uVar10 == 0x40) {
        *piVar20 = 2;
        uVar10 = FUN_1004e895(1,bVar9,1,4,0,0,0);
        param_1[0x66] = uVar10;
        param_1[0x67] = 2;
        goto LAB_10028718;
      }
      if ((uVar1 & 0xf0) != 0) {
        if (uVar10 == 0x10) {
          *piVar20 = 2;
          uVar10 = FUN_1004e895(0,bVar9,1,4,0,0,0);
          param_1[0x66] = uVar10;
          uVar10 = (uint)*(byte *)(param_1 + uVar11 + 0x21);
        }
        else {
          if ((uVar10 != 0x20) && (uVar10 != 0x30)) goto LAB_10028718;
          local_30._0_1_ = (byte)uVar1;
          uVar10 = *(uint *)((int)param_1 +
                            uVar11 * 4 + (((local_30._0_1_ & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar10 == 0) goto LAB_1002856b;
          *piVar20 = 2;
          iVar12 = FUN_1004e026(uVar10,0,1,4,0,0);
          param_1[0x66] = iVar12;
          uVar10 = uVar10 & 0xff;
        }
        goto LAB_10028535;
      }
LAB_1002856b:
      if ((uVar1 & 0xf00) == 0x100) {
        fVar18 = (float10)1;
      }
      else {
        fVar18 = extraout_ST0_00;
        if ((uVar1 & 0xf00) == 0x300) {
          fVar18 = fVar17;
        }
      }
      local_28 = (float)fVar18;
      if ((uVar1 & 0x2000) != 0) {
        local_28 = (float)(extraout_ST1_07 * (float10)local_28);
      }
      if (bVar4) {
        local_28 = -local_28;
      }
      FUN_100269ca(piVar20,bVar9,(int)local_28);
    }
    else {
      if (uVar10 == 0x50) {
        param_1[2] = param_1[2] | 1;
        param_1[0x67] = 0;
        if (*param_1 == 0x51) {
          *piVar20 = 4;
          uVar10 = FUN_1004e895(8,bVar9,3,4,0,0,0);
          param_1[0x66] = uVar10;
          param_1[0x68] = 0;
          param_1[0x69] = 5;
        }
        else {
          *piVar20 = 3;
          uVar10 = FUN_1004e895(8,bVar9,2,4,0,0,0);
          param_1[0x66] = uVar10;
          param_1[0x68] = 5;
        }
      }
      else if (uVar10 == 0x60) {
        param_1[2] = param_1[2] | 1;
        local_44 = uVar11 * 0x250 + 0x180 >> 4;
        if (*param_1 == 0x51) {
          param_1[0x69] = local_44;
          local_44 = 0;
        }
        else {
          iVar12 = 3;
        }
        *piVar20 = iVar12;
        uVar10 = FUN_1004e895(8,bVar9,2,4,0,0,0);
        param_1[0x66] = uVar10;
        param_1[0x67] = 0;
        param_1[0x68] = local_44;
      }
      else {
        if (uVar10 == 0x80) {
          *piVar20 = 2;
          iVar12 = FUN_1004e026(param_1[uVar11 + 0x24],bVar9,1,4,0,0);
          param_1[0x66] = iVar12;
          uVar10 = (uint)*(byte *)(param_1 + uVar11 + 0x24);
        }
        else {
          if (uVar10 != 0xf0) goto LAB_10028718;
          *piVar20 = 2;
          iVar12 = FUN_1004e026(param_1[0x28],bVar9,1,4,0,0);
          param_1[0x66] = iVar12;
          uVar10 = (uint)*(byte *)(param_1 + 0x28);
        }
LAB_10028535:
        param_1[0x67] = uVar10;
      }
LAB_10028718:
      if (bVar4) {
        for (iVar12 = *piVar20; iVar12 != 0; iVar12 = iVar12 + -1) {
          param_1[iVar12 + 0x66] = param_1[iVar12 + 0x65];
        }
        param_1[0x66] = param_1[0x66] | 0x80000000;
        *piVar20 = *piVar20 + 1;
        param_1[0x67] = 0x41;
      }
    }
    piVar19 = param_1 + 0x5d;
    FUN_1004e6d0(param_6,(*piVar20 + *piVar19 + param_1[0x55] + param_1[0x4d]) * 0x1000000 +
                         0x1000000U & 0x7f000000 | local_24 | 0x32,param_1 + 0x4d,param_1 + 0x55,
                 piVar19,piVar20);
    FUN_1002657e((int)param_1,param_3,param_4);
    FUN_1002664a(param_1,0,local_c,param_5,0,'\0');
    fVar17 = (float10)FUN_100269ca(piVar19,param_5,(int)(fVar3 / local_34));
    fVar17 = (float10)FUN_100269ca(piVar20,param_5,
                                   (int)(float)(((float10)local_38 * extraout_ST1_08) / fVar17));
    if ((float10)0 == fVar17) {
      iVar12 = -1;
    }
    else {
      iVar12 = 0;
    }
    if ((local_34 == 1.0) && ((char)param_2[4] == '\0')) {
      if (iVar12 != 0) goto LAB_1002801a;
      uVar10 = (*piVar20 + param_1[0x55] + param_1[0x4d]) * 0x1000000 + 0x1000000U & 0x7f000000 |
               0x2000;
      piVar19 = piVar20;
      piVar20 = (int *)0x0;
    }
    else {
      if ((float10)0 == fVar17) {
        iVar12 = *piVar19 + param_1[0x55];
        goto LAB_10027ff9;
      }
      uVar10 = (*piVar20 + *piVar19 + param_1[0x55] + param_1[0x4d]) * 0x1000000 + 0x1000000U &
               0x7f000000 | 0x2032;
    }
  }
  else {
    fVar18 = FUN_100241f5(extraout_EDX_02);
    fVar17 = (float10)0;
    uVar10 = extraout_EDX_03;
    if (fVar17 != fVar18) goto LAB_10028042;
    fVar3 = fVar3 / fVar2;
    if (fVar3 != 1.0) {
      local_c = local_1c;
      if (((uVar14 & 0xf0) != 0x80) && ((uVar14 & 0xf0) != 0xf0)) {
        local_c = local_10;
      }
      uVar14 = (ushort)local_c & 0xf0;
      if ((uVar14 != 0x80) && (uVar14 != 0xf0)) {
        local_c = FUN_10026a4e((int)param_1,0,0,0,0,param_4,'\0');
        local_c = local_c & 0xffff;
        bVar5 = true;
      }
    }
    FUN_1002657e((int)param_1,(ushort)local_c,param_4);
    cVar8 = '\0';
    bVar21 = 0;
    bVar9 = FUN_10026b29((int)param_1,local_c,param_5);
    FUN_1002664a(param_1,0,local_1c,bVar9,bVar21,cVar8);
    bVar4 = false;
    bVar9 = FUN_10026b29((int)param_1,local_c,param_5);
    piVar20 = param_1 + 0x5d;
    if (((uVar1 & 0xff0) != 0x100) &&
       (((uVar10 = local_10 & 0xf00, uVar10 == 0x100 || (uVar10 == 0x200)) || (uVar10 == 0x500)))) {
      bVar4 = true;
    }
    uVar10 = local_10 & 0xf;
    if ((local_10 & 0x1000) != 0) {
      bVar9 = 0xff;
    }
    uVar11 = local_10 & 0xf0;
    if (uVar11 < 0x41) {
      if (uVar11 == 0x40) {
        *piVar20 = 2;
        uVar10 = FUN_1004e895(1,bVar9,1,4,0,0,0);
        param_1[0x5f] = 2;
        goto LAB_10027f2f;
      }
      if (uVar11 != 0) {
        if (uVar11 == 0x10) {
          *piVar20 = 2;
          uVar11 = FUN_1004e895(0,bVar9,1,4,0,0,0);
          param_1[0x5e] = uVar11;
          param_1[0x5f] = (uint)*(byte *)(param_1 + uVar10 + 0x21);
        }
        else if ((uVar11 == 0x20) || (uVar11 == 0x30)) {
          uVar10 = *(uint *)((int)param_1 +
                            uVar10 * 4 + ((((byte)local_10 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar10 != 0) {
            *piVar20 = 2;
            iVar12 = FUN_1004e026(uVar10,0,1,4,0,0);
            param_1[0x5e] = iVar12;
            uVar10 = uVar10 & 0xff;
            goto LAB_10027d74;
          }
          goto LAB_10027da8;
        }
        goto LAB_10027f35;
      }
LAB_10027da8:
      if ((uVar1 & 0xf00) == 0x100) {
        local_2c = 1.0;
      }
      else if ((uVar1 & 0xf00) == 0x300) {
        local_2c = -0.5;
      }
      else {
        local_2c = 0.0;
      }
      if ((short)local_40 != 0) {
        local_2c = local_2c * 255.0;
      }
      if (bVar4) {
        local_2c = -local_2c;
      }
      FUN_100269ca(piVar20,bVar9,(int)local_2c);
    }
    else {
      if (uVar11 != 0x50) {
        if (uVar11 == 0x60) {
          param_1[2] = param_1[2] | 1;
          iVar12 = 4;
          local_44 = uVar10 * 0x250 + 0x180 >> 4;
          if (*param_1 == 0x51) {
            param_1[0x61] = local_44;
            local_44 = 0;
          }
          else {
            iVar12 = 3;
          }
          *piVar20 = iVar12;
          uVar10 = FUN_1004e895(8,bVar9,2,4,0,0,0);
          param_1[0x5e] = uVar10;
          param_1[0x5f] = 0;
          param_1[0x60] = local_44;
        }
        else {
          if (uVar11 == 0x80) {
            *piVar20 = 2;
            iVar12 = FUN_1004e026(param_1[uVar10 + 0x24],bVar9,1,4,0,0);
            param_1[0x5e] = iVar12;
            uVar10 = (uint)*(byte *)(param_1 + uVar10 + 0x24);
          }
          else {
            if (uVar11 != 0xf0) goto LAB_10027f35;
            *piVar20 = 2;
            iVar12 = FUN_1004e026(param_1[0x28],bVar9,1,4,0,0);
            param_1[0x5e] = iVar12;
            uVar10 = (uint)*(byte *)(param_1 + 0x28);
          }
LAB_10027d74:
          param_1[0x5f] = uVar10;
        }
        goto LAB_10027f35;
      }
      param_1[2] = param_1[2] | 1;
      param_1[0x5f] = 0;
      if (*param_1 == 0x51) {
        *piVar20 = 4;
        uVar10 = FUN_1004e895(8,bVar9,3,4,0,0,0);
        param_1[0x60] = 0;
        param_1[0x61] = 5;
      }
      else {
        *piVar20 = 3;
        uVar10 = FUN_1004e895(8,bVar9,2,4,0,0,0);
        param_1[0x60] = 5;
      }
LAB_10027f2f:
      param_1[0x5e] = uVar10;
LAB_10027f35:
      if (bVar4) {
        for (iVar12 = *piVar20; iVar12 != 0; iVar12 = iVar12 + -1) {
          param_1[iVar12 + 0x5e] = param_1[iVar12 + 0x5d];
        }
        param_1[0x5e] = param_1[0x5e] | 0x80000000;
        *piVar20 = *piVar20 + 1;
        param_1[0x5f] = 0x41;
      }
    }
    piVar19 = param_1 + 0x55;
    if (fVar3 == 1.0) {
      uVar10 = 0x2038;
    }
    else {
      uVar10 = 0x38;
    }
    FUN_1004e6d0(param_6,(*piVar20 + *piVar19 + param_1[0x4d] + 1 & 0x7fU) << 0x18 | uVar10,
                 param_1 + 0x4d,piVar19,piVar20,(int *)0x0);
    if (fVar3 == 1.0) goto LAB_1002801a;
    FUN_1002657e((int)param_1,param_3,param_4);
    FUN_1002664a(param_1,0,local_c,param_5,0,'\0');
    FUN_100269ca(piVar20,param_5,(int)fVar3);
    iVar12 = *piVar20 + *piVar19;
LAB_10027ff9:
    uVar10 = (iVar12 + param_1[0x4d]) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x2038;
    piVar19 = param_1 + 0x5d;
    piVar20 = (int *)0x0;
  }
  FUN_1004e6d0(param_6,uVar10,param_1 + 0x4d,param_1 + 0x55,piVar19,piVar20);
LAB_1002801a:
  FUN_10026afe((int)param_1,local_1c);
  FUN_10026afe((int)param_1,local_10);
  if (bVar5) {
    FUN_10026afe((int)param_1,local_c);
  }
  return;
}

