/*
 * FUN_1007a9a8 at 1007a9a8
 * undefined FUN_1007a9a8(void)
 * Address ranges: 1007a9a8-1007aa5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1007a9a8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar3 = (int *)*param_1;
  uVar4 = param_1[1];
  if ((uVar4 != 0) && ((char)piVar3[3] != '\0')) {
    piVar2 = piVar3 + 1;
    if ((uint)piVar3[2] < (*piVar2 - *piVar3) + uVar4 * 4) {
      FUN_1007a898(piVar3,uVar4 * 4);
    }
    param_1 = param_1 + 2;
    uVar5 = 0;
    if (uVar4 != 0) {
      do {
        iVar1 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *(int *)(*piVar2 + iVar1) = *param_1;
        param_1 = param_1 + 1;
      } while (uVar5 < uVar4);
    }
    *piVar2 = *piVar2 + uVar4 * 4;
  }
  return;
}

