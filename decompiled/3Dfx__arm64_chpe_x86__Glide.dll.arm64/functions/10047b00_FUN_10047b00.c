/*
 * FUN_10047b00 at 10047b00
 * undefined FUN_10047b00(void)
 * Address ranges: 10047b00-10047d13
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10047b00(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,int param_6,
                 uint param_7)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  code *extraout_w11;
  uint uVar8;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  param_7 = param_7 & 3;
  iVar3 = param_1 + param_2 * 0x180;
  *(undefined4 *)(iVar3 + 0x2d00) = param_3;
  uVar8 = 2;
  if (param_7 != 2) {
    uVar8 = 0;
  }
  *(float *)(iVar3 + 0x2cf0) = (float)param_4;
  puVar2 = (uint *)(iVar3 + 0x2cf8);
  *puVar2 = param_5;
  *(uint *)(iVar3 + 0x2d18) = param_7 != 3 | uVar8 | *(uint *)(iVar3 + 0x2d18) & 0xfffffffc;
  *(float *)(iVar3 + 0x2cf4) = (float)param_5;
  *(uint *)(iVar3 + 0x2cfc) = param_4;
  switch(param_7) {
  case 1:
    if (param_5 == param_4) goto switchD_10047be8_caseD_3;
    *puVar2 = param_5 & 0xfffffffe;
    param_4 = param_4 + 1 & 0xfffffffe;
    break;
  case 2:
    if (param_5 == param_4) goto switchD_10047be8_caseD_3;
    bVar7 = (param_5 & 1) == 0;
    if (bVar7 && (bVar7 && param_5 != 0)) {
      *puVar2 = param_5 - 1;
    }
    if ((param_4 & 1) != 0) goto switchD_10047be8_caseD_3;
    param_4 = param_4 + 1;
    break;
  default:
    goto switchD_10047be8_caseD_3;
  }
  *(uint *)(iVar3 + 0x2cfc) = param_4;
switchD_10047be8_caseD_3:
  uVar8 = 0;
  do {
    puVar2 = (uint *)(param_6 + 8 + uVar8 * 0x10);
    *(undefined4 *)(iVar3 + 0x2cd0 + (uVar8 + 3) * 0x20) = *(undefined4 *)(param_6 + uVar8 * 0x10);
    puVar4 = (uint *)(param_6 + 4 + uVar8 * 0x10);
    *(float *)(iVar3 + 0x2d38 + uVar8 * 0x20) = (float)*puVar4;
    *(float *)(iVar3 + 0x2d3c + uVar8 * 0x20) = (float)*puVar2;
    *(float *)(iVar3 + 0x2d40 + uVar8 * 0x20) = (float)*(uint *)(param_6 + 0xc + uVar8 * 0x10);
    uVar5 = *puVar4;
    uVar6 = *puVar2;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    iVar1 = uVar8 * 0x20;
    uVar8 = uVar8 + 1;
    *(float *)(iVar3 + 0x2d34 + iVar1) = (float)uVar6 * 0.00390625;
  } while (uVar8 < 9);
  FUN_10047a98(param_1,param_2);
  *(undefined1 *)(param_1 + 0x3150) = 1;
  *(undefined1 *)(param_2 + param_1 + 0x3153) = 1;
  return;
}

