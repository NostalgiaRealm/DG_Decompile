/*
 * FUN_10035cb0 at 10035cb0
 * undefined FUN_10035cb0(void)
 * Address ranges: 10035cb0-10035da3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10035cb0(int param_1)

{
  uint *puVar1;
  code *pcVar2;
  int iVar3;
  ulonglong uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 auVar5 [16];
  
  iVar3 = FUN_10038010(param_1 + -0x10,0);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (iVar3 != 0) {
    auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar3 = (*extraout_w11)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff,0,0,4,2,2,0,0);
    if (iVar3 != 0) {
      uVar4 = FUN_10039430(param_1 + -0x10);
      if (((uVar4 & 1) == 0) && (*(int *)(param_1 + 0xe4) != 0)) {
        puVar1 = (uint *)(*(int *)(*(int *)(param_1 + 0xe4) + 4) + 200);
        *puVar1 = *puVar1 | 0x40;
      }
      (*pcVar2)();
      (*extraout_w11_00)(iVar3);
    }
  }
  return;
}

