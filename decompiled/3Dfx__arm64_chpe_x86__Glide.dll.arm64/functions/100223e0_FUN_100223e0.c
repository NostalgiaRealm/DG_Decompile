/*
 * FUN_100223e0 at 100223e0
 * undefined FUN_100223e0(void)
 * Address ranges: 100223e0-10022507
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100223e0(int param_1)

{
  undefined4 uVar1;
  code *extraout_w11;
  int iVar2;
  int local_30 [4];
  
  local_30[0] = param_1 + 0x39e0;
  local_30[1] = param_1 + 0x6a04;
  local_30[2] = param_1 + 0x9a28;
  iVar2 = 0;
  if (0 < *(int *)(*(int *)(param_1 + 4) + 0x33)) {
    do {
      FUN_1003e958(local_30[iVar2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  FUN_1003eb20(param_1 + 0x3950);
  FUN_1002ab48(param_1 + 0x3440);
  FUN_10020190(param_1);
  iVar2 = *(int *)(param_1 + 0x31bc);
  if (iVar2 != 0) {
    FUN_100595a0(*(undefined4 *)(*(int *)(param_1 + 0x3180) + 0x172c0),iVar2,0,1);
  }
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1);
  *(int *)(param_1 + 0x31bc) = 0;
  FUN_1005c620(*(int *)(param_1 + 0x3180),*(undefined4 *)(param_1 + 0x3184));
  return;
}

