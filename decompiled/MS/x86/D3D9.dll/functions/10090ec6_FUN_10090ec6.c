/*
 * FUN_10090ec6 at 10090ec6
 * int __stdcall FUN_10090ec6(int param_1, uint param_2, int * param_3, uint param_4, undefined4 * param_5)
 * Address ranges: 10090ec6-10090f51
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10090ec6(int param_1,uint param_2,int *param_3,uint param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  int extraout_ECX;
  int extraout_EDX;
  int iVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar3 = -0x7789f794;
  if ((((param_3 != (int *)0x0) && (*param_3 == 0xc)) &&
      (uVar2 = FUN_1000271b(param_3[1]), (char)uVar2 != '\0')) &&
     ((((iVar1 = *(int *)(extraout_EDX + 8), iVar1 == 0 || (iVar1 == 1)) || (iVar1 == 2)) &&
      ((param_5 != (undefined4 *)0x0 && ((iVar1 == 0 || (iVar1 == 1)))))))) {
    iVar3 = FUN_10003b94((void *)(param_1 + -0x70),param_2,param_4,extraout_ECX,&local_14);
    param_5[1] = local_14;
    param_5[2] = local_10;
    param_5[3] = local_c;
    *param_5 = 0x18;
    param_5[4] = local_8;
    param_5[5] = 0;
  }
  return iVar3;
}

