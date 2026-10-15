/*
 * FUN_10008e40 at 10008e40
 * uint __stdcall FUN_10008e40(int * param_1, int * param_2)
 * Address ranges: 10008e40-10008f49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10008e40(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar5 = *param_2;
  if (iVar5 == 4) {
    iVar5 = param_2[2];
  }
  iVar1 = param_2[2];
  if ((iVar5 == 8) || (bVar2 = false, iVar5 == 9)) {
    bVar2 = true;
  }
  iVar4 = param_2[4];
  if (param_2[4] == 4) {
    iVar4 = iVar1;
  }
  iVar3 = param_2[6];
  if (param_2[6] == 4) {
    iVar3 = iVar1;
  }
  if ((((iVar5 == 8) || (iVar5 == 9)) && (param_2[1] != 0)) ||
     ((((iVar1 == 8 || (iVar1 == 9)) && (param_2[3] != 0)) ||
      (((iVar4 == 8 || (iVar4 == 9)) || ((iVar3 == 8 || (iVar3 == 9)))))))) {
    uVar6 = 0x30;
  }
  iVar5 = *param_1;
  if (iVar5 == 4) {
    iVar5 = param_1[2];
  }
  iVar1 = param_1[2];
  iVar4 = param_1[4];
  if (param_1[4] == 4) {
    iVar4 = iVar1;
  }
  iVar3 = param_1[6];
  if (param_1[6] == 4) {
    iVar3 = iVar1;
  }
  if (((iVar5 == 8) && (param_1[1] != 0)) ||
     (((iVar1 == 8 && (param_1[3] != 0)) || ((iVar4 == 8 || (iVar3 == 8)))))) {
    uVar6 = 0x30;
  }
  if ((((iVar5 == 9) && (param_1[1] != 0)) || ((iVar1 == 9 && (param_1[3] != 0)))) ||
     ((((iVar4 == 9 || (iVar3 == 9)) || ((iVar4 == 2 && (bVar2)))) ||
      (((iVar4 == 3 && (bVar2)) || ((iVar3 == 2 && (bVar2)))))))) {
    uVar6 = uVar6 | 0x28;
  }
  return uVar6;
}

