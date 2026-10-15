/*
 * FUN_18004d944 at 18004d944
 * undefined __fastcall FUN_18004d944(undefined8 * param_1)
 * Address ranges: 18004d944-18004d99c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d944(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_180064948;
  FUN_18004e4d4((longlong)param_1);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x3256;
  do {
    puVar1 = puVar1 + -0x318;
    FUN_18004b2c0((longlong)puVar1);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_18004e00c(param_1);
  return;
}

