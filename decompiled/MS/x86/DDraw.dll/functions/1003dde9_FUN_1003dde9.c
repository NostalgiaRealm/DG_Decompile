/*
 * FUN_1003dde9 at 1003dde9
 * int * __fastcall FUN_1003dde9(int param_1)
 * Address ranges: 1003dde9-1003de27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_1003dde9(int param_1)

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
      FUN_1003dee6(*piVar2);
    }
  }
  FUN_10060c0c(piVar1);
  return piVar1;
}

