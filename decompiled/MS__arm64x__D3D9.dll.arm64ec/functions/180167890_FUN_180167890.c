/*
 * FUN_180167890 at 180167890
 * undefined FUN_180167890(void)
 * Address ranges: 180167890-180167947
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180167890(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  code *extraout_x11;
  uint uVar1;
  
  uVar1 = (uint)param_2;
  if ((((uVar1 - 0x80 < 0x30) && ((0xfdeffd9efaffU >> ((ulonglong)(uVar1 - 0x80) & 0x3f) & 1) != 0))
      || ((uVar1 < 0x3d && ((0x1ff1007c3fd8c380U >> (param_2 & 0x3f) & 1) != 0)))) ||
     ((uVar1 - 0xb2 < 0x20 && ((0xf003ffffU >> (ulonglong)(uVar1 - 0xb2 & 0x1f) & 1) != 0)))) {
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)(param_1,0);
  }
  FUN_180164780(param_1,param_1 + 0xb0,param_1 + 0xf680,param_2 & 0xffffffff,param_3);
  return;
}

