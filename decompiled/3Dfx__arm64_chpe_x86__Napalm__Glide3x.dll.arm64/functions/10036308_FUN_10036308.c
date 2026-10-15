/*
 * FUN_10036308 at 10036308
 * undefined FUN_10036308(void)
 * Address ranges: 10036308-100363a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10036308(int param_1)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  code *extraout_w11;
  undefined1 auVar4 [16];
  
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 0x84);
  if (uVar1 < 0x1c) {
    uVar3 = (ulonglong)(byte)(&DAT_100a0431)[uVar1 * 2];
    cVar2 = (&DAT_100a0430)[uVar1 * 2];
    if ((cVar2 == '\x02') && (cVar2 = '\x02', *(int *)(param_1 + 0x10) != 0)) {
      cVar2 = '\x03';
    }
  }
  else {
    uVar3 = 0;
    cVar2 = '\0';
  }
  auVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)(param_1,cVar2,uVar3);
  (*extraout_w11)(auVar4._0_8_ & 0xffffffff,auVar4._8_8_ & 0xffffffff,uVar3 & 0xffffffff);
  return;
}

