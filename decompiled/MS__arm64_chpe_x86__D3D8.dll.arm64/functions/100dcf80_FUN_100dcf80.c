/*
 * FUN_100dcf80 at 100dcf80
 * undefined FUN_100dcf80(void)
 * Address ranges: 100dcf80-100dcfcf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100dcf80(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  (*(code *)PTR_FUN_10134070)(param_1 + 0x4a0);
  if (param_3 == 0) {
    bVar2 = false;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x49c);
    *(int *)(param_1 + 0x49c) = param_3;
    bVar2 = iVar1 != param_3;
  }
  return bVar2;
}

