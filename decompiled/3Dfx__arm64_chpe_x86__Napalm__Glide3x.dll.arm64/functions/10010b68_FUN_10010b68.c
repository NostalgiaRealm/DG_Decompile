/*
 * FUN_10010b68 at 10010b68
 * undefined FUN_10010b68(void)
 * Address ranges: 10010b68-10010cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10010b68(undefined8 param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = *param_3;
  if (iVar6 == 4) {
    iVar6 = param_3[2];
  }
  iVar4 = param_3[2];
  bVar1 = iVar6 - 8U < 2;
  iVar2 = param_3[4];
  if (param_3[4] == 4) {
    iVar2 = iVar4;
  }
  iVar3 = param_3[6];
  if (param_3[6] == 4) {
    iVar3 = iVar4;
  }
  if ((((iVar6 - 8U < 2) && (param_3[1] != 0)) || ((iVar4 - 8U < 2 && (param_3[3] != 0)))) ||
     ((iVar2 - 8U < 2 || iVar3 == 8 || (uVar5 = 0, iVar3 == 9)))) {
    uVar5 = 0x30;
  }
  iVar6 = *param_2;
  if (iVar6 == 4) {
    iVar6 = param_2[2];
  }
  iVar4 = param_2[2];
  iVar2 = param_2[4];
  if (param_2[4] == 4) {
    iVar2 = iVar4;
  }
  iVar3 = param_2[6];
  if (param_2[6] == 4) {
    iVar3 = iVar4;
  }
  if ((((iVar6 == 8) && (param_2[1] != 0)) || ((iVar4 == 8 && (param_2[3] != 0)))) ||
     (iVar2 == 8 || iVar3 == 8)) {
    uVar5 = 0x30;
  }
  if ((((iVar6 == 9) && (param_2[1] != 0)) || ((iVar4 == 9 && (param_2[3] != 0)))) ||
     ((((iVar2 == 9 || iVar3 == 9 || (iVar2 == 2 && bVar1)) || (iVar2 == 3 && bVar1)) ||
      (iVar3 == 2 && bVar1)))) {
    uVar5 = uVar5 | 0x28;
  }
  return uVar5;
}

