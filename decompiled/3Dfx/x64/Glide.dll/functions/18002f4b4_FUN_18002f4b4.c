/*
 * FUN_18002f4b4 at 18002f4b4
 * undefined __fastcall FUN_18002f4b4(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 18002f4b4-18002f512
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f4b4(longlong param_1,byte param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_18002f5d0(param_1,param_2,param_3);
  if ((char)uVar1 == '\0') {
    if (*(int *)(*(longlong *)(param_1 + 0x98) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x98) + 0x34) = 0;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x90) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x90) + 0x34) = 0;
    }
    FUN_18002f51c(param_1,param_2,param_3);
  }
  return;
}

