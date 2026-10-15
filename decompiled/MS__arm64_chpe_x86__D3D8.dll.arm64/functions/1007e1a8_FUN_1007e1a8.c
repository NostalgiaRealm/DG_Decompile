/*
 * FUN_1007e1a8 at 1007e1a8
 * undefined FUN_1007e1a8(void)
 * Address ranges: 1007e1a8-1007e21b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007e1a8(undefined8 param_1,int param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  code *extraout_w11;
  undefined1 auVar4 [16];
  
  bVar1 = *(byte *)(param_2 + 0x1a4) & (param_3 ^ 0xff);
  *(byte *)(param_2 + 0x1a4) = bVar1;
  if (bVar1 == 0) {
    uVar2 = *(uint *)(param_2 + 0x18c);
    uVar3 = (ulonglong)uVar2;
    if (uVar2 != 0) {
      auVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(auVar4._0_8_ & 0xffffffff,auVar4._8_8_ & 0xffffffff,uVar3 & 0xffffffff);
      *(uint *)(param_2 + 0x18c) = 0;
    }
  }
  return;
}

