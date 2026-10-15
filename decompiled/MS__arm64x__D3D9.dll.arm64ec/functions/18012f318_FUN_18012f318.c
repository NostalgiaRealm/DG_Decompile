/*
 * FUN_18012f318 at 18012f318
 * undefined FUN_18012f318(void)
 * Address ranges: 18012f318-18012f3cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18012f318(uint param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  bVar1 = false;
  if (DAT_18024d980 == 0) {
    iVar2 = FUN_1801042e0(DAT_180258900 + 0x30);
    if ((iVar2 == 1) && (*(int *)(DAT_180258900 + 0x2c) != 0)) {
      FUN_1801042d0(DAT_180258900 + 0x30);
    }
    else {
      uVar3 = 0;
      while( true ) {
        iVar2 = thunk_FUN_1802236e4(DAT_18024d988);
        bVar1 = iVar2 != 0;
        if (iVar2 != 0) break;
        if (param_1 <= uVar3) {
          return false;
        }
        thunk_FUN_1802237c0(1);
        uVar3 = uVar3 + 1;
      }
      DAT_18024d980 = DAT_18024d980 + 1;
    }
  }
  return bVar1;
}

