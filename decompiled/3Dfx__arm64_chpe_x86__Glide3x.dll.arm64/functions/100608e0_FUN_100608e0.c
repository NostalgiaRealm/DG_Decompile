/*
 * FUN_100608e0 at 100608e0
 * undefined FUN_100608e0(void)
 * Address ranges: 100608e0-10060a07
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100608e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  code *extraout_w11;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *param_1 = &PTR_FUN_10098f08;
  param_1[0x142] = &PTR_FUN_10098fe4;
  puVar1 = param_1 + 0x143;
  *puVar1 = &PTR_FUN_10098f50;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = 0;
  if (param_1[0x146] != 0) {
    do {
      uVar3 = (*pcVar2)();
      (*extraout_w11)(uVar3,puVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)param_1[0x146]);
  }
  iVar6 = DAT_100a2930;
  if (DAT_100a2930 != 0) {
    FUN_1005c7e0(DAT_100a2930);
    FUN_1007dd10(iVar6,0x38);
  }
  DAT_100a2930 = 0;
  param_1[0x1a8] = 0;
  FUN_1006c3e8(param_1);
  iVar6 = 0x10;
  puVar5 = param_1 + 0x5cb0;
  do {
    puVar5 = puVar5 + -0x5b0;
    iVar6 = iVar6 + -1;
    FUN_10060760(puVar5);
  } while (iVar6 != 0);
  FUN_100766a0(puVar1);
  FUN_1006bc50(param_1);
  return;
}

