/*
 * FUN_10031a10 at 10031a10
 * undefined FUN_10031a10(void)
 * Address ranges: 10031a10-10031ba7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10031a10(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  
  *param_1 = &PTR_FUN_1009c874;
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar2 = param_1[3];
  puVar1 = (uint *)(iVar2 + 8);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar8 = 0;
    iVar4 = param_1[1] + param_1[2] * 0x16c0;
    if (uVar3 == 0) {
      piVar10 = (int *)&DAT_00000008;
      piVar9 = (int *)0x34;
      goto LAB_10031ad8;
    }
    do {
      iVar5 = *(int *)(iVar2 + 4) + uVar8 * 0x68;
      piVar10 = (int *)(iVar5 + 0x10);
      piVar9 = (int *)(iVar5 + 0x3c);
LAB_10031ad8:
      if (*piVar10 != 0) {
        FUN_10075758(iVar4 + 0x1d00,*piVar10);
        uVar7 = (*pcVar6)();
        (*extraout_w11)(uVar7);
      }
      if (*piVar9 != 0) {
        FUN_10075758(iVar4 + 0x1d00,*piVar9);
        uVar7 = (*pcVar6)();
        (*extraout_w11_00)(uVar7);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *puVar1);
  }
  FUN_10081dc0(param_1[0x18]);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *param_1 = &PTR_FUN_1009c778;
  param_1[4] = &PTR_FUN_1009c934;
  return;
}

