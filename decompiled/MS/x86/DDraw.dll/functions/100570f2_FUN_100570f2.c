/*
 * FUN_100570f2 at 100570f2
 * undefined __fastcall FUN_100570f2(uint * param_1, int * param_2)
 * Address ranges: 100570f2-1005713f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100570f2(uint *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_100576ba(*param_1);
  if (((iVar1 == 0x40) || (iVar1 == 0x41)) || (iVar1 == 0x50)) {
    FUN_100578da(param_2);
  }
  else if (iVar1 == 0x51) {
    FUN_10057932(param_2);
  }
  return;
}

