/*
 * FUN_1800bf500 at 1800bf500
 * undefined FUN_1800bf500(void)
 * Address ranges: 1800bf500-1800bf5db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800bf500(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar3 = DAT_18024e310;
  if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
    bVar1 = false;
    *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
  }
  else {
    bVar1 = true;
    iVar2 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
    lVar3 = DAT_18024e310;
    if (iVar2 == 0) {
      FUN_180003398();
      lVar3 = DAT_18024e310;
    }
  }
  uVar4 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    uVar5 = *(undefined8 *)(param_1 + -0x6564);
    uVar4 = 0;
    param_2[1] = *(undefined8 *)(param_1 + -0x655c);
    *param_2 = uVar5;
    uVar5 = *(undefined8 *)(param_1 + -0x6554);
    param_2[3] = *(undefined8 *)(param_1 + -0x654c);
    param_2[2] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + -0x6544);
    param_2[5] = *(undefined8 *)(param_1 + -0x653c);
    param_2[4] = uVar5;
    uVar5 = *(undefined8 *)(param_1 + -0x6534);
    param_2[7] = *(undefined8 *)(param_1 + -0x652c);
    param_2[6] = uVar5;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + -0x6524);
  }
  if (bVar1) {
    (*__imp_KERNEL32_dll_LeaveCriticalSection)();
  }
  else {
    *(undefined4 *)(lVar3 + 0x2c) = 0;
  }
  return uVar4;
}

