/*
 * FUN_10042528 at 10042528
 * undefined FUN_10042528(void)
 * Address ranges: 10042528-1004267f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10042528(uint *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 * 0x20;
  uVar2 = *(uint *)(&DAT_1012bb00 + param_2 * 4);
  *param_3 = CONCAT44(*(uint *)(&DAT_1012bb34 + iVar1) & param_1[1],
                      *(uint *)(&DAT_1012bb30 + iVar1) & *param_1);
  param_3[1] = CONCAT44(*(uint *)(&DAT_1012bb3c + iVar1) & param_1[3],
                        *(uint *)(&DAT_1012bb38 + iVar1) & param_1[2]);
  param_3[2] = CONCAT44(*(uint *)(&DAT_1012bb44 + iVar1) & param_1[5],
                        *(uint *)(&DAT_1012bb40 + iVar1) & param_1[4]);
  param_3[3] = CONCAT44(*(uint *)(&DAT_1012bb4c + iVar1) & param_1[7],
                        *(uint *)(&DAT_1012bb48 + iVar1) & param_1[6]);
  param_3[4] = CONCAT44(param_1[9] & uVar2,param_1[8] & uVar2);
  param_3[5] = CONCAT44(param_1[0xb] & uVar2,param_1[10] & uVar2);
  param_3[6] = CONCAT44(param_1[0xd] & uVar2,param_1[0xc] & uVar2);
  return;
}

