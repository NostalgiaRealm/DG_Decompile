/*
 * FUN_100ab780 at 100ab780
 * undefined FUN_100ab780(void)
 * Address ranges: 100ab780-100ab8df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ab780(int param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined1 auVar4 [16];
  uint local_50 [8];
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  piVar1 = (int *)(param_1 + 0x1c);
  if (*piVar1 != 0) {
    return;
  }
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3,local_50);
  if ((int)local_50[0] < 0x47) {
    if ((0x18 < local_50[0]) || ((0x1000800U >> (ulonglong)(local_50[0] & 0x1f) & 1) == 0)) {
      if (local_50[0] == 0x1c) {
        local_50[0] = 0x1d;
        goto LAB_100ab848;
      }
LAB_100ab830:
      local_50[0] = 0;
    }
    if (local_50[0] == 0) goto LAB_100ab898;
  }
  else if ((int)local_50[0] < 0x48) {
    local_50[0] = 0x48;
  }
  else if (local_50[0] == 0x4a) {
    local_50[0] = 0x4b;
  }
  else {
    if (local_50[0] != 0x4d) goto LAB_100ab830;
    local_50[0] = 0x4e;
  }
LAB_100ab848:
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 0xc);
  }
  auVar4 = (*pcVar2)(**(undefined4 **)(param_1 + 8),param_2);
  (*extraout_w11_00)(auVar4._0_8_ & 0xffffffff,auVar4._8_8_ & 0xffffffff,local_50,piVar1);
LAB_100ab898:
  if (*piVar1 == 0) {
    *piVar1 = *(int *)(param_1 + 0x14);
    uVar3 = (*pcVar2)();
    (*extraout_w11_01)(uVar3);
  }
  return;
}

