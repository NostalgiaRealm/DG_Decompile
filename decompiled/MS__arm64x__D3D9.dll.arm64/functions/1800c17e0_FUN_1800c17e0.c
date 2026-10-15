/*
 * FUN_1800c17e0 at 1800c17e0
 * undefined FUN_1800c17e0(void)
 * Address ranges: 1800c17e0-1800c1a8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c17e0(longlong param_1,uint param_2,int param_3,longlong *param_4,uint param_5)

{
  uint uVar1;
  char *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  
  uVar10 = 0x8876086c;
  if ((param_2 == 0) && (param_3 == 0)) {
    param_3 = *(int *)(param_1 + -0x58);
  }
  puVar5 = (uint *)&DAT_00000e78;
  if (*(longlong *)(param_1 + -0x38) != 0) {
    puVar5 = (uint *)(*(longlong *)(param_1 + -0x38) + -0x59c0);
  }
  if (((*puVar5 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar6 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar6 = true;
    iVar7 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar7 == 0) {
      FUN_180003398();
    }
  }
  if ((*(longlong *)(param_1 + -0x18) == 0) ||
     (((*(uint *)(param_1 + -0x28) >> 9 & 1) == 0 && (*(char *)(param_1 + -5) == '\0')))) {
    if ((*(longlong *)(param_1 + -0x60) == 0) && (*(longlong *)(param_1 + -0x68) == 0)) {
      iVar7 = FUN_1800015a0(param_1 + -0x4c);
      if (iVar7 != 1) {
        FUN_180001590(param_1 + -0x4c);
        goto LAB_1800c1a44;
      }
      *(undefined8 *)(param_1 + -0x60) = *(undefined8 *)(param_1 + -0x70);
    }
    uVar1 = param_3 + param_2;
    *param_4 = *(longlong *)(param_1 + -0x70) + (ulonglong)param_2;
    if (param_2 < *(uint *)(param_1 + -0x54)) {
      *(uint *)(param_1 + -0x54) = param_2;
    }
    if (*(uint *)(param_1 + -0x50) < uVar1) {
      *(uint *)(param_1 + -0x50) = uVar1;
      if (*(uint *)(param_1 + -0x58) < uVar1) {
        *(uint *)(param_1 + -0x50) = *(uint *)(param_1 + -0x58);
      }
    }
  }
  else {
    lVar9 = *(longlong *)(param_1 + -0x38);
    pcVar2 = &DAT_00000020;
    if (lVar9 != 0) {
      pcVar2 = (char *)(lVar9 + -0x6818);
    }
    if (*pcVar2 != '\0') {
      if (*(longlong *)(param_1 + -0x60) == 0) {
        plVar3 = (longlong *)&DAT_000066c0;
        if (lVar9 != 0) {
          plVar3 = (longlong *)(lVar9 + -0x178);
        }
        if (*plVar3 == param_1 + -0x78) {
          puVar4 = (undefined8 *)&DAT_00000028;
          if (lVar9 != 0) {
            puVar4 = (undefined8 *)(lVar9 + -0x6810);
          }
          (**(code **)(*(longlong *)*puVar4 + 0x28))();
        }
        if ((((param_5 & 0x2000) == 0) || (*(char *)(param_1 + -7) == '\0')) ||
           (*(char *)(param_1 + -6) != '\0')) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        iVar7 = (**(code **)(**(longlong **)(param_1 + -0x18) + 0x18))
                          (*(longlong **)(param_1 + -0x18),uVar8,(param_5 & 0x3000) != 0,
                           param_1 + -0x60);
        if (iVar7 == 0) {
          if (*(char *)(param_1 + -8) != '\0') {
            puVar5 = (uint *)&DAT_000067e4;
            if (*(longlong *)(param_1 + -0x38) != 0) {
              puVar5 = (uint *)(*(longlong *)(param_1 + -0x38) + -0x54);
            }
            *puVar5 = *puVar5 | 1;
          }
          *(bool *)(param_1 + -6) = (param_5 & 0x2000) != 0;
          goto LAB_1800c1980;
        }
      }
      else {
LAB_1800c1980:
        uVar10 = 0;
      }
      *param_4 = *(longlong *)(param_1 + -0x60) + (ulonglong)param_2;
      goto LAB_1800c1a44;
    }
    if ((*(longlong *)(param_1 + -0x60) == 0) && (*(longlong *)(param_1 + -0x68) == 0)) {
      iVar7 = FUN_1800015a0(param_1 + -0x4c);
      if (iVar7 != 1) {
        FUN_180001590(param_1 + -0x4c);
        uVar10 = 0x8876086c;
        goto LAB_1800c1a44;
      }
      *(undefined8 *)(param_1 + -0x60) = *(undefined8 *)(param_1 + -0x70);
    }
    *param_4 = *(longlong *)(param_1 + -0x70) + (ulonglong)param_2;
  }
  uVar10 = 0;
LAB_1800c1a44:
  if (bVar6) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar10;
}

