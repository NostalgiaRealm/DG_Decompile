/*
 * FUN_100491f0 at 100491f0
 * undefined FUN_100491f0(void)
 * Address ranges: 100491f0-10049263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100491f0(undefined8 param_1,int param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  ulonglong uVar3;
  code *extraout_w11;
  undefined1 auVar4 [16];
  
  bVar1 = *(byte *)(param_2 + 0x188) & (param_3 ^ 0xff);
  *(byte *)(param_2 + 0x188) = bVar1;
  if (bVar1 == 0) {
    uVar2 = *(uint *)(param_2 + 0x170);
    uVar3 = (ulonglong)uVar2;
    if (uVar2 != 0) {
      auVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(auVar4._0_8_ & 0xffffffff,auVar4._8_8_ & 0xffffffff,uVar3 & 0xffffffff);
      *(uint *)(param_2 + 0x170) = 0;
    }
  }
  return;
}

