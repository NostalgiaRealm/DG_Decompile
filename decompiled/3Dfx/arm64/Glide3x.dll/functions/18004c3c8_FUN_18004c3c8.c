/*
 * FUN_18004c3c8 at 18004c3c8
 * undefined __cdecl FUN_18004c3c8(undefined8 * param_1)
 * Address ranges: 18004c3c8-18004c4a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c3c8(undefined8 *param_1)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  uVar3 = 0;
  *param_1 = &PTR_FUN_1800692a8;
  param_1[0xd5] = &PTR_FUN_180069460;
  param_1[0xd6] = &PTR_LAB_180069338;
  if (*(int *)(param_1 + 0xd9) != 0) {
    do {
      plVar2 = *(longlong **)(param_1[0xd8] + uVar3 * 8);
      (**(code **)(*plVar2 + 8))(plVar2,param_1 + 0xd6);
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xd9));
  }
  puVar4 = DAT_18006fa58;
  if (DAT_18006fa58 != (undefined8 *)0x0) {
    FUN_180049288(DAT_18006fa58);
    FUN_180063700(puVar4);
  }
  DAT_18006fa58 = (undefined8 *)0x0;
  param_1[0x11a] = 0;
  FUN_180054b70((longlong)param_1);
  lVar5 = 0x10;
  puVar4 = param_1 + 0x36a0;
  do {
    puVar4 = puVar4 + -0x358;
    lVar5 = lVar5 + -1;
    FUN_18004c2b0((longlong)puVar4);
  } while (lVar5 != 0);
  FUN_18005ca20(param_1 + 0xd6);
  FUN_1800546a8(param_1);
  return;
}

