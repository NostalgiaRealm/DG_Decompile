/*
 * FUN_180060908 at 180060908
 * undefined __cdecl FUN_180060908(void)
 * Address ranges: 180060908-180060967
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180060908(void)

{
  longlong lVar1;
  longlong extraout_x15;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_1800014c0();
  lVar1 = extraout_x15 * -0x10;
  FUN_1800611b0(&stack0xffffffffffffffe0 + lVar1,0,0x2000);
  wvsprintfA(&stack0xffffffffffffffe0 + lVar1,auVar2._0_8_,auVar2._8_8_);
  OutputDebugStringA(&stack0xffffffffffffffe0 + lVar1);
  return;
}

