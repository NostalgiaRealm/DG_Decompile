/*
 * FUN_100ecf68 at 100ecf68
 * undefined FUN_100ecf68(void)
 * Address ranges: 100ecf68-100ed01f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ecf68(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar3;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = 0;
  if (*(ushort *)(param_1 + 0x30) != 0) {
    do {
      (*pcVar1)();
      (*extraout_w11)(param_1,uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 0x30));
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2);
  }
  *(int *)(param_1 + 0x94) = 0;
  return;
}

