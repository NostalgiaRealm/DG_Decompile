/*
 * FUN_1801e0ad0 at 1801e0ad0
 * undefined FUN_1801e0ad0(void)
 * Address ranges: 1801e0ad0-1801e0b6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1801e0ad0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined1 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = FUN_1801bb5f0(*(undefined8 *)(param_1 + 0x170),0,0,param_1 + -8,param_2,0,0,param_4,
                        param_5,0,0,*(undefined8 *)(param_1 + 0x80),0,0);
  if (lVar1 != 0) {
    uVar2 = FUN_1801168a8(lVar1,param_3);
    if ((uVar2 & 1) == 0) {
      FUN_1801df700(lVar1);
      FUN_1802229d8(lVar1,0xd8);
      lVar1 = 0;
    }
    else {
      FUN_1801042e0(lVar1 + 0xac);
    }
  }
  return lVar1;
}

