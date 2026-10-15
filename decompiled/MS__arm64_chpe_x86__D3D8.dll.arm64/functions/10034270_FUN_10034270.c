/*
 * FUN_10034270 at 10034270
 * undefined FUN_10034270(void)
 * Address ranges: 10034270-1003430b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10034270(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 local_40;
  int local_38;
  
  local_40 = CONCAT44(local_40._4_4_,0x14);
  bVar1 = false;
  iVar2 = (*(code *)PTR_FUN_101341c0)(&local_40);
  if (iVar2 != 0) {
    if (local_38 == 0) {
      iVar2 = (*(code *)PTR_FUN_101341bc)();
      iVar3 = FUN_10034310(param_1);
      if (iVar2 == 0) {
        iVar2 = iVar3;
      }
      FUN_10034380(param_1,iVar2);
      local_40 = 0x14;
      (*(code *)PTR_FUN_101341c0)(&local_40);
    }
    bVar1 = (local_40._4_4_ & 3) == 1;
  }
  return bVar1;
}

