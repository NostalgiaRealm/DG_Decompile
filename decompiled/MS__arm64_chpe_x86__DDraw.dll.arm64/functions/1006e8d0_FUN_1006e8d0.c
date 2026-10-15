/*
 * FUN_1006e8d0 at 1006e8d0
 * undefined FUN_1006e8d0(void)
 * Address ranges: 1006e8d0-1006e91f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1006e8d0(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  (*(code *)PTR_FUN_100ba0a0)(param_1 + 0x4a0);
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

