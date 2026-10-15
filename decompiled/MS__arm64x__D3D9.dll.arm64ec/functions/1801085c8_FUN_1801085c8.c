/*
 * FUN_1801085c8 at 1801085c8
 * undefined FUN_1801085c8(void)
 * Address ranges: 1801085c8-180108623
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801085c8(uint param_1)

{
  int iVar1;
  undefined1 auStack_40 [48];
  
  if (param_1 < *(uint *)(DAT_180258900 + 0x28)) {
    while (iVar1 = thunk_FUN_1802236e4(DAT_180258900), iVar1 == 0) {
      thunk_FUN_180223c0c(auStack_40,0,0,0,0x400000);
    }
  }
  else {
    thunk_FUN_1802236f8();
  }
  return;
}

