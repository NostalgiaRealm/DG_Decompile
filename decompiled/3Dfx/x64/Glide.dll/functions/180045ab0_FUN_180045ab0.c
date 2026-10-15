/*
 * FUN_180045ab0 at 180045ab0
 * undefined __fastcall FUN_180045ab0(undefined8 * param_1)
 * Address ranges: 180045ab0-180045b86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180045ab0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  *param_1 = &PTR_FUN_180064008;
  puVar1 = param_1 + 0xd6;
  param_1[0xd5] = &PTR_FUN_1800641c0;
  *puVar1 = &PTR_LAB_180064098;
  if (*(int *)(param_1 + 0xd9) != 0) {
    do {
      plVar2 = *(longlong **)(param_1[0xd8] + uVar5 * 8);
      (**(code **)(*plVar2 + 8))(plVar2,puVar1);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0xd9));
  }
  puVar3 = DAT_18006c890;
  if (DAT_18006c890 != (undefined8 *)0x0) {
    FUN_180042fb8(DAT_18006c890);
    FUN_18005dbc0(puVar3);
  }
  DAT_18006c890 = (undefined8 *)0x0;
  param_1[0x11a] = 0;
  FUN_18004e4d4((longlong)param_1);
  lVar6 = 0x10;
  puVar3 = param_1 + 0x36a0;
  do {
    puVar3 = puVar3 + -0x358;
    FUN_18004595c((longlong)puVar3);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_1800577e8(puVar1);
  FUN_18004e00c(param_1);
  return;
}

