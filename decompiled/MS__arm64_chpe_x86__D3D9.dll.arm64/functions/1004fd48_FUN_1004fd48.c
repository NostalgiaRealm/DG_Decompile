/*
 * FUN_1004fd48 at 1004fd48
 * undefined FUN_1004fd48(void)
 * Address ranges: 1004fd48-1004fe9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004fd48(uint *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 * 0x20;
  uVar2 = *(uint *)(&DAT_10161480 + param_2 * 4);
  *param_3 = CONCAT44(*(uint *)(&DAT_101614b4 + iVar1) & param_1[1],
                      *(uint *)(&DAT_101614b0 + iVar1) & *param_1);
  param_3[1] = CONCAT44(*(uint *)(&DAT_101614bc + iVar1) & param_1[3],
                        *(uint *)(&DAT_101614b8 + iVar1) & param_1[2]);
  param_3[2] = CONCAT44(*(uint *)(&DAT_101614c4 + iVar1) & param_1[5],
                        *(uint *)(&DAT_101614c0 + iVar1) & param_1[4]);
  param_3[3] = CONCAT44(*(uint *)(&DAT_101614cc + iVar1) & param_1[7],
                        *(uint *)(&DAT_101614c8 + iVar1) & param_1[6]);
  param_3[4] = CONCAT44(param_1[9] & uVar2,param_1[8] & uVar2);
  param_3[5] = CONCAT44(param_1[0xb] & uVar2,param_1[10] & uVar2);
  param_3[6] = CONCAT44(param_1[0xd] & uVar2,param_1[0xc] & uVar2);
  return;
}

