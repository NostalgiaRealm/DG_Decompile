/*
 * FUN_10056b90 at 10056b90
 * undefined FUN_10056b90(void)
 * Address ranges: 10056b90-10056c4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10056b90(int param_1,int param_2)

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
      (*(code *)PTR_FUN_1009d03c)(iVar1);
      FUN_1005e298(iVar4,iVar3,1);
      (*(code *)PTR_FUN_1009d090)(iVar1);
      FUN_10057e98(*(undefined4 *)(param_1 + 0x10),piVar2);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x14);
  FUN_10079ff0(param_2,0x2d0);
  return;
}

