/*
 * FUN_100bfef0 at 100bfef0
 * undefined FUN_100bfef0(void)
 * Address ranges: 100bfef0-100bfff7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bfef0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  code *extraout_w11;
  uint uVar2;
  uint uVar3;
  
  FUN_10130fb8(*(int *)(param_1 + -0x7c) + 0x11c0);
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + -0x30) != 0) {
    uVar3 = 0;
    if (*(uint *)(param_1 + -0x9c) != 0) {
      do {
        uVar2 = 0;
        if (*(uint *)(param_1 + -0xa0) != 0) {
          do {
            (*pcVar1)();
            (*extraout_w11)(param_1 + -0xc0,uVar2,uVar3,1);
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)(param_1 + -0xa0));
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + -0x9c));
    }
    FUN_100bb370(param_1 + -0x3c,1,1);
  }
  FUN_100cebf0(param_1 + -0xc0,param_2);
  return;
}

