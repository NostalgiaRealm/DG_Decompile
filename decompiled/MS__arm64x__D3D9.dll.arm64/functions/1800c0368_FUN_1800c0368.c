/*
 * FUN_1800c0368 at 1800c0368
 * undefined FUN_1800c0368(void)
 * Address ranges: 1800c0368-1800c0433
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800c0368(longlong param_1,int param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = DAT_18024e310;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar2 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar2 = true;
    iVar5 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    lVar6 = DAT_18024e310;
    if (iVar5 == 0) {
      FUN_180003398();
      lVar6 = DAT_18024e310;
    }
  }
  uVar1 = (param_4 & 0x3fffffff) << 1;
  puVar3 = (undefined8 *)(param_1 + (ulonglong)(uint)(param_2 << 2) * 4 + -0x1458);
  uVar4 = param_4 & 0x3fffffff;
  while (uVar4 != 0) {
    *param_3 = *puVar3;
    uVar1 = uVar1 - 1;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
    uVar4 = uVar1;
  }
  if (bVar2) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)();
  }
  else {
    *(undefined4 *)(lVar6 + 0x2c) = 0;
  }
  return 0;
}

