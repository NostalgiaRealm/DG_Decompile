/*
 * FUN_1800158e0 at 1800158e0
 * undefined __fastcall FUN_1800158e0(longlong * param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7)
 * Address ranges: 1800158e0-18001594c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800158e0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_1 + 0x2e0))();
  (**(code **)(*(longlong *)param_1[0x660] + 0x50))((longlong *)param_1[0x660],0,0);
  *(undefined4 *)((longlong)param_1 + 0x2a34) = param_5;
  *(undefined4 *)(param_1 + 0x547) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x2a3c) = param_3;
  *(undefined4 *)(param_1 + 0x548) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x2a44) = param_7;
  return;
}

