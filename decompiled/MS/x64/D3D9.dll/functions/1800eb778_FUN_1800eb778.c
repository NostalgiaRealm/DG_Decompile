/*
 * FUN_1800eb778 at 1800eb778
 * undefined __fastcall FUN_1800eb778(LPCRITICAL_SECTION param_1)
 * Address ranges: 1800eb778-1800eb827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800eb778(LPCRITICAL_SECTION param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  EnterCriticalSection(param_1);
  iVar1 = (int)param_1[1].SpinCount;
  if (iVar1 != 0) {
    uVar3 = 0;
    if (iVar1 == 0) {
      puVar2 = (undefined8 *)&DAT_00000008;
      puVar5 = (undefined8 *)&DAT_00000020;
      puVar6 = (undefined8 *)&DAT_00000018;
      goto LAB_1800eb7ca;
    }
    do {
      uVar4 = (ulonglong)uVar3 << 6;
      puVar2 = (undefined8 *)((uVar4 | 0x10) + (longlong)param_1[1].LockSemaphore);
      puVar6 = (undefined8 *)((uVar4 | 0x20) + (longlong)param_1[1].LockSemaphore);
      puVar5 = (undefined8 *)((uVar4 | 0x28) + (longlong)param_1[1].LockSemaphore);
LAB_1800eb7ca:
      FUN_1800fbcf0((LPVOID)*puVar2);
      FUN_1800fbcf0((LPVOID)*puVar6);
      FUN_1800fbcf0((LPVOID)*puVar5);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[1].SpinCount);
  }
  FUN_1800fbcf0(param_1[1].OwningThread);
  param_1[1].OwningThread = (HANDLE)0x0;
  param_1[1].LockSemaphore = (HANDLE)0x0;
  param_1[1].SpinCount = 0;
  LeaveCriticalSection(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800eb821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}

