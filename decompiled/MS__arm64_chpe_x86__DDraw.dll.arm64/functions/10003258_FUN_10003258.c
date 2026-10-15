/*
 * FUN_10003258 at 10003258
 * undefined FUN_10003258(void)
 * Address ranges: 10003258-10003347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10003258(int param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  
  param_1 = param_1 * 0x228;
  bVar3 = false;
  iVar2 = *(int *)(&DAT_100be32c + param_1);
  if (param_3 == iVar2 && iVar2 != 0) {
    iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
    if (iVar2 == 0) {
      FUN_10001c10(0);
    }
    iVar2 = *(int *)(&DAT_100be330 + param_1) + -1;
    *(int *)(&DAT_100be330 + param_1) = iVar2;
    bVar3 = iVar2 == 0;
    if (bVar3) {
      iVar2 = *(int *)(&DAT_100be328 + param_1);
      puVar1 = (undefined4 *)(iVar2 + 0x50);
      (*(code *)PTR_FUN_100ba058)(param_3,*puVar1);
      *puVar1 = 0;
      (*(code *)PTR_FUN_100ba01c)(param_3);
      *(undefined1 *)(iVar2 + 0x65) = 1;
      *(int *)(&DAT_100be32c + param_1) = 0;
    }
    *param_4 = 1;
    (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  }
  return bVar3;
}

