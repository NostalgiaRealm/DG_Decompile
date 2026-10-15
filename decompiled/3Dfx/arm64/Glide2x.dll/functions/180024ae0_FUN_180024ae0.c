/*
 * FUN_180024ae0 at 180024ae0
 * undefined __cdecl FUN_180024ae0(longlong * param_1)
 * Address ranges: 180024ae0-180024cb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180024ae0(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_90;
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
  
  plVar5 = (longlong *)param_1[0x630];
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar4 = plVar5[1];
  lVar3 = *(longlong *)(lVar4 + 8);
  iVar1 = *(int *)(lVar3 + 0xd2);
  if (iVar1 == 2) {
    local_58 = 1;
  }
  else if (iVar1 == 3) {
    local_58 = 2;
  }
  else if (iVar1 == 4) {
    local_58 = 3;
  }
  else {
    local_58 = 0;
  }
  local_4c = *(undefined1 *)(lVar3 + 0x26);
  local_40 = *(undefined4 *)(lVar3 + 0xde);
  uStack_44 = *(undefined4 *)(lVar3 + 0xda);
  uStack_54 = *(undefined4 *)(&DAT_180062158 + (longlong)*(int *)(lVar3 + 0xce) * 4);
  local_68 = *(undefined4 *)(lVar4 + 0xc4);
  uStack_64 = *(undefined4 *)(lVar4 + 200);
  local_70 = *(undefined4 *)(lVar4 + 0xb8);
  uStack_6c = *(undefined4 *)(lVar4 + 0xbc);
  local_78 = *(undefined4 *)(lVar4 + 0xb0);
  uStack_74 = *(undefined4 *)(lVar4 + 0xb4);
  local_60 = *(undefined4 *)(&DAT_180062170 + (longlong)*(int *)(lVar3 + 0x1c) * 4);
  local_80 = *(undefined8 *)(lVar4 + 0xa0);
  local_88 = *(undefined4 *)(lVar4 + 0x2980);
  local_4b = *(int *)(lVar3 + 0x18) == 1;
  uStack_5c = 0;
  local_50 = (uint)((*(uint *)(lVar3 + 0xc2) & 4) != 0);
  local_48 = 0;
  local_90 = plVar5;
  puVar2 = FUN_180052570(*(longlong **)(lVar4 + 0x2978),&local_90);
  FUN_1800530d8(*(longlong **)(plVar5[1] + 0x2978),*(longlong *)(plVar5[1] + 0xa0),0);
  FUN_180021360((longlong)plVar5);
  lVar4 = plVar5[1];
  lVar3 = 0x1d70;
  if (*(char *)(*(longlong *)(lVar4 + 8) + 0x50) != '\0') {
    lVar3 = 0x1170;
  }
  FUN_1800533c8(*(undefined8 *)(lVar4 + 0x2978),plVar5[2],lVar4 + lVar3,
                (undefined8 *)(lVar4 + 0x2970));
  if (puVar2 != (undefined8 *)0x0) {
    plVar5[2] = (longlong)puVar2;
    (**(code **)(*plVar5 + 0x30))(plVar5);
  }
  *(undefined1 *)((longlong)param_1 + 0x2be5) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2be3) = 1;
  *(float *)(param_1 + 0x565) = (float)*(uint *)(param_1 + 0x16);
  *(float *)((longlong)param_1 + 0x2b2c) = (float)*(uint *)((longlong)param_1 + 0xb4);
  param_1[0x562] = param_1[0x565];
  param_1[0x561] = param_1[0x564];
  param_1[0x563] = param_1[0x566];
  FUN_180039dc0(param_1,(int *)((longlong)param_1 + 0x29a4));
  return;
}

