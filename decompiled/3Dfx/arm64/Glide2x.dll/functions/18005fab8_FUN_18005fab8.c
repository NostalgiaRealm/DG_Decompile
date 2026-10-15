/*
 * FUN_18005fab8 at 18005fab8
 * undefined __cdecl FUN_18005fab8(void)
 * Address ranges: 18005fab8-18005fb17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005fab8(void)

{
  longlong lVar1;
  longlong extraout_x15;
  undefined1 auVar2 [16];
  
  auVar2 = FUN_1800014c0();
  lVar1 = extraout_x15 * -0x10;
  FUN_180060360(&stack0xffffffffffffffe0 + lVar1,0,0x2000);
  wvsprintfA(&stack0xffffffffffffffe0 + lVar1,auVar2._0_8_,auVar2._8_8_);
  OutputDebugStringA(&stack0xffffffffffffffe0 + lVar1);
  return;
}

