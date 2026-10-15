/*
 * FUN_180020fb8 at 180020fb8
 * undefined FUN_180020fb8(void)
 * Address ranges: 180020fb8-180021013
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180020fb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_180233928;
  DAT_18024de68 = param_1;
  if (DAT_18024de70 != 0) {
    (*__imp_USER32_dll_DestroyCursor)();
    DAT_18024de70 = 0;
  }
  if (param_1[7] != 0) {
    FUN_180102fc0(param_1[7],0x10);
  }
  return;
}

