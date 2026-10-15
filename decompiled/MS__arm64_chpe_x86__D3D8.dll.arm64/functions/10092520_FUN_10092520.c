/*
 * FUN_10092520 at 10092520
 * undefined FUN_10092520(void)
 * Address ranges: 10092520-100925cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10092520(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *extraout_w8;
  code *extraout_w11;
  undefined1 auVar7 [12];
  
  puVar1 = (undefined4 *)(param_2 + 0x18);
  puVar6 = (undefined4 *)(param_2 + 0x14);
  puVar5 = (undefined4 *)(param_2 + 0x10);
  puVar4 = (undefined4 *)(param_2 + 0xc);
  puVar3 = (undefined4 *)(param_2 + 8);
  puVar2 = (undefined4 *)(param_2 + 4);
  auVar7 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(auVar7._0_8_ & 0xffffffff,*extraout_w8,*auVar7._8_4_,*puVar2,*puVar3,*puVar4,
                  *puVar5,*puVar6,*puVar1);
  return;
}

