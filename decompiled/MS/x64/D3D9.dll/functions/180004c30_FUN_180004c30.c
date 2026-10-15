/*
 * FUN_180004c30 at 180004c30
 * undefined __fastcall FUN_180004c30(longlong * param_1, undefined1 param_2)
 * Address ranges: 180004c30-180004d23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180004c30(longlong *param_1,undefined1 param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x1c7);
  while ((int)uVar3 != 0) {
    uVar3 = (ulonglong)((int)uVar3 - 1);
    (**(code **)(*param_1 + 0x10))(param_1,*(undefined8 *)(param_1[0x1c6] + uVar3 * 8),param_2);
  }
  FUN_1800fbcf0((LPVOID)param_1[0x1c6]);
  lVar2 = DAT_180111f20;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  piVar1 = (int *)(lVar2 + 0x370);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (DAT_180117460 != (HANDLE)0x0)) {
    if (*(char *)(lVar2 + 0x7e8) != '\0') {
      PostThreadMessageW(*(DWORD *)(lVar2 + 0x374),0x12,0,0);
      WaitForSingleObject(DAT_180117460,0xffffffff);
    }
    CloseHandle(DAT_180117460);
    DAT_180117460 = (HANDLE)0x0;
    *(undefined8 *)(lVar2 + 0x378) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(lVar2 + 0x388));
  }
  param_1[0x1d4] = 0;
  return;
}

