/*
 * FUN_10011d00 at 10011d00
 * bool __stdcall FUN_10011d00(int param_1, int param_2)
 * Address ranges: 10011d00-10011d2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10011d00(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  
  if (param_1 == 0) {
    bVar2 = true;
  }
  else {
    piVar1 = (int *)(param_2 + 0x78);
    if (param_2 == 0) {
      piVar1 = (int *)&DAT_00000138;
    }
    bVar2 = *(int *)(param_1 + 0x78) == *piVar1;
  }
  return bVar2;
}

