/*
 * FUN_10004211 at 10004211
 * undefined __fastcall FUN_10004211(int * param_1)
 * Address ranges: 10004211-10004262
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10004211(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x14))();
  iVar2 = (**(code **)(*param_1 + 0x10))();
  if ((iVar1 != 0) && ((int *)(&DAT_1006c2b0)[iVar2 * 0x8a] != (int *)0x0)) {
    piVar3 = (int *)(**(code **)(*(int *)(&DAT_1006c2b0)[iVar2 * 0x8a] + 0x30))
                              (iVar1,0,0,4,2,2,0,0,0);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x1c))();
                    /* WARNING: Could not recover jumptable at 0x1000425d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar3 + 0x10))();
      return;
    }
  }
  return;
}

