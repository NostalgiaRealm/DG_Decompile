/*
 * FUN_10013618 at 10013618
 * undefined FUN_10013618(void)
 * Address ranges: 10013618-10013867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10013618(int param_1,uint param_2,int param_3,int param_4,int param_5,int *param_6)

{
  uint *puVar1;
  byte bVar2;
  byte bVar3;
  uint *puVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 extraout_x1;
  uint uVar10;
  int iVar11;
  int extraout_w11;
  code *extraout_w11_00;
  uint uVar12;
  uint uVar13;
  int local_80;
  uint *local_7c;
  uint local_78;
  int iStack_74;
  uint local_70;
  uint uStack_6c;
  uint *local_68;
  uint *local_64;
  uint *local_60;
  undefined4 local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  
  local_80 = 0;
  local_7c = (uint *)0x0;
  iVar7 = FUN_10012878(param_1,param_2,param_3,2,1,&local_80,&local_7c);
  if (iVar7 == 0) {
    iVar7 = *(int *)(param_1 + 0x1c);
    bVar2 = *(byte *)(iVar7 + 0x100b3740);
    uVar12 = *(uint *)(&DAT_100b35b0 + iVar7 * 4);
    if (uVar12 == 0x18) {
      uVar12 = 0x20;
    }
    uVar10 = uVar12 >> 3;
    if (uVar12 < 8) {
      uVar10 = *(uint *)(&DAT_100b36b0 + iVar7 * 4);
    }
    local_64 = (uint *)(param_1 + 0x14);
    uVar8 = FUN_10034090(param_1,*local_64,param_2,uVar10);
    puVar4 = local_7c;
    iVar7 = local_80;
    uVar9 = uVar8;
    if (uVar12 < 8) {
      bVar3 = *(byte *)(extraout_w11 + 0x100b3720);
      if (bVar3 == 0) {
                    /* WARNING: Does not return */
        uVar5 = SoftwareBreakpoint(0xf004,0x100136fc);
        (*(code *)uVar5)();
      }
      uVar9 = 0;
      if (bVar3 != 0) {
        uVar9 = uVar8 / bVar3;
      }
    }
    local_68 = (uint *)(param_6 + 1);
    puVar1 = (uint *)(param_6 + 3);
    uVar8 = *local_68;
    uVar13 = (uint)bVar2;
    local_60 = puVar1;
    if (uVar8 <= *puVar1) {
      iVar11 = *param_6;
      local_7c = (uint *)(param_6 + 2);
      local_70 = (uint)bVar2;
      bVar6 = uVar8 == *puVar1;
      local_80 = param_1;
      local_78 = param_2;
      iStack_74 = param_3;
      uStack_6c = uVar12;
      do {
        if (bVar6) {
          uVar9 = *local_7c;
        }
        FUN_100917a0(iVar7 + uVar8 * (int)puVar4 + uVar10 * iVar11,
                     param_4 + uVar8 * param_5 + uVar10 * iVar11,(uVar9 - iVar11) * uVar10);
        uVar8 = uVar8 + 1;
        iVar11 = 0;
        bVar6 = uVar8 == *puVar1;
        param_1 = local_80;
        param_2 = local_78;
        param_3 = iStack_74;
        uVar12 = uStack_6c;
        uVar13 = local_70;
      } while (uVar8 <= *puVar1);
    }
    uVar5 = FUN_10012998(param_1,param_2,param_3);
    local_58 = 0;
    local_54 = *local_68;
    if (uVar12 < 8) {
      local_54 = local_54 * uVar13;
    }
    local_50 = *local_64 >> (ulonglong)(param_2 & 0x1f);
    if (local_50 == 0) {
      local_50 = 1;
    }
    local_4c = *local_60 + 1;
    if (uVar12 < 8) {
      local_4c = uVar13 + *local_60 * uVar13;
    }
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
              (uVar5,param_2 + *(int *)(param_1 + 0x2c) * param_3);
    (*extraout_w11_00)(param_1,extraout_x1,&local_58);
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

