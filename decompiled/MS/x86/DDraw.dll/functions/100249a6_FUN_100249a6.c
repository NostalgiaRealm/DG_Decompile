/*
 * FUN_100249a6 at 100249a6
 * undefined __fastcall FUN_100249a6(int * param_1)
 * Address ranges: 100249a6-100249d0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100249a6(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = param_1 + 0x11;
  FUN_10022ecc(piVar1);
  iVar2 = FUN_10023519((int)piVar1);
  *piVar1 = 0;
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x100249cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  }
  return;
}

