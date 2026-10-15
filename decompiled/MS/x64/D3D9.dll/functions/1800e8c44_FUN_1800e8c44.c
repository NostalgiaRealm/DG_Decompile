/*
 * FUN_1800e8c44 at 1800e8c44
 * undefined __fastcall FUN_1800e8c44(longlong param_1)
 * Address ranges: 1800e8c44-1800e8cf3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e8c44(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  FUN_1800e9204(param_1,-1,0,(longlong *)0x0);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  EnterCriticalSection(lpCriticalSection);
  FUN_1800e9428(param_1);
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x68) == 0) {
      puVar1 = (ulonglong *)&DAT_00000008;
      goto LAB_1800e8ca0;
    }
    do {
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + (uVar3 * 9 + 2) * 8);
LAB_1800e8ca0:
      FUN_1800e8fb0(param_1,puVar1);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_1 + 0x68));
  }
  FUN_1800fbcf0(*(LPVOID *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  LeaveCriticalSection(lpCriticalSection);
                    /* WARNING: Could not recover jumptable at 0x0001800e8ced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}

