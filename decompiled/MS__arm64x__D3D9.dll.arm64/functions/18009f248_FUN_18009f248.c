/*
 * FUN_18009f248 at 18009f248
 * undefined FUN_18009f248(void)
 * Address ranges: 18009f248-18009f763
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009f248(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 in_stack_ffffffffffffff70;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff70 >> 0x20);
  uVar10 = *param_2;
  if ((uVar10 & 0x70) == 0) {
    iVar11 = 2;
  }
  else if (((uVar10 & 0x70) == 0x10) || ((uVar10 & 0x70) != 0x20)) {
    iVar11 = 0;
  }
  else {
    iVar11 = 1;
  }
  if (((uVar10 >> 0x11 & 1) == 0) || (bVar4 = true, (uVar10 & 0x180) != 0)) {
    bVar4 = false;
  }
  if (((uVar10 & 0xa000) == 0) && ((((uVar10 & 0x70) != 0 || (bVar4)) && ((uVar10 >> 9 & 1) == 0))))
  {
    lVar2 = 0;
    if (iVar11 != 2) {
      lVar2 = 2;
    }
    lVar2 = lVar2 * 8;
    lVar3 = 0x81;
    if (iVar11 != 2) {
      lVar3 = 0x83;
    }
    *(byte *)((longlong)param_2 + lVar3) =
         (&DAT_180231424)[lVar2] | *(byte *)((longlong)param_2 + lVar3);
    uVar10 = (uint)(byte)(&DAT_180231426)[lVar2] | (uint)(byte)(&DAT_180231427)[lVar2] << 0x14 |
             0x10200;
  }
  else {
    uVar10 = 0;
  }
  uVar5 = *param_2;
  if (((uVar5 >> 0x11 & 1) == 0) || (bVar4 = true, (uVar5 & 0x180) != 0)) {
    bVar4 = false;
  }
  if ((uVar5 & 0xa000) == 0) {
    if ((uVar5 & 0x70) == 0) {
      if (!bVar4) goto LAB_18009f3c8;
LAB_18009f354:
      iVar6 = 2;
    }
    else {
LAB_18009f3fc:
      if (((uVar5 & 0x70) == 0x10) || ((uVar5 & 0x70) != 0x20)) goto LAB_18009f414;
      iVar6 = 1;
    }
  }
  else {
LAB_18009f3c8:
    uVar1 = uVar5 & 0xf;
    if ((uVar1 < 8) && ((0xdfU >> (ulonglong)uVar1 & 1) != 0)) {
      if ((uVar5 >> 0xd & 1) == 0) {
        if ((uVar5 >> 0xf & 1) != 0) goto LAB_18009f354;
LAB_18009f3f4:
        if ((uVar5 & 0x70) != 0) goto LAB_18009f3fc;
        goto LAB_18009f354;
      }
    }
    else if (uVar1 == 5) goto LAB_18009f3f4;
LAB_18009f414:
    iVar6 = 0;
  }
  uVar1 = uVar5 & 0xf;
  if ((uVar1 < 3) || (uVar1 - 3 < 2)) {
LAB_18009f41c:
    uVar5 = FUN_18009eb80(param_1,param_2,uVar10,iVar6,uVar5 >> 0xe & 1);
  }
  else {
    if (1 < uVar1 - 6 && uVar1 == 5) {
      if (((uVar5 & 0xc00) != 0) || (bVar4 = false, (uVar5 >> 7 & 1) != (uVar5 >> 8 & 1))) {
        bVar4 = true;
      }
      if (bVar4) goto LAB_18009f41c;
    }
    uVar5 = FUN_18009efb8(param_1,param_2,uVar10,iVar6,uVar5 >> 0xe & 1);
  }
  if (uVar5 != 0) {
    if ((*param_2 >> 0xd & 1) != 0) {
      uVar7 = CONCAT44(uVar8,0xff);
      FUN_1800f5730(param_2 + 4,param_1,0x38,uVar5,7,uVar5,0xa4,uVar5,uVar7,0);
      uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    }
    if (((*param_2 >> 0xe & 1) != 0) && ((*param_2 & 0x70) != 0)) {
      if (iVar6 == 2) {
        uVar7 = 0xff;
      }
      else {
        uVar7 = 0x3f800000;
      }
      uVar8 = 0;
      FUN_1800f5730(param_2 + 4,param_1,0x36,uVar10,8,param_2[0x18],0xe4,uVar7,0);
    }
    if ((*param_2 >> 0xf & 1) != 0) {
      if (iVar6 != 2) {
        FUN_18009b2f0(param_1,param_2,uVar5,0xf,uVar5,iVar6,2);
        iVar6 = 2;
      }
      FUN_1800f5730(param_2 + 4,param_1,1,uVar5,0xf,uVar5,0xe4,param_2[0x14],CONCAT44(uVar8,0xe4),
                    0xa0,0);
    }
    if ((uVar5 & 0x3f00) == 0 && (*param_2 & 0x70) == 0) {
      if ((*param_2 >> 9 & 1) == 0) {
        lVar2 = 0;
        if (iVar11 != 2) {
          lVar2 = 2;
        }
        lVar2 = lVar2 * 8;
        lVar3 = 0x81;
        if (iVar11 != 2) {
          lVar3 = 0x83;
        }
        *(byte *)((longlong)param_2 + lVar3) =
             (&DAT_180231424)[lVar2] | *(byte *)((longlong)param_2 + lVar3);
        uVar10 = (uint)(byte)(&DAT_180231426)[lVar2] | (uint)(byte)(&DAT_180231427)[lVar2] << 0x14 |
                 0x10200;
      }
      else {
        uVar10 = 0;
      }
      iVar6 = FUN_18009bab0(param_1,param_2,uVar5,iVar6,uVar10);
    }
    if (uVar10 == 0) {
      lVar2 = 0;
      if (iVar11 != 2) {
        lVar2 = 2;
      }
      lVar2 = lVar2 * 8;
      lVar3 = 0x81;
      if (iVar11 != 2) {
        lVar3 = 0x83;
      }
      uVar1 = *param_2 & 0x70;
      if (iVar6 == iVar11) {
        *(byte *)((longlong)param_2 + lVar3) =
             (&DAT_180231424)[lVar2] | *(byte *)((longlong)param_2 + lVar3);
        uVar8 = 0;
        if (uVar1 != 0) {
          uVar8 = 0xe4;
        }
        uVar9 = 1;
        if (uVar1 != 0) {
          uVar9 = 0xf;
        }
        FUN_1800f5730(param_2 + 4,param_1,0x36,
                      (uint)(byte)(&DAT_180231426)[lVar2] |
                      (uint)(byte)(&DAT_180231427)[lVar2] << 0x14 | 0x10200,uVar9,uVar5,uVar8,0);
        if ((*param_2 >> 9 & 1) == 0) goto LAB_18009f730;
      }
      else {
        if ((*param_2 >> 9 & 1) == 0) {
          *(byte *)((longlong)param_2 + lVar3) =
               (&DAT_180231424)[lVar2] | *(byte *)((longlong)param_2 + lVar3);
          FUN_18009b2f0(param_1,param_2,
                        (uint)(byte)(&DAT_180231426)[lVar2] |
                        (uint)(byte)(&DAT_180231427)[lVar2] << 0x14 | 0x10200,0xf,uVar5,iVar6,iVar11
                       );
          goto LAB_18009f730;
        }
        FUN_18009b2f0(param_1,param_2,uVar5,0xf,uVar5,iVar6,iVar11);
        *(byte *)((longlong)param_2 + lVar3) =
             (&DAT_180231424)[lVar2] | *(byte *)((longlong)param_2 + lVar3);
        uVar8 = 0;
        if (uVar1 != 0) {
          uVar8 = 0xe4;
        }
        uVar9 = 1;
        if (uVar1 != 0) {
          uVar9 = 0xf;
        }
        FUN_1800f5730(param_2 + 4,param_1,0x36,
                      (uint)(byte)(&DAT_180231426)[lVar2] |
                      (uint)(byte)(&DAT_180231427)[lVar2] << 0x14 | 0x10200,uVar9,uVar5,uVar8,0);
      }
      lVar2 = 1;
      if (iVar11 != 2) {
        lVar2 = 3;
      }
      lVar2 = lVar2 * 8;
      lVar3 = 0x82;
      if (iVar11 != 2) {
        lVar3 = 0x84;
      }
      *(byte *)((longlong)param_2 + lVar3) =
           (&DAT_180231424)[lVar2] | *(byte *)((longlong)param_2 + lVar3);
      FUN_1800f5730(param_2 + 4,param_1,0x36,
                    (uint)(byte)(&DAT_180231426)[lVar2] |
                    (uint)(byte)(&DAT_180231427)[lVar2] << 0x14 | 0x10200,uVar9,uVar5,uVar8,0);
    }
  }
LAB_18009f730:
  if (uVar5 != uVar10) {
    FUN_1800f4370(param_2 + 4,uVar5);
  }
  return;
}

