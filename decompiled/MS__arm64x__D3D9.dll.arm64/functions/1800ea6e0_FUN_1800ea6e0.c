/*
 * FUN_1800ea6e0 at 1800ea6e0
 * undefined FUN_1800ea6e0(void)
 * Address ranges: 1800ea6e0-1800ea757
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ea6e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_1800e8038();
  FUN_1800e80d8(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x68))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6);
  FUN_1800e8088(param_1);
  return;
}

