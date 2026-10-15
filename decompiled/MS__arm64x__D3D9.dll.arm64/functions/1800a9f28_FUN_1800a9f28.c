/*
 * FUN_1800a9f28 at 1800a9f28
 * undefined FUN_1800a9f28(void)
 * Address ranges: 1800a9f28-1800aa19b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800a9f28(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  iVar5 = FUN_180001590(param_1 + 0xc);
  if (*(int *)(param_1 + 0x10) + iVar5 == 0) {
    lVar2 = 0;
    if (param_1 != 0x6838) {
      lVar2 = param_1 + -0x18;
    }
    uVar8 = 0;
    if (*(int *)(param_1 + -8) != 0) {
      do {
        plVar6 = *(longlong **)(*(longlong *)(param_1 + -0x10) + uVar8 * 8);
        (**(code **)(*plVar6 + 8))(plVar6,lVar2);
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)(param_1 + -8));
    }
    if (*(longlong *)(param_1 + -0x6810) != 0) {
      *(undefined1 *)(param_1 + -0x6568) = 0;
      (**(code **)(*(longlong *)(param_1 + -0x6838) + 0x20))(param_1 + -0x6838);
      uVar8 = 0;
      if (*(int *)(param_1 + -0x5908) != 0) {
        if (*(int *)(param_1 + -0x5908) == 0) {
          puVar7 = (undefined8 *)&DAT_00000008;
          goto LAB_1800aa000;
        }
        do {
          puVar7 = (undefined8 *)(*(longlong *)(param_1 + -0x5910) + uVar8 * 0x18 + 0x10);
LAB_1800aa000:
          FUN_180102fc0(*puVar7,0x408);
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar1;
        } while (uVar1 < *(uint *)(param_1 + -0x5908));
      }
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x5918));
      *(undefined4 *)(param_1 + -0x5908) = 0;
      *(undefined8 *)(param_1 + -0x5918) = 0;
      *(undefined4 *)(param_1 + -0x5904) = 0;
      *(undefined8 *)(param_1 + -0x5910) = 0;
      uVar1 = *(uint *)(param_1 + -0x5a00);
      while (uVar1 != 0) {
        uVar1 = uVar1 - 1;
        (**(code **)(*(longlong *)(param_1 + -0x6838) + 0x10))
                  (param_1 + -0x6838,
                   *(undefined8 *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)uVar1 * 8),0);
      }
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x5a08));
      *(undefined4 *)(param_1 + -0x5a00) = 0;
      *(undefined4 *)(param_1 + -0x59fc) = 0;
      lVar2 = DAT_18024de60;
      *(undefined8 *)(param_1 + -0x5a08) = 0;
      iVar3 = *(int *)(lVar2 + 0x370) + -1;
      *(int *)(lVar2 + 0x370) = iVar3;
      if ((iVar3 == 0) && (DAT_1802587b0 != 0)) {
        if (*(char *)(lVar2 + 0x7e8) != '\0') {
          (*__imp_USER32_dll_PostThreadMessageW)(*(undefined4 *)(lVar2 + 0x374),0x12,0,0);
          (*__imp_KERNEL32_dll_WaitForSingleObject)(DAT_1802587b0,0xffffffff);
        }
        (*__imp_KERNEL32_dll_CloseHandle)(DAT_1802587b0);
        pcVar4 = __imp_KERNEL32_dll_DeleteCriticalSection;
        DAT_1802587b0 = 0;
        *(undefined8 *)(lVar2 + 0x378) = 0;
        (*pcVar4)(lVar2 + 0x388);
      }
      *(undefined8 *)(param_1 + -0x5998) = 0;
      (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x18))();
      (**(code **)(**(longlong **)(param_1 + -0x6810) + 8))();
      *(undefined8 *)(param_1 + -0x6810) = 0;
      FUN_180103118(*(undefined8 *)(*(longlong *)(param_1 + -0x5a28) + -8));
      *(undefined8 *)(param_1 + -0x5a28) = 0;
      if (*(longlong *)(param_1 + -0x59a8) != 0) {
        (*__imp_USER32_dll_DestroyIcon)();
        *(undefined8 *)(param_1 + -0x59a8) = 0;
      }
    }
    FUN_1800a9c48(param_1 + -0x6838);
    FUN_180103118(*(undefined8 *)(param_1 + -0x6840));
  }
  return iVar5;
}

