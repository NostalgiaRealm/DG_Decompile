/*
 * FUN_1800ec708 at 1800ec708
 * undefined FUN_1800ec708(void)
 * Address ranges: 1800ec708-1800ec7e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ec708(undefined8 *param_1)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  uVar3 = 0;
  *param_1 = &PTR_FUN_18023bce0;
  param_1[0xd5] = &PTR_FUN_18023be98;
  param_1[0xd6] = &PTR_DAT_18023bd70;
  if (*(int *)(param_1 + 0xd9) != 0) {
    do {
      plVar2 = *(longlong **)(param_1[0xd8] + uVar3 * 8);
      (**(code **)(*plVar2 + 8))(plVar2,param_1 + 0xd6);
      uVar1 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0xd9));
  }
  lVar5 = DAT_18024e318;
  if (DAT_18024e318 != 0) {
    FUN_1800f0f88(DAT_18024e318);
    FUN_180102fc0(lVar5,0x58);
  }
  DAT_18024e318 = 0;
  param_1[0x11a] = 0;
  FUN_1800e40b0(param_1);
  lVar5 = 0x10;
  puVar4 = param_1 + 0x36a0;
  do {
    puVar4 = puVar4 + -0x358;
    lVar5 = lVar5 + -1;
    FUN_1800ec5f0(puVar4);
  } while (lVar5 != 0);
  FUN_1800fbe60(param_1 + 0xd6);
  FUN_1800e3eb8(param_1);
  return;
}

