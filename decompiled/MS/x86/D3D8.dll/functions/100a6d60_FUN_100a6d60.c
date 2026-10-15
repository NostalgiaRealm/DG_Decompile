/*
 * FUN_100a6d60 at 100a6d60
 * int * __fastcall FUN_100a6d60(int param_1, int param_2)
 * Address ranges: 100a6d60-100a6dab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * __fastcall FUN_100a6d60(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  
  piVar2 = (int *)FUN_100ad475(0x10);
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_1;
    piVar2[1] = param_2;
    piVar2[2] = 0;
    piVar2[3] = 0;
    bVar1 = FUN_100a6d02(piVar2);
    if (bVar1) {
      return piVar2;
    }
    FUN_100a6ce6((int)piVar2);
    FUN_100ad48c(piVar2);
  }
  return (int *)0x0;
}

