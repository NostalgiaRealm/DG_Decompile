/*
 * FUN_100557b0 at 100557b0
 * undefined FUN_100557b0(void)
 * Address ranges: 100557b0-100559ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100557b0(undefined4 *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar6;
  uint uVar7;
  
  puVar1 = param_1 + 0xe;
  *param_1 = &PTR_FUN_101602f0;
  *puVar1 = &PTR_FUN_10160318;
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_1[0x10] == 0) {
    uVar7 = 0;
    if (param_1[0x13] != 0) {
      do {
        iVar2 = uVar7 * 0x20;
        iVar6 = param_1[0x12];
        if (*(int *)(iVar6 + iVar2 + 0x14) != 0) {
          do {
            uVar4 = (*pcVar3)();
            uVar5 = (*extraout_w11)(uVar4);
            if (*(ulonglong *)(iVar2 + 0x18 + iVar6) <= uVar5) break;
            DataMemoryBarrier(2,2);
            Yield();
            iVar6 = param_1[0x12];
          } while (*(int *)(iVar6 + iVar2 + 0x14) != 0);
        }
        uVar4 = (*pcVar3)();
        (*extraout_w11_00)(uVar4);
        uVar7 = uVar7 + 1;
      } while (uVar7 < (uint)param_1[0x13]);
    }
  }
  else if (param_1[0x19] != 0) {
    FUN_1011dc68(param_1[0x10],param_1[10],*(undefined8 *)(param_1 + 0x1a),
                 *(undefined8 *)(param_1 + 0x1c),param_1[4],*(undefined8 *)(param_1 + 6));
  }
  *param_1 = &PTR_FUN_101602f8;
  *puVar1 = &PTR_D3DPERF_GetStatus_native_10160300;
  FUN_101322d0(param_1[0x12]);
  *puVar1 = &PTR_D3DPERF_GetStatus_native_10160300;
  *param_1 = &PTR_FUN_10160358;
  if ((param_2 & 1) != 0) {
    FUN_10132260(param_1,0x78);
  }
  return param_1;
}

