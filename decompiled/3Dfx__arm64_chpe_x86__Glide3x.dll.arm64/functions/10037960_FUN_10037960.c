/*
 * FUN_10037960 at 10037960
 * undefined FUN_10037960(void)
 * Address ranges: 10037960-10037b73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10037960(int param_1,int param_2,undefined4 param_3,uint param_4,uint param_5,int param_6,
                 uint param_7)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  code *extraout_w11;
  uint uVar8;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  iVar6 = param_1 + param_2 * 0x1a0;
  param_7 = param_7 & 3;
  *(undefined4 *)(iVar6 + 0x2da0) = param_3;
  uVar8 = 2;
  if (param_7 != 2) {
    uVar8 = 0;
  }
  *(float *)(iVar6 + 0x2d90) = (float)param_4;
  puVar2 = (uint *)(iVar6 + 0x2d98);
  *puVar2 = param_5;
  *(uint *)(iVar6 + 0x2db8) = param_7 != 3 | uVar8 | *(uint *)(iVar6 + 0x2db8) & 0xfffffffc;
  *(float *)(iVar6 + 0x2d94) = (float)param_5;
  *(uint *)(iVar6 + 0x2d9c) = param_4;
  switch(param_7) {
  case 1:
    if (param_5 == param_4) goto switchD_10037a48_caseD_3;
    *puVar2 = param_5 & 0xfffffffe;
    param_4 = param_4 + 1 & 0xfffffffe;
    break;
  case 2:
    if (param_5 == param_4) goto switchD_10037a48_caseD_3;
    bVar7 = (param_5 & 1) == 0;
    if (bVar7 && (bVar7 && param_5 != 0)) {
      *puVar2 = param_5 - 1;
    }
    if ((param_4 & 1) != 0) goto switchD_10037a48_caseD_3;
    param_4 = param_4 + 1;
    break;
  default:
    goto switchD_10037a48_caseD_3;
  }
  *(uint *)(iVar6 + 0x2d9c) = param_4;
switchD_10037a48_caseD_3:
  uVar8 = 0;
  do {
    puVar2 = (uint *)(param_6 + 8 + uVar8 * 0x10);
    *(undefined4 *)(iVar6 + 0x2d70 + (uVar8 + 4) * 0x20) = *(undefined4 *)(param_6 + uVar8 * 0x10);
    puVar3 = (uint *)(param_6 + 4 + uVar8 * 0x10);
    *(float *)(iVar6 + 0x2df8 + uVar8 * 0x20) = (float)*puVar3;
    *(float *)(iVar6 + 0x2dfc + uVar8 * 0x20) = (float)*puVar2;
    *(float *)(iVar6 + 0x2e00 + uVar8 * 0x20) = (float)*(uint *)(param_6 + 0xc + uVar8 * 0x10);
    uVar4 = *puVar3;
    uVar5 = *puVar2;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    iVar1 = uVar8 * 0x20;
    uVar8 = uVar8 + 1;
    *(float *)(iVar6 + 0x2df4 + iVar1) = (float)uVar5 * 0.00390625;
  } while (uVar8 < 9);
  FUN_10037198(param_1,param_2);
  *(undefined1 *)(param_1 + 0x32d0) = 1;
  *(undefined1 *)(param_2 + param_1 + 0x32d3) = 1;
  return;
}

