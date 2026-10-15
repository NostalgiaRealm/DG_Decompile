/*
 * FUN_100af1e0 at 100af1e0
 * undefined FUN_100af1e0(void)
 * Address ranges: 100af1e0-100af24b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100af1e0(undefined4 *param_1)

{
  ulonglong uVar1;
  
  *param_1 = &DAT_1012a2b4;
  param_1[0x18] = &PTR_FUN_10129290;
  param_1[0x1c] = &PTR_FUN_1012a274;
  uVar1 = FUN_10002950(param_1);
  if ((uVar1 & 1) != 0) {
    FUN_100b08d0();
  }
  FUN_100fed00(param_1[0x20]);
  FUN_100016a0(param_1);
  return;
}

