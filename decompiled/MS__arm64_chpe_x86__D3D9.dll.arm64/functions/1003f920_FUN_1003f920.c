/*
 * FUN_1003f920 at 1003f920
 * undefined FUN_1003f920(void)
 * Address ranges: 1003f920-1003fa9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_1003f920(int param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  int iStack_2c;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar2 = 0;
  if (*(short *)(param_1 + 0xc) == 1) {
    if ((param_2 & 1) == 0) {
      local_38 = 0;
      local_30 = FUN_1003ebe0(*(undefined2 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x1c),
                              *(undefined4 *)(param_1 + 0x18));
      iStack_2c = *(ushort *)(param_1 + 0xe) - 1;
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      uVar2 = (*extraout_w11_00)(param_1,&local_38);
    }
    else {
      local_40 = 0;
      uStack_3c = 0;
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      cVar3 = (*extraout_w11_01)(param_1,&uStack_3c,&local_40);
      if (cVar3 != '\0') {
        puVar4 = (undefined4 *)(param_1 + 0x20);
        (*pcVar1)();
        (*extraout_w11_02)(param_1,uStack_3c,*puVar4);
        (*pcVar1)();
        (*extraout_w11_03)(param_1);
        uVar2 = 1;
      }
    }
  }
  else if ((param_2 & 1) == 0) {
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    uVar2 = (*extraout_w11)(param_1);
  }
  return uVar2;
}

