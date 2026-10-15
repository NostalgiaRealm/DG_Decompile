/*
 * FUN_1800797d0 at 1800797d0
 * undefined FUN_1800797d0(void)
 * Address ranges: 1800797d0-18007982b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800797d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  func_0x000180222c50(param_1,0,0x254);
  lVar1 = 0;
  do {
    lVar2 = lVar1 * 8;
    lVar1 = lVar1 + 1;
    *(undefined1 *)(param_1 + 0x14 + lVar2) = 0xff;
    *(undefined1 *)(param_1 + 0x19 + lVar2) = 0xff;
  } while (lVar1 != 0x40);
  *(undefined4 *)(param_1 + 4) = 4;
  return;
}

