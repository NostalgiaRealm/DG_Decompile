/*
 * FUN_180079d2c at 180079d2c
 * undefined1 __fastcall FUN_180079d2c(uint * param_1, ulonglong param_2, undefined8 * param_3, undefined4 param_4, longlong param_5, longlong param_6, undefined8 param_7, undefined4 param_8, ulonglong * param_9, undefined8 * param_10, undefined8 param_11, undefined1 param_12, undefined1 param_13)
 * Address ranges: 180079d2c-180079f04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined1
FUN_180079d2c(uint *param_1,ulonglong param_2,undefined8 *param_3,undefined4 param_4,
             longlong param_5,longlong param_6,undefined8 param_7,undefined4 param_8,
             ulonglong *param_9,undefined8 *param_10,undefined8 param_11,undefined1 param_12,
             undefined1 param_13)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_5318;
  undefined8 local_5314;
  undefined8 uStack_530c;
  undefined8 local_5304;
  undefined8 local_52fc;
  undefined8 local_52f4;
  longlong local_52e8 [2];
  undefined8 *local_52d8;
  undefined8 local_52d0;
  undefined4 local_52c8;
  undefined4 local_52c4;
  undefined4 local_52c0;
  undefined1 local_52bc [36];
  undefined1 *local_5298;
  undefined2 local_5290;
  undefined1 local_5274;
  undefined1 local_5272 [90];
  longlong local_5218;
  undefined4 local_5210;
  undefined1 local_520c;
  undefined1 local_520b;
  undefined1 local_51e8 [912];
  undefined1 local_4e58 [144];
  ulonglong local_4dc8;
  int local_4dbc;
  undefined2 local_4daa;
  undefined1 local_4da8;
  undefined8 local_4a98 [2382];
  undefined8 uStack_28;
  
  uStack_28 = 0x180079d43;
  FUN_180078cb0(param_1,local_4a98,param_3,param_2);
  local_52e8[0] = param_5;
  local_52d8 = local_4a98;
  local_52e8[1] = 0;
  local_52d0 = param_7;
  local_52c0 = 1;
  local_52c4 = param_4;
  FUN_1800fbea0(local_52bc,0,0x464);
  FUN_1800fbea0(local_4e58,0,0x3c0);
  FUN_1800fbea0(local_51e8,0,0x1ec);
  local_5218 = param_6 + 4;
  local_520b = param_12;
  local_5274 = param_13;
  local_520c = 1;
  local_4daa = 0;
  local_4da8 = 0;
  local_5210 = param_4;
  local_4dc8 = param_2;
  FUN_1800fbea0((undefined1 *)&local_52c8,0,0x40);
  local_52c8 = param_8;
  local_5298 = local_5272;
  local_5290 = 0x40;
  local_5318 = 0x43425844;
  local_5314 = 0;
  uStack_530c = 0;
  local_5304 = 1;
  local_52fc = 3;
  local_52f4 = 0;
  FUN_1800edd90((longlong *)param_9,(undefined8 *)&local_5318,0x2c);
  uVar1 = *param_9;
  uVar4 = 0;
  *(int *)(uVar1 + 0x20) = (int)param_9[1] - (int)uVar1;
  uVar3 = FUN_180079240(uVar1,(longlong *)param_9,local_52e8);
  if ((char)uVar3 != '\0') {
    uVar1 = *param_9;
    *(int *)(uVar1 + 0x24) = (int)param_9[1] - (int)uVar1;
    local_4dbc = FUN_18007ab08(uVar1,(longlong *)param_9,(longlong)local_52e8);
    if (local_4dbc != 0) {
      *(int *)(*param_9 + 0x28) = (int)param_9[1] - (int)*param_9;
      cVar2 = FUN_18007943c(param_1,(longlong *)param_9,(longlong)local_52e8);
      if (cVar2 != '\0') {
        FUN_1800edec4((longlong *)param_9);
        FUN_18008831c(param_9,(longlong)local_52e8,param_10);
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

