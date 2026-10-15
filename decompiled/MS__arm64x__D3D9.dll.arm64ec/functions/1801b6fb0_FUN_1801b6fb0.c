/*
 * FUN_1801b6fb0 at 1801b6fb0
 * undefined FUN_1801b6fb0(void)
 * Address ranges: 1801b6fb0-1801b75cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801b6fb0(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_a0 [2];
  uint local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_50;
  
  uVar8 = *param_2;
  if ((uVar8 & 0x70) == 0) {
    iVar9 = 2;
  }
  else if (((uVar8 & 0x70) == 0x10) || ((uVar8 & 0x70) != 0x20)) {
    iVar9 = 0;
  }
  else {
    iVar9 = 1;
  }
  if (((uVar8 >> 0x11 & 1) == 0) || (bVar4 = true, (uVar8 & 0x180) != 0)) {
    bVar4 = false;
  }
  if (((uVar8 & 0xa000) == 0) && ((((uVar8 & 0x70) != 0 || (bVar4)) && ((uVar8 >> 9 & 1) == 0)))) {
    lVar2 = 0;
    if (iVar9 != 2) {
      lVar2 = 2;
    }
    lVar2 = lVar2 * 8;
    lVar3 = 0x81;
    if (iVar9 != 2) {
      lVar3 = 0x83;
    }
    *(byte *)((longlong)param_2 + lVar3) =
         (&DAT_18022d704)[lVar2] | *(byte *)((longlong)param_2 + lVar3);
    uVar8 = (uint)(byte)(&DAT_18022d706)[lVar2] | (uint)(byte)(&DAT_18022d707)[lVar2] << 0x14 |
            0x10200;
  }
  else {
    uVar8 = 0;
  }
  uVar5 = *param_2;
  if (((uVar5 >> 0x11 & 1) == 0) || (bVar4 = true, (uVar5 & 0x180) != 0)) {
    bVar4 = false;
  }
  if ((uVar5 & 0xa000) == 0) {
    if ((uVar5 & 0x70) == 0) {
      if (!bVar4) goto LAB_1801b712c;
LAB_1801b70b8:
      local_50 = 2;
    }
    else {
LAB_1801b7160:
      if (((uVar5 & 0x70) == 0x10) || ((uVar5 & 0x70) != 0x20)) goto LAB_1801b7178;
      local_50 = 1;
    }
  }
  else {
LAB_1801b712c:
    uVar1 = uVar5 & 0xf;
    if ((uVar1 < 8) && ((0xdfU >> (ulonglong)uVar1 & 1) != 0)) {
      if ((uVar5 >> 0xd & 1) == 0) {
        if ((uVar5 >> 0xf & 1) != 0) goto LAB_1801b70b8;
LAB_1801b7158:
        if ((uVar5 & 0x70) != 0) goto LAB_1801b7160;
        goto LAB_1801b70b8;
      }
    }
    else if (uVar1 == 5) goto LAB_1801b7158;
LAB_1801b7178:
    local_50 = 0;
  }
  uVar1 = uVar5 & 0xf;
  if ((uVar1 < 3) || (uVar1 - 3 < 2)) {
LAB_1801b7180:
    uVar5 = FUN_1801b67e8(param_1,param_2,uVar8,local_50,uVar5 >> 0xe & 1);
  }
  else {
    if (1 < uVar1 - 6 && uVar1 == 5) {
      if (((uVar5 & 0xc00) != 0) || (bVar4 = false, (uVar5 >> 7 & 1) != (uVar5 >> 8 & 1))) {
        bVar4 = true;
      }
      if (bVar4) goto LAB_1801b7180;
    }
    uVar5 = FUN_1801b6cb8(param_1,param_2,uVar8,local_50,uVar5 >> 0xe & 1);
  }
  if (uVar5 != 0) {
    if ((*param_2 >> 0xd & 1) != 0) {
      local_78 = 0;
      local_80 = CONCAT44(local_80._4_4_,0xff);
      local_90 = 0xa4;
      local_a0[0] = 7;
      local_88 = CONCAT44(local_88._4_4_,uVar5);
      local_98 = uVar5;
      FUN_180214c88(param_2 + 4,param_1,0x38,uVar5,local_a0,0x30);
    }
    if (((*param_2 >> 0xe & 1) != 0) && ((*param_2 & 0x70) != 0)) {
      if (local_50 == 2) {
        uVar6 = 0xff;
      }
      else {
        uVar6 = 0x3f800000;
      }
      local_88 = CONCAT44(local_88._4_4_,uVar6);
      local_98 = param_2[0x18];
      local_80 = 0;
      local_90 = 0xe4;
      local_a0[0] = 8;
      FUN_180214c88(param_2 + 4,param_1,0x36,uVar8,local_a0,0x28);
    }
    if ((*param_2 >> 0xf & 1) != 0) {
      if (local_50 != 2) {
        FUN_1801b2908(param_1,param_2,uVar5,0xf,uVar5,local_50,2);
        local_50 = 2;
      }
      local_78 = 0xa0;
      uStack_70 = 0;
      local_80 = CONCAT44(local_80._4_4_,0xe4);
      local_90 = 0xe4;
      local_88 = CONCAT44(local_88._4_4_,param_2[0x14]);
      local_a0[0] = 0xf;
      local_98 = uVar5;
      FUN_180214c88(param_2 + 4,param_1,1,uVar5,local_a0,0x38);
    }
    if ((uVar5 & 0x3f00) == 0 && (*param_2 & 0x70) == 0) {
      if ((*param_2 >> 9 & 1) == 0) {
        lVar2 = 0;
        if (iVar9 != 2) {
          lVar2 = 2;
        }
        lVar2 = lVar2 * 8;
        lVar3 = 0x81;
        if (iVar9 != 2) {
          lVar3 = 0x83;
        }
        *(byte *)((longlong)param_2 + lVar3) =
             (&DAT_18022d704)[lVar2] | *(byte *)((longlong)param_2 + lVar3);
        uVar8 = (uint)(byte)(&DAT_18022d706)[lVar2] | (uint)(byte)(&DAT_18022d707)[lVar2] << 0x14 |
                0x10200;
      }
      else {
        uVar8 = 0;
      }
      local_50 = FUN_1801b3210(param_1,param_2,uVar5,local_50,uVar8);
    }
    if (uVar8 == 0) {
      uVar1 = *param_2 & 0x70;
      lVar2 = 0;
      if (iVar9 != 2) {
        lVar2 = 2;
      }
      lVar2 = lVar2 * 8;
      lVar3 = 0x81;
      if (iVar9 != 2) {
        lVar3 = 0x83;
      }
      if (local_50 == iVar9) {
        local_88 = 0;
        *(byte *)((longlong)param_2 + lVar3) =
             (&DAT_18022d704)[lVar2] | *(byte *)((longlong)param_2 + lVar3);
        uVar6 = 0;
        if (uVar1 != 0) {
          uVar6 = 0xe4;
        }
        uVar7 = 1;
        if (uVar1 != 0) {
          uVar7 = 0xf;
        }
        local_a0[0] = uVar7;
        local_98 = uVar5;
        local_90 = uVar6;
        FUN_180214c88(param_2 + 4,param_1,0x36,
                      (uint)(byte)(&DAT_18022d706)[lVar2] |
                      (uint)(byte)(&DAT_18022d707)[lVar2] << 0x14 | 0x10200,local_a0,0x20);
        if ((*param_2 >> 9 & 1) != 0) {
          local_88 = 0;
          lVar2 = 1;
          if (iVar9 != 2) {
            lVar2 = 3;
          }
          lVar2 = lVar2 * 8;
          lVar3 = 0x82;
          if (iVar9 != 2) {
            lVar3 = 0x84;
          }
          *(byte *)((longlong)param_2 + lVar3) =
               (&DAT_18022d704)[lVar2] | *(byte *)((longlong)param_2 + lVar3);
          local_a0[0] = uVar7;
          local_98 = uVar5;
          local_90 = uVar6;
          FUN_180214c88(param_2 + 4,param_1,0x36,
                        (uint)(byte)(&DAT_18022d706)[lVar2] |
                        (uint)(byte)(&DAT_18022d707)[lVar2] << 0x14 | 0x10200,local_a0,0x20);
        }
      }
      else if ((*param_2 >> 9 & 1) == 0) {
        *(byte *)((longlong)param_2 + lVar3) =
             (&DAT_18022d704)[lVar2] | *(byte *)((longlong)param_2 + lVar3);
        FUN_1801b2908(param_1,param_2,
                      (uint)(byte)(&DAT_18022d706)[lVar2] |
                      (uint)(byte)(&DAT_18022d707)[lVar2] << 0x14 | 0x10200,0xf,uVar5,local_50,iVar9
                     );
      }
      else {
        FUN_1801b2908(param_1,param_2,uVar5,0xf,uVar5,local_50,iVar9);
        local_88 = 0;
        *(byte *)((longlong)param_2 + lVar3) =
             (&DAT_18022d704)[lVar2] | *(byte *)((longlong)param_2 + lVar3);
        uVar6 = 0;
        if (uVar1 != 0) {
          uVar6 = 0xe4;
        }
        uVar7 = 1;
        if (uVar1 != 0) {
          uVar7 = 0xf;
        }
        local_a0[0] = uVar7;
        local_98 = uVar5;
        local_90 = uVar6;
        FUN_180214c88(param_2 + 4,param_1,0x36,
                      (uint)(byte)(&DAT_18022d706)[lVar2] |
                      (uint)(byte)(&DAT_18022d707)[lVar2] << 0x14 | 0x10200,local_a0,0x20);
        local_88 = 0;
        lVar2 = 1;
        if (iVar9 != 2) {
          lVar2 = 3;
        }
        lVar2 = lVar2 * 8;
        lVar3 = 0x82;
        if (iVar9 != 2) {
          lVar3 = 0x84;
        }
        *(byte *)((longlong)param_2 + lVar3) =
             (&DAT_18022d704)[lVar2] | *(byte *)((longlong)param_2 + lVar3);
        local_a0[0] = uVar7;
        local_98 = uVar5;
        local_90 = uVar6;
        FUN_180214c88(param_2 + 4,param_1,0x36,
                      (uint)(byte)(&DAT_18022d706)[lVar2] |
                      (uint)(byte)(&DAT_18022d707)[lVar2] << 0x14 | 0x10200,local_a0,0x20);
      }
    }
  }
  if (uVar5 != uVar8) {
    FUN_180213800(param_2 + 4,uVar5);
  }
  return;
}

