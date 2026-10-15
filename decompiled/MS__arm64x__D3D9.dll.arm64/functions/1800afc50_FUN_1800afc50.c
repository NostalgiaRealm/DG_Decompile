/*
 * FUN_1800afc50 at 1800afc50
 * undefined FUN_1800afc50(void)
 * Address ranges: 1800afc50-1800aff37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800afc50(longlong param_1,ulonglong param_2,float param_3)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  
  uVar7 = param_2 & 0xffffffff;
  uVar6 = (uint)param_2;
  if (0xd1 < uVar6 || uVar6 == 0) {
    return 0x8876086c;
  }
  if (*(char *)(*(longlong *)(param_1 + -0x6830) +
               (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3)) == '\0') {
    return 0x8876086c;
  }
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar2 == 0) {
      FUN_180003398();
    }
  }
  if (*(char *)(param_1 + -0x642c) != '\0') {
    lVar5 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    *(float *)(lVar5 + (longlong)(int)uVar6 * 4 + 0x10) = param_3;
    lVar5 = lVar5 + ((uVar7 >> 6) + 0x158d) * 8;
    uVar7 = uVar7 >> 3 & 7;
    *(byte *)(lVar5 + uVar7) = *(byte *)(lVar5 + uVar7) | (byte)(1 << (param_2 & 7));
    goto LAB_1800afd9c;
  }
  lVar5 = param_1 + (longlong)(int)uVar6 * 4;
  if (*(float *)(lVar5 + -0x63c0) == param_3) goto LAB_1800afd9c;
  if (uVar6 == 0x9a) {
    if (*(int *)(param_1 + 0x58) == 0 || *(int *)(param_1 + 0x58) == 0x1002) {
      if (param_3 == 7.464998e-10) {
        if ((*(char *)(param_1 + 0x5d) != '\0') || (*(char *)(param_1 + 0x5e) != '\0')) {
          plVar3 = *(longlong **)(param_1 + -0x6810);
          uVar4 = 0;
          goto LAB_1800afed0;
        }
      }
      else if (param_3 == 2.9859992e-09) {
        if (*(char *)(param_1 + 0x5d) != '\0') {
          plVar3 = *(longlong **)(param_1 + -0x6810);
LAB_1800afdf8:
          uVar4 = 1;
          goto LAB_1800afed0;
        }
      }
      else if (((param_3 == 3.630206e+12) && (*(char *)(param_1 + 0x5e) != '\0')) &&
              (*(char *)(param_1 + -0x6816) != '\0')) {
        plVar3 = *(longlong **)(param_1 + -0x6810);
LAB_1800afecc:
        uVar4 = 2;
LAB_1800afed0:
        (**(code **)(*plVar3 + 0x1b8))(plVar3,uVar4);
        goto LAB_1800afd98;
      }
    }
LAB_1800afd7c:
    plVar3 = *(longlong **)(param_1 + -0x6810);
LAB_1800afd84:
    (**(code **)(*plVar3 + 0x90))(plVar3,param_2 & 0xffffffff,param_3);
  }
  else if (uVar6 == 0xa6) {
    fVar8 = *(float *)(*(longlong *)(param_1 + 0x60) + 0xb0);
    if (fVar8 < param_3) {
      param_3 = fVar8;
    }
LAB_1800afe60:
    FUN_180010810(param_1 + -0x6838,param_2 & 0xffffffff,param_3);
  }
  else {
    if (uVar6 == 0xb5) {
      if (*(int *)(param_1 + 0x58) == 0 || *(int *)(param_1 + 0x58) == 0x10de) {
        if (param_3 == 0.0) {
          if ((*(char *)(param_1 + 0x5d) != '\0') || (*(char *)(param_1 + 0x5e) != '\0')) {
            (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x1b8))
                      (*(longlong **)(param_1 + -0x6810),0);
          }
        }
        else if (param_3 == 12.082843) {
          if ((*(char *)(param_1 + 0x5e) != '\0') && (*(char *)(param_1 + -0x6816) != '\0')) {
            plVar3 = *(longlong **)(param_1 + -0x6810);
            goto LAB_1800afecc;
          }
        }
        else if ((param_3 == 207.32912) && (*(char *)(param_1 + 0x5d) != '\0')) {
          plVar3 = *(longlong **)(param_1 + -0x6810);
          goto LAB_1800afdf8;
        }
      }
      plVar3 = *(longlong **)(param_1 + -0x6810);
      goto LAB_1800afd84;
    }
    if (uVar6 != 0xb8) goto LAB_1800afe60;
    if ((*(uint *)(*(longlong *)(param_1 + 0x60) + 0x1c) >> 0x18 & 1) != 0) goto LAB_1800afd7c;
  }
LAB_1800afd98:
  *(float *)(lVar5 + -0x63c0) = param_3;
LAB_1800afd9c:
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return 0;
}

