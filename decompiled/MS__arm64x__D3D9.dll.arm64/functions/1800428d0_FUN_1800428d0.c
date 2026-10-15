/*
 * FUN_1800428d0 at 1800428d0
 * undefined FUN_1800428d0(void)
 * Address ranges: 1800428d0-18004291b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800428d0(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = (param_2 & 0xffffffff) * 0x158;
  *(undefined8 *)(*param_1 + lVar2) = param_3;
  thunk_FUN_180001218(lVar2 + *param_1 + 8,param_4,0x148);
  lVar1 = FUN_180102f80(0x148);
  if (lVar1 != 0) {
    thunk_FUN_180001218(lVar1,param_4,0x148);
  }
  *(longlong *)(lVar2 + *param_1 + 0x150) = lVar1;
  return;
}

