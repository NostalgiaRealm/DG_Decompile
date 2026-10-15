/*
 * FUN_18004faa8 at 18004faa8
 * undefined __fastcall FUN_18004faa8(undefined8 * param_1)
 * Address ranges: 18004faa8-18004fb00
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004faa8(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_180066bd8;
  FUN_180050638((longlong)param_1);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x3256;
  do {
    puVar1 = puVar1 + -0x318;
    FUN_18004d424((longlong)puVar1);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_180050170(param_1);
  return;
}

