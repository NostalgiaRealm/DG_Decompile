/*
 * FUN_1800635f0 at 1800635f0
 * undefined __cdecl FUN_1800635f0(void)
 * Address ranges: 1800635f0-18006364f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800635f0(void)

{
  longlong lVar1;
  longlong extraout_x15;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_180001380();
  lVar1 = extraout_x15 * -0x10;
  FUN_180063e98(&stack0xffffffffffffffe0 + lVar1,0,0x2000);
  wvsprintfA(&stack0xffffffffffffffe0 + lVar1,auVar2._0_8_,auVar2._8_8_);
  OutputDebugStringA(&stack0xffffffffffffffe0 + lVar1);
  return;
}

