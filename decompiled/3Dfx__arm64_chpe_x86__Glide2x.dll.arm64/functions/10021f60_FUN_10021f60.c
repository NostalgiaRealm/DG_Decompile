/*
 * FUN_10021f60 at 10021f60
 * undefined FUN_10021f60(void)
 * Address ranges: 10021f60-10022087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10021f60(int param_1)

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
      FUN_1003e4d8(local_30[iVar2]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(int *)(param_1 + 4) + 0x33));
  }
  FUN_1003e6a0(param_1 + 0x3950);
  FUN_1002a6c8(param_1 + 0x3440);
  FUN_1001fd10(param_1);
  iVar2 = *(int *)(param_1 + 0x31bc);
  if (iVar2 != 0) {
    FUN_10059120(*(undefined4 *)(*(int *)(param_1 + 0x3180) + 0x172c0),iVar2,0,1);
  }
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar1);
  *(int *)(param_1 + 0x31bc) = 0;
  FUN_1005c1a0(*(int *)(param_1 + 0x3180),*(undefined4 *)(param_1 + 0x3184));
  return;
}

