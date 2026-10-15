/*
 * FUN_1801e3d48 at 1801e3d48
 * undefined FUN_1801e3d48(void)
 * Address ranges: 1801e3d48-1801e3d8f;1801e3e68-1801e3e7b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801e3d48(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  
  param_3 = param_3 & 0xffffffff;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  lVar2 = param_3 << 3;
  if (SUB168(auVar1 * ZEXT816(8),8) != 0) {
    lVar2 = -1;
  }
  lVar2 = FUN_1802229a8(lVar2);
  if (lVar2 != 0) {
    *(longlong *)(param_1 + 0x280) = lVar2;
                    /* WARNING: Subroutine does not return */
    thunk_FUN_180104c48(lVar2,param_2,param_3 << 3);
  }
  return 0;
}

