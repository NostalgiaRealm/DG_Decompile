/*
 * FUN_100e7310 at 100e7310
 * undefined FUN_100e7310(void)
 * Address ranges: 100e7310-100e73cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100e7310(int param_1,int param_2)

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
      (*(code *)PTR_FUN_10134070)(iVar1);
      FUN_100df258(iVar4,iVar3,1);
      (*(code *)PTR_FUN_101340bc)(iVar1);
      FUN_100e8d18(*(undefined4 *)(param_1 + 0x10),piVar2);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x14);
  FUN_100fec90(param_2,0x2d0);
  return;
}

