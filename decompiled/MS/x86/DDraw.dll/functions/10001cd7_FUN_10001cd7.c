/*
 * FUN_10001cd7 at 10001cd7
 * undefined __stdcall FUN_10001cd7(void)
 * Address ranges: 10001cd7-10001d15
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001cd7(void)

{
  if (DAT_1006c21c != (int *)0x0) {
    (**(code **)(*DAT_1006c21c + 0x30))();
    if (DAT_1006c21c != (int *)0x0) {
      (**(code **)*DAT_1006c21c)(1);
    }
    DAT_1006c21c = (int *)0x0;
    FUN_1005d470(DAT_1006c210);
    DAT_1006c210 = (undefined4 *)0x0;
  }
  return;
}

