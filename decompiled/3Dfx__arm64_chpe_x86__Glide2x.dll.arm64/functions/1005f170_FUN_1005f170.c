/*
 * FUN_1005f170 at 1005f170
 * undefined FUN_1005f170(void)
 * Address ranges: 1005f170-1005f2af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005f170(undefined4 *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar4;
  
  *param_1 = &PTR_FUN_100951b8;
  param_1[1] = &PTR_FUN_1009518c;
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
  FUN_1007a060(param_1[0x255]);
  FUN_1007a060(param_1[0x23d]);
  FUN_1007a060(param_1[0x23a]);
  return;
}

