/*
 * FUN_1800b0a60 at 1800b0a60
 * undefined FUN_1800b0a60(void)
 * Address ranges: 1800b0a60-1800b0d0f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b0a60(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  code *pcVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if ((7 < param_2 || param_3 == 0) || 0x20 < param_3) {
    return 0;
  }
  lVar10 = (longlong)(int)param_3;
  if (*(char *)(*(longlong *)(param_1 + -0x6828) + lVar10 * 0xc) == '\0') {
    return 0x8876086c;
  }
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
  lVar1 = (ulonglong)param_2 * 0x84 + lVar10 * 4;
  if (*(char *)(param_1 + -0x642c) != '\0') {
    lVar10 = *(longlong *)
              (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    *(uint *)(lVar1 + lVar10 + 0x358) = param_4;
    param_3 = param_2 * 0x21 + param_3;
    lVar10 = lVar10 + ((ulonglong)(param_3 >> 6) + 0x1591) * 8;
    uVar9 = (ulonglong)(param_3 >> 3) & 7;
    *(byte *)(lVar10 + uVar9) = *(byte *)(lVar10 + uVar9) | (byte)(1 << ((ulonglong)param_3 & 7));
    goto LAB_1800b0cc8;
  }
  lVar1 = lVar1 + param_1;
  if (*(uint *)(lVar1 + -0x6078) == param_4) goto LAB_1800b0cc8;
  if ((param_3 == 3 || (int)param_3 < 1) || 5 < (int)param_3) {
    if (param_3 == 0x10) {
      uVar6 = func_0x00018011c308(param_1 + -0x6838,param_4);
LAB_1800b0c7c:
      if ((0x23fe000U >> (ulonglong)(param_3 & 0x1f) & 1) == 0) goto LAB_1800b0bc8;
      plVar7 = *(longlong **)(param_1 + -0x6810);
      param_3 = *(uint *)(&DAT_18022a3f8 + lVar10 * 4);
      pcVar8 = *(code **)(*plVar7 + 0xa0);
    }
    else {
      if (param_3 == 0x11) {
        uVar6 = func_0x00018011c308(param_1 + -0x6838,param_4);
        goto LAB_1800b0c7c;
      }
      uVar6 = param_4;
      if (param_3 == 0x12) {
        if (*(int *)(*(longlong *)(param_1 + -0x6820) + 0x87c) == 1) {
          uVar6 = 0;
        }
        else {
          iVar5 = *(int *)(*(longlong *)(param_1 + -0x6820) + 0x878);
          if ((iVar5 - 0x100U & 0xfffffbff) == 0) {
            uVar6 = 1;
          }
          else if ((iVar5 - 0x300U & 0xfffffeff) == 0) {
            uVar6 = 2;
          }
        }
        goto LAB_1800b0c7c;
      }
      if (param_3 == 0x15) {
        uVar3 = *(uint *)(*(longlong *)(param_1 + -0x6820) + 0x878);
        uVar2 = uVar3 & 0xff;
        if ((uVar2 < 0x11) && (uVar6 = uVar2, uVar3 == 0)) {
          uVar6 = param_4;
        }
        goto LAB_1800b0c7c;
      }
      if (param_3 < 0x1a) goto LAB_1800b0c7c;
LAB_1800b0bc8:
      plVar7 = *(longlong **)(param_1 + -0x6810);
      pcVar8 = *(code **)(*plVar7 + 0x98);
    }
    (*pcVar8)(plVar7,param_2,param_3,uVar6);
  }
  else {
    *(uint *)(param_1 + -0x5b24) = *(uint *)(param_1 + -0x5b24) | 1 << (ulonglong)(param_2 & 0x1f);
  }
  *(uint *)(lVar1 + -0x6078) = param_4;
LAB_1800b0cc8:
  if (bVar4) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return 0;
}

