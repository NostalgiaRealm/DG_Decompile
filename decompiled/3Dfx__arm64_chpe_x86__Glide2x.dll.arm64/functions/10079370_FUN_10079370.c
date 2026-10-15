/*
 * FUN_10079370 at 10079370
 * undefined FUN_10079370(void)
 * Address ranges: 10079370-10079447
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10079370(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  piVar1 = param_1 + 3;
  uVar7 = 0;
  if (*piVar1 != -1) {
    puVar3 = (undefined4 *)(*param_1 + *piVar1 * 0xc);
    uVar7 = *puVar3;
    *puVar3 = 0;
    iVar4 = *piVar1;
    iVar5 = *param_1;
    piVar2 = (int *)(iVar5 + iVar4 * 0xc + 8);
    iVar6 = *piVar2;
    if ((iVar6 != -1) && (*(int *)(iVar5 + iVar6 * 0xc) != 0)) {
      *piVar1 = iVar6;
      piVar1 = param_1 + 4;
      *piVar2 = *(int *)(iVar5 + *piVar1 * 0xc + 8);
      *(int *)(*param_1 + iVar4 * 0xc + 4) = *piVar1;
      *(int *)(*param_1 + *piVar1 * 0xc + 8) = iVar4;
      iVar5 = *(int *)(*param_1 + iVar4 * 0xc + 8);
      if (iVar5 != -1) {
        *(int *)(*param_1 + iVar5 * 0xc + 4) = iVar4;
      }
    }
  }
  return uVar7;
}

