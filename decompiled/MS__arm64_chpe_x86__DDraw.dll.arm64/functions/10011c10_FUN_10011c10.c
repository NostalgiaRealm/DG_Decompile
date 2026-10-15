/*
 * FUN_10011c10 at 10011c10
 * undefined FUN_10011c10(void)
 * Address ranges: 10011c10-10011cdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10011c10(int param_1)

{
  code *pcVar1;
  code *extraout_w11;
  uint uVar2;
  uint uVar3;
  
  FUN_100123b8(param_1,0);
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
  return *(undefined4 *)(param_1 + 0x5c);
}

