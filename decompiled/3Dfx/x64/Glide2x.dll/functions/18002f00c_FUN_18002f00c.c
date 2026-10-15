/*
 * FUN_18002f00c at 18002f00c
 * undefined __fastcall FUN_18002f00c(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 18002f00c-18002f06a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f00c(longlong param_1,byte param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18002f128(param_1,param_2,param_3);
  if ((char)uVar1 == '\0') {
    if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x34) = 0;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x34) = 0;
    }
    FUN_18002f074(param_1,param_2,param_3);
  }
  return;
}

