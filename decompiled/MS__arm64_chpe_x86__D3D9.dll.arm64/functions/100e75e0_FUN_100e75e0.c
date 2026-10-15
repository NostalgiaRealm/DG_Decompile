/*
 * FUN_100e75e0 at 100e75e0
 * undefined FUN_100e75e0(void)
 * Address ranges: 100e75e0-100e778b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100e75e0(int param_1,undefined8 *param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *extraout_w8;
  uint uVar7;
  code *extraout_w11;
  undefined8 uVar8;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    uVar4 = 0x88760868;
    if (*(char *)(*(int *)(param_1 + 0x10) + 0x669d) == '\0') {
      if (((*(uint *)(*(int *)(param_1 + 0x10) + 0xdd0) >> 2 & 1) == 0) &&
         (*(int *)(DAT_10175b54 + 0x20) == 0)) {
        bVar1 = false;
        *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
      }
      else {
        bVar1 = true;
        iVar3 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
        if (iVar3 == 0) {
          FUN_100071d0(0);
        }
      }
      puVar5 = (undefined4 *)(param_1 + 0x14);
      uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar4 = (*extraout_w11)(uVar4,*extraout_w8,*puVar5,param_2,param_3,param_4);
      if (bVar1) {
        (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
      }
      else {
        *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
      }
    }
  }
  else {
    uVar2 = FUN_100e7420(param_1);
    if (param_3 != 0) {
      if (param_3 < uVar2) {
        return 0x80004005;
      }
      puVar6 = (undefined8 *)(param_1 + 0x20);
      uVar7 = 0;
      if (uVar2 >> 3 != 0) {
        do {
          uVar8 = *puVar6;
          uVar7 = uVar7 + 1;
          puVar6 = puVar6 + 1;
          *param_2 = uVar8;
          param_2 = param_2 + 1;
        } while (uVar7 < uVar2 >> 3);
      }
      if ((uVar2 >> 2 & 1) != 0) {
        *(undefined4 *)param_2 = *(undefined4 *)puVar6;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

