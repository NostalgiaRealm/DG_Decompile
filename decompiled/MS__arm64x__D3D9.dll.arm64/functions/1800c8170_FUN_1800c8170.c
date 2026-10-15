/*
 * FUN_1800c8170 at 1800c8170
 * undefined FUN_1800c8170(void)
 * Address ranges: 1800c8170-1800c842f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800c8170(longlong param_1,uint param_2,int param_3,longlong *param_4,uint param_5)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint *puVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  
  iVar11 = -0x7789f794;
  if ((param_2 == 0) && (param_3 == 0)) {
    param_3 = *(int *)(param_1 + -0x70);
  }
  puVar4 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x50) != 0) {
    puVar4 = (uint *)(*(longlong *)(param_1 + -0x50) + -0x59c0);
  }
  if (((*puVar4 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar5 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar5 = true;
    iVar6 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar6 == 0) {
      FUN_180003398();
    }
  }
  if ((*(longlong *)(param_1 + -0x30) == 0) ||
     (((*(uint *)(param_1 + -0x40) >> 9 & 1) == 0 && (*(char *)(param_1 + -5) == '\0')))) {
    if ((*(longlong *)(param_1 + -0x78) == 0) && (*(longlong *)(param_1 + -0x80) == 0)) {
      iVar6 = FUN_1800015a0(param_1 + -100);
      if (iVar6 != 1) {
        FUN_180001590(param_1 + -100);
        goto LAB_1800c83f0;
      }
      *(longlong *)(param_1 + -0x78) = *(longlong *)(param_1 + -0x88);
    }
    *param_4 = *(longlong *)(param_1 + -0x88) + (ulonglong)param_2;
    if ((*(int *)(param_1 + -0x34) == 0) && ((param_5 >> 0xd & 1) != 0)) {
      *(undefined4 *)(param_1 + -0x6c) = 0;
      *(undefined4 *)(param_1 + -0x68) = *(undefined4 *)(param_1 + -0x70);
    }
    else {
      uVar1 = param_3 + param_2;
      if (param_2 < *(uint *)(param_1 + -0x6c)) {
        *(uint *)(param_1 + -0x6c) = param_2;
      }
      if (*(uint *)(param_1 + -0x68) < uVar1) {
        *(uint *)(param_1 + -0x68) = uVar1;
        if (*(uint *)(param_1 + -0x70) < uVar1) {
          *(uint *)(param_1 + -0x68) = *(uint *)(param_1 + -0x70);
        }
      }
    }
    iVar11 = 0;
  }
  else {
    plVar10 = (longlong *)(param_1 + -0x78);
    if (*plVar10 == 0) {
      lVar9 = *(longlong *)(param_1 + -0x50);
      uVar8 = 0;
      do {
        lVar2 = uVar8 * 8;
        if (lVar9 != 0) {
          lVar2 = lVar9 + uVar8 * 8 + -0x6838;
        }
        if (*(longlong *)(lVar2 + 0x66c8) == param_1 + -0x90) {
          puVar3 = (undefined8 *)&DAT_00000028;
          if (lVar9 != 0) {
            puVar3 = (undefined8 *)(lVar9 + -0x6810);
          }
          (**(code **)(*(longlong *)*puVar3 + 0x28))();
          break;
        }
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar1;
      } while (uVar1 < 0x10);
      if ((((param_5 & 0x2000) == 0) || (*(char *)(param_1 + -7) == '\0')) ||
         (*(char *)(param_1 + -6) != '\0')) {
        uVar7 = 0;
      }
      else {
        uVar7 = 1;
      }
      iVar6 = (**(code **)(**(longlong **)(param_1 + -0x30) + 0x18))
                        (*(longlong **)(param_1 + -0x30),uVar7,(param_5 & 0x3000) != 0,plVar10);
      if (iVar6 == 0) {
        if (*(uint *)(param_1 + -0xc) != 0xffffffff) {
          puVar4 = (uint *)&DAT_000067dc;
          if (*(longlong *)(param_1 + -0x50) != 0) {
            puVar4 = (uint *)(*(longlong *)(param_1 + -0x50) + -0x5c);
          }
          *puVar4 = *puVar4 | 1 << (ulonglong)(*(uint *)(param_1 + -0xc) & 0x1f);
        }
        *(bool *)(param_1 + -6) = (param_5 & 0x2000) != 0;
        goto LAB_1800c8324;
      }
    }
    else {
LAB_1800c8324:
      iVar11 = 0;
    }
    *param_4 = *plVar10 + (ulonglong)param_2;
    if (iVar11 < 0) goto LAB_1800c83f0;
  }
  iVar6 = *(int *)(param_1 + -0x10);
  *(int *)(param_1 + -0x10) = iVar6 + 1;
  if (iVar6 == 0) {
    func_0x000180222c50(*(undefined8 *)(param_1 + -0x78),0,*(undefined4 *)(param_1 + -0x70));
  }
LAB_1800c83f0:
  if (bVar5) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return iVar11;
}

