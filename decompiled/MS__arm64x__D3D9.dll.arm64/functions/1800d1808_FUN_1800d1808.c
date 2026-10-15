/*
 * FUN_1800d1808 at 1800d1808
 * undefined FUN_1800d1808(void)
 * Address ranges: 1800d1808-1800d1867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800d1808(void)

{
  longlong lVar1;
  longlong extraout_x15;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_180001640();
  lVar1 = extraout_x15 * -0x10;
  func_0x000180222c50(&stack0xffffffffffffffe0 + lVar1,0,0x2000);
  thunk_EXT_FUN_0024399a(&stack0xffffffffffffffe0 + lVar1,auVar2._0_8_,auVar2._8_8_);
  (*__imp_KERNEL32_dll_OutputDebugStringA)(&stack0xffffffffffffffe0 + lVar1);
  return;
}

