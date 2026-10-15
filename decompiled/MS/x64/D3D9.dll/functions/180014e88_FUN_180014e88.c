/*
 * FUN_180014e88 at 180014e88
 * undefined __fastcall FUN_180014e88(longlong param_1, undefined8 param_2)
 * Address ranges: 180014e88-180014ec8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180014e88(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x30))
            (*(longlong **)(lVar1 + 0x70),*(undefined4 *)(lVar1 + 0x94),
             *(undefined4 *)(lVar1 + 0x98),1);
  *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x70) = param_2;
  return;
}

