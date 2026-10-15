/*
 * FUN_1800c6a28 at 1800c6a28
 * undefined FUN_1800c6a28(void)
 * Address ranges: 1800c6a28-1800c6bd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c6a28(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  
  uVar6 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    if (((*(uint *)(*(longlong *)(param_1 + 0x58) + 0xe78) >> 2 & 1) == 0) &&
       (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar2 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar2 = true;
      iVar4 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar4 == 0) {
        FUN_180003398();
      }
    }
    plVar7 = (longlong *)(&DAT_180253850)[(ulonglong)*(uint *)(param_1 + 0xf0) * 0x4b];
    uVar5 = (**(code **)(*plVar7 + 0x130))(plVar7);
    if ((uVar5 < 5) && ((0x12U >> (ulonglong)(uVar5 & 0x1f) & 1) != 0)) {
      uVar6 = 0x88760874;
    }
    else if (uVar5 == 2) {
      uVar6 = 0x88760870;
    }
    else if (uVar5 == 3) {
      uVar6 = 0x88760868;
    }
    else if (uVar5 == 0) {
      param_2[1] = 0;
      *param_2 = 0;
      param_2[3] = 0;
      param_2[2] = 0;
      if ((*(char *)(param_1 + 0x101) == '\0') &&
         ((*(uint *)(*(longlong *)(param_1 + 0x178) + 0xe78) >> 0xe & 1) != 0)) {
        (**(code **)(*plVar7 + 0x148))
                  (plVar7,&lStack_58,(&DAT_180253870)[(ulonglong)*(uint *)(param_1 + 0xf0) * 0x96]);
        (*__imp_KERNEL32_dll_QueryPerformanceCounter)(&local_60);
        lVar1 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) <= local_50) {
          lVar1 = local_60;
        }
        *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x118);
        if (lStack_58 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(0xf004,0x1800c6b68);
          (*pcVar3)();
        }
        uVar6 = 0;
        if (lStack_58 != 0) {
          uVar6 = (undefined4)(lVar1 / lStack_58);
        }
        *(undefined4 *)((longlong)param_2 + 4) = uVar6;
        uVar6 = 0;
        if (lStack_58 != 0) {
          uVar6 = (undefined4)((local_60 - local_50) / lStack_58);
        }
        *(undefined4 *)(param_2 + 1) = uVar6;
        param_2[2] = *(undefined8 *)(param_1 + 0x110);
      }
      uVar6 = 0;
    }
    if (bVar2) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return uVar6;
}

