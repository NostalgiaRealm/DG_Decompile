/*
 * FUN_180207cd0 at 180207cd0
 * undefined FUN_180207cd0(void)
 * Address ranges: 180207cd0-180207d63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180207cd0(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  
  if ((*(longlong *)(param_1 + 0xb10) != 0) && (param_2 != 0)) {
    uVar1 = FUN_18020e268(*(undefined8 *)(param_1 + 0xb18));
    if ((*(int *)(*(longlong *)(param_1 + 0xb10) + 0x30) != 3) &&
       (uVar1 = FUN_18020d9b8(uVar1,param_5,param_4,uVar1 & 0xffffffff), (uVar1 & 1) != 0)) {
      FUN_180206e88(param_1,param_2,param_3);
    }
  }
  return;
}

