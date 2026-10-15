/*
 * FUN_10006cb0 at 10006cb0
 * undefined FUN_10006cb0(void)
 * Address ranges: 10006cb0-10006e1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006cb0(int param_1)

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
    FUN_10121020(auStack_40);
    *(undefined1 *)(param_1 + 0x100) = 0;
    pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(param_1);
    uVar1 = *(uint *)(param_1 + 0xb8c);
    uVar5 = 0;
    if (uVar1 != 0) {
      if (uVar1 == 0) {
        puVar4 = (undefined4 *)&DAT_00000004;
        goto LAB_10006d40;
      }
      do {
        puVar4 = (undefined4 *)(*(int *)(param_1 + 0xb88) + uVar5 * 0x10 + 0xc);
LAB_10006d40:
        FUN_100fec90(*puVar4,0x408);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0xb8c));
    }
    FUN_100fed00(*(undefined4 *)(param_1 + 0xb84));
    *(undefined8 *)(param_1 + 0xb84) = 0;
    *(undefined8 *)(param_1 + 0xb8c) = 0;
    FUN_10006940(param_1,0);
    uVar3 = (*pcVar2)();
    (*extraout_w11_00)(uVar3);
    uVar3 = (*pcVar2)();
    (*extraout_w11_01)(uVar3);
    *(int *)(param_1 + 0x14) = 0;
    FUN_100fed20(*(undefined4 *)(*(int *)(param_1 + 0xabc) + -4));
    *(int *)(param_1 + 0xabc) = 0;
    FUN_1000a660(param_1);
    FUN_10120f70(auStack_40);
    if ((*(uint *)(param_1 + 0xb0c) >> 1 & 1) == 0) {
      FUN_101210d0();
    }
  }
  return;
}

