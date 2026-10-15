/*
 * FUN_180018348 at 180018348
 * undefined __cdecl FUN_180018348(longlong * param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 180018348-1800183bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018348(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_1 + 0x2e0))();
  (**(code **)(*(longlong *)param_1[0x660] + 0x50))((longlong *)param_1[0x660],0,0);
  *(undefined4 *)(param_1 + 0x54b) = param_7;
  *(undefined4 *)(param_1 + 0x549) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x2a4c) = param_6;
  *(undefined4 *)(param_1 + 0x54a) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x2a54) = param_4;
  return;
}

