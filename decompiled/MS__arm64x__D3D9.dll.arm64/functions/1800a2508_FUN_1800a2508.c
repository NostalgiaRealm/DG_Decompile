/*
 * FUN_1800a2508 at 1800a2508
 * undefined FUN_1800a2508(void)
 * Address ranges: 1800a2508-1800a26af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800a2508(longlong param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
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
  
  uVar5 = 0;
  auVar6 = func_0x0001801b91a0();
  local_80 = auVar6._8_8_;
  plVar1 = auVar6._0_8_;
  if (plVar1 != (longlong *)0x0) {
    lVar3 = *(longlong *)(param_1 + 8);
    if ((int)plVar1[2] < 4) {
      local_58 = *(undefined4 *)(&DAT_180231450 + (longlong)(int)plVar1[2] * 4);
    }
    else {
      local_58 = 0;
    }
    local_4c = *(undefined1 *)(lVar3 + 0x26);
    local_40 = *(undefined4 *)(lVar3 + 0xde);
    uStack_44 = *(undefined4 *)(lVar3 + 0xda);
    uStack_54 = *(undefined4 *)(&DAT_180232f18 + (longlong)*(int *)(lVar3 + 0xce) * 4);
    local_60 = *(undefined4 *)(&DAT_180232ef0 + (longlong)*(int *)(lVar3 + 0x1c) * 4);
    local_4b = *(int *)(lVar3 + 0x18) == 1;
    local_88 = *(undefined4 *)(param_1 + 0x28);
    local_50 = (uint)(*(int *)((longlong)plVar1 + 0x14) == 1);
    local_48 = 0;
    uStack_5c = 0;
    local_78 = *param_3;
    uStack_74 = param_3[1];
    local_70 = *(undefined4 *)((longlong)plVar1 + 0x24);
    uStack_6c = (undefined4)plVar1[5];
    local_68 = param_3[2];
    uStack_64 = param_3[3];
    local_90 = param_1;
    puVar2 = (undefined8 *)FUN_1800e54c0(*(undefined8 *)(param_1 + 0x20),&local_90);
    if (puVar2 != (undefined8 *)0x0) {
      *plVar1 = (longlong)puVar2;
      FUN_1800e6028(*(undefined8 *)(param_1 + 0x20),*puVar2,0);
      lVar3 = param_1 + (ulonglong)*(uint *)((longlong)plVar1 + 0x1c) * 0xc18;
      thunk_FUN_180001218(lVar3 + 0x100c0,param_1 + 0x1c240,0xc00);
      FUN_1800e69c8(*(undefined8 *)(param_1 + 0x20),puVar2,lVar3 + 0x100c0,param_1 + 0x18);
      if ((param_4 & 1) == 0) {
        uVar4 = 2;
        if ((int)plVar1[3] == 1) {
          uVar4 = 3;
        }
        FUN_1800e63a0(*(undefined8 *)(param_1 + 0x20),*plVar1,uVar4,(int)plVar1[4]);
        FUN_1800e69c8(*(undefined8 *)(param_1 + 0x20),*plVar1,
                      param_1 + (ulonglong)*(uint *)((longlong)plVar1 + 0x1c) * 0xc18 + 0x100c0,
                      param_1 + 0x18);
      }
      FUN_1800a1058(param_1,*(undefined4 *)((longlong)plVar1 + 0x1c),puVar2);
      *(undefined1 *)((longlong)plVar1 + 0x2d) = 1;
      uVar5 = 1;
    }
  }
  return uVar5;
}

