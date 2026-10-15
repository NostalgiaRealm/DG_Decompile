/*
 * FUN_10013d80 at 10013d80
 * undefined FUN_10013d80(void)
 * Address ranges: 10013d80-10014137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_10013d80(int param_1,ulonglong param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint extraout_w11;
  code *extraout_w11_00;
  int extraout_w12;
  uint uVar14;
  undefined4 local_80;
  int local_7c;
  uint local_78;
  int local_74;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  uint local_64;
  uint local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  uint local_4c;
  int local_48;
  undefined4 uStack_44;
  
  iVar6 = param_1 + -0x88;
  uVar7 = (uint)param_2;
  FUN_1006e8d0(*(int *)(param_1 + -0x48),param_2,iVar6);
  FUN_100123b8(iVar6,0);
  iVar5 = uVar7 + *(int *)(param_1 + -0x5c) * param_3;
  if (((*(int *)(param_1 + -0x14) == 0) ||
      (iVar10 = (*(code *)PTR_FUN_100ba248)(*(int *)(param_1 + -0x28) + iVar5 * 0x1c + 0xc),
      iVar10 == 0)) && (2 < *(int *)(param_1 + -0x54) - 3U)) {
    uVar1 = *(uint *)(param_6 + 8);
    uVar2 = *(uint *)(param_6 + 0xc);
    iVar10 = *(int *)(param_1 + -0x6c);
    uVar13 = (uint)*(byte *)(iVar10 + 0x100b3720);
    bVar4 = *(byte *)(iVar10 + 0x100b3740);
    uVar3 = *(uint *)(&DAT_100b35b0 + iVar10 * 4);
    uVar11 = FUN_10034090(iVar6,*(uint *)(param_1 + -0x74),param_2 & 0xffffffff);
    uVar12 = uVar11;
    if (uVar3 < 8) {
      if (uVar13 == 0) {
                    /* WARNING: Does not return */
        uVar8 = SoftwareBreakpoint(0xf004,0x10013ee0);
        (*(code *)uVar8)();
      }
      uVar12 = 0;
      if (uVar13 != 0) {
        uVar12 = uVar11 / uVar13;
      }
    }
    uVar11 = extraout_w11;
    if (extraout_w12 != 0) {
      uVar11 = extraout_w11 + 1;
      FUN_10013868(iVar6);
    }
    uVar14 = (uint)bVar4;
    if (uVar11 < uVar2) {
      local_70 = 0;
      local_68 = 0;
      local_60 = uVar2;
      if (uVar1 == uVar12) {
        local_60 = uVar2 + 1;
      }
      uStack_5c = 1;
      local_6c = uVar11;
      local_64 = uVar12;
      if (uVar3 < 8) {
        local_6c = uVar14 * uVar11;
        local_60 = local_60 * uVar14;
        local_64 = uVar13 * uVar12;
      }
      FUN_10013868(iVar6);
      uVar11 = uVar2;
      if (uVar1 == uVar12) {
        uVar11 = uVar2 + 1;
      }
    }
    if (uVar2 == uVar11) {
      local_48 = uVar2 + 1;
      local_58 = 0;
      uStack_44 = 1;
      local_50 = 0;
      local_54 = uVar11;
      local_4c = uVar1;
      if (uVar3 < 8) {
        local_54 = uVar14 * uVar11;
        local_48 = uVar14 * local_48;
        local_4c = uVar13 * uVar1;
      }
      FUN_10013868(iVar6);
    }
    local_80 = 0;
    local_7c = *(int *)(param_6 + 4);
    if (uVar3 < 8) {
      local_7c = uVar14 * local_7c;
    }
    local_78 = *(uint *)(param_1 + -0x74) >> (ulonglong)(uVar7 & 0x1f);
    if (local_78 == 0) {
      local_78 = 1;
    }
    local_74 = *(uint *)(param_6 + 0xc) + 1;
    if (uVar3 < 8) {
      local_74 = uVar14 * local_74;
    }
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11_00)(iVar6,iVar5,&local_80);
    uVar9 = 1;
  }
  else {
    uVar9 = FUN_10013618(iVar6,uVar7,param_3,param_4,param_5,param_6);
  }
  (*(code *)PTR_FUN_100ba0f0)(*(int *)(param_1 + -0x48) + 0x4a0);
  return uVar9;
}

