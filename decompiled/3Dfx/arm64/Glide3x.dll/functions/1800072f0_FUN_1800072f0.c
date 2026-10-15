/*
 * FUN_1800072f0 at 1800072f0
 * undefined __cdecl FUN_1800072f0(undefined8 param_1, HWND param_2, undefined8 param_3)
 * Address ranges: 1800072f0-180007347
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800072f0(undefined8 param_1,HWND param_2,undefined8 param_3)

{
  BOOL BVar1;
  code *pcVar2;
  
  BVar1 = IsWindowUnicode(param_2);
  pcVar2 = SetWindowLongPtrA_exref;
  if (BVar1 != 0) {
    pcVar2 = SetWindowLongPtrW_exref;
  }
  (*pcVar2)(param_2,0xfffffffc,param_3);
  return;
}

