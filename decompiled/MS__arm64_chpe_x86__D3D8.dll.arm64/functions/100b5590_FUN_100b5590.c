/*
 * FUN_100b5590 at 100b5590
 * undefined FUN_100b5590(void)
 * Address ranges: 100b5590-100b563f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100b5590(int param_1,int param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 extraout_x1;
  uint uVar3;
  code *extraout_w11;
  undefined8 uVar4;
  undefined1 auStack_30 [16];
  
  FUN_10120e20(auStack_30);
  puVar1 = (undefined8 *)(param_1 + (param_2 + 0x533) * 0x10);
  uVar3 = 0;
  if ((param_4 & 0x3fffffff) != 0) {
    do {
      uVar4 = *param_3;
      uVar3 = uVar3 + 1;
      param_3 = param_3 + 1;
      *puVar1 = uVar4;
      puVar1 = puVar1 + 1;
    } while (uVar3 < (param_4 & 0x3fffffff) << 1);
  }
  uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)
                    (*(undefined4 *)(param_1 + 0x14),extraout_x1,param_2 + param_4);
  (*extraout_w11)(uVar2,param_2);
  FUN_10120ed0(auStack_30);
  return;
}

