/*
 * FUN_10033637 at 10033637
 * undefined __fastcall FUN_10033637(int param_1)
 * Address ranges: 10033637-1003367d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10033637(int param_1)

{
  uint *puVar1;
  int *piVar2;
  
  puVar1 = (uint *)(*(int *)(param_1 + 4) + 200);
  *puVar1 = *puVar1 | 4;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0xaf) = 1;
  if ((((*(uint *)(param_1 + 0x1b8) & 0x208) != 0) &&
      (piVar2 = *(int **)(param_1 + 0x110), piVar2 != (int *)0x0)) &&
     (piVar2[0x42] == *(int *)(param_1 + 0x108))) {
                    /* WARNING: Could not recover jumptable at 0x10033677. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar2 + 0x58))();
    return;
  }
  return;
}

