/*
 * FUN_1801ba8a0 at 1801ba8a0
 * undefined FUN_1801ba8a0(void)
 * Address ranges: 1801ba8a0-1801ba9bf;1801baa34-1801baa4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1801ba8a0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  
  auVar4 = FUN_1801b91a0();
  local_80 = auVar4._8_8_;
  plVar1 = auVar4._0_8_;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *(longlong *)(param_1 + 8);
    if ((int)plVar1[2] < 4) {
      local_58 = *(undefined4 *)(&DAT_18022da28 + (longlong)(int)plVar1[2] * 4);
    }
    else {
      local_58 = 0;
    }
    local_40 = *(undefined4 *)(lVar3 + 0xde);
    uStack_44 = *(undefined4 *)(lVar3 + 0xda);
    local_4c = *(undefined1 *)(lVar3 + 0x26);
    uStack_54 = *(undefined4 *)(&DAT_1802389e0 + (longlong)*(int *)(lVar3 + 0xce) * 4);
    local_60 = *(undefined4 *)(&DAT_1802389f8 + (longlong)*(int *)(lVar3 + 0x1c) * 4);
    local_48 = 0;
    local_88 = *(undefined4 *)(param_1 + 0x28);
    local_50 = (uint)(*(int *)((longlong)plVar1 + 0x14) == 1);
    local_4b = *(int *)(lVar3 + 0x18) == 1;
    uStack_5c = 0;
    local_78 = *param_3;
    uStack_74 = param_3[1];
    local_70 = *(undefined4 *)((longlong)plVar1 + 0x24);
    uStack_6c = (undefined4)plVar1[5];
    local_68 = param_3[2];
    uStack_64 = param_3[3];
    local_90 = param_1;
    puVar2 = (undefined8 *)FUN_180202770(*(undefined8 *)(param_1 + 0x20),&local_90);
    if (puVar2 != (undefined8 *)0x0) {
      *plVar1 = (longlong)puVar2;
      FUN_180203408(*(undefined8 *)(param_1 + 0x20),*puVar2,0);
                    /* WARNING: Subroutine does not return */
      thunk_FUN_180104c48(param_1 + (ulonglong)*(uint *)((longlong)plVar1 + 0x1c) * 0xc18 + 0x100c0,
                          param_1 + 0x1c240,0xc00);
    }
  }
  return 0;
}

