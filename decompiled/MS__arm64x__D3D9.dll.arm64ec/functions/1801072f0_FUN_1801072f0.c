/*
 * FUN_1801072f0 at 1801072f0
 * undefined FUN_1801072f0(void)
 * Address ranges: 1801072f0-180107323
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801072f0(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  do {
    if (param_1 == (&DAT_1802298c0)[uVar2]) {
      return 1;
    }
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < 0x43);
  return 0;
}

