/*
 * FUN_180045608 at 180045608
 * undefined __fastcall FUN_180045608(undefined8 * param_1)
 * Address ranges: 180045608-1800456de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180045608(undefined8 *param_1)

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
    FUN_180042b10(DAT_18006c890);
    FUN_18005d720(puVar3);
  }
  DAT_18006c890 = (undefined8 *)0x0;
  param_1[0x11a] = 0;
  FUN_18004e02c((longlong)param_1);
  lVar6 = 0x10;
  puVar3 = param_1 + 0x36a0;
  do {
    puVar3 = puVar3 + -0x358;
    FUN_1800454b4((longlong)puVar3);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_180057340(puVar1);
  FUN_18004db64(param_1);
  return;
}

