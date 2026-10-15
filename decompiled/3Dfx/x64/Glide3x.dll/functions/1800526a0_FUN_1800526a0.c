/*
 * FUN_1800526a0 at 1800526a0
 * undefined8 __fastcall FUN_1800526a0(longlong * param_1, longlong param_2, uint param_3)
 * Address ranges: 1800526a0-1800526f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1800526a0(longlong *param_1,longlong param_2,uint param_3)

{
  ulonglong in_RAX;
  ulonglong extraout_RAX;
  ulonglong uVar1;
  
  if (param_2 == 0) {
    uVar1 = in_RAX & 0xffffffffffffff00;
  }
  else {
    if (*(uint *)(param_2 + 0x28) < param_3) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
      (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
      in_RAX = extraout_RAX;
    }
    uVar1 = CONCAT71((int7)(in_RAX >> 8),1);
  }
  return uVar1;
}

