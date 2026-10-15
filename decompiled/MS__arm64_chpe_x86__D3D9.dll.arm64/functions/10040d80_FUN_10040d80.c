/*
 * FUN_10040d80 at 10040d80
 * undefined FUN_10040d80(void)
 * Address ranges: 10040d80-10040ddf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10040d80(int param_1)

{
  undefined1 uVar1;
  
  FUN_10040cf0(param_1);
  uVar1 = FUN_1003f030(param_1,*(undefined4 *)(param_1 + 0xb4),
                       *(int *)(param_1 + 0x10) * 0x40 + 0xfffU & 0xfffff000,
                       *(char *)(param_1 + 0x48),*(char *)(param_1 + 0x48) == '\0');
  return uVar1;
}

