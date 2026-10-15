/*
 * FUN_100066b8 at 100066b8
 * undefined FUN_100066b8(void)
 * Address ranges: 100066b8-1000673f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100066b8(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_30;
  int local_28;
  
  local_30 = CONCAT44(local_30._4_4_,0x14);
  bVar1 = false;
  iVar2 = (*(code *)PTR_FUN_100ba1f4)(&local_30);
  if (iVar2 != 0) {
    if (local_28 == 0) {
      iVar2 = (*(code *)PTR_FUN_100ba1f0)();
      uVar3 = FUN_10006740();
      if (iVar2 == 0) {
        iVar2 = (int)uVar3;
      }
      FUN_100067a0(uVar3,iVar2);
      local_30 = 0x14;
      (*(code *)PTR_FUN_100ba1f4)(&local_30);
    }
    bVar1 = (local_30._4_4_ & 3) == 1;
  }
  return bVar1;
}

