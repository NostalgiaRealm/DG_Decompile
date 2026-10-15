/*
 * FUN_180088494 at 180088494
 * undefined1 __fastcall FUN_180088494(uint * param_1, undefined4 param_2, undefined8 param_3, longlong param_4, undefined8 param_5, longlong param_6, undefined8 param_7, int param_8, ulonglong * param_9, undefined8 * param_10, undefined8 param_11, undefined1 param_12, undefined1 param_13)
 * Address ranges: 180088494-18008861b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_180088494(uint *param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,longlong param_6,undefined8 param_7,int param_8,ulonglong *param_9,
             undefined8 *param_10,undefined8 param_11,undefined1 param_12,undefined1 param_13)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined4 local_4e8;
  undefined8 local_4e4;
  undefined8 uStack_4dc;
  undefined8 local_4d4;
  undefined8 local_4cc;
  undefined8 local_4c4;
  longlong local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  int local_498 [12];
  undefined1 *local_468;
  undefined2 local_460;
  undefined1 local_458 [20];
  undefined1 local_444;
  undefined1 local_443;
  undefined1 local_442 [90];
  longlong local_3e8;
  undefined4 local_3e0;
  undefined1 local_3dc;
  undefined1 local_3db;
  undefined1 local_3b8 [920];
  
  local_4b8 = param_6;
  local_4a8 = param_5;
  local_4a0 = param_7;
  local_4b0 = param_3;
  FUN_1800fbea0(local_458,0,0x430);
  FUN_1800fbea0(local_3b8,0,0x1ec);
  local_3e8 = param_4 + 4;
  local_3db = param_12;
  local_3dc = 1;
  local_3e0 = param_2;
  uVar3 = FUN_1800ee040(param_8);
  local_443 = (uint)uVar3 < 0x50;
  local_444 = param_13;
  FUN_1800fbea0((undefined1 *)local_498,0,0x40);
  local_498[0] = param_8;
  local_468 = local_442;
  local_460 = 0x40;
  local_4e8 = 0x43425844;
  local_4e4 = 0;
  uStack_4dc = 0;
  local_4d4 = 1;
  local_4cc = 3;
  local_4c4 = 0;
  FUN_1800edd90((longlong *)param_9,(undefined8 *)&local_4e8,0x2c);
  uVar1 = *param_9;
  uVar4 = 0;
  *(int *)(uVar1 + 0x20) = (int)param_9[1] - (int)uVar1;
  uVar3 = FUN_180084e74(uVar1,(longlong *)param_9,&local_4b8);
  if ((char)uVar3 != '\0') {
    uVar1 = *param_9;
    *(int *)(uVar1 + 0x24) = (int)param_9[1] - (int)uVar1;
    iVar2 = FUN_18007ab08(uVar1,(longlong *)param_9,(longlong)&local_4b8);
    if (iVar2 != 0) {
      *(int *)(*param_9 + 0x28) = (int)param_9[1] - (int)*param_9;
      uVar3 = FUN_180088138(param_1,(longlong *)param_9,(longlong)&local_4b8);
      if ((char)uVar3 != '\0') {
        FUN_1800edec4((longlong *)param_9);
        FUN_18008831c(param_9,(longlong)&local_4b8,param_10);
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

