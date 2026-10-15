/*
 * FUN_1800219a8 at 1800219a8
 * undefined __fastcall FUN_1800219a8(longlong param_1, byte param_2, byte param_3)
 * Address ranges: 1800219a8-180021a06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800219a8(longlong param_1,byte param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_180021ac4(param_1,param_2,param_3);
  if ((char)uVar1 == '\0') {
    if (*(int *)(*(longlong *)(param_1 + 0x2c8) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + 0x34) = 0;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x2c0) + 0x34) != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2c0) + 0x34) = 0;
    }
    FUN_180021a10(param_1,param_2,param_3);
  }
  return;
}

