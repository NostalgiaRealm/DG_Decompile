/*
 * FUN_1800dfe48 at 1800dfe48
 * ulonglong __fastcall FUN_1800dfe48(longlong param_1, undefined8 param_2, longlong param_3)
 * Address ranges: 1800dfe48-1800dfe8c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800dfe48(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong extraout_RAX;
  ulonglong uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x620));
  if (param_3 == 0) {
    uVar2 = extraout_RAX & 0xffffffffffffff00;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x618);
    *(longlong *)(param_1 + 0x618) = param_3;
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),lVar1 != param_3);
  }
  return uVar2;
}

