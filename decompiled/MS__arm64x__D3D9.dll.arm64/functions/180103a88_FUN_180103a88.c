/*
 * FUN_180103a88 at 180103a88
 * undefined FUN_180103a88(void)
 * Address ranges: 180103a88-180103ad3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180103a88(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x20;
  puVar1 = &DAT_180253840;
  do {
    lVar2 = lVar2 + -1;
    thunk_FUN_180102fc0(puVar1[-2]);
    thunk_FUN_180102fc0(puVar1[-4]);
    puVar1 = puVar1 + -5;
  } while (lVar2 != 0);
  return;
}

