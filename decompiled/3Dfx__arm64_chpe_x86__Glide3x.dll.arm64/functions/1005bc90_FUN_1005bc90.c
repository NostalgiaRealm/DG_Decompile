/*
 * FUN_1005bc90 at 1005bc90
 * undefined FUN_1005bc90(void)
 * Address ranges: 1005bc90-1005be33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005bc90(undefined4 *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar5;
  uint uVar6;
  
  *param_1 = &PTR_FUN_10098ec4;
  param_1[0xe] = &PTR_FUN_10098eec;
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_1[0x10] == 0) {
    uVar6 = 0;
    if (param_1[0x13] != 0) {
      do {
        iVar1 = uVar6 * 0x20;
        iVar5 = param_1[0x12];
        if (*(int *)(iVar5 + iVar1 + 0x14) != 0) {
          do {
            uVar3 = (*pcVar2)();
            uVar4 = (*extraout_w11)(uVar3);
            if (*(ulonglong *)(iVar1 + 0x18 + iVar5) <= uVar4) break;
            DataMemoryBarrier(2,2);
            Yield();
            iVar5 = param_1[0x12];
          } while (*(int *)(iVar5 + iVar1 + 0x14) != 0);
        }
        uVar3 = (*pcVar2)();
        (*extraout_w11_00)(uVar3);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)param_1[0x13]);
    }
  }
  else if (param_1[0x19] != 0) {
    FUN_10076140(param_1[0x10],param_1[10],*(undefined8 *)(param_1 + 0x1a),
                 *(undefined8 *)(param_1 + 0x1c),param_1[4],*(undefined8 *)(param_1 + 6));
  }
  FUN_1005c460(param_1);
  return;
}

