/*
 * FUN_10026a69 at 10026a69
 * undefined __fastcall FUN_10026a69(undefined2 * param_1, uint param_2, float param_3, uint param_4, float param_5, uint param_6, int * param_7, void * param_8)
 * Address ranges: 10026a69-10027bde
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10026a69(undefined2 *param_1,uint param_2,float param_3,uint param_4,float param_5,uint param_6,
            int *param_7,void *param_8)

{
  bool bVar1;
  int *this;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  uint uVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  byte bVar19;
  uint uVar20;
  char cVar21;
  short local_18;
  float local_14;
  byte local_8;
  uint uVar14;
  
  this = param_7;
  uVar4 = FUN_10023bdc((int)param_7,CONCAT22((short)(param_2 >> 0x10),*param_1),
                       (uint)(ushort)param_1[1],(uint)(ushort)param_1[2],(uint)(ushort)param_1[3],7,
                       '\x01');
  uVar14 = uVar4 & 0xffff;
  uVar13 = (ushort)uVar4;
  FUN_10023753((int)param_7,uVar13,7);
  if ((param_2 & 0xf0) == 0) {
    uVar11 = param_2 & 0xffff | 0x2000;
  }
  else {
    FUN_10026553(param_7,param_8,param_2,0xa4,uVar14,uVar14,7,0.01,'\x01');
    uVar11 = uVar14;
  }
  local_14 = 0.0;
  if (param_5 == 0.0) {
LAB_1002709b:
    fVar10 = local_14;
    if (param_4 != 0) {
      uVar3 = SUB42(local_14,0);
      uVar5 = uVar14;
      if (uVar3 == uVar13) {
        uVar5 = FUN_10023bdc((int)param_7,0,0,0,0,7,'\0');
      }
      uVar6 = uVar5 & 0xffff;
      uVar12 = (ushort)uVar5;
      FUN_10023753((int)param_7,uVar12,7);
      cVar21 = '\x01';
      bVar19 = 0;
      bVar2 = FUN_10023cb7((int)param_7,uVar6,0xa4);
      FUN_1002381f(param_7,0,uVar11,bVar2,bVar19,cVar21);
      bVar19 = 0;
      uVar11 = 0;
      bVar2 = FUN_10023cb7((int)param_7,uVar6,0xe4);
      iVar8 = FUN_1004a6e2(param_7,(uint *)(param_7 + 0x5e),param_7[0x12],param_4,bVar2,uVar11,
                           bVar19);
      piVar18 = param_7 + 0x5d;
      *piVar18 = iVar8;
      FUN_1004b2c7(param_8,(param_7[0x55] + param_7[0x4d] + iVar8) * 0x1000000 + 0x1000000U &
                           0x7f000000 | 0x20,param_7 + 0x4d,param_7 + 0x55,piVar18,(int *)0x0);
      if (uVar3 != 0) {
        FUN_10023753((int)param_7,uVar13,7);
        cVar21 = '\0';
        bVar19 = 0;
        bVar2 = FUN_10023cb7((int)param_7,uVar14,0xa4);
        FUN_1002381f(param_7,0,(uint)local_14,bVar2,bVar19,cVar21);
        bVar1 = false;
        bVar2 = FUN_10023cb7((int)param_7,uVar14,0xa4);
        if (((uVar12 & 0xff0) != 0x100) &&
           (((uVar11 = uVar5 & 0xf00, uVar11 == 0x100 || (uVar11 == 0x200)) || (uVar11 == 0x500))))
        {
          bVar1 = true;
        }
        uVar11 = uVar5 & 0xf;
        if ((uVar5 & 0x1000) != 0) {
          bVar2 = 0xff;
        }
        uVar7 = uVar5 & 0xf0;
        if (uVar7 < 0x41) {
          if (uVar7 == 0x40) {
            *piVar18 = 2;
            uVar11 = FUN_1004b48c(1,bVar2,1,4,0,0,0);
            param_7[0x5f] = 2;
            goto LAB_100273f5;
          }
          if (uVar7 != 0) {
            if (uVar7 == 0x10) {
              *piVar18 = 2;
              uVar5 = FUN_1004b48c(0,bVar2,1,4,0,0,0);
              param_7[0x5e] = uVar5;
              param_7[0x5f] = (uint)*(byte *)(param_7 + uVar11 + 0x21);
            }
            else if ((uVar7 == 0x20) || (uVar7 == 0x30)) {
              uVar11 = *(uint *)((int)param_7 +
                                uVar11 * 4 + ((((byte)uVar6 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
              if (uVar11 != 0) {
                *piVar18 = 2;
                iVar8 = FUN_1004ac1d(uVar11,0,1,4,0,0);
                param_7[0x5e] = iVar8;
                uVar11 = uVar11 & 0xff;
                goto LAB_1002727a;
              }
              goto LAB_100272b3;
            }
            goto LAB_100273fb;
          }
LAB_100272b3:
          if ((uVar12 & 0xf00) == 0x100) {
            param_5 = 1.0;
          }
          else if ((uVar12 & 0xf00) == 0x300) {
            param_5 = -0.5;
          }
          else {
            param_5 = 0.0;
          }
          if ((uVar5 & 0x2000) != 0) {
            param_5 = param_5 * 255.0;
          }
          if (bVar1) {
            param_5 = -param_5;
          }
          FUN_10023b58(piVar18,bVar2,(int)param_5);
        }
        else {
          if (uVar7 != 0x50) {
            if (uVar7 == 0x80) {
              *piVar18 = 2;
              iVar8 = FUN_1004ac1d(param_7[uVar11 + 0x24],bVar2,1,4,0,0);
              param_7[0x5e] = iVar8;
              uVar11 = (uint)*(byte *)(param_7 + uVar11 + 0x24);
            }
            else {
              if (uVar7 != 0xf0) goto LAB_100273fb;
              *piVar18 = 2;
              iVar8 = FUN_1004ac1d(param_7[0x28],bVar2,1,4,0,0);
              param_7[0x5e] = iVar8;
              uVar11 = (uint)*(byte *)(param_7 + 0x28);
            }
LAB_1002727a:
            param_7[0x5f] = uVar11;
            goto LAB_100273fb;
          }
          param_7[2] = param_7[2] | 1;
          param_7[0x5f] = 0;
          if (*param_7 == 0x51) {
            *piVar18 = 4;
            uVar11 = FUN_1004b48c(8,bVar2,3,4,0,0,0);
            param_7[0x60] = 0;
            param_7[0x61] = 5;
          }
          else {
            *piVar18 = 3;
            uVar11 = FUN_1004b48c(8,bVar2,2,4,0,0,0);
            param_7[0x60] = 5;
          }
LAB_100273f5:
          param_7[0x5e] = uVar11;
LAB_100273fb:
          if (bVar1) {
            for (iVar8 = *piVar18; iVar8 != 0; iVar8 = iVar8 + -1) {
              param_7[iVar8 + 0x5e] = param_7[iVar8 + 0x5d];
            }
            param_7[0x5e] = param_7[0x5e] | 0x80000000;
            *piVar18 = *piVar18 + 1;
            param_7[0x5f] = 0x41;
          }
        }
        FUN_1004b2c7(param_8,(*piVar18 + param_7[0x55] + param_7[0x4d]) * 0x1000000 + 0x1000000U &
                             0x7f000000 | 0x3c,param_7 + 0x4d,param_7 + 0x55,piVar18,(int *)0x0);
      }
      if (uVar3 == uVar13) {
        FUN_10023c8c((int)param_7,uVar6);
      }
    }
  }
  else {
    uVar5 = uVar4;
    if ((ushort)uVar11 == uVar13) {
      uVar5 = FUN_10023bdc((int)param_7,0,0,0,0,7,'\0');
    }
    uVar6 = uVar5 & 0xffff;
    uVar7 = FUN_10023bdc((int)param_7,0,0,0,0,7,'\0');
    uVar15 = uVar7 & 0xffff;
    fVar10 = (float)uVar14;
    if (param_4 != 0) {
      fVar10 = (float)uVar6;
    }
    uVar3 = (ushort)uVar7;
    FUN_10023753((int)param_7,uVar3,7);
    cVar21 = '\x01';
    bVar19 = 0;
    bVar2 = FUN_10023cb7((int)param_7,uVar15,0xa4);
    FUN_1002381f(param_7,0,uVar11,bVar2,bVar19,cVar21);
    bVar19 = 0;
    uVar20 = 0;
    bVar2 = FUN_10023cb7((int)param_7,uVar15,0xa4);
    iVar8 = FUN_1004a6e2(param_7,(uint *)(param_7 + 0x5e),param_7[0x12],param_6,bVar2,uVar20,bVar19)
    ;
    piVar18 = param_7 + 0x5d;
    *piVar18 = iVar8;
    FUN_1004b2c7(param_8,(param_7[0x55] + param_7[0x4d] + iVar8) * 0x1000000 + 0x1000000U &
                         0x7f000000 | 0x50,param_7 + 0x4d,piVar18,param_7 + 0x55,(int *)0x0);
    FUN_10023753((int)param_7,(ushort)uVar5,7);
    cVar21 = '\x01';
    bVar19 = 0;
    bVar2 = FUN_10023cb7((int)param_7,uVar6,0xa4);
    FUN_1002381f(param_7,0,uVar11,bVar2,bVar19,cVar21);
    bVar19 = 0;
    uVar20 = 0;
    bVar2 = FUN_10023cb7((int)param_7,uVar6,0xa4);
    iVar8 = FUN_1004a6e2(param_7,(uint *)(param_7 + 0x5e),param_7[0x12],(uint)param_5,bVar2,uVar20,
                         bVar19);
    *piVar18 = iVar8;
    FUN_1004b2c7(param_8,(param_7[0x55] + param_7[0x4d] + iVar8) * 0x1000000 + 0x1000000U &
                         0x7f000000 | 0x50,param_7 + 0x4d,param_7 + 0x55,piVar18,(int *)0x0);
    FUN_10023753((int)param_7,SUB42(fVar10,0),7);
    cVar21 = '\0';
    bVar19 = 0;
    bVar2 = FUN_10023cb7((int)param_7,(uint)fVar10,0xa4);
    FUN_1002381f(param_7,0,uVar6,bVar2,bVar19,cVar21);
    bVar1 = false;
    bVar2 = FUN_10023cb7((int)param_7,(uint)fVar10,0xa4);
    if (((uVar3 & 0xff0) != 0x100) &&
       (((uVar20 = uVar7 & 0xf00, uVar20 == 0x100 || (uVar20 == 0x200)) || (uVar20 == 0x500)))) {
      bVar1 = true;
    }
    uVar20 = uVar7 & 0xf;
    if ((uVar7 & 0x1000) != 0) {
      bVar2 = 0xff;
    }
    uVar9 = uVar7 & 0xf0;
    if (uVar9 < 0x41) {
      if (uVar9 == 0x40) {
        *piVar18 = 2;
        uVar7 = FUN_1004b48c(1,bVar2,1,4,0,0,0);
        param_7[0x5f] = 2;
        goto LAB_10026ee8;
      }
      if (uVar9 != 0) {
        if (uVar9 == 0x10) {
          *piVar18 = 2;
          uVar7 = FUN_1004b48c(0,bVar2,1,4,0,0,0);
          param_7[0x5e] = uVar7;
          param_7[0x5f] = (uint)*(byte *)(param_7 + uVar20 + 0x21);
        }
        else if ((uVar9 == 0x20) || (uVar9 == 0x30)) {
          uVar20 = *(uint *)((int)param_7 +
                            uVar20 * 4 + ((((byte)uVar15 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar20 != 0) {
            *piVar18 = 2;
            iVar8 = FUN_1004ac1d(uVar20,0,1,4,0,0);
            param_7[0x5e] = iVar8;
            uVar20 = uVar20 & 0xff;
            goto LAB_10026d87;
          }
          goto LAB_10026dbe;
        }
        goto LAB_10026eee;
      }
LAB_10026dbe:
      if ((uVar3 & 0xf00) == 0x100) {
        local_14 = 1.0;
      }
      else if ((uVar3 & 0xf00) == 0x300) {
        local_14 = -0.5;
      }
      else {
        local_14 = 0.0;
      }
      if ((uVar7 & 0x2000) != 0) {
        local_14 = local_14 * 255.0;
      }
      if (bVar1) {
        local_14 = -local_14;
      }
      FUN_10023b58(piVar18,bVar2,(int)local_14);
    }
    else {
      if (uVar9 != 0x50) {
        if (uVar9 == 0x80) {
          *piVar18 = 2;
          iVar8 = FUN_1004ac1d(param_7[uVar20 + 0x24],bVar2,1,4,0,0);
          param_7[0x5e] = iVar8;
          uVar20 = (uint)*(byte *)(param_7 + uVar20 + 0x24);
        }
        else {
          if (uVar9 != 0xf0) goto LAB_10026eee;
          *piVar18 = 2;
          iVar8 = FUN_1004ac1d(param_7[0x28],bVar2,1,4,0,0);
          param_7[0x5e] = iVar8;
          uVar20 = (uint)*(byte *)(param_7 + 0x28);
        }
LAB_10026d87:
        param_7[0x5f] = uVar20;
        goto LAB_10026eee;
      }
      param_7[2] = param_7[2] | 1;
      param_7[0x5f] = 0;
      if (*param_7 == 0x51) {
        *piVar18 = 4;
        uVar7 = FUN_1004b48c(8,bVar2,3,4,0,0,0);
        param_7[0x60] = 0;
        param_7[0x61] = 5;
      }
      else {
        *piVar18 = 3;
        uVar7 = FUN_1004b48c(8,bVar2,2,4,0,0,0);
        param_7[0x60] = 5;
      }
LAB_10026ee8:
      param_7[0x5e] = uVar7;
LAB_10026eee:
      if (bVar1) {
        for (iVar8 = *piVar18; iVar8 != 0; iVar8 = iVar8 + -1) {
          param_7[iVar8 + 0x5e] = param_7[iVar8 + 0x5d];
        }
        param_7[0x5e] = param_7[0x5e] | 0x80000000;
        *piVar18 = *piVar18 + 1;
        param_7[0x5f] = 0x41;
      }
    }
    FUN_1004b2c7(param_8,(*piVar18 + param_7[0x55] + param_7[0x4d]) * 0x1000000 + 0x1000000U &
                         0x7f000000 | 1,param_7 + 0x4d,param_7 + 0x55,piVar18,(int *)0x0);
    FUN_10023c8c((int)param_7,uVar15);
    local_14 = fVar10;
    if (param_4 != 0) goto LAB_1002709b;
    if ((ushort)uVar5 != uVar13) {
      FUN_10023c8c((int)param_7,uVar6);
    }
  }
  FUN_10023753((int)param_7,uVar13,1);
  FUN_1002381f(param_7,0,uVar14,0,0,'\0');
  piVar18 = param_7 + 0x5d;
  bVar1 = false;
  uVar3 = uVar13 & 0xff0;
  if ((uVar3 != 0x100) &&
     (((uVar11 = uVar4 & 0xf00, uVar11 == 0x100 || (uVar11 == 0x200)) || (uVar11 == 0x500)))) {
    bVar1 = true;
  }
  uVar11 = uVar4 & 0xf;
  uVar5 = uVar4 & 0x1000;
  uVar6 = uVar4 & 0xf0;
  bVar2 = ((uVar5 != 0) - 1U & 0x56) - 1;
  local_8 = (byte)uVar14;
  if (uVar6 < 0x41) {
    if (uVar6 == 0x40) {
      *piVar18 = 2;
      uVar7 = FUN_1004b48c(1,bVar2,1,4,0,0,0);
      param_7[0x5f] = 2;
      goto LAB_100275e1;
    }
    if (uVar6 != 0) {
      if (uVar6 == 0x10) {
        *piVar18 = 2;
        uVar7 = FUN_1004b48c(0,bVar2,1,4,0,0,0);
        param_7[0x5e] = uVar7;
        param_7[0x5f] = (uint)*(byte *)(param_7 + uVar11 + 0x21);
      }
      else if ((uVar6 == 0x20) || (uVar6 == 0x30)) {
        uVar7 = *(uint *)((int)param_7 + uVar11 * 4 + (((local_8 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c)
        ;
        if (uVar7 != 0) {
          *piVar18 = 2;
          iVar8 = FUN_1004ac1d(uVar7,0,1,4,0,0);
          param_7[0x5e] = iVar8;
          uVar7 = uVar7 & 0xff;
          goto LAB_10027087;
        }
        goto LAB_100274aa;
      }
      goto LAB_100275e7;
    }
LAB_100274aa:
    if ((uVar13 & 0xf00) == 0x100) {
      param_7 = (int *)0x3f800000;
    }
    else if ((uVar13 & 0xf00) == 0x300) {
      param_7 = (int *)0xbf000000;
    }
    else {
      param_7 = (int *)0x0;
    }
    if ((uVar4 & 0x2000) != 0) {
      param_7 = (int *)((float)param_7 * 255.0);
    }
    if (bVar1) {
      param_7 = (int *)-(float)param_7;
    }
    FUN_10023b58(piVar18,bVar2,(int)param_7);
  }
  else {
    if (uVar6 != 0x50) {
      if (uVar6 == 0x80) {
        *piVar18 = 2;
        iVar8 = FUN_1004ac1d(param_7[uVar11 + 0x24],bVar2,1,4,0,0);
        param_7[0x5e] = iVar8;
        uVar7 = (uint)*(byte *)(param_7 + uVar11 + 0x24);
      }
      else {
        if (uVar6 != 0xf0) goto LAB_100275e7;
        *piVar18 = 2;
        iVar8 = FUN_1004ac1d(param_7[0x28],bVar2,1,4,0,0);
        param_7[0x5e] = iVar8;
        uVar7 = (uint)*(byte *)(param_7 + 0x28);
      }
LAB_10027087:
      param_7[0x5f] = uVar7;
      goto LAB_100275e7;
    }
    param_7[2] = param_7[2] | 1;
    param_7[0x5f] = 0;
    if (*param_7 == 0x51) {
      *piVar18 = 4;
      uVar7 = FUN_1004b48c(8,bVar2,3,4,0,0,0);
      param_7[0x60] = 0;
      param_7[0x61] = 5;
    }
    else {
      *piVar18 = 3;
      uVar7 = FUN_1004b48c(8,bVar2,2,4,0,0,0);
      param_7[0x60] = 5;
    }
LAB_100275e1:
    param_7[0x5e] = uVar7;
LAB_100275e7:
    if (bVar1) {
      for (iVar8 = *piVar18; iVar8 != 0; iVar8 = iVar8 + -1) {
        param_7[iVar8 + 0x5e] = param_7[iVar8 + 0x5d];
      }
      param_7[0x5e] = param_7[0x5e] | 0x80000000;
      *piVar18 = *piVar18 + 1;
      param_7[0x5f] = 0x41;
    }
  }
  uVar7 = (*piVar18 + this[0x4d] + this[0x55]) * 0x1000000 + 0x1000000U & 0x7f000000 | 1;
  FUN_1004b2c7(param_8,uVar7,this + 0x4d,this + 0x55,piVar18,(int *)0x0);
  bVar1 = false;
  if ((uVar3 != 0x100) &&
     (((uVar15 = uVar4 & 0xf00, uVar15 == 0x100 || (uVar15 == 0x200)) || (uVar15 == 0x500)))) {
    bVar1 = true;
  }
  local_18 = (short)uVar5;
  bVar2 = ((local_18 != 0) - 1U & 0xab) - 1;
  if (uVar6 < 0x41) {
    if (uVar6 == 0x40) {
      *piVar18 = 2;
      uVar15 = FUN_1004b48c(1,bVar2,1,4,0,0,0);
      this[0x5f] = 2;
      goto LAB_1002785f;
    }
    if (uVar6 != 0) {
      if (uVar6 == 0x10) {
        *piVar18 = 2;
        uVar15 = FUN_1004b48c(0,bVar2,1,4,0,0,0);
        this[0x5e] = uVar15;
        this[0x5f] = (uint)*(byte *)(this + uVar11 + 0x21);
      }
      else if ((uVar6 == 0x20) || (uVar6 == 0x30)) {
        uVar15 = *(uint *)((int)this + uVar11 * 4 + (((local_8 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
        if (uVar15 != 0) {
          *piVar18 = 2;
          iVar8 = FUN_1004ac1d(uVar15,0,1,4,0,0);
          this[0x5e] = iVar8;
          uVar15 = uVar15 & 0xff;
          goto LAB_100276f6;
        }
        goto LAB_1002772b;
      }
      goto LAB_10027865;
    }
LAB_1002772b:
    if ((uVar13 & 0xf00) == 0x100) {
      param_7 = (int *)0x3f800000;
    }
    else if ((uVar13 & 0xf00) == 0x300) {
      param_7 = (int *)0xbf000000;
    }
    else {
      param_7 = (int *)0x0;
    }
    if ((uVar4 & 0x2000) != 0) {
      param_7 = (int *)((float)param_7 * 255.0);
    }
    if (bVar1) {
      param_7 = (int *)-(float)param_7;
    }
    FUN_10023b58(piVar18,bVar2,(int)param_7);
  }
  else {
    if (uVar6 != 0x50) {
      if (uVar6 == 0x80) {
        *piVar18 = 2;
        iVar8 = FUN_1004ac1d(this[uVar11 + 0x24],bVar2,1,4,0,0);
        this[0x5e] = iVar8;
        uVar15 = (uint)*(byte *)(this + uVar11 + 0x24);
      }
      else {
        if (uVar6 != 0xf0) goto LAB_10027865;
        *piVar18 = 2;
        iVar8 = FUN_1004ac1d(this[0x28],bVar2,1,4,0,0);
        this[0x5e] = iVar8;
        uVar15 = (uint)*(byte *)(this + 0x28);
      }
LAB_100276f6:
      this[0x5f] = uVar15;
      goto LAB_10027865;
    }
    this[2] = this[2] | 1;
    this[0x5f] = 0;
    if (*this == 0x51) {
      *piVar18 = 4;
      uVar15 = FUN_1004b48c(8,bVar2,3,4,0,0,0);
      this[0x60] = 0;
      this[0x61] = 5;
    }
    else {
      *piVar18 = 3;
      uVar15 = FUN_1004b48c(8,bVar2,2,4,0,0,0);
      this[0x60] = 5;
    }
LAB_1002785f:
    this[0x5e] = uVar15;
LAB_10027865:
    if (bVar1) {
      for (iVar8 = *piVar18; iVar8 != 0; iVar8 = iVar8 + -1) {
        this[iVar8 + 0x5e] = this[iVar8 + 0x5d];
      }
      this[0x5e] = this[0x5e] | 0x80000000;
      *piVar18 = *piVar18 + 1;
      this[0x5f] = 0x41;
    }
  }
  FUN_1004b2c7(param_8,uVar7,this + 0x4d,this + 0x55,piVar18,(int *)0x0);
  if ((param_3._0_1_ & 0xf0) != 0x10) {
    FUN_10023ad0(this,uVar13,0);
    piVar18 = (int *)0x0;
    piVar17 = (int *)0x0;
    piVar16 = this + 0x55;
    uVar4 = *piVar16 * 0x1000000 + 0x1000000U & 0x7f000000 | 0x4000d;
    goto LAB_10027bb7;
  }
  FUN_1004b2c7(param_8,(this[0x55] + this[0x4d]) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x3b,
               this + 0x4d,this + 0x55,(int *)0x0,(int *)0x0);
  FUN_10023753((int)this,SUB42(param_3,0),0xf);
  FUN_1002381f(this,0,(uint)param_3,0xe4,0,'\0');
  bVar1 = false;
  if ((uVar3 != 0x100) &&
     (((uVar7 = uVar4 & 0xf00, uVar7 == 0x100 || (uVar7 == 0x200)) || (uVar7 == 0x500)))) {
    bVar1 = true;
  }
  bVar2 = -(uVar5 != 0);
  if (uVar6 < 0x41) {
    if (uVar6 == 0x40) {
      *piVar18 = 2;
      uVar4 = FUN_1004b48c(1,bVar2,1,4,0,0,0);
      this[0x5f] = 2;
      goto LAB_10027b26;
    }
    if (uVar6 != 0) {
      if (uVar6 == 0x10) {
        *piVar18 = 2;
        uVar4 = FUN_1004b48c(0,bVar2,1,4,0,0,0);
        this[0x5e] = uVar4;
        uVar4 = (uint)*(byte *)(this + uVar11 + 0x21);
        goto LAB_100279ee;
      }
      if ((uVar6 == 0x20) || (uVar6 == 0x30)) {
        uVar11 = *(uint *)((int)this + uVar11 * 4 + (((local_8 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
        if (uVar11 == 0) goto LAB_100279f9;
        *piVar18 = 2;
        iVar8 = FUN_1004ac1d(uVar11,0,1,4,0,0);
        this[0x5e] = iVar8;
        this[0x5f] = uVar11 & 0xff;
      }
      goto LAB_10027b2f;
    }
LAB_100279f9:
    if ((uVar13 & 0xf00) == 0x100) {
      param_3 = 1.0;
    }
    else if ((uVar13 & 0xf00) == 0x300) {
      param_3 = -0.5;
    }
    else {
      param_3 = 0.0;
    }
    if ((uVar4 & 0x2000) != 0) {
      param_3 = param_3 * 255.0;
    }
    if (bVar1) {
      param_3 = -param_3;
    }
    FUN_10023b58(piVar18,bVar2,(int)param_3);
  }
  else {
    if (uVar6 != 0x50) {
      if (uVar6 == 0x80) {
        *piVar18 = 2;
        iVar8 = FUN_1004ac1d(this[uVar11 + 0x24],bVar2,1,4,0,0);
        this[0x5e] = iVar8;
        uVar4 = (uint)*(byte *)(this + uVar11 + 0x24);
      }
      else {
        if (uVar6 != 0xf0) goto LAB_10027b2f;
        *piVar18 = 2;
        iVar8 = FUN_1004ac1d(this[0x28],bVar2,1,4,0,0);
        this[0x5e] = iVar8;
        uVar4 = (uint)*(byte *)(this + 0x28);
      }
LAB_100279ee:
      this[0x5f] = uVar4;
      goto LAB_10027b2f;
    }
    this[2] = this[2] | 1;
    this[0x5f] = 0;
    if (*this == 0x51) {
      *piVar18 = 4;
      uVar4 = FUN_1004b48c(8,bVar2,3,4,0,0,0);
      this[0x60] = 0;
      this[0x61] = 5;
    }
    else {
      *piVar18 = 3;
      uVar4 = FUN_1004b48c(8,bVar2,2,4,0,0,0);
      this[0x60] = 5;
    }
LAB_10027b26:
    this[0x5e] = uVar4;
LAB_10027b2f:
    if (bVar1) {
      for (iVar8 = *piVar18; iVar8 != 0; iVar8 = iVar8 + -1) {
        this[iVar8 + 0x5e] = this[iVar8 + 0x5d];
      }
      this[0x5e] = this[0x5e] | 0x80000000;
      *piVar18 = *piVar18 + 1;
      this[0x5f] = 0x41;
    }
  }
  piVar16 = this + 0x4d;
  piVar17 = this + 0x55;
  uVar4 = (*piVar18 + *piVar17 + *piVar16) * 0x1000000 + 0x1000000U & 0x7f000000 | 1;
LAB_10027bb7:
  FUN_1004b2c7(param_8,uVar4,piVar16,piVar17,piVar18,(int *)0x0);
  FUN_10023c8c((int)this,(uint)fVar10);
  FUN_10023c8c((int)this,uVar14);
  *(undefined1 *)(this + 0x29) = 0;
  return;
}

