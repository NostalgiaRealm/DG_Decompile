/*
 * FUN_100767d0 at 100767d0
 * undefined FUN_100767d0(void)
 * Address ranges: 100767d0-1007691f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100767d0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int extraout_w1;
  
  iVar2 = param_1[5];
  if (iVar2 != 0) {
    do {
      iVar2 = iVar2 + -1;
      iVar1 = param_1[3] + iVar2 * 0x18;
      piVar3 = *(int **)(iVar1 + 0x10);
      iVar4 = piVar3[1];
      while (iVar4 != 0) {
        iVar5 = *piVar3 + iVar4 * 0x74;
        if ((((*(int *)(iVar5 + -0x70) == param_2) || (*(int *)(iVar5 + -0x6c) == param_2)) ||
            (*(int *)(iVar5 + -0x68) == param_2)) ||
           ((*(int *)(iVar5 + -100) == param_2 || (*(int *)(iVar5 + -0x60) == param_2)))) {
          FUN_10078440(*param_1,*(undefined4 *)(iVar5 + -4),FUN_10076d40,1);
          FUN_10077030(piVar3,iVar4 + -1);
          param_1[6] = param_1[6] + -1;
          iVar4 = extraout_w1;
        }
        else {
          iVar4 = iVar4 + -1;
        }
      }
      if (piVar3[1] == 0) {
        FUN_10076e48(param_1 + 3,iVar1 + 8);
      }
    } while (iVar2 != 0);
  }
  return;
}

