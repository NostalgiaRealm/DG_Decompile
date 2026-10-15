/*
 * FUN_10004b4e at 10004b4e
 * undefined __fastcall FUN_10004b4e(int param_1)
 * Address ranges: 10004b4e-10004be6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10004b4e(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_10004ae1(0x40);
  FUN_10004e50();
  uVar1 = 0;
  do {
    FUN_10004ae1(uVar1);
    FUN_10004e50();
    lVar2 = FUN_10050550();
    *(char *)(uVar1 + param_1) = (char)lVar2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x40);
  return;
}

