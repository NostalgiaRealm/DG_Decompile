/*
 * FUN_10029bad at 10029bad
 * undefined __fastcall FUN_10029bad(undefined2 * param_1, uint param_2, float param_3, uint param_4, float param_5, uint param_6, int * param_7, void * param_8)
 * Address ranges: 10029bad-1002aec4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall
FUN_10029bad(undefined2 *param_1,uint param_2,float param_3,uint param_4,float param_5,uint param_6,
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
  int *piVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  byte bVar19;
  uint uVar20;
  char cVar21;
  short local_18;
  float local_14;
  byte local_8;
  uint uVar15;
  
  this = param_7;
  uVar4 = FUN_10026a4e((int)param_7,CONCAT22((short)(param_2 >> 0x10),*param_1),
                       (uint)(ushort)param_1[1],(uint)(ushort)param_1[2],(uint)(ushort)param_1[3],7,
                       '\x01');
  uVar15 = uVar4 & 0xffff;
  uVar14 = (ushort)uVar4;
  FUN_1002657e((int)param_7,uVar14,7);
  if ((param_2 & 0xf0) == 0) {
    uVar11 = param_2 & 0xffff | 0x2000;
  }
  else {
    FUN_10029697(param_7,param_8,param_2,0xa4,uVar15,uVar15,7,0.01,'\x01');
    uVar11 = uVar15;
  }
  local_14 = 0.0;
  if (param_5 == 0.0) {
LAB_1002a22e:
    fVar10 = local_14;
    if (param_4 != 0) {
      uVar3 = SUB42(local_14,0);
      uVar5 = uVar15;
      if (uVar3 == uVar14) {
        uVar5 = FUN_10026a4e((int)param_7,0,0,0,0,7,'\0');
      }
      uVar6 = uVar5 & 0xffff;
      uVar13 = (ushort)uVar5;
      FUN_1002657e((int)param_7,uVar13,7);
      cVar21 = '\x01';
      bVar19 = 0;
      bVar2 = FUN_10026b29((int)param_7,uVar6,0xa4);
      FUN_1002664a(param_7,0,uVar11,bVar2,bVar19,cVar21);
      bVar19 = 0;
      uVar11 = 0;
      bVar2 = FUN_10026b29((int)param_7,uVar6,0xe4);
      iVar8 = FUN_1004daeb(param_7,(uint *)(param_7 + 0x5e),param_7[0x12],param_4,bVar2,uVar11,
                           bVar19);
      piVar18 = param_7 + 0x5d;
      *piVar18 = iVar8;
      FUN_1004e6d0(param_8,(param_7[0x55] + param_7[0x4d] + iVar8) * 0x1000000 + 0x1000000U &
                           0x7f000000 | 0x20,param_7 + 0x4d,param_7 + 0x55,piVar18,(int *)0x0);
      if (uVar3 != 0) {
        FUN_1002657e((int)param_7,uVar14,7);
        cVar21 = '\0';
        bVar19 = 0;
        bVar2 = FUN_10026b29((int)param_7,uVar15,0xa4);
        FUN_1002664a(param_7,0,(uint)local_14,bVar2,bVar19,cVar21);
        bVar1 = false;
        bVar2 = FUN_10026b29((int)param_7,uVar15,0xa4);
        if (((uVar13 & 0xff0) != 0x100) &&
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
            uVar11 = FUN_1004e895(1,bVar2,1,4,0,0,0);
            param_7[0x5f] = 2;
            goto LAB_1002a5e2;
          }
          if (uVar7 != 0) {
            if (uVar7 == 0x10) {
              *piVar18 = 2;
              uVar5 = FUN_1004e895(0,bVar2,1,4,0,0,0);
              param_7[0x5e] = uVar5;
              param_7[0x5f] = (uint)*(byte *)(param_7 + uVar11 + 0x21);
            }
            else if ((uVar7 == 0x20) || (uVar7 == 0x30)) {
              uVar11 = *(uint *)((int)param_7 +
                                uVar11 * 4 + ((((byte)uVar6 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
              if (uVar11 != 0) {
                *piVar18 = 2;
                iVar8 = FUN_1004e026(uVar11,0,1,4,0,0);
                param_7[0x5e] = iVar8;
                uVar11 = uVar11 & 0xff;
                goto LAB_1002a40d;
              }
              goto LAB_1002a446;
            }
            goto LAB_1002a5e8;
          }
LAB_1002a446:
          if ((uVar13 & 0xf00) == 0x100) {
            param_5 = 1.0;
          }
          else if ((uVar13 & 0xf00) == 0x300) {
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
          FUN_100269ca(piVar18,bVar2,(int)param_5);
        }
        else {
          if (uVar7 != 0x50) {
            if (uVar7 == 0x60) {
              param_7[2] = param_7[2] | 1;
              param_5 = (float)(uVar11 * 0x250 + 0x180 >> 4);
              if (*param_7 == 0x51) {
                param_7[0x61] = (int)param_5;
                param_5 = 0.0;
                iVar8 = 4;
              }
              else {
                iVar8 = 3;
              }
              *piVar18 = iVar8;
              uVar11 = FUN_1004e895(8,bVar2,2,4,0,0,0);
              param_7[0x5e] = uVar11;
              param_7[0x5f] = 0;
              param_7[0x60] = (int)param_5;
            }
            else {
              if (uVar7 == 0x80) {
                *piVar18 = 2;
                iVar8 = FUN_1004e026(param_7[uVar11 + 0x24],bVar2,1,4,0,0);
                param_7[0x5e] = iVar8;
                uVar11 = (uint)*(byte *)(param_7 + uVar11 + 0x24);
              }
              else {
                if (uVar7 != 0xf0) goto LAB_1002a5e8;
                *piVar18 = 2;
                iVar8 = FUN_1004e026(param_7[0x28],bVar2,1,4,0,0);
                param_7[0x5e] = iVar8;
                uVar11 = (uint)*(byte *)(param_7 + 0x28);
              }
LAB_1002a40d:
              param_7[0x5f] = uVar11;
            }
            goto LAB_1002a5e8;
          }
          param_7[2] = param_7[2] | 1;
          param_7[0x5f] = 0;
          if (*param_7 == 0x51) {
            *piVar18 = 4;
            uVar11 = FUN_1004e895(8,bVar2,3,4,0,0,0);
            param_7[0x60] = 0;
            param_7[0x61] = 5;
          }
          else {
            *piVar18 = 3;
            uVar11 = FUN_1004e895(8,bVar2,2,4,0,0,0);
            param_7[0x60] = 5;
          }
LAB_1002a5e2:
          param_7[0x5e] = uVar11;
LAB_1002a5e8:
          if (bVar1) {
            for (iVar8 = *piVar18; iVar8 != 0; iVar8 = iVar8 + -1) {
              param_7[iVar8 + 0x5e] = param_7[iVar8 + 0x5d];
            }
            param_7[0x5e] = param_7[0x5e] | 0x80000000;
            *piVar18 = *piVar18 + 1;
            param_7[0x5f] = 0x41;
          }
        }
        FUN_1004e6d0(param_8,(*piVar18 + param_7[0x55] + param_7[0x4d]) * 0x1000000 + 0x1000000U &
                             0x7f000000 | 0x3c,param_7 + 0x4d,param_7 + 0x55,piVar18,(int *)0x0);
      }
      if (uVar3 == uVar14) {
        FUN_10026afe((int)param_7,uVar6);
      }
    }
  }
  else {
    uVar5 = uVar4;
    if ((ushort)uVar11 == uVar14) {
      uVar5 = FUN_10026a4e((int)param_7,0,0,0,0,7,'\0');
    }
    uVar6 = uVar5 & 0xffff;
    uVar7 = FUN_10026a4e((int)param_7,0,0,0,0,7,'\0');
    uVar16 = uVar7 & 0xffff;
    fVar10 = (float)uVar15;
    if (param_4 != 0) {
      fVar10 = (float)uVar6;
    }
    uVar3 = (ushort)uVar7;
    FUN_1002657e((int)param_7,uVar3,7);
    cVar21 = '\x01';
    bVar19 = 0;
    bVar2 = FUN_10026b29((int)param_7,uVar16,0xa4);
    FUN_1002664a(param_7,0,uVar11,bVar2,bVar19,cVar21);
    bVar19 = 0;
    uVar20 = 0;
    bVar2 = FUN_10026b29((int)param_7,uVar16,0xa4);
    iVar8 = FUN_1004daeb(param_7,(uint *)(param_7 + 0x5e),param_7[0x12],param_6,bVar2,uVar20,bVar19)
    ;
    piVar18 = param_7 + 0x5d;
    *piVar18 = iVar8;
    FUN_1004e6d0(param_8,(param_7[0x55] + param_7[0x4d] + iVar8) * 0x1000000 + 0x1000000U &
                         0x7f000000 | 0x50,param_7 + 0x4d,piVar18,param_7 + 0x55,(int *)0x0);
    FUN_1002657e((int)param_7,(ushort)uVar5,7);
    cVar21 = '\x01';
    bVar19 = 0;
    bVar2 = FUN_10026b29((int)param_7,uVar6,0xa4);
    FUN_1002664a(param_7,0,uVar11,bVar2,bVar19,cVar21);
    bVar19 = 0;
    uVar20 = 0;
    bVar2 = FUN_10026b29((int)param_7,uVar6,0xa4);
    iVar8 = FUN_1004daeb(param_7,(uint *)(param_7 + 0x5e),param_7[0x12],(uint)param_5,bVar2,uVar20,
                         bVar19);
    *piVar18 = iVar8;
    FUN_1004e6d0(param_8,(param_7[0x55] + param_7[0x4d] + iVar8) * 0x1000000 + 0x1000000U &
                         0x7f000000 | 0x50,param_7 + 0x4d,param_7 + 0x55,piVar18,(int *)0x0);
    FUN_1002657e((int)param_7,SUB42(fVar10,0),7);
    cVar21 = '\0';
    bVar19 = 0;
    bVar2 = FUN_10026b29((int)param_7,(uint)fVar10,0xa4);
    FUN_1002664a(param_7,0,uVar6,bVar2,bVar19,cVar21);
    bVar1 = false;
    bVar2 = FUN_10026b29((int)param_7,(uint)fVar10,0xa4);
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
        uVar7 = FUN_1004e895(1,bVar2,1,4,0,0,0);
        param_7[0x5f] = 2;
        goto LAB_1002a07b;
      }
      if (uVar9 != 0) {
        if (uVar9 == 0x10) {
          *piVar18 = 2;
          uVar7 = FUN_1004e895(0,bVar2,1,4,0,0,0);
          param_7[0x5e] = uVar7;
          param_7[0x5f] = (uint)*(byte *)(param_7 + uVar20 + 0x21);
        }
        else if ((uVar9 == 0x20) || (uVar9 == 0x30)) {
          uVar20 = *(uint *)((int)param_7 +
                            uVar20 * 4 + ((((byte)uVar16 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
          if (uVar20 != 0) {
            *piVar18 = 2;
            iVar8 = FUN_1004e026(uVar20,0,1,4,0,0);
            param_7[0x5e] = iVar8;
            uVar20 = uVar20 & 0xff;
            goto LAB_10029ecb;
          }
          goto LAB_10029f02;
        }
        goto LAB_1002a081;
      }
LAB_10029f02:
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
      FUN_100269ca(piVar18,bVar2,(int)local_14);
    }
    else {
      if (uVar9 != 0x50) {
        if (uVar9 == 0x60) {
          param_7[2] = param_7[2] | 1;
          uVar7 = uVar20 * 0x250 + 0x180 >> 4;
          if (*param_7 == 0x51) {
            param_7[0x61] = uVar7;
            uVar7 = 0;
            iVar8 = 4;
          }
          else {
            iVar8 = 3;
          }
          *piVar18 = iVar8;
          uVar20 = FUN_1004e895(8,bVar2,2,4,0,0,0);
          param_7[0x5e] = uVar20;
          param_7[0x5f] = 0;
          param_7[0x60] = uVar7;
        }
        else {
          if (uVar9 == 0x80) {
            *piVar18 = 2;
            iVar8 = FUN_1004e026(param_7[uVar20 + 0x24],bVar2,1,4,0,0);
            param_7[0x5e] = iVar8;
            uVar20 = (uint)*(byte *)(param_7 + uVar20 + 0x24);
          }
          else {
            if (uVar9 != 0xf0) goto LAB_1002a081;
            *piVar18 = 2;
            iVar8 = FUN_1004e026(param_7[0x28],bVar2,1,4,0,0);
            param_7[0x5e] = iVar8;
            uVar20 = (uint)*(byte *)(param_7 + 0x28);
          }
LAB_10029ecb:
          param_7[0x5f] = uVar20;
        }
        goto LAB_1002a081;
      }
      param_7[2] = param_7[2] | 1;
      param_7[0x5f] = 0;
      if (*param_7 == 0x51) {
        *piVar18 = 4;
        uVar7 = FUN_1004e895(8,bVar2,3,4,0,0,0);
        param_7[0x60] = 0;
        param_7[0x61] = 5;
      }
      else {
        *piVar18 = 3;
        uVar7 = FUN_1004e895(8,bVar2,2,4,0,0,0);
        param_7[0x60] = 5;
      }
LAB_1002a07b:
      param_7[0x5e] = uVar7;
LAB_1002a081:
      if (bVar1) {
        for (iVar8 = *piVar18; iVar8 != 0; iVar8 = iVar8 + -1) {
          param_7[iVar8 + 0x5e] = param_7[iVar8 + 0x5d];
        }
        param_7[0x5e] = param_7[0x5e] | 0x80000000;
        *piVar18 = *piVar18 + 1;
        param_7[0x5f] = 0x41;
      }
    }
    FUN_1004e6d0(param_8,(*piVar18 + param_7[0x55] + param_7[0x4d]) * 0x1000000 + 0x1000000U &
                         0x7f000000 | 1,param_7 + 0x4d,param_7 + 0x55,piVar18,(int *)0x0);
    FUN_10026afe((int)param_7,uVar16);
    local_14 = fVar10;
    if (param_4 != 0) goto LAB_1002a22e;
    if ((ushort)uVar5 != uVar14) {
      FUN_10026afe((int)param_7,uVar6);
    }
  }
  FUN_1002657e((int)param_7,uVar14,1);
  FUN_1002664a(param_7,0,uVar15,0,0,'\0');
  piVar18 = param_7 + 0x5d;
  bVar1 = false;
  uVar3 = uVar14 & 0xff0;
  if ((uVar3 != 0x100) &&
     (((uVar11 = uVar4 & 0xf00, uVar11 == 0x100 || (uVar11 == 0x200)) || (uVar11 == 0x500)))) {
    bVar1 = true;
  }
  uVar11 = uVar4 & 0xf;
  uVar5 = uVar4 & 0x1000;
  uVar6 = uVar4 & 0xf0;
  bVar2 = ((uVar5 != 0) - 1U & 0x56) - 1;
  local_8 = (byte)uVar15;
  if (uVar6 < 0x41) {
    if (uVar6 == 0x40) {
      *piVar18 = 2;
      uVar7 = FUN_1004e895(1,bVar2,1,4,0,0,0);
      param_7[0x5f] = 2;
      goto LAB_1002a825;
    }
    if (uVar6 != 0) {
      if (uVar6 == 0x10) {
        *piVar18 = 2;
        uVar7 = FUN_1004e895(0,bVar2,1,4,0,0,0);
        param_7[0x5e] = uVar7;
        param_7[0x5f] = (uint)*(byte *)(param_7 + uVar11 + 0x21);
      }
      else if ((uVar6 == 0x20) || (uVar6 == 0x30)) {
        uVar7 = *(uint *)((int)param_7 + uVar11 * 4 + (((local_8 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c)
        ;
        if (uVar7 != 0) {
          *piVar18 = 2;
          iVar8 = FUN_1004e026(uVar7,0,1,4,0,0);
          param_7[0x5e] = iVar8;
          uVar7 = uVar7 & 0xff;
          goto LAB_1002a21a;
        }
        goto LAB_1002a697;
      }
      goto LAB_1002a82b;
    }
LAB_1002a697:
    if ((uVar14 & 0xf00) == 0x100) {
      param_7 = (int *)0x3f800000;
    }
    else if ((uVar14 & 0xf00) == 0x300) {
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
    FUN_100269ca(piVar18,bVar2,(int)param_7);
  }
  else {
    if (uVar6 != 0x50) {
      if (uVar6 == 0x60) {
        param_7[2] = param_7[2] | 1;
        piVar12 = (int *)(uVar11 * 0x250 + 0x180 >> 4);
        if (*param_7 == 0x51) {
          param_7[0x61] = (int)piVar12;
          param_7 = (int *)0x0;
          iVar8 = 4;
        }
        else {
          iVar8 = 3;
          param_7 = piVar12;
        }
        *piVar18 = iVar8;
        uVar7 = FUN_1004e895(8,bVar2,2,4,0,0,0);
        this[0x5e] = uVar7;
        this[0x5f] = 0;
        this[0x60] = (int)param_7;
      }
      else {
        if (uVar6 == 0x80) {
          *piVar18 = 2;
          iVar8 = FUN_1004e026(param_7[uVar11 + 0x24],bVar2,1,4,0,0);
          param_7[0x5e] = iVar8;
          uVar7 = (uint)*(byte *)(param_7 + uVar11 + 0x24);
        }
        else {
          if (uVar6 != 0xf0) goto LAB_1002a82b;
          *piVar18 = 2;
          iVar8 = FUN_1004e026(param_7[0x28],bVar2,1,4,0,0);
          param_7[0x5e] = iVar8;
          uVar7 = (uint)*(byte *)(param_7 + 0x28);
        }
LAB_1002a21a:
        param_7[0x5f] = uVar7;
      }
      goto LAB_1002a82b;
    }
    param_7[2] = param_7[2] | 1;
    param_7[0x5f] = 0;
    if (*param_7 == 0x51) {
      *piVar18 = 4;
      uVar7 = FUN_1004e895(8,bVar2,3,4,0,0,0);
      param_7[0x60] = 0;
      param_7[0x61] = 5;
    }
    else {
      *piVar18 = 3;
      uVar7 = FUN_1004e895(8,bVar2,2,4,0,0,0);
      param_7[0x60] = 5;
    }
LAB_1002a825:
    param_7[0x5e] = uVar7;
LAB_1002a82b:
    if (bVar1) {
      for (iVar8 = *piVar18; iVar8 != 0; iVar8 = iVar8 + -1) {
        this[iVar8 + 0x5e] = this[iVar8 + 0x5d];
      }
      this[0x5e] = this[0x5e] | 0x80000000;
      *piVar18 = *piVar18 + 1;
      this[0x5f] = 0x41;
    }
  }
  uVar7 = (*piVar18 + this[0x4d] + this[0x55]) * 0x1000000 + 0x1000000U & 0x7f000000 | 1;
  FUN_1004e6d0(param_8,uVar7,this + 0x4d,this + 0x55,piVar18,(int *)0x0);
  bVar1 = false;
  if ((uVar3 != 0x100) &&
     (((uVar16 = uVar4 & 0xf00, uVar16 == 0x100 || (uVar16 == 0x200)) || (uVar16 == 0x500)))) {
    bVar1 = true;
  }
  local_18 = (short)uVar5;
  bVar2 = ((local_18 != 0) - 1U & 0xab) - 1;
  if (uVar6 < 0x41) {
    if (uVar6 == 0x40) {
      *piVar18 = 2;
      uVar16 = FUN_1004e895(1,bVar2,1,4,0,0,0);
      this[0x5f] = 2;
      goto LAB_1002aaf7;
    }
    if (uVar6 != 0) {
      if (uVar6 == 0x10) {
        *piVar18 = 2;
        uVar16 = FUN_1004e895(0,bVar2,1,4,0,0,0);
        this[0x5e] = uVar16;
        this[0x5f] = (uint)*(byte *)(this + uVar11 + 0x21);
      }
      else if ((uVar6 == 0x20) || (uVar6 == 0x30)) {
        uVar16 = *(uint *)((int)this + uVar11 * 4 + (((local_8 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
        if (uVar16 != 0) {
          *piVar18 = 2;
          iVar8 = FUN_1004e026(uVar16,0,1,4,0,0);
          this[0x5e] = iVar8;
          uVar16 = uVar16 & 0xff;
          goto LAB_1002a93a;
        }
        goto LAB_1002a96f;
      }
      goto LAB_1002aafd;
    }
LAB_1002a96f:
    if ((uVar14 & 0xf00) == 0x100) {
      param_7 = (int *)0x3f800000;
    }
    else if ((uVar14 & 0xf00) == 0x300) {
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
    FUN_100269ca(piVar18,bVar2,(int)param_7);
  }
  else {
    if (uVar6 != 0x50) {
      if (uVar6 == 0x60) {
        this[2] = this[2] | 1;
        param_7 = (int *)(uVar11 * 0x250 + 0x180 >> 4);
        if (*this == 0x51) {
          this[0x61] = (int)param_7;
          param_7 = (int *)0x0;
          iVar8 = 4;
        }
        else {
          iVar8 = 3;
        }
        *piVar18 = iVar8;
        uVar16 = FUN_1004e895(8,bVar2,2,4,0,0,0);
        this[0x5e] = uVar16;
        this[0x5f] = 0;
        this[0x60] = (int)param_7;
      }
      else {
        if (uVar6 == 0x80) {
          *piVar18 = 2;
          iVar8 = FUN_1004e026(this[uVar11 + 0x24],bVar2,1,4,0,0);
          this[0x5e] = iVar8;
          uVar16 = (uint)*(byte *)(this + uVar11 + 0x24);
        }
        else {
          if (uVar6 != 0xf0) goto LAB_1002aafd;
          *piVar18 = 2;
          iVar8 = FUN_1004e026(this[0x28],bVar2,1,4,0,0);
          this[0x5e] = iVar8;
          uVar16 = (uint)*(byte *)(this + 0x28);
        }
LAB_1002a93a:
        this[0x5f] = uVar16;
      }
      goto LAB_1002aafd;
    }
    this[2] = this[2] | 1;
    this[0x5f] = 0;
    if (*this == 0x51) {
      *piVar18 = 4;
      uVar16 = FUN_1004e895(8,bVar2,3,4,0,0,0);
      this[0x60] = 0;
      this[0x61] = 5;
    }
    else {
      *piVar18 = 3;
      uVar16 = FUN_1004e895(8,bVar2,2,4,0,0,0);
      this[0x60] = 5;
    }
LAB_1002aaf7:
    this[0x5e] = uVar16;
LAB_1002aafd:
    if (bVar1) {
      for (iVar8 = *piVar18; iVar8 != 0; iVar8 = iVar8 + -1) {
        this[iVar8 + 0x5e] = this[iVar8 + 0x5d];
      }
      this[0x5e] = this[0x5e] | 0x80000000;
      *piVar18 = *piVar18 + 1;
      this[0x5f] = 0x41;
    }
  }
  FUN_1004e6d0(param_8,uVar7,this + 0x4d,this + 0x55,piVar18,(int *)0x0);
  if ((param_3._0_1_ & 0xf0) != 0x10) {
    FUN_10026942(this,uVar14,0);
    piVar18 = (int *)0x0;
    piVar17 = (int *)0x0;
    piVar12 = this + 0x55;
    uVar4 = *piVar12 * 0x1000000 + 0x1000000U & 0x7f000000 | 0x4000d;
    goto LAB_1002ae9d;
  }
  FUN_1004e6d0(param_8,(this[0x55] + this[0x4d]) * 0x1000000 + 0x1000000U & 0x7f000000 | 0x3b,
               this + 0x4d,this + 0x55,(int *)0x0,(int *)0x0);
  FUN_1002657e((int)this,SUB42(param_3,0),0xf);
  FUN_1002664a(this,0,(uint)param_3,0xe4,0,'\0');
  bVar1 = false;
  if ((uVar3 != 0x100) &&
     (((uVar7 = uVar4 & 0xf00, uVar7 == 0x100 || (uVar7 == 0x200)) || (uVar7 == 0x500)))) {
    bVar1 = true;
  }
  bVar2 = -(uVar5 != 0);
  if (uVar6 < 0x41) {
    if (uVar6 == 0x40) {
      *piVar18 = 2;
      uVar4 = FUN_1004e895(1,bVar2,1,4,0,0,0);
      this[0x5f] = 2;
LAB_1002ae0c:
      this[0x5e] = uVar4;
      goto LAB_1002ae15;
    }
    if (uVar6 != 0) {
      if (uVar6 == 0x10) {
        *piVar18 = 2;
        uVar4 = FUN_1004e895(0,bVar2,1,4,0,0,0);
        this[0x5e] = uVar4;
        uVar4 = (uint)*(byte *)(this + uVar11 + 0x21);
        goto LAB_1002ac86;
      }
      if ((uVar6 == 0x20) || (uVar6 == 0x30)) {
        uVar11 = *(uint *)((int)this + uVar11 * 4 + (((local_8 & 0xf0) == 0x20) - 1 & 0xc) + 0x6c);
        if (uVar11 == 0) goto LAB_1002ac91;
        *piVar18 = 2;
        iVar8 = FUN_1004e026(uVar11,0,1,4,0,0);
        this[0x5e] = iVar8;
        this[0x5f] = uVar11 & 0xff;
      }
      goto LAB_1002ae15;
    }
LAB_1002ac91:
    if ((uVar14 & 0xf00) == 0x100) {
      param_3 = 1.0;
    }
    else if ((uVar14 & 0xf00) == 0x300) {
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
    FUN_100269ca(piVar18,bVar2,(int)param_3);
  }
  else {
    if (uVar6 == 0x50) {
      this[2] = this[2] | 1;
      this[0x5f] = 0;
      if (*this == 0x51) {
        *piVar18 = 4;
        uVar4 = FUN_1004e895(8,bVar2,3,4,0,0,0);
        this[0x60] = 0;
        this[0x61] = 5;
      }
      else {
        *piVar18 = 3;
        uVar4 = FUN_1004e895(8,bVar2,2,4,0,0,0);
        this[0x60] = 5;
      }
      goto LAB_1002ae0c;
    }
    if (uVar6 == 0x60) {
      this[2] = this[2] | 1;
      uVar4 = uVar11 * 0x250 + 0x180 >> 4;
      if (*this == 0x51) {
        this[0x61] = uVar4;
        uVar4 = 0;
        iVar8 = 4;
      }
      else {
        iVar8 = 3;
      }
      *piVar18 = iVar8;
      uVar11 = FUN_1004e895(8,bVar2,2,4,0,0,0);
      this[0x5e] = uVar11;
      this[0x5f] = 0;
      this[0x60] = uVar4;
    }
    else {
      if (uVar6 == 0x80) {
        *piVar18 = 2;
        iVar8 = FUN_1004e026(this[uVar11 + 0x24],bVar2,1,4,0,0);
        this[0x5e] = iVar8;
        uVar4 = (uint)*(byte *)(this + uVar11 + 0x24);
      }
      else {
        if (uVar6 != 0xf0) goto LAB_1002ae15;
        *piVar18 = 2;
        iVar8 = FUN_1004e026(this[0x28],bVar2,1,4,0,0);
        this[0x5e] = iVar8;
        uVar4 = (uint)*(byte *)(this + 0x28);
      }
LAB_1002ac86:
      this[0x5f] = uVar4;
    }
LAB_1002ae15:
    if (bVar1) {
      for (iVar8 = *piVar18; iVar8 != 0; iVar8 = iVar8 + -1) {
        this[iVar8 + 0x5e] = this[iVar8 + 0x5d];
      }
      this[0x5e] = this[0x5e] | 0x80000000;
      *piVar18 = *piVar18 + 1;
      this[0x5f] = 0x41;
    }
  }
  piVar12 = this + 0x4d;
  piVar17 = this + 0x55;
  uVar4 = (*piVar18 + *piVar17 + *piVar12) * 0x1000000 + 0x1000000U & 0x7f000000 | 1;
LAB_1002ae9d:
  FUN_1004e6d0(param_8,uVar4,piVar12,piVar17,piVar18,(int *)0x0);
  FUN_10026afe((int)this,(uint)fVar10);
  FUN_10026afe((int)this,uVar15);
  *(undefined1 *)(this + 0x29) = 0;
  return;
}

