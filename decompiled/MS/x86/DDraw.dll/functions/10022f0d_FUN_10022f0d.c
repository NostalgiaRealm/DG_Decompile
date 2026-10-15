/*
 * FUN_10022f0d at 10022f0d
 * undefined __fastcall FUN_10022f0d(undefined4 * param_1)
 * Address ranges: 10022f0d-10022f34
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10022f0d(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_100642dc;
  DeleteObject((HGDIOBJ)param_1[0x14]);
  FUN_10022f35((int)param_1);
  piVar1 = (int *)param_1[0x11];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}

