/*
 * FUN_18004df70 at 18004df70
 * undefined __cdecl FUN_18004df70(longlong param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4)
 * Address ranges: 18004df70-18004df77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004df70(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_18004b5e0(param_1);
  FUN_18004b680(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x688) + 0x248))
            (*(longlong **)(param_1 + 0x688),param_2,param_3,param_4);
  return;
}

