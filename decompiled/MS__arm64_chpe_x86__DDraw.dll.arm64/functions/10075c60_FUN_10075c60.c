/*
 * FUN_10075c60 at 10075c60
 * undefined FUN_10075c60(void)
 * Address ranges: 10075c60-10075d1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10075c60(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    piVar2 = (int *)(param_2 + 0x1c + uVar5 * 0x24);
    iVar3 = *piVar2;
    if (iVar3 != -1) {
      iVar4 = *(int *)(param_1 + 0xc);
      iVar1 = iVar4 + 0x1c;
      (*(code *)PTR_FUN_100ba0a0)(iVar1);
      FUN_10072ec8(iVar4,iVar3,1);
      (*(code *)PTR_FUN_100ba0f0)(iVar1);
      FUN_10076f68(*(undefined4 *)(param_1 + 0x10),piVar2);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x14);
  FUN_10091460(param_2,0x2d0);
  return;
}

