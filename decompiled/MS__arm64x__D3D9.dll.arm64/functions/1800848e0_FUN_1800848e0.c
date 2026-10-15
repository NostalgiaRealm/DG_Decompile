/*
 * FUN_1800848e0 at 1800848e0
 * undefined FUN_1800848e0(void)
 * Address ranges: 1800848e0-180084963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800848e0(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    lVar1 = 0x30;
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar1 = 0x38;
    }
    FUN_180083208(param_1 + 0x118,*(undefined4 *)(param_1 + lVar1),*(undefined4 *)(param_1 + 0x34));
    FUN_180083208(param_1 + 0x60,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x34));
    FUN_180083208(param_1 + 0xa0,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x168) = 0;
    FUN_180001550(*(longlong *)(param_1 + 0x50) + 0x618,0,param_1);
  }
  return;
}

