/*
 * FUN_1004d0c8 at 1004d0c8
 * undefined FUN_1004d0c8(void)
 * Address ranges: 1004d0c8-1004d137
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004d0c8(undefined8 param_1,undefined8 param_2,int param_3)

{
  ulonglong uVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    uVar1 = FUN_1004cb90(param_3 + 0x48,uVar2 * 0x20 + 0x100b3d30,0);
    if ((uVar1 & 1) != 0) {
      if ((&DAT_100b3d3c)[uVar2 * 8] != 0x20) {
        return 5;
      }
      return 6;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 6);
  return 0xffffffff;
}

