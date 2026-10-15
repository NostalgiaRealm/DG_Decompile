/*
 * FUN_100b5650 at 100b5650
 * undefined FUN_100b5650(void)
 * Address ranges: 100b5650-100b576f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b5650(int param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  code *extraout_w11;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_50 [16];
  
  FUN_10120e20(auStack_50);
  puVar1 = (undefined8 *)(param_1 + (param_2 + 0x122) * 0x10);
  uVar5 = 0;
  if ((param_4 & 0x3fffffff) != 0) {
    do {
      uVar6 = *param_3;
      uVar5 = uVar5 + 1;
      param_3 = param_3 + 1;
      *puVar1 = uVar6;
      puVar1 = puVar1 + 1;
    } while (uVar5 < (param_4 & 0x3fffffff) << 1);
  }
  uVar5 = *(uint *)(param_1 + 0x58b0);
  uVar2 = *(uint *)(param_1 + 0x58b4);
  uVar4 = (ulonglong)uVar2;
  param_4 = param_2 + param_4;
  if (uVar5 < uVar2) {
    if (uVar2 < param_2 || param_4 < uVar5) {
      uVar3 = *(undefined4 *)(param_1 + 0x58b8);
      auVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(auVar7._0_8_ & 0xffffffff,auVar7._8_8_ & 0xffffffff,uVar4 & 0xffffffff);
      *(undefined4 *)(param_1 + 0x58b8) = uVar3;
    }
    else {
      if (param_2 <= uVar5) {
        uVar5 = param_2;
      }
      param_2 = uVar5;
      if (param_4 < uVar2) {
        param_4 = uVar2;
      }
    }
  }
  *(uint *)(param_1 + 0x58b0) = param_2;
  *(uint *)(param_1 + 0x58b4) = param_4;
  FUN_10120ed0(auStack_50);
  return;
}

