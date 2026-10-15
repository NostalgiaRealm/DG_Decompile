/*
 * FUN_10062e00 at 10062e00
 * undefined FUN_10062e00(void)
 * Address ranges: 10062e00-10062f3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10062e00(undefined4 *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar4;
  
  *param_1 = &PTR_FUN_10099034;
  param_1[1] = &PTR_FUN_10099008;
  uVar4 = param_1[0x244];
  if (uVar4 != 0xffffffff) {
    pbVar1 = (byte *)(((int)uVar4 >> 3) + param_1[0x240] + 0xc);
    *pbVar1 = *pbVar1 & ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
  }
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3);
  param_1[0x18e] = 0;
  uVar4 = 0;
  if (param_1[0x249] != 0) {
    do {
      uVar3 = (*pcVar2)();
      (*extraout_w11_00)(uVar3);
      param_1[uVar4 + 399] = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[0x249]);
  }
  FUN_1007dd80(param_1[0x255]);
  FUN_1007dd80(param_1[0x23d]);
  FUN_1007dd80(param_1[0x23a]);
  return;
}

