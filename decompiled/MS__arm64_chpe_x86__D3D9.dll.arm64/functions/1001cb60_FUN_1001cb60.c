/*
 * FUN_1001cb60 at 1001cb60
 * undefined FUN_1001cb60(void)
 * Address ranges: 1001cb60-1001cbe3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001cb60(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  undefined1 auVar5 [16];
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulonglong)uVar1;
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar3 = (ulonglong)uVar2;
  if (((uVar2 < uVar1) && (*(int *)(param_1 + 4) != 0)) && (*(int *)(param_1 + 0x40) != 0)) {
    auVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(auVar5._0_8_ & 0xffffffff,auVar5._8_8_ & 0xffffffff,uVar3 & 0xffffffff,
                    uVar4 & 0xffffffff);
    *(uint *)(param_1 + 0x18) = 0;
    *(uint *)(param_1 + 0x14) = 0;
  }
  return;
}

