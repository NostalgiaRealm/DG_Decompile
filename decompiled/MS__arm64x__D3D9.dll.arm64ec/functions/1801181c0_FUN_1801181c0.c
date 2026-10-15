/*
 * FUN_1801181c0 at 1801181c0
 * undefined FUN_1801181c0(void)
 * Address ranges: 1801181c0-180118243
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801181c0(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_40 [48];
  
  iVar1 = FUN_1801042e0(DAT_180258900 + 0x30);
  if (iVar1 == 1) {
    while (*(int *)(DAT_180258900 + 0x2c) != 0) {
      thunk_FUN_180223c0c(auStack_40,0,0,0,0x400000);
    }
  }
  FUN_1801042e0(DAT_180258900 + 0x28);
  iVar1 = thunk_FUN_1802236e4(DAT_180258900);
  if (iVar1 == 0) {
    FUN_1801085c8(1);
  }
  return param_1;
}

