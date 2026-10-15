/*
 * FUN_100067f8 at 100067f8
 * undefined FUN_100067f8(void)
 * Address ranges: 100067f8-10006893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100067f8(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = false;
  if (DAT_100be0e0 == 0) {
    uVar3 = 0;
    while( true ) {
      iVar2 = (*(code *)PTR_FUN_100ba150)(DAT_100be0e4);
      bVar1 = iVar2 != 0;
      if (iVar2 != 0) break;
      if (param_1 <= uVar3) {
        return false;
      }
      (*(code *)PTR_FUN_100ba144)(1);
      uVar3 = uVar3 + 1;
    }
    DAT_100be0e0 = DAT_100be0e0 + 1;
  }
  return bVar1;
}

