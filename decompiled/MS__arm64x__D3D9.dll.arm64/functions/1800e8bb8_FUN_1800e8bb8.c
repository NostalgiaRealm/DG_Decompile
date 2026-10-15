/*
 * FUN_1800e8bb8 at 1800e8bb8
 * undefined FUN_1800e8bb8(void)
 * Address ranges: 1800e8bb8-1800e8c4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e8bb8(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  ulonglong uVar1;
  
  if ((*(longlong *)(param_1 + 0xb10) != 0) && (param_2 != 0)) {
    uVar1 = FUN_1800f1b78(*(undefined8 *)(param_1 + 0xb18));
    if ((*(int *)(*(longlong *)(param_1 + 0xb10) + 0x30) != 3) &&
       (uVar1 = func_0x00018020d9b8(uVar1,param_5,param_4,uVar1 & 0xffffffff), (uVar1 & 1) != 0)) {
      FUN_1800e7f80(param_1,param_2,param_3);
    }
  }
  return;
}

