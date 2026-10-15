/*
 * FUN_1800a9ecc at 1800a9ecc
 * undefined __fastcall FUN_1800a9ecc(longlong param_1)
 * Address ranges: 1800a9ecc-1800a9f28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a9ecc(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  do {
    FUN_1800aadd0(param_1,uVar2,0);
    FUN_1800fbec0((undefined8 *)(uVar2 * 0xc18 + 0x100c0 + param_1),
                  (undefined8 *)(param_1 + 0x1c240),0xc00);
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < 0x10);
  return;
}

