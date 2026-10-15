/*
 * FUN_1801b3bf8 at 1801b3bf8
 * undefined FUN_1801b3bf8(void)
 * Address ranges: 1801b3bf8-1801b4087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1801b3bf8(undefined8 param_1,uint *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,int param_6,uint param_7,uint param_8)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_d0 [2];
  uint local_c8;
  undefined8 local_c0;
  uint local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined4 local_98;
  undefined8 local_90;
  
  if (param_7 == 0 || param_6 != 1) {
    bVar4 = false;
    if (param_7 != 0) goto LAB_1801b3c4c;
  }
  else {
    bVar4 = true;
LAB_1801b3c4c:
    if ((*param_2 >> 0x11 & 1) != 0) {
      bVar9 = true;
      goto LAB_1801b3c60;
    }
  }
  bVar9 = false;
LAB_1801b3c60:
  uVar6 = param_7;
  if (!bVar9) {
    uVar6 = 0;
  }
  uVar5 = FUN_1801b35a0(param_1,param_2,param_3,param_4,uVar6);
  uVar6 = uVar5;
  if (uVar5 != param_7) {
    uVar1 = (param_8 ^ 1) << 3;
    uVar2 = uVar1 | 7;
    uVar11 = (uint)(*(char *)((longlong)param_2 + 5) != '\0') |
             (uint)(*(char *)((longlong)param_2 + 6) != '\0') << 1;
    if (uVar11 != 0) {
      uVar6 = FUN_180213760(param_2 + 4,4,1);
    }
    uVar12 = param_2[0x1a];
    local_90 = 0;
    local_a8 = 0;
    local_c0 = 0;
    param_2[(ulonglong)(byte)uVar12 + 0x22] = 5;
    uVar3 = (byte)uVar12 | 0x410700;
    local_98 = 0xe4;
    uVar12 = param_7;
    if (uVar11 != 0 || !bVar4) {
      uVar12 = uVar6;
    }
    local_b0 = 0xe4;
    local_b8 = param_2[0x18];
    uVar10 = uVar1 & 0xff | 7;
    local_d0[0] = uVar10;
    local_c8 = uVar5 | 0x10000000;
    local_a0 = uVar3;
    FUN_180214c88(param_2 + 4,param_1,0xa7,uVar12,local_d0,0x48);
    if (uVar11 - 1 < 3) {
      uVar7 = uVar5;
      if (uVar11 == 3) {
        uVar7 = FUN_180213760(param_2 + 4,4,1);
      }
      local_90 = 0;
      local_a8 = 0;
      uVar8 = 1;
      if (uVar11 == 2) {
        uVar8 = 2;
      }
      local_c0 = CONCAT44(local_c0._4_4_,uVar8);
      local_98 = 0xe4;
      local_b0 = 0xe4;
      local_b8 = param_2[0x18];
      local_d0[0] = uVar10;
      local_c8 = uVar5 | 0x10000000;
      local_a0 = uVar3;
      FUN_180214c88(param_2 + 4,param_1,0xa7,uVar7,local_d0,0x48);
      local_d0[0] = local_d0[0] & 0xffffff00;
      uVar12 = param_7;
      if (uVar11 != 3 || !bVar4) {
        uVar12 = uVar6;
      }
      FUN_1801b2b68(param_1,param_2,uVar12,uVar2,uVar7,uVar6,uVar7,param_4);
      if (uVar11 == 3) {
        uVar8 = FUN_180213760(param_2 + 4,4,1);
        local_98 = 0xe4;
        local_b0 = 0xe4;
        local_b8 = param_2[0x18];
        uVar11 = uVar1 & 0xff | 7;
        local_90 = 0;
        local_c0._0_4_ = 3;
        local_a8 = 0;
        local_d0[0] = uVar11;
        local_c8 = uVar5 | 0x10000000;
        local_a0 = uVar3;
        FUN_180214c88(param_2 + 4,param_1,0xa7,uVar8,local_d0,0x48);
        local_98 = 0xe4;
        local_b0 = 0xe4;
        local_b8 = param_2[0x18];
        local_90 = 0;
        local_a8 = 0;
        local_c0 = CONCAT44(local_c0._4_4_,2);
        local_d0[0] = uVar11;
        local_c8 = uVar5 | 0x10000000;
        local_a0 = uVar3;
        FUN_180214c88(param_2 + 4,param_1,0xa7,uVar5,local_d0,0x48);
        local_d0[0] = local_d0[0] & 0xffffff00;
        FUN_1801b2b68(param_1,param_2,uVar5,uVar2,uVar8,uVar5,uVar8,param_4);
        uVar12 = param_7;
        if (!bVar4) {
          uVar12 = uVar6;
        }
        local_d0[0] = CONCAT31(local_d0[0]._1_3_,0x55);
        FUN_1801b2b68(param_1,param_2,uVar12,uVar2,uVar5,uVar6,uVar5,param_4);
        if (uVar12 == uVar6) {
          uVar11 = param_7;
          if (param_7 == 0) {
            uVar11 = uVar6;
          }
          FUN_1801b2908(param_1,param_2,uVar11,uVar2,uVar6,1,param_6);
        }
        FUN_180213800(param_2 + 4,uVar8);
      }
      else if (uVar12 == uVar6) {
        uVar11 = param_7;
        if (param_7 == 0) {
          uVar11 = uVar6;
        }
        FUN_1801b2908(param_1,param_2,uVar11,uVar2,uVar6,1,param_6);
      }
      if (uVar7 != uVar5) {
        FUN_180213800(param_2 + 4,uVar7);
      }
    }
    else if (uVar11 == 0 && uVar12 == uVar6) {
      uVar11 = param_7;
      if (param_7 == 0) {
        uVar11 = uVar6;
      }
      FUN_1801b2908(param_1,param_2,uVar11,uVar2,uVar6,1,param_6);
    }
    if (uVar6 != uVar5) {
      FUN_180213800(param_2 + 4,uVar5);
    }
    if (uVar12 != uVar6) {
      FUN_180213800(param_2 + 4,uVar6);
      uVar6 = param_7;
    }
  }
  FUN_180213800(param_2 + 4,param_4);
  return uVar6;
}

