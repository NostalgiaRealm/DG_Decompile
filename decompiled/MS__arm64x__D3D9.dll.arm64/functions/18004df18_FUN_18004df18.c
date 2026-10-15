/*
 * FUN_18004df18 at 18004df18
 * undefined FUN_18004df18(void)
 * Address ranges: 18004df18-18004df9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004df18(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong local_30 [2];
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  local_30[0] = lVar2;
  (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar1 + 0xf888);
  uVar3 = FUN_180050fe8(lVar1 + 0xf808,lVar2);
  if (((uVar3 & 1) == 0) &&
     (puVar4 = (undefined8 *)FUN_180051838(lVar1 + 0xf830,local_30), puVar4 != (undefined8 *)0x0)) {
    FUN_180051450(lVar1 + 0xf808,lVar2,*puVar4,1);
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar1 + 0xf888);
  return;
}

