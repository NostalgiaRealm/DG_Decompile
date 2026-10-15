/*
 * FUN_100bf130 at 100bf130
 * undefined FUN_100bf130(void)
 * Address ranges: 100bf130-100bf1af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100bf130(int param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 300) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x24);
    FUN_100bb370(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x20),*puVar1);
    FUN_100bb370(param_1 + 0x48,*(undefined4 *)(param_1 + 0x2c),*puVar1);
    FUN_100bb370(param_1 + 0x84,*(undefined4 *)(param_1 + 0x20),*puVar1);
    FUN_101322d0(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    *(char *)(param_1 + 300) = '\0';
  }
  return;
}

