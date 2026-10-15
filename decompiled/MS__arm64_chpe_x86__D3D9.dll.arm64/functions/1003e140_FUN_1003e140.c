/*
 * FUN_1003e140 at 1003e140
 * undefined FUN_1003e140(void)
 * Address ranges: 1003e140-1003e1db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1003e140(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 local_40;
  int local_38;
  
  local_40 = CONCAT44(local_40._4_4_,0x14);
  bVar1 = false;
  iVar2 = (*(code *)PTR_FUN_1016c1c0)(&local_40);
  if (iVar2 != 0) {
    if (local_38 == 0) {
      iVar2 = (*(code *)PTR_FUN_1016c1bc)();
      iVar3 = FUN_1003e1e0(param_1);
      if (iVar2 == 0) {
        iVar2 = iVar3;
      }
      FUN_1003e250(param_1,iVar2);
      local_40 = 0x14;
      (*(code *)PTR_FUN_1016c1c0)(&local_40);
    }
    bVar1 = (local_40._4_4_ & 3) == 1;
  }
  return bVar1;
}

