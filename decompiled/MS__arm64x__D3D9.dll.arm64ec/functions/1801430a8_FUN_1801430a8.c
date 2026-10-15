/*
 * FUN_1801430a8 at 1801430a8
 * undefined FUN_1801430a8(void)
 * Address ranges: 1801430a8-1801431f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801430a8(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *extraout_x11;
  
  if (*(longlong *)(param_1 + 0x188) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x188) + (ulonglong)*(uint *)(param_1 + 400) * 0x1ac0;
    *(longlong *)(param_1 + 0x198) = lVar3 + 0x900;
    FUN_180205b78(lVar3 + 0x22d8,*(undefined8 *)(param_1 + 0x158));
    uVar2 = FUN_1802229d8(*(undefined8 *)(param_1 + 0x158),0x10);
    *(undefined8 *)(param_1 + 0x158) = 0;
    uVar2 = FUN_180206b80(uVar2,1,param_1 + 0x160);
    uVar2 = FUN_180206b80(uVar2,0x11,param_1 + 0x98);
    uVar2 = FUN_180206b80(uVar2,6,param_1 + 0x120);
    FUN_180206b80(uVar2,0x12,param_1 + 8);
    lVar3 = 0;
    do {
      FUN_180206a20(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 0x168 + lVar3 * 8));
      *(undefined8 *)(param_1 + 0x168 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
    iVar1 = *(int *)(param_1 + 0x180);
    if (iVar1 != -1) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x198) + 0x1930);
      thunk_FUN_1802236f8(lVar3 + 0x28);
      FUN_18020c678(lVar3,iVar1,3);
      thunk_FUN_18022370c(lVar3 + 0x28);
    }
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      FUN_18020d9f8(*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 0x1b500),
                    *(longlong *)(param_1 + 0x1a0),0,1);
    }
    FUN_180205738(*(longlong *)(param_1 + 0x198) + 0x19d8,*(undefined8 *)(param_1 + 0x1a0));
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    (*extraout_x11)();
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    FUN_1801fe510(*(undefined8 *)(param_1 + 0x188));
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  return;
}

