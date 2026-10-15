/*
 * FUN_1001a170 at 1001a170
 * undefined FUN_1001a170(void)
 * Address ranges: 1001a170-1001a267
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001a170(int param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_10030f48(*(undefined4 *)(param_1 + 0x7c),param_2,param_1 + -0x28,param_4);
  *param_4 = 0;
  if (iVar1 != 0) {
    param_3[2] = 0;
    param_3[3] = 0;
    param_3[0] = 0;
    param_3[1] = 0;
    param_3[6] = 0;
    param_3[7] = 0;
    param_3[4] = 0;
    param_3[5] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    *param_3 = iVar1;
    (*(code *)PTR_FUN_101341e4)(param_2,param_3 + 2,0);
    uVar2 = (*(code *)PTR_FUN_10134010)(0,0,0,0);
    (*(code *)PTR_FUN_101341e8)(param_2,uVar2,0);
    (*(code *)PTR_FUN_10134030)(iVar1,uVar2);
    (*(code *)PTR_FUN_10134018)(uVar2);
    (*(code *)PTR_FUN_101342a0)(param_2,0);
    *param_4 = 1;
  }
  return iVar1;
}

