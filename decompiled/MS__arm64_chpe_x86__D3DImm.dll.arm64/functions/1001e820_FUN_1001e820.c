/*
 * FUN_1001e820 at 1001e820
 * undefined FUN_1001e820(void)
 * Address ranges: 1001e820-1001ea1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1001e820(undefined4 *param_1,ulonglong param_2)

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
  *param_1 = &PTR_FUN_1009d090;
  *puVar1 = &PTR_FUN_1009d0b8;
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
    FUN_1007c468(param_1[0x10],param_1[10],*(undefined8 *)(param_1 + 0x1a),
                 *(undefined8 *)(param_1 + 0x1c),param_1[4],*(undefined8 *)(param_1 + 6));
  }
  *param_1 = &PTR_FUN_1009d098;
  *puVar1 = &PTR_FUN_1009d0a0;
  FUN_10081dc0(param_1[0x12]);
  *puVar1 = &PTR_FUN_1009d0a0;
  *param_1 = &PTR_FUN_1009d0d0;
  if ((param_2 & 1) != 0) {
    FUN_10081d50(param_1,0x78);
  }
  return param_1;
}

