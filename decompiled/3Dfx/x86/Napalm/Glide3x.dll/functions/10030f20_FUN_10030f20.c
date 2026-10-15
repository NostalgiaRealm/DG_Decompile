/*
 * FUN_10030f20 at 10030f20
 * int * __fastcall FUN_10030f20(int param_1)
 * Address ranges: 10030f20-10030f5e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_10030f20(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + -4);
  iVar4 = *piVar1;
  iVar3 = iVar4 * 0x10 + param_1;
  while (iVar4 != 0) {
    piVar2 = (int *)(iVar3 + -0xc);
    iVar3 = iVar3 + -0x10;
    iVar4 = iVar4 + -1;
    if (*piVar2 != 0) {
      FUN_1003101d(*piVar2);
    }
  }
  FUN_100556b1(piVar1);
  return piVar1;
}

