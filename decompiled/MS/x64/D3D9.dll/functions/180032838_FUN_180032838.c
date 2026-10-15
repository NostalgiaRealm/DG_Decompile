/*
 * FUN_180032838 at 180032838
 * undefined __fastcall FUN_180032838(longlong param_1)
 * Address ranges: 180032838-180032870
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180032838(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))
                    (*(longlong **)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x94),
                     *(undefined4 *)(param_1 + 0x98));
  if (cVar1 == '\0') {
    FUN_180033020(param_1);
  }
  *(undefined1 *)(param_1 + 0xee) = 0;
  return;
}

