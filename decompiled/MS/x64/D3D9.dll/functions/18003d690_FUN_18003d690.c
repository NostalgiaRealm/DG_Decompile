/*
 * FUN_18003d690 at 18003d690
 * undefined __fastcall FUN_18003d690(uint * param_1, uint param_2, undefined8 * param_3)
 * Address ranges: 18003d690-18003d78a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003d690(uint *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(param_2 * 8);
  uVar1 = *(uint *)(&DAT_180101ce8 + (ulonglong)param_2 * 4);
  uVar2 = *(uint *)(&DAT_180101d1c + uVar6 * 4);
  uVar3 = param_1[3];
  *param_3 = CONCAT44(*(uint *)(&DAT_180101d14 + uVar6 * 4) & param_1[1],
                      *(uint *)(&DAT_180101d10 + uVar6 * 4) & *param_1);
  uVar4 = *(uint *)(&DAT_180101d20 + uVar6 * 4);
  uVar5 = param_1[4];
  param_3[1] = CONCAT44(uVar2 & uVar3,*(uint *)(&DAT_180101d18 + uVar6 * 4) & param_1[2]);
  uVar2 = *(uint *)(&DAT_180101d28 + uVar6 * 4);
  uVar3 = param_1[6];
  param_3[2] = CONCAT44(*(uint *)(&DAT_180101d24 + uVar6 * 4) & param_1[5],uVar4 & uVar5);
  uVar4 = param_1[8];
  param_3[3] = CONCAT44(*(uint *)(&DAT_180101d2c + uVar6 * 4) & param_1[7],uVar2 & uVar3);
  uVar2 = param_1[10];
  param_3[4] = CONCAT44(param_1[9] & uVar1,uVar4 & uVar1);
  uVar3 = param_1[0xc];
  param_3[5] = CONCAT44(param_1[0xb] & uVar1,uVar2 & uVar1);
  param_3[6] = CONCAT44(param_1[0xd] & uVar1,uVar3 & uVar1);
  return;
}

