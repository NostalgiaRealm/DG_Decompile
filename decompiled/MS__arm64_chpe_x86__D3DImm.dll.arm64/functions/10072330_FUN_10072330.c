/*
 * FUN_10072330 at 10072330
 * undefined FUN_10072330(void)
 * Address ranges: 10072330-10072413
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10072330(int param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  code *extraout_w11;
  uint uVar5;
  
  uVar5 = (uint)param_2;
  if (uVar5 != 0) {
    uVar1 = *(uint *)(param_1 + 0x24);
    uVar3 = 0;
    do {
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          if (*(int *)(param_1 + 0x28 + uVar4 * 4) == *(int *)(param_3 + uVar3 * 4))
          goto LAB_10072394;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      if (uVar4 == uVar1) {
        FUN_10071d50(param_1);
        uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar2,param_2 & 0xffffffff,param_3);
        *(uint *)(param_1 + 0x24) = uVar5;
        *(undefined1 *)(param_1 + 0x620) = 1;
        FUN_10081ee0(param_1 + 0x28,param_3,(param_2 & 0x3fffffff) << 2);
        return;
      }
LAB_10072394:
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  return;
}

