/*
 * FUN_1800bf298 at 1800bf298
 * undefined FUN_1800bf298(void)
 * Address ranges: 1800bf298-1800bf407
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800bf298(longlong param_1,uint param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = DAT_18024e310;
  uVar5 = 0x8876086c;
  if ((param_3 != (undefined4 *)0x0) && ((param_2 - 2 < 0x16 || (param_2 - 0x100 < 0x100)))) {
    if (((*(uint *)(param_1 + -0x59c0) >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar2 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar2 = true;
      iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      lVar4 = DAT_18024e310;
      if (iVar3 == 0) {
        FUN_180003398();
        lVar4 = DAT_18024e310;
      }
    }
    if (param_2 < 0x18) {
      iVar3 = *(int *)(&DAT_180229b50 + (longlong)(int)param_2 * 4);
    }
    else {
      iVar3 = param_2 - 0xf6;
    }
    uVar5 = 0;
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + -0x5a28) + (longlong)iVar3 * 0x40);
    *param_3 = *puVar1;
    param_3[4] = puVar1[1];
    param_3[8] = puVar1[2];
    param_3[0xc] = puVar1[3];
    param_3[1] = puVar1[4];
    param_3[5] = puVar1[5];
    param_3[9] = puVar1[6];
    param_3[0xd] = puVar1[7];
    param_3[2] = puVar1[8];
    param_3[6] = puVar1[9];
    param_3[10] = puVar1[10];
    param_3[0xe] = puVar1[0xb];
    param_3[3] = puVar1[0xc];
    param_3[7] = puVar1[0xd];
    param_3[0xb] = puVar1[0xe];
    param_3[0xf] = puVar1[0xf];
    if (bVar2) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)();
    }
    else {
      *(undefined4 *)(lVar4 + 0x2c) = 0;
    }
  }
  return uVar5;
}

