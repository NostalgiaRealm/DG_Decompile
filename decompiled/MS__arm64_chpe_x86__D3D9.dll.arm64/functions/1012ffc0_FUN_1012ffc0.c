/*
 * FUN_1012ffc0 at 1012ffc0
 * undefined FUN_1012ffc0(void)
 * Address ranges: 1012ffc0-101300b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1012ffc0(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,int *param_5,
            int *param_6)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong extraout_x8;
  code *extraout_w11;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_5[1] != 0) {
    uVar5 = 0;
    do {
      puVar1 = (uint *)(*param_5 + uVar5 * 0xc);
      uVar2 = *puVar1;
      if ((uVar2 <= param_4) && (param_4 < puVar1[1] + uVar2)) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)param_5[1]);
  }
  uVar4 = 0;
  uVar5 = 0;
  do {
    if (*param_6 != 0) {
      return uVar4;
    }
    if (*(int *)(param_2 + uVar5 * 4) != 0) {
      (*pcVar3)(uVar4);
      uVar4 = (*extraout_w11)(extraout_x8 & 0xffffffff,param_1,param_3,param_6);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  return uVar4;
}

