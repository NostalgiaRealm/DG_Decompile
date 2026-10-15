/*
 * FUN_10014130 at 10014130
 * undefined FUN_10014130(void)
 * Address ranges: 10014130-100141e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10014130(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_10070d88(*(undefined4 *)(param_1 + 0x3680),*(undefined4 *)(param_1 + 0x3684),param_2,param_3,
               param_4,param_5);
  if (*(char *)(param_1 + 0x4274) == '\0') {
    FUN_10070c08(*(undefined4 *)(*(int *)(param_1 + 0x4278) + 0x3680),
                 *(undefined4 *)(*(int *)(param_1 + 0x4278) + 0x3684),0);
    FUN_10070ce8(*(undefined4 *)(*(int *)(param_1 + 0x4278) + 0x3680),
                 *(undefined4 *)(*(int *)(param_1 + 0x4278) + 0x3684),
                 *(undefined4 *)(param_1 + 0x429c),0x2a);
    *(undefined1 *)(param_1 + 0x4274) = 1;
  }
  return;
}

