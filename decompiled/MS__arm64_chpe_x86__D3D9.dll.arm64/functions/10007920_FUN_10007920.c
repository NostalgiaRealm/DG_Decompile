/*
 * FUN_10007920 at 10007920
 * undefined FUN_10007920(void)
 * Address ranges: 10007920-10007a8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10007920(int param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  uint uVar5;
  undefined1 auStack_40 [16];
  
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_10157b40(auStack_40);
    *(undefined1 *)(param_1 + 0x2a4) = 0;
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    uVar1 = *(uint *)(param_1 + 0xe50);
    uVar5 = 0;
    if (uVar1 != 0) {
      if (uVar1 == 0) {
        puVar4 = (undefined4 *)&DAT_00000004;
        goto LAB_100079b0;
      }
      do {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0xe4c) + uVar5 * 0x10 + 0xc);
LAB_100079b0:
        FUN_10132260(*puVar4,0x408);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0xe50));
    }
    FUN_101322d0(*(undefined4 *)(param_1 + 0xe48));
    *(undefined8 *)(param_1 + 0xe48) = 0;
    *(undefined8 *)(param_1 + 0xe50) = 0;
    FUN_100075b0(param_1,0);
    uVar3 = (*pcVar2)();
    (*extraout_w11_00)(uVar3);
    uVar3 = (*pcVar2)();
    (*extraout_w11_01)(uVar3);
    *(int *)(param_1 + 0x14) = 0;
    FUN_10132440(*(undefined4 *)(*(int *)(param_1 + 0xd80) + -4));
    *(int *)(param_1 + 0xd80) = 0;
    FUN_1000b4e0(param_1);
    FUN_10157a90(auStack_40);
    if ((*(uint *)(param_1 + 0xdd0) >> 1 & 1) == 0) {
      FUN_10157bf0();
    }
  }
  return;
}

