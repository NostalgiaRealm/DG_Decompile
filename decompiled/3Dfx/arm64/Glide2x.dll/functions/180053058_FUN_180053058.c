/*
 * FUN_180053058 at 180053058
 * undefined8 __cdecl FUN_180053058(longlong * param_1, longlong param_2, uint param_3)
 * Address ranges: 180053058-1800530d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180053058(longlong *param_1,longlong param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(uint *)(param_2 + 0x28) < param_3) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
      (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
    }
    uVar1 = 1;
  }
  return uVar1;
}

