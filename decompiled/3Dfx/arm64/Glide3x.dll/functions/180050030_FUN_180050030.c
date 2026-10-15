/*
 * FUN_180050030 at 180050030
 * undefined __cdecl FUN_180050030(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6)
 * Address ranges: 180050030-1800500a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050030(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  FUN_18004e320(param_1);
  FUN_18004e3c0(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x68))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4,param_5,param_6);
  FUN_18004e370(param_1);
  return;
}

