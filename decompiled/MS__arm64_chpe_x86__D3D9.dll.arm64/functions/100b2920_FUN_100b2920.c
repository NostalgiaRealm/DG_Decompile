/*
 * FUN_100b2920 at 100b2920
 * undefined FUN_100b2920(void)
 * Address ranges: 100b2920-100b2a83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100b2920(int param_1,ulonglong param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  int local_40 [8];
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((param_2 & 1) == 0) goto LAB_100b2a6c;
  piVar1 = (int *)(param_1 + 0x3c);
  if (*piVar1 == 0) {
    uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar3,local_40);
    if (local_40[0] < 0x4a) {
      if (local_40[0] == 0x1c) {
        local_40[0] = 0x1d;
      }
      else {
        if (local_40[0] != 0x47) goto LAB_100b29b0;
        local_40[0] = 0x48;
      }
    }
    else if (local_40[0] < 0x4b) {
      local_40[0] = 0x4b;
    }
    else if (local_40[0] == 0x4d) {
      local_40[0] = 0x4e;
    }
    else {
LAB_100b29b0:
      local_40[0] = 0;
    }
    if (local_40[0] == 0) {
      *piVar1 = *(int *)(param_1 + 0x38);
      uVar3 = (*pcVar2)();
      (*extraout_w11_01)(uVar3);
    }
    else {
      puVar4 = (undefined4 *)(param_1 + 0x34);
      uVar3 = (*pcVar2)();
      (*extraout_w11_00)(uVar3,*puVar4,local_40,piVar1);
    }
  }
  if (*piVar1 != 0) {
    return *piVar1;
  }
LAB_100b2a6c:
  return *(int *)(param_1 + 0x38);
}

