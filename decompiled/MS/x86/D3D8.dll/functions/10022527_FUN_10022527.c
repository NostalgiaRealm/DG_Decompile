/*
 * FUN_10022527 at 10022527
 * undefined __stdcall FUN_10022527(void)
 * Address ranges: 10022527-10022565
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10022527(void)

{
  if (DAT_100ba2b0 != (int *)0x0) {
    (**(code **)(*DAT_100ba2b0 + 0x30))();
    if (DAT_100ba2b0 != (int *)0x0) {
      (**(code **)*DAT_100ba2b0)(1);
    }
    DAT_100ba2b0 = (int *)0x0;
    FUN_100a9adb(DAT_100ba2b4);
    DAT_100ba2b4 = (undefined4 *)0x0;
  }
  return;
}

