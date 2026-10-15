/*
 * FUN_1800ea3a8 at 1800ea3a8
 * undefined FUN_1800ea3a8(void)
 * Address ranges: 1800ea3a8-1800ea41f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ea3a8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_1800e8038();
  FUN_1800e80d8(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x98))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6);
  FUN_1800e8088(param_1);
  return;
}

