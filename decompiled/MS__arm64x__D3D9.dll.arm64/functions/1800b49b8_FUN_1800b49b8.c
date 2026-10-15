/*
 * FUN_1800b49b8 at 1800b49b8
 * undefined FUN_1800b49b8(void)
 * Address ranges: 1800b49b8-1800b4af7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800b49b8(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    if (iVar3 == 0) {
      FUN_180003398();
    }
  }
  lVar4 = FUN_1800c0ac0(param_1 + 0xd8,param_2);
  if (*(char *)(param_1 + -0x642c) == '\0') {
    cVar2 = FUN_1800b3268(param_1 + -0x6838,param_2,lVar4);
    uVar5 = 0x8876086c;
    if (cVar2 != '\0') {
      uVar5 = 0;
    }
  }
  else {
    lVar6 = *(longlong *)
             (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
    if (param_2 == 0) {
      if (*(longlong *)(lVar6 + 0x4fa8) != 0) {
        FUN_1800c1c08();
      }
      *(undefined8 *)(lVar6 + 0x4fa8) = 0;
    }
    else {
      uVar5 = 0x8876086c;
      if (lVar4 == 0) goto LAB_1800b4abc;
      FUN_1800015a0(param_2 + 0xc);
      if (*(longlong *)(lVar6 + 0x4fa8) != 0) {
        FUN_1800c1c08();
      }
      *(longlong *)(lVar6 + 0x4fa8) = param_2;
    }
    *(undefined1 *)(lVar6 + 0xacf8) = 1;
    uVar5 = 0;
  }
LAB_1800b4abc:
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
  }
  else {
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
  }
  return uVar5;
}

