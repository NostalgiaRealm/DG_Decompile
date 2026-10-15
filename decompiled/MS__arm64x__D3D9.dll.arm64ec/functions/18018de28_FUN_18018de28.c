/*
 * FUN_18018de28 at 18018de28
 * undefined FUN_18018de28(void)
 * Address ranges: 18018de28-18018de83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18018de28(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_180222c50(param_1,0,0x254);
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

