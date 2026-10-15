/*
 * FUN_100645a0 at 100645a0
 * undefined FUN_100645a0(void)
 * Address ranges: 100645a0-10064683
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100645a0(int param_1,ulonglong param_2,int param_3)

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
          goto LAB_10064604;
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
      }
      if (uVar4 == uVar1) {
        FUN_10063268(param_1);
        uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        (*extraout_w11)(uVar2,param_2 & 0xffffffff,param_3);
        *(uint *)(param_1 + 0x24) = uVar5;
        *(undefined1 *)(param_1 + 0x620) = 1;
        FUN_1007e4a0(param_1 + 0x28,param_3,(param_2 & 0x3fffffff) << 2);
        return;
      }
LAB_10064604:
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  return;
}

