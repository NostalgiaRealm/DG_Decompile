/*
 * FUN_1800afac0 at 1800afac0
 * undefined FUN_1800afac0(void)
 * Address ranges: 1800afac0-1800afc47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800afac0(longlong param_1,ulonglong param_2,undefined4 *param_3)

{
  longlong lVar1;
  bool bVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  
  uVar3 = param_2 & 0xffffffff;
  uVar7 = 0x8876086c;
  if ((uint)param_2 < 6 && param_3 != (undefined4 *)0x0) {
    if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
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
    if (*(char *)(param_1 + -0x642c) == '\0') {
      lVar1 = param_1 + uVar3 * 0x10;
      *(undefined4 *)(lVar1 + -0x6420) = *param_3;
      *(undefined4 *)(lVar1 + -0x641c) = param_3[1];
      *(undefined4 *)(param_1 + (uVar3 + 0x42) * 0x10 + -0x6838) = param_3[2];
      *(undefined4 *)(lVar1 + -0x6414) = param_3[3];
      (**(code **)(**(longlong **)(param_1 + -0x6810) + 0xb0))
                (*(longlong **)(param_1 + -0x6810),param_2 & 0xffffffff,lVar1 + -0x6420);
    }
    else {
      uVar6 = uVar3 >> 3 & 7;
      lVar5 = *(longlong *)
               (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
      lVar1 = lVar5 + uVar3 * 0x10;
      *(undefined4 *)(lVar1 + 0x4a54) = *param_3;
      *(undefined4 *)(lVar1 + 0x4a58) = param_3[1];
      *(undefined4 *)(lVar1 + 0x4a5c) = param_3[2];
      *(undefined4 *)(lVar5 + (uVar3 + 0x4a6) * 0x10) = param_3[3];
      lVar5 = lVar5 + ((uVar3 >> 6) + 0x159c) * 8;
      *(byte *)(lVar5 + uVar6) = *(byte *)(lVar5 + uVar6) | (byte)(1 << (param_2 & 7));
    }
    uVar7 = 0;
    if (bVar2) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return uVar7;
}

