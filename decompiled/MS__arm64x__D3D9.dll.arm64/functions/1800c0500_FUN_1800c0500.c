/*
 * FUN_1800c0500 at 1800c0500
 * undefined FUN_1800c0500(void)
 * Address ranges: 1800c0500-1800c05cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c0500(longlong param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = DAT_18024e310;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar4 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    lVar5 = DAT_18024e310;
    if (iVar4 == 0) {
      FUN_180003398();
      lVar5 = DAT_18024e310;
    }
  }
  puVar3 = (undefined8 *)(param_1 + (ulonglong)param_2 * 4 + 0x1d8);
  for (uVar1 = param_4 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((param_4 & 1) != 0) {
    *(undefined4 *)param_3 = *(undefined4 *)puVar3;
  }
  if (bVar2) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)();
  }
  else {
    *(undefined4 *)(lVar5 + 0x2c) = 0;
  }
  return 0;
}

