/*
 * FUN_10025580 at 10025580
 * undefined FUN_10025580(void)
 * Address ranges: 10025580-10025687
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10025580(int param_1,undefined4 param_2)

{
  code *pcVar1;
  code *extraout_w11;
  uint uVar2;
  uint uVar3;
  
  FUN_10090418(*(int *)(param_1 + -0x7c) + 0x11c0);
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
    FUN_10020e88(param_1 + -0x3c,1,1);
  }
  FUN_10033d88(param_1 + -0xc0,param_2);
  return;
}

