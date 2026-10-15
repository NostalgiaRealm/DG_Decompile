/*
 * FUN_100bd1a0 at 100bd1a0
 * undefined FUN_100bd1a0(void)
 * Address ranges: 100bd1a0-100bd233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bd1a0(int param_1,int param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14),param_2 + 4);
  (*extraout_w11)(uVar2);
  uVar2 = (*pcVar1)(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14),param_2 + 0xb4);
  (*extraout_w11_00)(uVar2);
  return;
}

