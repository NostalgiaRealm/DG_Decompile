/*
 * FUN_1005b940 at 1005b940
 * undefined FUN_1005b940(void)
 * Address ranges: 1005b940-1005ba03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005b940(int *param_1,int param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  code *extraout_w11;
  
  uVar3 = *(undefined4 *)(*param_1 + param_2 * 0x20 + 0x18);
  FUN_1005cdb0(param_1[3],uVar3,0,1);
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

