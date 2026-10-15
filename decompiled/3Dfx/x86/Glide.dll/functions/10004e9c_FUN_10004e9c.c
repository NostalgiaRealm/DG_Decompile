/*
 * FUN_10004e9c at 10004e9c
 * undefined __fastcall FUN_10004e9c(int param_1)
 * Address ranges: 10004e9c-10004f34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10004e9c(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_10004e2f(0x40);
  FUN_100051a0();
  uVar1 = 0;
  do {
    FUN_10004e2f(uVar1);
    FUN_100051a0();
    lVar2 = FUN_100508e0();
    *(char *)(uVar1 + param_1) = (char)lVar2;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x40);
  return;
}

