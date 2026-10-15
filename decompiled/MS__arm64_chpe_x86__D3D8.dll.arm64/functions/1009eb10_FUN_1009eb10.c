/*
 * FUN_1009eb10 at 1009eb10
 * undefined FUN_1009eb10(void)
 * Address ranges: 1009eb10-1009eb8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009eb10(int param_1)

{
  undefined4 *puVar1;
  
  if (*(char *)(param_1 + 300) != '\0') {
    puVar1 = (undefined4 *)(param_1 + 0x24);
    FUN_1009b228(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x20),*puVar1);
    FUN_1009b228(param_1 + 0x48,*(undefined4 *)(param_1 + 0x2c),*puVar1);
    FUN_1009b228(param_1 + 0x84,*(undefined4 *)(param_1 + 0x20),*puVar1);
    FUN_100fed00(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
    *(char *)(param_1 + 300) = '\0';
  }
  return;
}

