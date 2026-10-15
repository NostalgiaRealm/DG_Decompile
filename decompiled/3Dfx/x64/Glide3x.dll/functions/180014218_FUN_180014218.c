/*
 * FUN_180014218 at 180014218
 * bool __fastcall FUN_180014218(longlong * param_1)
 * Address ranges: 180014218-1800143ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180014218(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 local_res8;
  longlong *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  (**(code **)(*param_1 + 0x28))();
  lVar2 = *(longlong *)(param_1[1] + 8);
  iVar1 = *(int *)(lVar2 + 0xd2);
  local_res8 = 2;
  if (iVar1 == 2) {
    local_res8 = 1;
  }
  else if (iVar1 != 3) {
    if (iVar1 == 4) {
      local_res8 = 3;
    }
    else {
      local_res8 = 0;
    }
  }
  local_48 = *(undefined4 *)(lVar2 + 0xde);
  local_4c = *(undefined4 *)(lVar2 + 0xda);
  local_54 = *(undefined1 *)(lVar2 + 0x26);
  local_5c = *(undefined4 *)(&DAT_180062ff0 + (longlong)*(int *)(lVar2 + 0xce) * 4);
  local_68 = *(undefined4 *)(&DAT_180063008 + (longlong)*(int *)(lVar2 + 0x1c) * 4);
  lVar3 = param_1[1];
  local_80 = *(undefined4 *)(lVar3 + 0xb0);
  local_88 = *(undefined8 *)(lVar3 + 0xa0);
  local_6c = *(undefined4 *)(lVar3 + 200);
  local_70 = *(undefined4 *)(lVar3 + 0xc4);
  local_74 = *(undefined4 *)(lVar3 + 0xbc);
  local_78 = *(undefined4 *)(lVar3 + 0xb8);
  local_7c = *(undefined4 *)(lVar3 + 0xb4);
  local_90 = *(undefined4 *)(lVar3 + 0x29f8);
  local_60 = local_res8;
  local_58 = (uint)((*(uint *)(lVar2 + 0xc2) & 4) != 0);
  local_53 = *(int *)(lVar2 + 0x18) == 1;
  local_64 = 0;
  local_50 = 0;
  local_98 = param_1;
  puVar4 = FUN_180051fd4(*(LARGE_INTEGER *)(param_1[1] + 0x29f0),&local_98);
  FUN_1800526f8(*(longlong **)(param_1[1] + 0x29f0),*(longlong *)(param_1[1] + 0xa0),0);
  FUN_1800131a0((longlong)param_1);
  lVar2 = param_1[1];
  FUN_180052e58(*(longlong *)(lVar2 + 0x29f0),param_1[2],
                (-(ulonglong)(*(char *)(*(longlong *)(lVar2 + 8) + 0x50) != '\0') &
                0xfffffffffffff400) + 0x1de8 + lVar2,(undefined8 *)(lVar2 + 0x29e8));
  if (puVar4 != (undefined8 *)0x0) {
    param_1[2] = (longlong)puVar4;
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  return puVar4 != (undefined8 *)0x0;
}

