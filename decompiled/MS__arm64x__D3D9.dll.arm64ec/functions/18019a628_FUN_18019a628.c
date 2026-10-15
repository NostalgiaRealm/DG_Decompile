/*
 * FUN_18019a628 at 18019a628
 * undefined FUN_18019a628(void)
 * Address ranges: 18019a628-18019a6ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019a628(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    lVar1 = 0x30;
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar1 = 0x38;
    }
    FUN_180198b40(param_1 + 0x118,*(undefined4 *)(param_1 + lVar1),*(undefined4 *)(param_1 + 0x34));
    FUN_180198b40(param_1 + 0x60,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x34));
    FUN_180198b40(param_1 + 0xa0,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    FUN_1802229d8(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x168) = 0;
    FUN_180104270(*(longlong *)(param_1 + 0x50) + 0x618,0,param_1);
  }
  return;
}

