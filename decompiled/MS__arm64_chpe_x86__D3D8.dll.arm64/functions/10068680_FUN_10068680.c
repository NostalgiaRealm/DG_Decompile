/*
 * FUN_10068680 at 10068680
 * undefined FUN_10068680(void)
 * Address ranges: 10068680-1006871f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10068680(int param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  code *extraout_w11;
  undefined8 uVar4;
  
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1,0);
  puVar1 = (undefined8 *)(param_1 + (param_2 + 0x73) * 0x10);
  uVar2 = param_3 - param_2 & 0x3fffffff;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      uVar4 = *param_4;
      uVar3 = uVar3 + 1;
      param_4 = param_4 + 1;
      *puVar1 = uVar4;
      puVar1 = puVar1 + 1;
    } while (uVar3 < uVar2 << 1);
  }
  *(undefined1 *)(param_1 + 0xd9a5) = 1;
  return;
}

