/*
 * FUN_1800713a0 at 1800713a0
 * undefined FUN_1800713a0(void)
 * Address ranges: 1800713a0-180071423
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800713a0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = *(uint *)(*(longlong *)(param_3 + 0x10) + lVar2 * 4 + 0x4a28);
    if (uVar1 != 0) {
      FUN_180077660(param_1,param_2 + -4 + (ulonglong)uVar1 * 4,param_3,param_4);
      FUN_1800f5730(param_3 + 0x20,param_4,0x3e,0);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  return;
}

