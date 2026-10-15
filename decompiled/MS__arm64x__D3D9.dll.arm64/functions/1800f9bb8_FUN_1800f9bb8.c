/*
 * FUN_1800f9bb8 at 1800f9bb8
 * undefined FUN_1800f9bb8(void)
 * Address ranges: 1800f9bb8-1800f9cab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f9bb8(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  lVar5 = param_1 + (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
  if (*(int *)(param_2 + 0x28) != 0) {
    do {
      if (*(longlong *)(param_2 + 0xda0 + uVar4 * 8) != 0) {
        FUN_1800ed018(param_1);
        *(undefined8 *)(param_2 + 0xda0 + uVar4 * 8) = 0;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_2 + 0x28));
  }
  iVar2 = *(int *)(param_2 + 0xdb0);
  if (iVar2 != -1) {
    lVar3 = *(longlong *)(lVar5 + 0x2230);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar3 + 0x28);
    FUN_1800e70e0(lVar3,iVar2,2);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar3 + 0x28);
  }
  iVar2 = *(int *)(param_2 + 0xdb4);
  if (iVar2 != -1) {
    lVar5 = *(longlong *)(lVar5 + 0x2238);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar5 + 0x28);
    FUN_1800e70e0(lVar5,iVar2,2);
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar5 + 0x28);
  }
  *(undefined4 *)(param_2 + 0x28) = 0;
  return;
}

