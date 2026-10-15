/*
 * FUN_1800381d4 at 1800381d4
 * undefined FUN_1800381d4(void)
 * Address ranges: 1800381d4-18003822b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800381d4(void)

{
  undefined8 *unaff_x19;
  ulonglong unaff_x20;
  
  *unaff_x19 = &PTR_FUN_18023bf10;
  unaff_x19[8] = &PTR_D3DPERF_GetStatus_18023bf20;
  thunk_FUN_180102fc0(unaff_x19[0xb]);
  unaff_x19[8] = &PTR_D3DPERF_GetStatus_18023bf20;
  *unaff_x19 = &PTR_FUN_18023bfe8;
  if ((unaff_x20 & 1) != 0) {
    FUN_180102fc0();
  }
  return;
}

