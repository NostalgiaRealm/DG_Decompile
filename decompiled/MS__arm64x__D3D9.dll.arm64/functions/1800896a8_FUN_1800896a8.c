/*
 * FUN_1800896a8 at 1800896a8
 * undefined FUN_1800896a8(void)
 * Address ranges: 1800896a8-1800897bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800896a8(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined8 local_2c;
  undefined8 local_24;
  
  uVar2 = func_0x0001801bad48(&local_60,*(undefined4 *)(param_1 + 0x14));
  if (uVar2 < 0xe) {
    local_60 = 0x1b;
    uStack_5c = 0x1c;
    *(undefined1 *)(param_1 + 0x1d) = 1;
  }
  local_70[0] = 0;
  local_24 = 0;
  local_40 = *(undefined4 *)(param_1 + 8);
  uStack_3c = *(undefined4 *)(param_1 + 0xc);
  uStack_34 = *(undefined4 *)(param_1 + 0x18);
  local_38 = *(undefined4 *)(param_1 + 0x10);
  local_30 = local_60;
  local_2c = 0x800000000;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1cf10) +
          (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28) * 0x18c0;
  plVar3 = *(longlong **)(lVar4 + 0x6b0);
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,0,local_70);
  lVar1 = local_70[0];
  *(longlong *)(param_1 + 0x40) = local_70[0];
  if (local_70[0] != 0) {
    local_50 = 0;
    plVar3 = *(longlong **)(lVar4 + 0x6b0);
    local_70[0] = 0;
    local_60 = uStack_5c;
    uStack_5c = 8;
    uStack_58 = 0;
    uStack_54 = 0xffffffff;
    (**(code **)(*plVar3 + 0x38))(plVar3,lVar1,&local_60,local_70);
    *(longlong *)(param_1 + 0x48) = local_70[0];
    if (local_70[0] != 0) {
      return 1;
    }
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x10))();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return 0;
}

