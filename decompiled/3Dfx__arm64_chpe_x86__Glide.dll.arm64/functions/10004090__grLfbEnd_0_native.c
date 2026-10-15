/*
 * _grLfbEnd@0_native at 10004090
 * undefined _grLfbEnd@0_native(void)
 * Address ranges: 10004090-1000412f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grLfbEnd_0_native(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (DAT_1009f7ec != '\0') {
    uVar2 = 0;
    do {
      if ((&DAT_1009f7d8)[uVar2] != 0) {
        uVar1 = FUN_1001beb0();
        FUN_1001d768(uVar1,0,uVar2);
        if ((uint)DAT_1009f7e4 != uVar2) {
          (&DAT_1009f7d8)[uVar2] = 0;
        }
      }
      if ((&DAT_1009f7cc)[uVar2] != 0) {
        uVar1 = FUN_1001beb0();
        FUN_1001d768(uVar1,1,uVar2);
        if (DAT_1009f7e4._4_4_ != uVar2) {
          (&DAT_1009f7cc)[uVar2] = 0;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 3);
    DAT_1009f7ec = '\0';
  }
  return;
}

