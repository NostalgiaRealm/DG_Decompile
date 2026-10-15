/*
 * FUN_1800c9710 at 1800c9710
 * undefined FUN_1800c9710(void)
 * Address ranges: 1800c9710-1800c98d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c9710(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar3 = FUN_180001590(param_1 + 8);
    if (*(int *)(param_1 + 0xc) + iVar3 == 0) {
      lVar7 = param_1 + -0xc0;
      if (((*(uint *)(*(longlong *)(param_1 + -0x40) + 0xe78) >> 2 & 1) == 0) &&
         (*(int *)(DAT_18024e310 + 0x30) == 0)) {
        bVar2 = false;
        *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
      }
      else {
        bVar2 = true;
        iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
        if (iVar3 == 0) {
          FUN_180003398();
        }
      }
      plVar8 = (longlong *)(param_1 + -0x98);
      if ((*plVar8 != 0) && ((*(uint *)(param_1 + -0x78) >> 3 & 1) == 0)) {
        thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x90));
        thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x88));
        (*__imp_KERNEL32_dll_VirtualFree)(*plVar8,0,0x8000);
        *(undefined8 *)(param_1 + -0x90) = 0;
        *plVar8 = 0;
        *(undefined8 *)(param_1 + -0x80) = 0;
        *(undefined8 *)(param_1 + -0x88) = 0;
        *(undefined8 *)(param_1 + -0x78) = 0;
      }
      uVar6 = 0;
      if (DAT_180253848 != 0) {
        do {
          uVar5 = (uint)uVar6;
          if (*(longlong *)(DAT_180253840 + uVar6 * 8) == lVar7) {
            if ((uVar5 != 0xffffffff) && (uVar5 < DAT_180253848)) {
              uVar5 = uVar5 + 1;
              if (uVar5 < DAT_180253848) {
                do {
                  uVar6 = (ulonglong)uVar5;
                  uVar1 = uVar5 - 1;
                  uVar5 = uVar5 + 1;
                  *(undefined8 *)(DAT_180253840 + (ulonglong)uVar1 * 8) =
                       *(undefined8 *)(DAT_180253840 + uVar6 * 8);
                } while (uVar5 < DAT_180253848);
              }
              DAT_180253848 = DAT_180253848 - 1;
            }
            break;
          }
          uVar6 = (ulonglong)(uVar5 + 1);
        } while (uVar5 + 1 < DAT_180253848);
      }
      *(uint *)(param_1 + -0x78) = *(uint *)(param_1 + -0x78) & 0xffffffce;
      thunk_FUN_180102fc0(*(undefined8 *)(param_1 + -0x30));
      *(undefined8 *)(param_1 + -0x30) = 0;
      if (lVar7 != 0) {
        FUN_1800c9620(lVar7);
        FUN_180102fc0(lVar7,0xd8);
      }
      if (bVar2) {
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
      }
      else {
        *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
      }
    }
    uVar4 = FUN_1800ca960(*(longlong *)(param_1 + -0x38) + 0x118);
  }
  return uVar4;
}

