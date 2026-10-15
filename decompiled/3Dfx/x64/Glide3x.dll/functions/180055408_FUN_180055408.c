/*
 * FUN_180055408 at 180055408
 * undefined __fastcall FUN_180055408(LPCRITICAL_SECTION param_1)
 * Address ranges: 180055408-1800554b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180055408(LPCRITICAL_SECTION param_1)

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
      puVar6 = (undefined8 *)0x18;
      goto LAB_18005545a;
    }
    do {
      uVar4 = (ulonglong)uVar3 << 6;
      puVar2 = (undefined8 *)((uVar4 | 0x10) + (longlong)param_1[1].LockSemaphore);
      puVar6 = (undefined8 *)((uVar4 | 0x20) + (longlong)param_1[1].LockSemaphore);
      puVar5 = (undefined8 *)((uVar4 | 0x28) + (longlong)param_1[1].LockSemaphore);
LAB_18005545a:
      FUN_180060ac0((LPVOID)*puVar2);
      FUN_180060ac0((LPVOID)*puVar6);
      FUN_180060ac0((LPVOID)*puVar5);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)param_1[1].SpinCount);
  }
  FUN_180060ac0(param_1[1].OwningThread);
  param_1[1].OwningThread = (HANDLE)0x0;
  param_1[1].LockSemaphore = (HANDLE)0x0;
  param_1[1].SpinCount = 0;
  LeaveCriticalSection(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001800554b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}

