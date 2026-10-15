/*
 * FUN_10008d98 at 10008d98
 * undefined4 __stdcall FUN_10008d98(int * param_1, int * param_2)
 * Address ranges: 10008d98-10008e3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10008d98(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if ((*param_2 == 1) || (bVar2 = false, *param_2 == 0xf)) {
    bVar2 = true;
  }
  if ((param_2[2] == 1) || (bVar3 = false, param_2[2] == 0xf)) {
    bVar3 = true;
  }
  if (((((((!bVar2) || (param_2[1] == 0)) && ((!bVar3 || (param_2[3] == 0)))) &&
        ((((param_2[4] != 1 && (param_2[4] != 0xf)) && (param_2[6] != 1)) && (param_2[6] != 0xf))))
       && (((*param_1 != 1 && (*param_1 != 0xf)) || (param_1[1] == 0)))) &&
      (((param_1[2] != 1 && (param_1[2] != 0xf)) || (param_1[3] == 0)))) &&
     (((((iVar1 = param_1[4], iVar1 != 1 && (iVar1 != 0xf)) && (param_1[6] != 1)) &&
       (((param_1[6] != 0xf && ((iVar1 != 2 || (!bVar3)))) && ((iVar1 != 3 || (!bVar2)))))) &&
      ((param_1[6] != 2 || (!bVar3)))))) {
    uVar4 = 0;
  }
  return uVar4;
}

