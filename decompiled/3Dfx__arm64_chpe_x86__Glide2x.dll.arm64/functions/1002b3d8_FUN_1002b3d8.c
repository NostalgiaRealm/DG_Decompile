/*
 * FUN_1002b3d8 at 1002b3d8
 * undefined FUN_1002b3d8(void)
 * Address ranges: 1002b3d8-1002b49f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002b3d8(int param_1)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar2 = (*extraout_w11)(uVar4);
  if (cVar2 != '\0') {
    bVar3 = FUN_1002a8d0(param_1);
    if (*(byte *)(param_1 + 0x126) != bVar3) {
      *(byte *)(param_1 + 0x126) = bVar3;
      *(byte *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20) = bVar3 ^ 1;
      uVar4 = (*pcVar1)();
      (*extraout_w11_00)(uVar4);
    }
  }
  return;
}

