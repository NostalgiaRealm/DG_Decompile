/*
 * FUN_10018264 at 10018264
 * undefined __fastcall FUN_10018264(int param_1)
 * Address ranges: 10018264-10018293
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10018264(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_f0 [236];
  
  piVar1 = FUN_10007985(local_f0,param_1 + 0x330);
  piVar3 = (int *)(param_1 + 0x244);
  for (iVar2 = 0x3b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  return;
}

