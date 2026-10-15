/*
 * FUN_1002c010 at 1002c010
 * undefined __fastcall FUN_1002c010(int * param_1)
 * Address ranges: 1002c010-1002c061
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002c010(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x14))();
  iVar2 = (**(code **)(*param_1 + 0x10))();
  if ((iVar1 != 0) && ((int *)(&DAT_100df2e8)[iVar2 * 0x8a] != (int *)0x0)) {
    piVar3 = (int *)(**(code **)(*(int *)(&DAT_100df2e8)[iVar2 * 0x8a] + 0x30))
                              (iVar1,0,0,4,2,2,0,0,0);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x1c))();
                    /* WARNING: Could not recover jumptable at 0x1002c05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar3 + 0x10))();
      return;
    }
  }
  return;
}

