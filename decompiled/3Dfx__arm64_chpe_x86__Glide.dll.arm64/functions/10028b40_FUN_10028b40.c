/*
 * FUN_10028b40 at 10028b40
 * undefined FUN_10028b40(void)
 * Address ranges: 10028b40-10028c43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10028b40(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + 0x3160);
  FUN_10048850(*piVar1,param_2,param_2 * 3 + -6);
  FUN_10027bd0(*piVar1,param_3,param_2,param_4);
  iVar3 = 1;
  if (1 < param_2 + -1) {
    do {
      **(int **)(*piVar1 + 0x28) = *(int *)(*piVar1 + 0x2c) - param_2;
      *(int *)(*(int *)(*piVar1 + 0x28) + 4) = (*(int *)(*piVar1 + 0x2c) - param_2) + iVar3;
      iVar2 = (*(int *)(*piVar1 + 0x2c) - param_2) + iVar3;
      iVar3 = iVar3 + 1;
      *(int *)(*(int *)(*piVar1 + 0x28) + 8) = iVar2 + 1;
      *(int *)(*piVar1 + 0x28) = *(int *)(*piVar1 + 0x28) + 0xc;
    } while (iVar3 < param_2 + -1);
  }
  return;
}

