/*
 * FUN_1001c088 at 1001c088
 * undefined FUN_1001c088(void)
 * Address ranges: 1001c088-1001c14f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001c088(int param_1)

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
    bVar3 = FUN_1001b580(param_1);
    if (*(byte *)(param_1 + 0x126) != bVar3) {
      *(byte *)(param_1 + 0x126) = bVar3;
      *(byte *)(*(int *)(*(int *)(param_1 + 4) + 4) + 0x20) = bVar3 ^ 1;
      uVar4 = (*pcVar1)();
      (*extraout_w11_00)(uVar4);
    }
  }
  return;
}

