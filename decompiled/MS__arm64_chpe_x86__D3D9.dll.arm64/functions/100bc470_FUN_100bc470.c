/*
 * FUN_100bc470 at 100bc470
 * undefined FUN_100bc470(void)
 * Address ranges: 100bc470-100bc53f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bc470(int param_1)

{
  code *pcVar1;
  code *extraout_w11;
  uint uVar2;
  uint uVar3;
  
  FUN_100beba0(param_1,0,0);
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = 0;
  if (*(uint *)(param_1 + 0x24) != 0) {
    do {
      uVar2 = 0;
      if (*(uint *)(param_1 + 0x20) != 0) {
        do {
          (*pcVar1)();
          (*extraout_w11)(param_1,uVar2,uVar3,1);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x20));
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(param_1 + 0x24));
  }
  return *(undefined4 *)(param_1 + 0x60);
}

