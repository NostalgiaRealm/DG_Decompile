/*
 * FUN_100af430 at 100af430
 * undefined FUN_100af430(void)
 * Address ranges: 100af430-100af4e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100af430(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  uint uVar3;
  
  if (DAT_1013ced4 == 1) {
    FUN_10031780();
    pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x4c) != 0) {
      do {
        if ((&DAT_101387c0)[uVar3 * 0x8a] != 0) {
          uVar2 = (*pcVar1)();
          (*extraout_w11)(uVar2);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x4c));
    }
    if (DAT_1013ceec != 0) {
      FUN_100fb700(DAT_1013ceec);
    }
  }
  return;
}

