/*
 * FUN_10036c50 at 10036c50
 * undefined FUN_10036c50(void)
 * Address ranges: 10036c50-10036e6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036c50(int param_1,int param_2,int param_3,uint param_4,uint param_5,int param_6,
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
  iVar6 = param_1 + param_2 * 0x250;
  iVar1 = 0x1b;
  if (param_3 != 0xff) {
    iVar1 = param_3;
  }
  param_7 = param_7 & 3;
  *(int *)(iVar6 + 0x2f64) = iVar1;
  *(float *)(iVar6 + 0x2f54) = (float)param_4;
  uVar8 = 2;
  if (param_7 != 2) {
    uVar8 = 0;
  }
  puVar2 = (uint *)(iVar6 + 0x2f5c);
  *puVar2 = param_5;
  *(float *)(iVar6 + 0x2f58) = (float)param_5;
  *(uint *)(iVar6 + 0x2f7c) = param_7 != 3 | uVar8 | *(uint *)(iVar6 + 0x2f7c) & 0xfffffffc;
  *(uint *)(iVar6 + 0x2f60) = param_4;
  switch(param_7) {
  case 1:
    if (param_5 == param_4) goto switchD_10036d44_caseD_3;
    *puVar2 = param_5 & 0xfffffffe;
    param_4 = param_4 + 1 & 0xfffffffe;
    break;
  case 2:
    if (param_5 == param_4) goto switchD_10036d44_caseD_3;
    bVar7 = (param_5 & 1) == 0;
    if (bVar7 && (bVar7 && param_5 != 0)) {
      *puVar2 = param_5 - 1;
    }
    if ((param_4 & 1) != 0) goto switchD_10036d44_caseD_3;
    param_4 = param_4 + 1;
    break;
  default:
    goto switchD_10036d44_caseD_3;
  }
  *(uint *)(iVar6 + 0x2f60) = param_4;
switchD_10036d44_caseD_3:
  uVar8 = 0;
  do {
    puVar2 = (uint *)(param_6 + 8 + uVar8 * 0x10);
    *(undefined4 *)(iVar6 + 0x2fb0 + uVar8 * 0x20) = *(undefined4 *)(param_6 + uVar8 * 0x10);
    puVar3 = (uint *)(param_6 + 4 + uVar8 * 0x10);
    *(float *)(iVar6 + 0x2fb8 + uVar8 * 0x20) = (float)*puVar3;
    *(float *)(iVar6 + 0x2fbc + uVar8 * 0x20) = (float)*puVar2;
    *(float *)(iVar6 + 12000 + (uVar8 + 7) * 0x20) = (float)*(uint *)(param_6 + 0xc + uVar8 * 0x10);
    uVar4 = *puVar3;
    uVar5 = *puVar2;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    iVar1 = uVar8 * 0x20;
    uVar8 = uVar8 + 1;
    *(float *)(iVar6 + 0x2fb4 + iVar1) = (float)uVar5 * 0.00390625;
  } while (uVar8 < 0xc);
  FUN_10036448(param_1,param_2);
  *(undefined1 *)(param_1 + 0x3650) = 1;
  *(undefined1 *)(param_2 + param_1 + 0x3653) = 1;
  return;
}

