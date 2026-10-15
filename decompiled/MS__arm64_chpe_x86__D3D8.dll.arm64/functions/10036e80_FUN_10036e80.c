/*
 * FUN_10036e80 at 10036e80
 * undefined FUN_10036e80(void)
 * Address ranges: 10036e80-10036edf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_10036e80(int param_1)

{
  undefined1 uVar1;
  
  FUN_10036df0(param_1);
  uVar1 = FUN_100351f0(param_1,*(undefined4 *)(param_1 + 0xb4),
                       *(int *)(param_1 + 0x10) * 0x40 + 0xfffU & 0xfffff000,
                       *(char *)(param_1 + 0x48),*(char *)(param_1 + 0x48) == '\0');
  return uVar1;
}

