/*
 * FUN_180184548 at 180184548
 * undefined FUN_180184548(void)
 * Address ranges: 180184548-1801845d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180184548(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    uVar1 = *(uint *)(*(longlong *)(param_3 + 0x10) + lVar2 * 4 + 0x4a28);
    if (uVar1 != 0) {
      FUN_18018b7c8(param_1,param_2 + -4 + (ulonglong)uVar1 * 4,param_3,param_4);
      FUN_180214c88(param_3 + 0x20,param_4,0x3e,0,&stack0xffffffffffffffc0,0);
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  return;
}

