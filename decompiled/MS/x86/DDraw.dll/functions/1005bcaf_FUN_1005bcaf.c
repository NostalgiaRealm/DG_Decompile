/*
 * FUN_1005bcaf at 1005bcaf
 * int * __fastcall FUN_1005bcaf(int param_1, int param_2)
 * Address ranges: 1005bcaf-1005bcfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_1005bcaf(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_10060bca(0x10);
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_1;
    piVar2[1] = param_2;
    piVar2[2] = 0;
    piVar2[3] = 0;
    bVar1 = FUN_1005bc51(piVar2);
    if (bVar1) {
      return piVar2;
    }
    FUN_1005bc35((int)piVar2);
    FUN_10060be1(piVar2);
  }
  return (int *)0x0;
}

