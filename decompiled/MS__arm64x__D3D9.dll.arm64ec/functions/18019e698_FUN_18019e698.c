/*
 * FUN_18019e698 at 18019e698
 * undefined FUN_18019e698(void)
 * Address ranges: 18019e698-18019e70f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18019e698(longlong param_1)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x249) != '\0') {
    FUN_180198b40(param_1 + 0x180,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    FUN_180198b40(param_1 + 0x1c0,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34));
    lVar1 = 0x30;
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar1 = 0x38;
    }
    FUN_180198b40(param_1 + 0x200,*(undefined4 *)(param_1 + lVar1),*(undefined4 *)(param_1 + 0x34));
    FUN_180104270(*(longlong *)(param_1 + 0x50) + 0x618,0,param_1);
  }
  FUN_18019a628(param_1);
  return;
}

