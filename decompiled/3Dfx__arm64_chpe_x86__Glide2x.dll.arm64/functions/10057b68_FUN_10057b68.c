/*
 * FUN_10057b68 at 10057b68
 * undefined FUN_10057b68(void)
 * Address ranges: 10057b68-10057c6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10057b68(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = param_1[5];
  if (iVar2 != 0) {
    do {
      iVar2 = iVar2 + -1;
      iVar1 = param_1[3] + iVar2 * 0x18;
      piVar3 = *(int **)(iVar1 + 0x10);
      iVar6 = piVar3[1];
      while (iVar6 != 0) {
        iVar5 = iVar6 + -1;
        iVar4 = *piVar3 + iVar6 * 0x74;
        iVar6 = iVar5;
        if (*(int *)(iVar4 + -0x48) == param_2) {
          FUN_10059120(*param_1,*(undefined4 *)(iVar4 + -4),FUN_10057c70,1);
          FUN_10057f60(piVar3,iVar5);
          param_1[6] = param_1[6] + -1;
        }
      }
      if (piVar3[1] == 0) {
        FUN_10057d78(param_1 + 3,iVar1 + 8);
      }
    } while (iVar2 != 0);
  }
  return;
}

