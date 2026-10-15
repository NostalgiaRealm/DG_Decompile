/*
 * FUN_10015ca0 at 10015ca0
 * undefined __fastcall FUN_10015ca0(int param_1)
 * Address ranges: 10015ca0-10015ccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10015ca0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_f0 [236];
  
  piVar1 = FUN_100073db(local_f0,param_1 + 0x330);
  piVar3 = (int *)(param_1 + 0x244);
  for (iVar2 = 0x3b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  return;
}

