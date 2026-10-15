/*
 * FUN_1800844b0 at 1800844b0
 * undefined FUN_1800844b0(void)
 * Address ranges: 1800844b0-18008464f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800844b0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  undefined4 local_50 [8];
  
  FUN_1800e5470(*(undefined8 *)(param_1 + -0x90),param_2,param_1 + -0xe0);
  if (*(longlong *)(param_1 + -0x28) == 0) {
    func_0x0001801bad48(local_50,*(undefined4 *)(param_1 + -0xb4));
    FUN_180082d80(param_1 + -0x40,*(undefined4 *)(param_1 + -0xbc),*(undefined4 *)(param_1 + -0xb8),
                  *(undefined4 *)(param_1 + -0xb0),*(undefined4 *)(param_1 + -0xac),1,local_50[0],0,
                  0,0,3,0,0x30000,0,0,0,0);
    uVar4 = 0;
    if (*(int *)(param_1 + -0xac) != 0) {
      do {
        uVar5 = 0;
        if (*(int *)(param_1 + -0xb0) != 0) {
          do {
            FUN_1800a2b98(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xb8),uVar5);
            uVar1 = FUN_1800a2b50(param_1 + -0xe0,*(undefined4 *)(param_1 + -0xbc));
            (*__imp_USER32_dll_SetRect)
                      (*(longlong *)(param_1 + -0x50) +
                       (ulonglong)(uVar5 + *(int *)(param_1 + -0xa4) * uVar4) * 0x28 + 0x18,0,0,
                       uVar1);
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(param_1 + -0xb0));
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + -0xac));
    }
  }
  uVar1 = 0;
  if ((*(longlong *)(param_1 + -0x28) != 0) &&
     (plVar3 = *(longlong **)(*(longlong *)(param_1 + -0x88) + 8),
     iVar2 = (**(code **)(*plVar3 + 0x70))
                       (plVar3,*(longlong *)(param_1 + -0x28),
                        (int)param_2 + *(int *)(param_1 + -0xa4) * param_3,3,0,auStack_60),
     -1 < iVar2)) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + -0x88) + 8);
    (**(code **)(*plVar3 + 0x78))
              (plVar3,*(undefined8 *)(param_1 + -0x28),
               (int)param_2 + *(int *)(param_1 + -0xa4) * param_3);
    uVar1 = local_58;
  }
  (*__imp_KERNEL32_dll_LeaveCriticalSection)(*(longlong *)(param_1 + -0x90) + 0x620);
  return uVar1;
}

