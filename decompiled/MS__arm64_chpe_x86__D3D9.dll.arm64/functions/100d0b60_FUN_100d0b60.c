/*
 * FUN_100d0b60 at 100d0b60
 * undefined FUN_100d0b60(void)
 * Address ranges: 100d0b60-100d0c17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d0b60(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  code *extraout_w11;
  uint uVar3;
  
  if (DAT_10170ab8 == 1) {
    FUN_1003b650();
    pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x4c) != 0) {
      do {
        if ((&DAT_10171380)[uVar3 * 0x8a] != 0) {
          uVar2 = (*pcVar1)();
          (*extraout_w11)(uVar2);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x4c));
    }
    if (DAT_10170ad0 != 0) {
      FUN_1012ecd0(DAT_10170ad0);
    }
  }
  return;
}

