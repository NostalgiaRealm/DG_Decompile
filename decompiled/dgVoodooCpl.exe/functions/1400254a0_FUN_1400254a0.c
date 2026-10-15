/*
 * FUN_1400254a0 at 1400254a0
 * undefined __fastcall FUN_1400254a0(void)
 * Address ranges: 1400254a0-140025504
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400254a0(void)

{
  longlong lVar1;
  
  _DAT_14002eb10 = &PTR_FUN_140028e60;
  if (DAT_14002ef90 != 0) {
    FUN_140012950(0x14002eb10);
    lVar1 = DAT_14002ef90;
    *(undefined8 *)(DAT_14002ef90 + 0x530) = 0;
    FUN_140013580(lVar1);
    DAT_14002ef90 = 0;
    _DAT_14002eb20 = 0;
  }
  FUN_1400122a0((undefined8 *)&DAT_14002eb10);
  return;
}

