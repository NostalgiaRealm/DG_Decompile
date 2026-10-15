/*
 * FUN_180103ad8 at 180103ad8
 * undefined FUN_180103ad8(void)
 * Address ranges: 180103ad8-180103b33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180103ad8(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0x20;
  lVar1 = 0x180258350;
  do {
    lVar2 = lVar2 + -1;
    thunk_FUN_180102fc0(*(undefined8 *)(lVar1 + -0x10));
    thunk_FUN_180102fc0(*(undefined8 *)(lVar1 + -0x20));
    thunk_FUN_180102fc0(*(undefined8 *)(lVar1 + -0x30));
    lVar1 = lVar1 + -600;
  } while (lVar2 != 0);
  return;
}

