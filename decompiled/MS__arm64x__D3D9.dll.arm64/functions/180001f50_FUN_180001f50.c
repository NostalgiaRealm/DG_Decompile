/*
 * FUN_180001f50 at 180001f50
 * undefined FUN_180001f50(void)
 * Address ranges: 180001f50-180001fdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180001f50(void)

{
  undefined8 uVar1;
  
  if (DAT_18024de20 == 0) {
    if (DAT_18024de18 != 0) {
      (*__imp_KERNEL32_dll_FreeLibrary)();
      DAT_18024de18 = 0;
    }
    FUN_1800a8548();
    if (DAT_18024de58 != (longlong *)0x0) {
      (**(code **)(*DAT_18024de58 + 0x60))();
      if (DAT_18024de58 != (longlong *)0x0) {
        (**(code **)*DAT_18024de58)(DAT_18024de58,1);
      }
      DAT_18024de58 = (longlong *)0x0;
      FUN_180100178(DAT_18024de60);
      DAT_18024de60 = 0;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

