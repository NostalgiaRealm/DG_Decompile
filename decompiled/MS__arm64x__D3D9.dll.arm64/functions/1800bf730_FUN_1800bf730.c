/*
 * FUN_1800bf730 at 1800bf730
 * undefined FUN_1800bf730(void)
 * Address ranges: 1800bf730-1800bf837
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800bf730(longlong param_1,int param_2,uint *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int local_40 [4];
  
  lVar4 = DAT_18024e310;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    lVar4 = DAT_18024e310;
    if (iVar2 == 0) {
      FUN_180003398();
      lVar4 = DAT_18024e310;
    }
  }
  uVar6 = 0x8876086c;
  local_40[0] = param_2;
  if ((param_3 != (uint *)0x0) && (lVar3 = FUN_180007c48(param_1 + -0x6520,local_40), lVar3 != 0)) {
    if (*(uint *)(param_1 + -0x64d8) != 0) {
      uVar5 = 0;
      do {
        iVar2 = (int)uVar5;
        if (*(int *)(*(longlong *)(param_1 + -0x64e0) + uVar5 * 4) == param_2) goto LAB_1800bf7f4;
        uVar5 = (ulonglong)(iVar2 + 1U);
      } while (iVar2 + 1U < *(uint *)(param_1 + -0x64d8));
    }
    iVar2 = -1;
LAB_1800bf7f4:
    *param_3 = (uint)(iVar2 != -1);
    uVar6 = 0;
  }
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar4);
  }
  else {
    *(undefined4 *)(lVar4 + 0x2c) = 0;
  }
  return uVar6;
}

