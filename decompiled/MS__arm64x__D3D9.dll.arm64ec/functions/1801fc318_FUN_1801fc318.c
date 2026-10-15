/*
 * FUN_1801fc318 at 1801fc318
 * undefined FUN_1801fc318(void)
 * Address ranges: 1801fc318-1801fc363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1801fc318(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_180238110;
  FUN_1801fbee8();
  FUN_1801fb650(param_1);
  if ((param_2 & 1) != 0) {
    FUN_1802229d8(param_1,0x4a0);
  }
  return param_1;
}

