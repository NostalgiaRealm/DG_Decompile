/*
 * FUN_180047c14 at 180047c14
 * undefined __fastcall FUN_180047c14(undefined8 * param_1)
 * Address ranges: 180047c14-180047cea
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180047c14(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  *param_1 = &PTR_FUN_180066298;
  puVar1 = param_1 + 0xd6;
  param_1[0xd5] = &PTR_FUN_180066450;
  *puVar1 = &PTR_LAB_180066328;
  if (*(int *)(param_1 + 0xd9) != 0) {
    do {
      plVar2 = *(longlong **)(param_1[0xd8] + uVar5 * 8);
      (**(code **)(*plVar2 + 8))(plVar2,puVar1);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0xd9));
  }
  puVar3 = DAT_18006da68;
  if (DAT_18006da68 != (undefined8 *)0x0) {
    FUN_18004511c(DAT_18006da68);
    FUN_180060ac0(puVar3);
  }
  DAT_18006da68 = (undefined8 *)0x0;
  param_1[0x11a] = 0;
  FUN_180050638((longlong)param_1);
  lVar6 = 0x10;
  puVar3 = param_1 + 0x36a0;
  do {
    puVar3 = puVar3 + -0x358;
    FUN_180047ac0((longlong)puVar3);
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  FUN_18005994c(puVar1);
  FUN_180050170(param_1);
  return;
}

