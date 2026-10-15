/*
 * FUN_1400141b8 at 1400141b8
 * undefined __cdecl FUN_1400141b8(longlong * param_1)
 * Address ranges: 1400141b8-1400141fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1400141b8(longlong *param_1)

{
  ulonglong uVar1;
  
  if (param_1[0x90] != 0) {
    (**(code **)(*param_1 + 0x18))();
    uVar1 = param_1[0x90];
    *(undefined8 *)(uVar1 + 0x530) = 0;
    FUN_140014980(uVar1);
    param_1[0x90] = 0;
    param_1[2] = 0;
  }
  return;
}

