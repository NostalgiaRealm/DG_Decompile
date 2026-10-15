/*
 * FUN_1801465a4 at 1801465a4
 * undefined FUN_1801465a4(void)
 * Address ranges: 1801465a4-1801465fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801465a4(void)

{
  ulonglong unaff_x19;
  undefined8 *unaff_x20;
  
  *unaff_x20 = &PTR_FUN_1802390d0;
  unaff_x20[8] = &PTR_D3DPERF_GetStatus_native_180239038;
  FUN_1802229d8(unaff_x20[0xb]);
  unaff_x20[8] = &PTR_D3DPERF_GetStatus_native_180239038;
  *unaff_x20 = &PTR_FUN_180239068;
  if ((unaff_x19 & 1) != 0) {
    FUN_1802229d8();
  }
  return;
}

