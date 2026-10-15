/*
 * FUN_1800350e8 at 1800350e8
 * undefined FUN_1800350e8(void)
 * Address ranges: 1800350e8-180035233
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800350e8(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x188) + (ulonglong)*(uint *)(param_1 + 400) * 0x1ac0;
    *(longlong *)(param_1 + 0x198) = lVar3 + 0x900;
    FUN_1800ee848(lVar3 + 0x22d8,*(undefined8 *)(param_1 + 0x158));
    uVar2 = FUN_180102fc0(*(undefined8 *)(param_1 + 0x158),0x10);
    *(undefined8 *)(param_1 + 0x158) = 0;
    uVar2 = FUN_1800ed150(uVar2,1,param_1 + 0x160);
    uVar2 = FUN_1800ed150(uVar2,0x11,param_1 + 0x98);
    uVar2 = FUN_1800ed150(uVar2,6,param_1 + 0x120);
    FUN_1800ed150(uVar2,0x12,param_1 + 8);
    lVar3 = 0;
    do {
      FUN_1800ed018(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x168 + lVar3 * 8));
      *(undefined8 *)(param_1 + 0x168 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
    iVar1 = *(int *)(param_1 + 0x180);
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x1930);
      (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar3 + 0x28);
      FUN_1800e70e0(lVar3,iVar1,3);
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar3 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      FUN_1800f1380(*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x1b500),
                    *(longlong *)(param_1 + 0x1a0),0,1);
    }
    FUN_1800ee430(*(longlong *)(param_1 + 0x198) + 0x19d8,*(undefined8 *)(param_1 + 0x1a0));
    (**(code **)(**(longlong **)(param_1 + 0x1a0) + 0x10))();
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    FUN_1800e12c8(*(undefined8 *)(param_1 + 0x188));
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  return;
}

