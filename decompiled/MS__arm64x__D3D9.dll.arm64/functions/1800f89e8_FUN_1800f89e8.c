/*
 * FUN_1800f89e8 at 1800f89e8
 * undefined FUN_1800f89e8(void)
 * Address ranges: 1800f89e8-1800f8bbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f89e8(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_1 + (param_2 & 0xffffffff) * 0x1ac0;
  if (*(longlong *)(lVar2 + 0x2250) != 0) {
    FUN_180038230();
  }
  lVar3 = *(longlong *)(lVar2 + 0x2248);
  *(undefined8 *)(lVar2 + 0x2250) = 0;
  if (lVar3 != 0) {
    FUN_1800e6ee0(lVar3);
    FUN_180102fc0(lVar3,0x78);
  }
  lVar3 = *(longlong *)(lVar2 + 0x2240);
  *(undefined8 *)(lVar2 + 0x2248) = 0;
  if (lVar3 != 0) {
    FUN_1800e6ee0(lVar3);
    FUN_180102fc0(lVar3,0x78);
  }
  lVar3 = *(longlong *)(lVar2 + 0x2238);
  *(undefined8 *)(lVar2 + 0x2240) = 0;
  if (lVar3 != 0) {
    FUN_1800e6ee0(lVar3);
    FUN_180102fc0(lVar3,0x78);
  }
  lVar3 = *(longlong *)(lVar2 + 0x2230);
  *(undefined8 *)(lVar2 + 0x2238) = 0;
  if (lVar3 != 0) {
    FUN_1800e6ee0(lVar3);
    FUN_180102fc0(lVar3,0x78);
  }
  *(undefined8 *)(lVar2 + 0x2230) = 0;
  if (*(longlong *)(lVar2 + 0x2378) != 0) {
    FUN_1800ed018(param_1);
    FUN_1800ed018(param_1,*(undefined8 *)(lVar2 + 0x2370));
    FUN_1800ed018(param_1,*(undefined8 *)(lVar2 + 0x2398));
    FUN_1800ed018(param_1,*(undefined8 *)(lVar2 + 0x2388));
    FUN_1800ed018(param_1,*(undefined8 *)(lVar2 + 0x2390));
    FUN_1800ed018(param_1,*(undefined8 *)(lVar2 + 0x2380));
    iVar1 = *(int *)(lVar2 + 0x236c);
    *(undefined8 *)(lVar2 + 0x2370) = 0;
    *(undefined8 *)(lVar2 + 0x2378) = 0;
    *(undefined8 *)(lVar2 + 0x2390) = 0;
    *(undefined8 *)(lVar2 + 0x2398) = 0;
    *(undefined8 *)(lVar2 + 0x2380) = 0;
    *(undefined8 *)(lVar2 + 0x2388) = 0;
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(lVar2 + 0x2238);
      (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar3 + 0x28);
      FUN_1800e70e0(lVar3,iVar1,2);
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar3 + 0x28);
    }
    iVar1 = *(int *)(lVar2 + 0x2368);
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(lVar2 + 0x2230);
      (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar3 + 0x28);
      FUN_1800e70e0(lVar3,iVar1,2);
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar3 + 0x28);
    }
    *(undefined4 *)(lVar2 + 0x2368) = 0xffffffff;
    *(undefined4 *)(lVar2 + 0x236c) = 0xffffffff;
  }
  if (*(longlong *)(lVar2 + 0x908) != 0) {
    FUN_1800380e0(*(longlong *)(lVar2 + 0x908),1);
  }
  *(undefined8 *)(lVar2 + 0x908) = 0;
  if (*(longlong *)(lVar2 + 0x910) != 0) {
    FUN_1800380e0(*(longlong *)(lVar2 + 0x910),1);
  }
  *(undefined8 *)(lVar2 + 0x910) = 0;
  return;
}

