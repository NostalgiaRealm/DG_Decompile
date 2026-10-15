/*
 * FUN_1009d470 at 1009d470
 * undefined FUN_1009d470(void)
 * Address ranges: 1009d470-1009d4df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009d470(undefined8 param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  code *extraout_w11;
  undefined1 auVar4 [16];
  
  bVar2 = *(byte *)(param_2 + 0x1ad);
  *(byte *)(param_2 + 0x1ad) = bVar2 & 0xf0;
  if ((bVar2 & 0xf0) == 0) {
    uVar1 = *(uint *)(param_2 + 0x194);
    uVar3 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      auVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(auVar4._0_8_ & 0xffffffff,auVar4._8_8_ & 0xffffffff,uVar3 & 0xffffffff);
      *(uint *)(param_2 + 0x194) = 0;
    }
  }
  return;
}

