/*
 * FUN_10060ff0 at 10060ff0
 * undefined FUN_10060ff0(void)
 * Address ranges: 10060ff0-100610b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10060ff0(int *param_1,int param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  code *extraout_w11;
  
  uVar3 = *(undefined4 *)(*param_1 + param_2 * 0x20 + 0x18);
  FUN_10062460(param_1[3],uVar3,0,1);
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3);
  puVar1 = (uint *)(param_1 + 2);
  uVar5 = *puVar1;
  uVar4 = param_2 + 1;
  if (uVar4 < uVar5) {
    do {
      puVar2 = (undefined8 *)(*param_1 + uVar4 * 0x20);
      uVar4 = uVar4 + 1;
      puVar2[-3] = puVar2[1];
      puVar2[-4] = *puVar2;
      puVar2[-1] = puVar2[3];
      puVar2[-2] = puVar2[2];
      uVar5 = *puVar1;
    } while (uVar4 < uVar5);
  }
  *puVar1 = uVar5 - 1;
  return;
}

