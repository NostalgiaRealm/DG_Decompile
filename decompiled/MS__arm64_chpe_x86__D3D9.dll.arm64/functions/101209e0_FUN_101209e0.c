/*
 * FUN_101209e0 at 101209e0
 * undefined FUN_101209e0(void)
 * Address ranges: 101209e0-10120bb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_101209e0(int param_1)

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
  code *extraout_w11_02;
  uint uVar9;
  
  pcVar5 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (uint *)(param_1 + 0xc);
  piVar2 = (int *)(param_1 + 8);
  if (*puVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    iVar3 = *piVar2 + iVar4 * 0x20;
    if (*(int *)(iVar3 + 0x10) != 0) {
      uVar6 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar7 = (*extraout_w11)(uVar6);
      if (uVar7 < *(ulonglong *)(iVar3 + 0x18)) {
        puVar8 = (undefined8 *)(*piVar2 + iVar4 * 0x20 + 0x18);
        uVar6 = (*pcVar5)();
        (*extraout_w11_00)(uVar6,*puVar8,*(undefined4 *)(param_1 + 0x20));
        (*(code *)PTR_FUN_1016c138)(*(undefined4 *)(param_1 + 0x20),0xffffffff);
      }
    }
    uVar9 = 0;
    if (*puVar1 != 0) {
      do {
        uVar6 = (*pcVar5)();
        (*extraout_w11_01)(uVar6);
        uVar6 = (*pcVar5)();
        (*extraout_w11_02)(uVar6);
        uVar9 = uVar9 + 1;
      } while (uVar9 < *puVar1);
    }
    FUN_101322d0(*piVar2);
    piVar2[0] = 0;
    piVar2[1] = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    (*(code *)PTR_FUN_1016c048)(*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  FUN_101322d0(*piVar2);
  return;
}

