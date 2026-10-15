/*
 * FUN_140025430 at 140025430
 * undefined __fastcall FUN_140025430(void)
 * Address ranges: 140025430-140025494
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140025430(void)

{
  longlong lVar1;
  
  _DAT_14002e680 = &PTR_FUN_140028e60;
  if (DAT_14002eb00 != 0) {
    FUN_140012950(0x14002e680);
    lVar1 = DAT_14002eb00;
    *(undefined8 *)(DAT_14002eb00 + 0x530) = 0;
    FUN_140013580(lVar1);
    DAT_14002eb00 = 0;
    _DAT_14002e690 = 0;
  }
  FUN_1400122a0((undefined8 *)&DAT_14002e680);
  return;
}

