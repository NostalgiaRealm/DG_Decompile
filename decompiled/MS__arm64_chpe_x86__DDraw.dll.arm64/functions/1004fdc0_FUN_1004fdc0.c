/*
 * FUN_1004fdc0 at 1004fdc0
 * undefined FUN_1004fdc0(void)
 * Address ranges: 1004fdc0-1004fe63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004fdc0(int param_1,undefined8 param_2,ulonglong param_3)

{
  uint *puVar1;
  code *extraout_w11;
  undefined1 auVar2 [16];
  
  puVar1 = (uint *)(*(int *)(param_1 + 4) + 200);
  *puVar1 = *puVar1 | 4;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0xaf) = 1;
  if ((*(uint *)(param_1 + 0x1b8) & 0x208) != 0) {
    if ((*(int *)(param_1 + 0x110) != 0) &&
       (*(int *)(*(int *)(param_1 + 0x110) + 0x108) == *(int *)(param_1 + 0x108))) {
      auVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(auVar2._0_8_ & 0xffffffff,auVar2._8_8_ & 0xffffffff,param_3 & 0xffffffff);
    }
  }
  return;
}

