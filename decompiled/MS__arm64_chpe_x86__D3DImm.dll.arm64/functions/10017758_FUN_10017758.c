/*
 * FUN_10017758 at 10017758
 * undefined FUN_10017758(void)
 * Address ranges: 10017758-100179bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10017758(int param_1,char param_2,char param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *extraout_w8;
  uint uVar9;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int local_50;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar8 = (*extraout_w11)(uVar7,*(undefined4 *)(param_1 + 0x1d74),0);
  if (-1 < iVar8) {
    uVar7 = (*pcVar6)();
    iVar8 = (*extraout_w11_00)(uVar7,*extraout_w8,0);
    if (-1 < iVar8) {
      piVar1 = (int *)(param_1 + 0x4c);
      puVar2 = (uint *)(param_1 + 0x58);
      if (*piVar1 != *(int *)(param_1 + 0x48)) {
        *puVar2 = *piVar1 - *(int *)(param_1 + 0x44);
      }
      *(int *)(param_1 + 0x44) = local_50;
      *(int *)(param_1 + 100) = local_50;
      piVar3 = (int *)(param_1 + 0x50);
      *piVar1 = local_50;
      if (param_2 == '\0') {
        uVar4 = *puVar2;
        iVar8 = *(int *)(param_1 + 0x54) + *piVar3;
        *piVar3 = iVar8;
        uVar9 = uVar4;
        if ((param_4 != 0) && (param_4 != *(int *)(param_1 + 0x60))) {
          uVar9 = iVar8 * param_4;
          if (uVar9 < uVar4) {
            *(int *)(param_1 + 0x5c) = uVar4 - uVar9;
            uVar9 = uVar4;
          }
          else {
            *(int *)(param_1 + 0x5c) = 0;
          }
        }
        iVar8 = uVar9 + local_50;
        *piVar1 = iVar8;
      }
      else {
        *piVar3 = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *puVar2 = 0;
        iVar8 = local_50;
      }
      if (param_4 != 0) {
        *(int *)(param_1 + 0x60) = param_4;
      }
      *(int *)(param_1 + 0x54) = 0;
      piVar1 = (int *)(param_1 + 0x68);
      piVar3 = (int *)(param_1 + 0x6c);
      *(int *)(param_1 + 0x48) = iVar8;
      if (param_3 != '\0') {
        *piVar1 = 0;
        *piVar3 = 0;
        return 1;
      }
      iVar8 = *piVar3;
      iVar5 = *piVar1;
      *piVar3 = 0;
      *piVar1 = iVar8 + iVar5;
      *(int *)(param_1 + 100) = local_50 + (iVar8 + iVar5) * 4;
      return 1;
    }
    uVar7 = (*pcVar6)();
    (*extraout_w11_01)(uVar7,*(undefined4 *)(param_1 + 0x1d74),0);
  }
  return 0;
}

