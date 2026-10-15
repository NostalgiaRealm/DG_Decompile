/*
 * FUN_1001ee50 at 1001ee50
 * undefined FUN_1001ee50(void)
 * Address ranges: 1001ee50-1001efb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1001ee50(int param_1,uint param_2)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  undefined1 auVar4 [16];
  
  FUN_1001c570(*(undefined4 *)(param_1 + 0x365c));
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_1);
  iVar3 = FUN_1001cae0(*(undefined4 *)(param_1 + 0x365c),*(undefined4 *)(param_1 + 0x2b1c));
  bVar1 = false;
  if (iVar3 != -1) {
    auVar4 = (*pcVar2)();
    iVar3 = (*extraout_w11_00)(auVar4._0_8_ & 0xffffffff,auVar4._8_8_ & 0xffffffff);
    bVar1 = *(int *)(iVar3 + 0x10) != 5 && *(int *)(iVar3 + 0x10) != 8;
  }
  if ((bool)((*(int *)(param_1 + 0x2b38) - 2U & 0xfffffffd) == 0 | bVar1)) {
    param_2 = param_2 << 8 | 0xff;
  }
  *(int *)(param_1 + 0x2e50) = (int)(param_2 << 8) >> 8;
  *(float *)(param_1 + 0x2e58) = (float)((double)(param_2 & 0xffffff) / 16777215.0);
  *(float *)(param_1 + 0x2e5c) =
       1.0000153 -
       1.0000153 /
       ((float)(1 << (ulonglong)(param_2 >> 0x14 & 0xf)) *
       (float)((double)(param_2 & 0xfffff | 0x100000) * 9.5367431640625e-07));
  *(undefined1 *)(param_1 + 0x3650) = 1;
  return;
}

