/*
 * FUN_100b15b0 at 100b15b0
 * undefined FUN_100b15b0(void)
 * Address ranges: 100b15b0-100b1863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b15b0(int param_1,undefined4 *param_2)

{
  uint *puVar1;
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
  undefined4 local_258;
  undefined1 local_254;
  undefined1 local_253;
  undefined1 local_252;
  undefined1 local_251;
  undefined1 local_250;
  undefined1 local_24f;
  int local_248;
  int local_244;
  undefined1 auStack_240 [512];
  
  local_258 = *(undefined4 *)(param_1 + 0xb10);
  local_254 = *(undefined1 *)(param_1 + 0xb14);
  local_253 = *(undefined1 *)(param_1 + 0xb16);
  local_252 = *(undefined1 *)(param_1 + 0xb15);
  local_251 = *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x959);
  local_24f = 0;
  local_250 = *(undefined1 *)(param_1 + 0xb18);
  iVar4 = FUN_10006a10(param_1,*param_2,1,param_2,&local_258);
  if (*(int *)(param_1 + 0xb08) != 0) {
    iVar5 = (*(code *)PTR_FUN_101341b4)(*(int *)(param_1 + 0xb08),auStack_240,0x1ff);
    auStack_240[iVar5] = 0;
    if ((0 < iVar5) && (iVar5 = FUN_100ff030(auStack_240,s_Indiana_1012d0d8), iVar5 != 0)) {
      puVar1 = (uint *)(*(int *)(param_1 + 0x58f4) + 0x3c);
      *puVar1 = *puVar1 | 0x100;
    }
  }
  uVar7 = DAT_1013ceec;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (-1 < iVar4) {
    iVar5 = 0;
    if (param_1 != 0) {
      iVar5 = param_1 + 0x58d0;
    }
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar6 = (*extraout_w11)(uVar7,&DAT_10129040);
    local_244 = param_1 + 0x4000;
    for (uVar10 = 0; iVar3 = local_244, uVar10 < uVar6; uVar10 = uVar10 + 1) {
      (*pcVar2)();
      local_248 = (*extraout_w11_00)(uVar7,&DAT_10129040,uVar10);
      if (local_248 == 0) {
        return iVar4;
      }
      uVar9 = FUN_10006490(param_1 + 0x58d4,&local_248);
      if ((uVar9 & 1) == 0) {
        return iVar4;
      }
    }
    uVar6 = 1;
    for (uVar10 = 0; uVar10 < *(uint *)(param_1 + 0x58d8); uVar10 = uVar10 + 1) {
      uVar7 = (*pcVar2)();
      uVar8 = (*extraout_w11_01)(uVar7,iVar5);
      uVar6 = uVar8 & 0xff & uVar6;
      if (uVar6 == 0) {
        for (; uVar10 != 0; uVar10 = uVar10 - 1) {
          uVar7 = (*pcVar2)();
          (*extraout_w11_02)(uVar7,iVar5);
        }
        FUN_100fed00(*(undefined4 *)(iVar3 + 0x18d4));
        *(undefined4 *)(iVar3 + 0x18d4) = 0;
        *(undefined4 *)(param_1 + 0x58dc) = 0;
        *(uint *)(param_1 + 0x58d8) = 0;
        return iVar4;
      }
    }
  }
  return iVar4;
}

