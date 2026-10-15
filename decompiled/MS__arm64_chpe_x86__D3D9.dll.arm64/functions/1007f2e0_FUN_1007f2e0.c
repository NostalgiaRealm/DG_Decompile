/*
 * FUN_1007f2e0 at 1007f2e0
 * undefined FUN_1007f2e0(void)
 * Address ranges: 1007f2e0-1007f38b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007f2e0(int param_1,int param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *extraout_w11;
  undefined8 uVar4;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  puVar2 = (undefined8 *)(param_1 + (param_2 + 0x454) * 4);
  uVar1 = (uint)(param_3 - param_2) >> 1;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar4 = *param_4;
      uVar3 = uVar3 + 1;
      param_4 = param_4 + 1;
      *puVar2 = uVar4;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar1);
  }
  if ((param_3 - param_2 & 1U) != 0) {
    *(undefined4 *)puVar2 = *(undefined4 *)param_4;
  }
  *(undefined1 *)(param_1 + 0xf695) = 1;
  return;
}

