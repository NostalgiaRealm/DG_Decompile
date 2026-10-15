/*
 * FUN_1007bb60 at 1007bb60
 * undefined FUN_1007bb60(void)
 * Address ranges: 1007bb60-1007bcef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007bb60(undefined4 *param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar9;
  
  puVar1 = param_1 + 4;
  *param_1 = &PTR_FUN_100b2fa4;
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar2 = param_1 + 3;
  if (*puVar1 != 0) {
    iVar4 = param_1[6];
    iVar3 = *piVar2 + iVar4 * 0x20;
    if (*(int *)(iVar3 + 0x14) != 0) {
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar7 = (*extraout_w11)(uVar6);
      if (uVar7 < *(ulonglong *)(iVar3 + 0x18)) {
        puVar8 = (undefined8 *)(*piVar2 + iVar4 * 0x20 + 0x18);
        uVar6 = (*pcVar5)();
        (*extraout_w11_00)(uVar6,*puVar8,param_1[0xb]);
        (*(code *)PTR_FUN_100ba168)(param_1[0xb],0xffffffff);
      }
    }
    uVar9 = 0;
    if (*puVar1 != 0) {
      do {
        uVar6 = (*pcVar5)();
        (*extraout_w11_01)(uVar6);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *puVar1);
    }
    FUN_100914d0(*piVar2);
    piVar2[0] = 0;
    piVar2[1] = 0;
    param_1[5] = 0;
    (*(code *)PTR_FUN_100ba06c)(param_1[0xb]);
    param_1[0xb] = 0;
  }
  FUN_100914d0(*piVar2);
  return;
}

