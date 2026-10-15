/*
 * FUN_18008861c at 18008861c
 * undefined __fastcall FUN_18008861c(undefined8 param_1, undefined8 param_2, longlong param_3, longlong * param_4)
 * Address ranges: 18008861c-180088762
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18008861c(undefined8 param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  undefined4 local_4c8;
  undefined8 local_4c4;
  undefined8 uStack_4bc;
  undefined8 local_4b4;
  undefined8 local_4ac;
  longlong local_498 [3];
  undefined8 local_480;
  undefined4 local_478 [12];
  undefined1 *local_448;
  undefined2 local_440;
  undefined1 local_438 [22];
  undefined1 local_422 [66];
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined1 local_3c8 [508];
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  
  local_498[1] = 0;
  local_480 = 0;
  local_498[0] = param_3;
  local_498[2] = param_2;
  FUN_1800fbea0(local_438,0,0x430);
  FUN_1800fbea0(local_3c8,0,0x3c0);
  FUN_1800fbea0((undefined1 *)local_478,0,0x40);
  local_448 = local_422;
  local_478[0] = 0x10040;
  local_440 = 0x40;
  local_1c0 = 0x110803;
  local_1c4 = 0x210803;
  local_4c4 = 0;
  uStack_4bc = 0;
  local_1c8 = 0x310803;
  local_1cc = 0x410803;
  local_1b0 = 0x110804;
  local_1b4 = 0x210804;
  local_1b8 = 0x310804;
  local_1bc = 0x410804;
  local_3e0 = 0x110400;
  local_3dc = 0x410400;
  local_3d8 = 0x20000d00;
  local_4c8 = 0x43425844;
  local_4b4 = 1;
  local_4ac = 1;
  FUN_1800edd90(param_4,(undefined8 *)&local_4c8,0x24);
  lVar1 = *param_4;
  *(int *)(lVar1 + 0x20) = (int)param_4[1] - (int)lVar1;
  FUN_180084e74(lVar1,param_4,local_498);
  FUN_1800edec4(param_4);
  return;
}

