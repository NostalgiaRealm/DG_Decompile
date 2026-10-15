/*
 * FUN_1800beb10 at 1800beb10
 * undefined FUN_1800beb10(void)
 * Address ranges: 1800beb10-1800bed9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1800beb10(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar4 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar4 = true;
    iVar5 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar5 == 0) {
      FUN_180003398();
    }
  }
  iVar5 = -0x7789f794;
  if ((0x12 < param_2) || ((0x7ff70U >> (ulonglong)(param_2 & 0x1f) & 1) == 0)) goto LAB_1800bed5c;
  if (4 < param_2 - 8) {
    iVar5 = -0x7789f796;
    goto LAB_1800bed5c;
  }
  iVar5 = 0;
  if (param_3 == 0) goto LAB_1800bed5c;
  uVar10 = *(undefined8 *)(param_1 + -0x5998);
  iVar5 = -0x7ff8fff2;
  puVar6 = (undefined8 *)FUN_180102f80(0x48);
  if (puVar6 == (undefined8 *)0x0) goto LAB_1800bed5c;
  *puVar6 = &PTR_FUN_180236820;
  puVar6[1] = 0;
  *(uint *)(puVar6 + 4) = param_2;
  puVar6[5] = uVar10;
  puVar6[6] = 0;
  puVar6[2] = puVar6;
  puVar6[3] = param_1 + -0x6838;
  *(undefined2 *)(puVar6 + 8) = 1;
  puVar6[7] = 0;
  lVar7 = (**(code **)(*(longlong *)puVar6[5] + 0x30))
                    ((longlong *)puVar6[5],*(undefined4 *)(puVar6 + 4));
  puVar6[6] = lVar7;
  if (lVar7 != 0) {
    iVar2 = *(int *)(param_1 + 0x154);
    if (*(int *)(param_1 + 0x150) == iVar2) {
      uVar9 = iVar2 << 1;
      if (iVar2 == 0) {
        uVar9 = 0x10;
      }
      lVar7 = CONCAT44(0,uVar9) << 3;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = CONCAT44(0,uVar9);
      if (SUB168(auVar3 * ZEXT816(8),8) != 0) {
        lVar7 = -1;
      }
      lVar7 = thunk_FUN_180102f80(lVar7);
      if (lVar7 != 0) {
        thunk_FUN_180001218(lVar7,*(undefined8 *)(param_1 + 0x148),
                            (ulonglong)*(uint *)(param_1 + 0x154) << 3);
        thunk_FUN_180102fc0(*(undefined8 *)(param_1 + 0x148));
        *(longlong *)(param_1 + 0x148) = lVar7;
        *(uint *)(param_1 + 0x154) = uVar9;
        goto LAB_1800bec80;
      }
    }
    else {
LAB_1800bec80:
      *(undefined8 **)(*(longlong *)(param_1 + 0x148) + (ulonglong)*(uint *)(param_1 + 0x150) * 8) =
           puVar6;
      *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
      iVar5 = FUN_1800c2940(puVar6,&DAT_180229568,param_3);
      if (-1 < iVar5) goto LAB_1800bed5c;
      (**(code **)(**(longlong **)(param_1 + -0x6810) + 0x1d0))
                (*(longlong **)(param_1 + -0x6810),puVar6[6]);
      uVar9 = *(uint *)(param_1 + 0x150);
      if (uVar9 != 0) {
        uVar8 = 0;
        do {
          if (*(undefined8 **)(*(longlong *)(param_1 + 0x148) + uVar8 * 8) == puVar6) {
            if ((int)uVar8 != -1) {
              while (uVar1 = (int)uVar8 + 1, uVar1 < uVar9) {
                *(undefined8 *)(*(longlong *)(param_1 + 0x148) + uVar8 * 8) =
                     *(undefined8 *)(*(longlong *)(param_1 + 0x148) + (ulonglong)uVar1 * 8);
                uVar8 = (ulonglong)uVar1;
                uVar9 = *(uint *)(param_1 + 0x150);
              }
              *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
            }
            break;
          }
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar1;
        } while (uVar1 < uVar9);
      }
    }
    (**(code **)(*(longlong *)puVar6[6] + 8))();
    puVar6[6] = 0;
  }
  *puVar6 = &PTR_FUN_180236820;
  FUN_180102fc0(puVar6,0x48);
LAB_1800bed5c:
  if (bVar4) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return iVar5;
}

