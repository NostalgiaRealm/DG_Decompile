/*
 * FUN_1802001c0 at 1802001c0
 * undefined FUN_1802001c0(void)
 * Address ranges: 1802001c0-18020028f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1802001c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_180238558;
  FUN_1802012c8();
  lVar2 = 0x10;
  puVar1 = param_1 + 0x3256;
  do {
    lVar2 = lVar2 + -1;
    FUN_1802229d8(puVar1[-0x253]);
    FUN_1802229d8(puVar1[-599]);
    FUN_1802229d8(puVar1[-0x25b]);
    FUN_1802229d8(puVar1[-0x25f]);
    FUN_1802229d8(puVar1[-0x263]);
    FUN_1802229d8(puVar1[-0x267]);
    FUN_1802229d8(puVar1[-0x26b]);
    FUN_1802229d8(puVar1[-0x26f]);
    puVar1 = puVar1 + -0x318;
  } while (lVar2 != 0);
  FUN_180201118(param_1);
  return;
}

