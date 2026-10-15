/*
 * FUN_1800303a0 at 1800303a0
 * undefined FUN_1800303a0(void)
 * Address ranges: 1800303a0-18003041f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800303a0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
  if (plVar4 != (longlong *)0x0) {
    lVar3 = *(longlong *)(param_1 + 8);
    uVar1 = *(uint *)(param_1 + 0x10);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar3 + 0x620);
    lVar2 = lVar3 + (ulonglong)uVar1 * 0x18c0;
    if (plVar4 == *(longlong **)(lVar2 + 0xb70)) {
      *(undefined8 *)(lVar2 + 0xb70) = 0;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar3 + 0x620);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}

