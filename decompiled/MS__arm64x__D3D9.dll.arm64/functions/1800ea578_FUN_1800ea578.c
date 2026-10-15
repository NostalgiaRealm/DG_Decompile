/*
 * FUN_1800ea578 at 1800ea578
 * undefined FUN_1800ea578(void)
 * Address ranges: 1800ea578-1800ea5e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ea578(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  FUN_1800e8038();
  FUN_1800e80d8(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x180))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5);
  FUN_1800e8088(param_1);
  return;
}

