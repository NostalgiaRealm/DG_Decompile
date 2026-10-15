/*
 * FUN_180003588 at 180003588
 * undefined FUN_180003588(void)
 * Address ranges: 180003588-180003677
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180003588(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x1c7);
  while (uVar1 != 0) {
    uVar1 = uVar1 - 1;
    (**(code **)(*param_1 + 0x10))
              (param_1,*(undefined8 *)(param_1[0x1c6] + (ulonglong)uVar1 * 8),param_2);
  }
  thunk_FUN_180102fc0(param_1[0x1c6]);
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  lVar4 = DAT_18024de60;
  iVar2 = *(int *)(DAT_18024de60 + 0x370) + -1;
  *(int *)(DAT_18024de60 + 0x370) = iVar2;
  if ((iVar2 == 0) && (DAT_1802587b0 != 0)) {
    if (*(char *)(lVar4 + 0x7e8) != '\0') {
      (*__imp_USER32_dll_PostThreadMessageW)(*(undefined4 *)(lVar4 + 0x374),0x12,0,0);
      (*__imp_KERNEL32_dll_WaitForSingleObject)(DAT_1802587b0,0xffffffff);
    }
    (*__imp_KERNEL32_dll_CloseHandle)(DAT_1802587b0);
    pcVar3 = __imp_KERNEL32_dll_DeleteCriticalSection;
    DAT_1802587b0 = 0;
    *(undefined8 *)(lVar4 + 0x378) = 0;
    (*pcVar3)(lVar4 + 0x388);
  }
  param_1[0x1d4] = 0;
  return;
}

