/*
 * FUN_1004d810 at 1004d810
 * undefined FUN_1004d810(void)
 * Address ranges: 1004d810-1004d88b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004d810(int param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  cVar2 = (*extraout_w11)(uVar3);
  if ((cVar2 == '\0') && (uVar4 = FUN_1004d750(param_1 + 0x150), (uVar4 & 1) == 0)) {
    uVar1 = *(uint *)(param_1 + 0x1b8);
    if ((uVar1 >> 0x1a & 1) != 0) {
      *(uint *)(param_1 + 0x1b8) = uVar1 & 0xfffff7ff | 0x10004000;
    }
  }
  return;
}

