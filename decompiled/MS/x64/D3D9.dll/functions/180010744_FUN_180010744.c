/*
 * FUN_180010744 at 180010744
 * undefined __fastcall FUN_180010744(uint * param_1, longlong * param_2, byte * param_3)
 * Address ranges: 180010744-1800114cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180010744(uint *param_1,longlong *param_2,byte *param_3)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ushort uVar11;
  char cVar12;
  byte bVar13;
  undefined8 local_res18;
  int iStackX_24;
  char cVar14;
  int iVar15;
  
  bVar13 = *param_3 & 0x7f;
  plVar10 = (longlong *)0x540200100700;
  if (0x2e < bVar13) {
    if (bVar13 == 0x4e) {
      plVar10 = param_2;
      uVar7 = FUN_18000ec58(param_1,param_2,(longlong)param_3);
      uVar3 = (uint)uVar7;
      goto LAB_180011171;
    }
    if (bVar13 == 0x4f) {
      plVar10 = param_2;
      uVar7 = FUN_18000f4f8(param_1,param_2,(longlong)param_3);
      uVar3 = (uint)uVar7;
      goto LAB_180011171;
    }
    if (bVar13 == 0x5e) {
      uVar7 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 3),param_3[8],param_3[0xb],
                            param_3[0xe],'\0','\0');
      uVar5 = (uint)uVar7;
      if ((uVar7 & 0x80000000) == 0) {
        pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
        *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
      }
      uVar8 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),param_3[7],param_3[10],
                            param_3[0xd],'\x01','\0');
      uVar3 = (uint)uVar8;
      plVar10 = (longlong *)0xc20200130700;
      local_res18._4_4_ = (int)(uVar7 >> 0x20);
      FUN_1800019cc(param_2,0xc20200130700,uVar3,uVar5,local_res18._4_4_,
                    (uint)(byte)(&DAT_180100f5f)[param_3[9]]);
      if ((uVar7 & 0x80000000) == 0) {
        pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
        *pbVar1 = *pbVar1 & ~('\x01' << (uVar5 & 7));
      }
      goto LAB_180011171;
    }
    if (bVar13 != 0x5f) {
      return;
    }
    uVar7 = FUN_18000ca0c(param_1,param_2,0xffff);
    uVar3 = (uint)uVar7;
    iVar15 = 0;
    plVar10 = (longlong *)0x570200100700;
LAB_1800108ed:
    uVar5 = (uint)uVar7;
LAB_1800108f0:
    FUN_1800019cc(param_2,(ulonglong)plVar10,uVar3,uVar5,iVar15,0);
    goto LAB_180011171;
  }
  if (bVar13 == 0x2e) {
LAB_180010935:
    plVar10 = param_2;
    uVar9 = FUN_18000e74c(param_1,param_2,(longlong)param_3);
    uVar3 = (uint)uVar9;
    goto LAB_180011171;
  }
  if (bVar13 < 0x11) {
    if (bVar13 == 0x10) {
      plVar10 = param_2;
      uVar7 = FUN_18000f850(param_1,param_2,(longlong)param_3);
      uVar3 = (uint)uVar7;
      goto LAB_180011171;
    }
    if (bVar13 < 10) {
      if (bVar13 == 9) {
        cVar14 = '\x01';
LAB_1800107e6:
        plVar10 = param_2;
        uVar3 = FUN_18000d538(param_1,param_2,(longlong)param_3,cVar14);
        goto LAB_180011171;
      }
      if (bVar13 == 1) {
        if (*(short *)(param_3 + 0x11) == 0x429) goto LAB_180010935;
        goto LAB_180010df3;
      }
      if (bVar13 == 2) {
        uVar8 = 0x580200100700;
        uVar7 = 0x580201300700;
      }
      else {
        if (bVar13 == 4) {
          uVar3 = FUN_18000cfc0(param_1,param_2,(longlong)param_3,0x590200100700,0x590201300700,0,
                                '\x01');
          if (-1 < (int)uVar3) {
            pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
            *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
          }
          uVar7 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 5),param_3[9],param_3[0xc],
                                param_3[0xf],'\0','\0');
          if (-1 < (int)uVar3) {
            pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
            *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
          }
          plVar10 = (longlong *)0x580200100700;
          if (param_3[0x10] == 1) {
            plVar10 = (longlong *)0x580201300700;
          }
          iVar15 = (int)(uVar7 >> 0x20);
          goto LAB_1800108ed;
        }
        if (bVar13 != 5) {
          if (bVar13 == 6) {
            uVar7 = 0x530200100700;
          }
          else {
            if (bVar13 != 7) {
              if (bVar13 != 8) {
                return;
              }
              cVar14 = '\0';
              goto LAB_1800107e6;
            }
            uVar7 = 0x520200100700;
          }
          plVar10 = param_2;
          uVar7 = FUN_18000d1a8(param_1,param_2,(longlong)param_3,uVar7);
          uVar3 = (uint)uVar7;
          goto LAB_180011171;
        }
        uVar7 = 0x590201300700;
        uVar8 = 0x590200100700;
      }
    }
    else if (bVar13 == 10) {
      uVar7 = 0x5d0201300700;
      uVar8 = 0x5d0200100700;
    }
    else {
      if (bVar13 != 0xb) {
        if (bVar13 == 0xc) {
          iVar15 = 1;
        }
        else {
          if (bVar13 != 0xd) {
            if (bVar13 == 0xe) {
              uVar7 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),param_3[7],param_3[10],
                                    param_3[0xd],'\x01','\0');
              uVar5 = (uint)uVar7;
              if ((uVar7 & 0x80000000) == 0) {
                pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
                *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
              }
              plVar10 = param_2;
              uVar7 = FUN_18000e8a0(param_1,param_2,uVar5);
              uVar3 = (uint)uVar7;
            }
            else {
              if (bVar13 != 0xf) {
                return;
              }
              uVar7 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),param_3[7],'\x02',
                                    param_3[0xd],'\x01','\0');
              uVar5 = (uint)uVar7;
              if ((uVar7 & 0x80000000) == 0) {
                pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
                *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
              }
              plVar10 = param_2;
              uVar7 = FUN_18000f1f0(param_1,param_2,uVar5);
              uVar3 = (uint)uVar7;
            }
            if ((uVar5 & 0x80000000) != 0) goto LAB_180011171;
            goto LAB_1800109cc;
          }
          iVar15 = 5;
        }
        uVar3 = FUN_18000cfc0(param_1,param_2,(longlong)param_3,0xc20200130700,0xc20201330700,iVar15
                              ,'\0');
        uVar5 = param_1[1] | 0x80000000;
        iVar15 = 0x120;
        goto LAB_1800108f0;
      }
      uVar7 = 0x5f0201300700;
      uVar8 = 0x5f0200100700;
    }
    plVar10 = param_2;
    uVar3 = FUN_18000cfc0(param_1,param_2,(longlong)param_3,uVar8,uVar7,0,'\0');
    goto LAB_180011171;
  }
  if (bVar13 < 0x19) {
    if (bVar13 == 0x18) {
      plVar10 = param_2;
      uVar7 = FUN_18000dd68(param_1,param_2,(longlong)param_3);
      uVar3 = (uint)uVar7;
      goto LAB_180011171;
    }
    if (bVar13 == 0x11) {
      plVar10 = param_2;
      uVar7 = FUN_18000d60c(param_1,param_2,(longlong)param_3);
      uVar3 = (uint)uVar7;
      goto LAB_180011171;
    }
    if (bVar13 == 0x12) {
      uVar7 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 3),param_3[8],param_3[0xb],
                            param_3[0xe],'\x01','\0');
      uVar3 = (uint)uVar7;
      if (-1 < (int)uVar3) {
        pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
        *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
      }
      uVar7 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 5),param_3[9],param_3[0xc],
                            param_3[0xf],'\0','\0');
      uVar5 = (uint)uVar7;
      if ((uVar7 & 0x80000000) == 0) {
        pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
        *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
      }
      iVar15 = (int)(uVar7 >> 0x20);
      FUN_1800019cc(param_2,0x5c0200100700,uVar3,uVar5,iVar15,0);
      uVar8 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),param_3[7],param_3[10],
                            param_3[0xd],'\0','\0');
      FUN_1800019cc(param_2,0x590200100700,uVar3,(int)uVar8,(int)(uVar8 >> 0x20),0);
      plVar10 = (longlong *)0x580200100700;
      FUN_1800019cc(param_2,0x580200100700,uVar3,uVar5,iVar15,0);
      if ((uVar7 & 0x80000000) == 0) {
        pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
        *pbVar1 = *pbVar1 & ~('\x01' << (uVar5 & 7));
      }
      if (-1 < (int)uVar3) {
        pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
        *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
      }
      goto LAB_180011171;
    }
    if (bVar13 == 0x13) {
      uVar7 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),param_3[7],param_3[10],
                            param_3[0xd],'\0','\0');
      uVar5 = (uint)uVar7;
      if ((uVar7 & 0x80000000) == 0) {
        pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
        *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
      }
      uVar8 = FUN_18000ca0c(param_1,param_2,0xffff);
      local_res18._4_4_ = (int)(uVar7 >> 0x20);
      uVar3 = (uint)uVar8;
      FUN_1800019cc(param_2,0x5b0201400700,uVar3,uVar5,local_res18._4_4_,0);
      FUN_1800019cc(param_2,0x5b0200100700,uVar3,uVar3,0,0);
      FUN_1800019cc(param_2,0x5c0200100700,uVar3,uVar5,local_res18._4_4_,0);
      plVar10 = (longlong *)0x570200100700;
      FUN_1800019cc(param_2,0x570200100700,uVar3,param_1[1] | 0x80000000,0x110,0);
      if ((uVar7 & 0x80000000) == 0) {
        pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
        *pbVar1 = *pbVar1 & ~('\x01' << (uVar5 & 7));
      }
      goto LAB_180011171;
    }
    if (bVar13 == 0x14) {
      cVar14 = '\0';
LAB_180010b29:
      cVar12 = '\x01';
    }
    else {
      if (bVar13 == 0x15) {
        cVar14 = '\0';
      }
      else {
        if (bVar13 == 0x16) {
          cVar14 = '\x01';
          goto LAB_180010b29;
        }
        if (bVar13 != 0x17) {
          return;
        }
        cVar14 = '\x01';
      }
      cVar12 = '\0';
    }
    plVar10 = param_2;
    uVar7 = FUN_18000d828(param_1,param_2,(longlong)param_3,cVar12,cVar14);
    uVar3 = (uint)uVar7;
    goto LAB_180011171;
  }
  if (bVar13 == 0x20) {
    uVar7 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),param_3[7],'\x02',param_3[0xd],
                          '\x01','\0');
    uVar3 = (uint)uVar7;
    if ((uVar7 & 0x80000000) == 0) {
      pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
      *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
    }
    uVar8 = FUN_18000f1f0(param_1,param_2,uVar3);
    if ((uVar7 & 0x80000000) == 0) {
      pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
      *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
    }
    uVar5 = (uint)uVar8;
    if (-1 < (int)uVar5) {
      pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
      *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
    }
    uVar7 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 3),param_3[8],param_3[0xb],
                          param_3[0xe],'\0','\0');
    FUN_1800019cc(param_2,0x590200100700,uVar5,(int)uVar7,0,0);
    plVar10 = param_2;
    uVar7 = FUN_18000e8a0(param_1,param_2,uVar5);
    uVar3 = (uint)uVar7;
    if (-1 < (int)uVar5) {
      pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
      *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
    }
    goto LAB_180011171;
  }
  if (bVar13 == 0x21) {
    plVar10 = param_2;
    uVar7 = FUN_18000e26c(param_1,param_2,(longlong)param_3);
    uVar3 = (uint)uVar7;
    goto LAB_180011171;
  }
  if (bVar13 == 0x22) {
    plVar10 = param_2;
    uVar7 = FUN_18000e544(param_1,param_2,(longlong)param_3);
    uVar3 = (uint)uVar7;
    goto LAB_180011171;
  }
  if (bVar13 != 0x23) {
    if (bVar13 == 0x24) {
      plVar10 = param_2;
      uVar7 = FUN_18000e074(param_1,param_2,(longlong)param_3);
      uVar3 = (uint)uVar7;
    }
    else {
      if (bVar13 != 0x25) {
        return;
      }
      plVar10 = param_2;
      uVar7 = FUN_18000fc48(param_1,param_2,(longlong)param_3);
      uVar3 = (uint)uVar7;
    }
    goto LAB_180011171;
  }
LAB_180010df3:
  if ((*param_3 & 0x7f) == 1) {
    bVar13 = param_3[10];
  }
  else {
    bVar13 = 2;
  }
  plVar10 = param_2;
  uVar8 = FUN_18000cafc(param_1,param_2,*(ushort *)(param_3 + 1),param_3[7],bVar13,param_3[0xd],'\0'
                        ,'\0');
  uVar5 = (uint)uVar8;
  uVar7 = uVar8 & 0x80000000;
  if ((uVar8 & 0x80000000) == 0) {
    pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
    *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
    bVar13 = param_3[0x10];
    if ((0xc < (ushort)(*(short *)(param_3 + 0x11) - 0x44dU)) ||
       (((bVar13 != 0 && (bVar13 != 0xf)) || (param_3[0x13] != 0xc3)))) {
      if ((bVar13 != 0) && (bVar13 != 0xf)) goto LAB_180010ee3;
      if (param_3[0x13] != 0xc3) goto LAB_180010efb;
      if (param_1[(uVar8 & 0xff) + 6] != 0xffffffff) goto LAB_180010ee3;
      goto LAB_180010f51;
    }
    uVar3 = 0xffffffff;
    FUN_1800019cc(param_2,0x290200100100,*param_1 | 0x80000000,uVar5,
                  (uint)*(ushort *)(param_3 + 0x11) << 4,0);
    plVar10 = (longlong *)(ulonglong)*(ushort *)(param_3 + 0x11);
    uVar4 = 0;
    do {
      if (param_1[(ulonglong)uVar4 + 6] == (uint)*(ushort *)(param_3 + 0x11)) {
        param_1[(ulonglong)uVar4 + 6] = 0xffffffff;
        break;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
  }
  else {
LAB_180010ee3:
    if ((param_3[0x13] == 0xc3) && ((param_3[0x10] == 0 || (param_3[0x10] == 0xf)))) {
      bVar2 = true;
    }
    else {
LAB_180010efb:
      bVar2 = false;
    }
    uVar11 = 0xffff;
    if (bVar2) {
      uVar11 = *(ushort *)(param_3 + 0x11);
    }
    plVar10 = param_2;
    uVar6 = FUN_18000ca0c(param_1,param_2,uVar11);
    uVar3 = (uint)uVar6;
    if (uVar3 != uVar5) {
      local_res18._4_4_ = (int)(uVar8 >> 0x20);
      plVar10 = (longlong *)0x290200100100;
      FUN_1800019cc(param_2,0x290200100100,uVar3,uVar5,local_res18._4_4_,0);
    }
    uVar8 = uVar6;
    if (uVar7 != 0) goto LAB_180011171;
LAB_180010f51:
    uVar3 = (uint)uVar8;
  }
LAB_1800109cc:
  pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
  *pbVar1 = *pbVar1 & ~('\x01' << (uVar5 & 7));
LAB_180011171:
  if (uVar3 != 0xffffffff) {
    if (((param_3[0x10] == 0) || (param_3[0x10] == 0xf)) && (param_3[0x13] == 0xc3)) {
      uVar7 = 0;
      do {
        if (param_1[uVar7 + 6] == (uint)*(ushort *)(param_3 + 0x11)) {
          param_1[uVar7 + 6] = 0xffffffff;
          break;
        }
        uVar5 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar5;
      } while (uVar5 < 0x10);
      param_1[(ulonglong)(uVar3 & 0xff) + 6] = (uint)*(ushort *)(param_3 + 0x11);
    }
    else {
      if (-1 < (int)uVar3) {
        pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
        *pbVar1 = *pbVar1 | '\x01' << (uVar3 & 7);
      }
      bVar13 = param_3[0x13];
      if (bVar13 == 0xc3) {
        if (param_3[0x10] == 1) {
          uVar7 = FUN_18000cac0(param_1,plVar10,*(ushort *)(param_3 + 0x11));
          FUN_1800019cc(param_2,0x110201300100,(uint)uVar7,uVar3,(int)(uVar7 >> 0x20),0);
        }
        else {
          plVar10 = param_2;
          uVar7 = FUN_18000ca0c(param_1,param_2,0xffff);
          uVar8 = FUN_18000cac0(param_1,plVar10,*(ushort *)(param_3 + 0x11));
          uVar5 = (uint)uVar7;
          FUN_1800019cc(param_2,0x290200100100,uVar5,param_1[1] | 0x80000000,
                        (uint)param_3[0x10] << 4,0);
          FUN_1800019cc(param_2,0x540200100700,uVar3,uVar5,0,0);
          local_res18._4_4_ = (int)(uVar8 >> 0x20);
          FUN_1800019cc(param_2,0x550200100700,uVar5,(int)uVar8,local_res18._4_4_,0);
          FUN_1800019cc(param_2,0x560200100700,uVar3,uVar5,0,0);
          uVar7 = 0;
          do {
            if (param_1[uVar7 + 6] == (uint)*(ushort *)(param_3 + 0x11)) {
              param_1[uVar7 + 6] = 0xffffffff;
              break;
            }
            uVar5 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar5;
          } while (uVar5 < 0x10);
          param_1[(ulonglong)(uVar3 & 0xff) + 6] = (uint)*(ushort *)(param_3 + 0x11);
        }
      }
      else {
        if (((bVar13 == 2) || (bVar13 == 0x57)) || ((bVar13 == 0xac || (bVar13 == 0xe6)))) {
          bVar13 = bVar13 - 2;
          local_res18 = 0x550200100700;
        }
        else {
          local_res18 = 0x540200100700;
          bVar13 = 0xe4;
        }
        uVar7 = FUN_18000cafc(param_1,param_2,0x42a,bVar13,'\0',0,'\0','\0');
        uVar5 = (uint)uVar7;
        if ((uVar7 & 0x80000000) == 0) {
          pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
          *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
        }
        uVar8 = FUN_18000ca0c(param_1,param_2,0xffff);
        iStackX_24 = (int)(uVar7 >> 0x20);
        uVar4 = (uint)uVar8;
        FUN_1800019cc(param_2,0x290200100100,uVar4,uVar5,iStackX_24,0);
        FUN_1800019cc(param_2,local_res18,uVar4,param_1[1] | 0x80000000,(uint)param_3[0x10] << 4,0);
        uVar9 = 0x540200100700;
        FUN_1800019cc(param_2,0x540200100700,uVar3,uVar4,0,0);
        uVar8 = FUN_18000cac0(param_1,uVar9,*(ushort *)(param_3 + 0x11));
        FUN_1800019cc(param_2,0x550200100700,uVar4,(int)uVar8,(int)(uVar8 >> 0x20),0);
        FUN_1800019cc(param_2,0x560200100700,uVar3,uVar4,0,0);
        uVar8 = 0;
        do {
          if (param_1[uVar8 + 6] == (uint)*(ushort *)(param_3 + 0x11)) {
            param_1[uVar8 + 6] = 0xffffffff;
            break;
          }
          uVar4 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar4;
        } while (uVar4 < 0x10);
        param_1[(ulonglong)(uVar3 & 0xff) + 6] = (uint)*(ushort *)(param_3 + 0x11);
        if ((uVar7 & 0x80000000) == 0) {
          pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar5 >> 3) + 0x14);
          *pbVar1 = *pbVar1 & ~('\x01' << (uVar5 & 7));
        }
      }
      if (-1 < (int)uVar3) {
        pbVar1 = (byte *)((longlong)param_1 + ((longlong)(int)uVar3 >> 3) + 0x14);
        *pbVar1 = *pbVar1 & ~('\x01' << (uVar3 & 7));
      }
    }
  }
  return;
}

