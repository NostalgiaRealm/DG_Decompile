/*
 * FUN_100d2e60 at 100d2e60
 * undefined FUN_100d2e60(void)
 * Address ranges: 100d2e60-100d30ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100d2e60(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  uint uVar10;
  int local_60;
  int local_5c;
  int local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48;
  undefined1 local_47;
  
  local_50 = *(undefined4 *)(param_1 + 0xdd4);
  local_4c = *(undefined1 *)(param_1 + 0xdd8);
  local_4b = *(undefined1 *)(param_1 + 0xdda);
  local_4a = *(undefined1 *)(param_1 + 0xdd9);
  local_49 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x959);
  local_48 = *(undefined1 *)(param_1 + 0xddc);
  local_47 = *(undefined1 *)(param_1 + 0x6703);
  iVar5 = FUN_10007680(param_1,param_2,param_3,param_4,&local_50);
  uVar7 = DAT_10170ad0;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (-1 < iVar5) {
    iVar1 = 0;
    if (param_1 != 0) {
      iVar1 = param_1 + 0x66a4;
    }
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar6 = (*extraout_w11)(uVar7,&DAT_1015e3d0);
    local_5c = param_1 + 0x4000;
    local_58 = iVar1;
    for (uVar10 = 0; iVar3 = local_58, iVar1 = local_5c, uVar10 < uVar6; uVar10 = uVar10 + 1) {
      (*pcVar2)();
      local_60 = (*extraout_w11_00)(uVar7,&DAT_1015e3d0,uVar10);
      if (local_60 == 0) {
        return iVar5;
      }
      uVar9 = FUN_10024e68(param_1 + 0x66a8,&local_60);
      if ((uVar9 & 1) == 0) {
        return iVar5;
      }
    }
    uVar6 = 1;
    local_58 = param_1 + 0x66a8;
    for (uVar10 = 0; uVar10 < *(uint *)(param_1 + 0x66ac); uVar10 = uVar10 + 1) {
      uVar7 = (*pcVar2)();
      uVar8 = (*extraout_w11_01)(uVar7,iVar3);
      iVar4 = local_58;
      uVar6 = uVar8 & 0xff & uVar6;
      if (uVar6 == 0) {
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          uVar7 = (*pcVar2)();
          (*extraout_w11_02)(uVar7,iVar3);
        }
        FUN_101322d0(*(undefined4 *)(iVar1 + 0x26a8));
        *(undefined4 *)(iVar1 + 0x26a8) = 0;
        *(undefined4 *)(iVar4 + 8) = 0;
        *(uint *)(param_1 + 0x66ac) = 0;
        return iVar5;
      }
    }
  }
  return iVar5;
}

