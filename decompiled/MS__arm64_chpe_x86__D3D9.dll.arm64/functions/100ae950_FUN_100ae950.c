/*
 * FUN_100ae950 at 100ae950
 * undefined FUN_100ae950(void)
 * Address ranges: 100ae950-100aea43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ae950(int param_1,undefined4 param_2)

{
  code *pcVar1;
  code *extraout_w11;
  uint uVar2;
  uint uVar3;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (*(int *)(param_1 + -0x14) != 0) {
    uVar3 = 0;
    if (*(uint *)(param_1 + -100) != 0) {
      do {
        uVar2 = 0;
        if (*(uint *)(param_1 + -0x68) != 0) {
          do {
            (*pcVar1)();
            (*extraout_w11)(param_1 + -0x88,uVar2,uVar3,1);
            uVar2 = uVar2 + 1;
          } while (uVar2 < *(uint *)(param_1 + -0x68));
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + -100));
    }
    FUN_100ab520(param_1 + -0x20,1,1);
  }
  FUN_100cebf0(param_1 + -0x88,param_2);
  return;
}

