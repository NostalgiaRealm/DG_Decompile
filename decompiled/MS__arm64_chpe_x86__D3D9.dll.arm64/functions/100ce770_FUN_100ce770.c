/*
 * FUN_100ce770 at 100ce770
 * undefined FUN_100ce770(void)
 * Address ranges: 100ce770-100ce813
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_100ce770(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *extraout_w11;
  undefined8 uVar4;
  
  puVar3 = (undefined4 *)(param_1 + 0x14);
  uVar4 = 4;
  uVar1 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  iVar2 = (*extraout_w11)(uVar1,*puVar3);
  if (iVar2 < -0x7785fff9) {
    if (iVar2 == -0x7785fffb) {
      uVar4 = 2;
    }
    else if (iVar2 == -0x7785fffa) {
      uVar4 = 1;
    }
  }
  else if (iVar2 < -0x7785fff8) {
    uVar4 = 3;
  }
  else if (iVar2 == 0) {
    uVar4 = 0;
  }
  return uVar4;
}

