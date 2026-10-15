/*
 * FUN_18004d49c at 18004d49c
 * undefined __fastcall FUN_18004d49c(undefined8 * param_1)
 * Address ranges: 18004d49c-18004d4f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d49c(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_180064948;
  FUN_18004e02c((longlong)param_1);
  lVar2 = 0x10;
  puVar1 = param_1 + 0x3256;
  do {
    puVar1 = puVar1 + -0x318;
    FUN_18004ae18((longlong)puVar1);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_18004db64(param_1);
  return;
}

