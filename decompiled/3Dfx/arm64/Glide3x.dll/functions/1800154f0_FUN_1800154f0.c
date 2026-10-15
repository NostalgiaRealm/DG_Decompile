/*
 * FUN_1800154f0 at 1800154f0
 * undefined8 __cdecl FUN_1800154f0(longlong param_1, undefined8 param_2)
 * Address ranges: 1800154f0-18001563f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_1800154f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  lVar4 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(lVar4 + 8);
  iVar1 = *(int *)(lVar5 + 0xd2);
  if (iVar1 == 2) {
    local_48 = 1;
  }
  else if (iVar1 == 3) {
    local_48 = 2;
  }
  else if (iVar1 == 4) {
    local_48 = 3;
  }
  else {
    local_48 = 0;
  }
  local_30 = *(undefined4 *)(lVar5 + 0xde);
  uStack_34 = *(undefined4 *)(lVar5 + 0xda);
  local_3c = *(undefined1 *)(lVar5 + 0x26);
  uStack_44 = *(undefined4 *)(&DAT_180065f58 + (longlong)*(int *)(lVar5 + 0xce) * 4);
  local_58 = *(undefined4 *)(lVar4 + 0xc4);
  uStack_54 = *(undefined4 *)(lVar4 + 200);
  local_60 = *(undefined4 *)(lVar4 + 0xb8);
  uStack_5c = *(undefined4 *)(lVar4 + 0xbc);
  local_68 = *(undefined4 *)(lVar4 + 0xb0);
  uStack_64 = *(undefined4 *)(lVar4 + 0xb4);
  local_50 = *(undefined4 *)(&DAT_180065f70 + (longlong)*(int *)(lVar5 + 0x1c) * 4);
  local_70 = *(undefined8 *)(lVar4 + 0xa0);
  local_78 = *(undefined4 *)(lVar4 + 0x29f8);
  local_40 = (uint)((*(uint *)(lVar5 + 0xc2) & 4) != 0);
  local_3b = *(int *)(lVar5 + 0x18) == 1;
  uStack_4c = 0;
  local_38 = 0;
  local_80 = param_2;
  puVar2 = FUN_180056100(*(longlong **)(lVar4 + 0x29f0),&local_80);
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    FUN_180015640(param_1);
    lVar5 = *(longlong *)(param_1 + 8);
    lVar4 = 0x1de8;
    if (*(char *)(*(longlong *)(lVar5 + 8) + 0x50) != '\0') {
      lVar4 = 0x11e8;
    }
    FUN_180056f58(*(undefined8 *)(lVar5 + 0x29f0),*(undefined8 *)(param_1 + 0x10),lVar5 + lVar4,
                  (undefined8 *)(lVar5 + 0x29e8));
    uVar3 = 1;
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xd6a) = 0;
  }
  return uVar3;
}

