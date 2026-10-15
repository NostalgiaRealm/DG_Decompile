/*
 * FUN_180020044 at 180020044
 * bool __fastcall FUN_180020044(longlong param_1, undefined8 param_2)
 * Address ranges: 180020044-180020200
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180020044(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 local_res8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = *(longlong *)(lVar2 + 8);
  iVar1 = *(int *)(lVar3 + 0xd2);
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
  local_58 = *(undefined4 *)(lVar3 + 0xde);
  local_5c = *(undefined4 *)(lVar3 + 0xda);
  local_64 = *(undefined1 *)(lVar3 + 0x26);
  local_7c = *(undefined4 *)(lVar2 + 200);
  local_80 = *(undefined4 *)(lVar2 + 0xc4);
  local_84 = *(undefined4 *)(lVar2 + 0xbc);
  local_88 = *(undefined4 *)(lVar2 + 0xb8);
  local_8c = *(undefined4 *)(lVar2 + 0xb4);
  local_90 = *(undefined4 *)(lVar2 + 0xb0);
  local_6c = *(undefined4 *)(&DAT_1800611b0 + (longlong)*(int *)(lVar3 + 0xce) * 4);
  local_78 = *(undefined4 *)(&DAT_1800611c8 + (longlong)*(int *)(lVar3 + 0x1c) * 4);
  local_98 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa0);
  local_a0 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x2980);
  local_70 = local_res8;
  local_68 = (uint)((*(uint *)(lVar3 + 0xc2) & 4) != 0);
  local_63 = *(int *)(lVar3 + 0x18) == 1;
  local_74 = 0;
  local_60 = 0;
  local_a8 = param_2;
  puVar4 = FUN_18004fe70(*(LARGE_INTEGER *)(*(longlong *)(param_1 + 8) + 0x2978),&local_a8);
  *(undefined8 **)(param_1 + 0x10) = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_180020204(param_1);
    lVar2 = *(longlong *)(param_1 + 8);
    FUN_180050cf4(*(longlong *)(lVar2 + 0x2978),*(longlong *)(param_1 + 0x10),
                  lVar2 + 0x1d70 +
                  (-(ulonglong)(*(char *)(*(longlong *)(lVar2 + 8) + 0x50) != '\0') &
                  0xfffffffffffff400),(undefined8 *)(lVar2 + 0x2970));
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xd6a) = 0;
  }
  return puVar4 != (undefined8 *)0x0;
}

