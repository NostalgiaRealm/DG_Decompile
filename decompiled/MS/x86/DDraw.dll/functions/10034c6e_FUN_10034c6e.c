/*
 * FUN_10034c6e at 10034c6e
 * undefined4 __stdcall FUN_10034c6e(int param_1, int * param_2, undefined * param_3, undefined4 param_4)
 * Address ranges: 10034c6e-10034d18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10034c6e(int param_1,int *param_2,undefined *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_ec [31];
  int local_70;
  uint local_6c;
  
  piVar3 = param_2;
  piVar4 = local_ec;
  for (iVar2 = 0x1f; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  }
  FUN_10031887(local_ec,&local_70);
  local_6c = local_6c & 0x4100e;
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_10062380)[iVar2]) {
      iVar2 = 0;
      goto LAB_10034cc5;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  goto LAB_10034cd2;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_10034ce2:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100623a0)[iVar2]) {
      iVar2 = 0;
      do {
        if (*(int *)(param_1 + iVar2 * 4) != (&DAT_100623b0)[iVar2]) {
          return 0x80004005;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 4);
      break;
    }
  }
  goto LAB_10034d0b;
  while (iVar2 = iVar2 + 1, iVar2 != 4) {
LAB_10034cc5:
    if (*(int *)(param_1 + iVar2 * 4) != (&DAT_10062390)[iVar2]) {
      iVar2 = 0;
      goto LAB_10034ce2;
    }
  }
LAB_10034cd2:
  param_2 = &local_70;
LAB_10034d0b:
  uVar1 = (*(code *)param_3)(param_2,param_4);
  return uVar1;
}

