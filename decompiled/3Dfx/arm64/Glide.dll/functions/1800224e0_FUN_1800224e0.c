/*
 * FUN_1800224e0 at 1800224e0
 * undefined __cdecl FUN_1800224e0(longlong param_1)
 * Address ranges: 1800224e0-180022657
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800224e0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  uint local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  
  lVar4 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(lVar4 + 8);
  iVar1 = *(int *)(lVar5 + 0xd2);
  if (iVar1 == 2) {
    local_38 = 1;
  }
  else if (iVar1 == 3) {
    local_38 = 2;
  }
  else if (iVar1 == 4) {
    local_38 = 3;
  }
  else {
    local_38 = 0;
  }
  uStack_24 = *(undefined4 *)(lVar5 + 0xda);
  local_20 = *(undefined4 *)(lVar5 + 0xde);
  local_2c = *(undefined1 *)(lVar5 + 0x26);
  uStack_34 = *(undefined4 *)(&DAT_180063158 + (longlong)*(int *)(lVar5 + 0xce) * 4);
  local_48 = *(undefined4 *)(lVar4 + 0xc4);
  uStack_44 = *(undefined4 *)(lVar4 + 200);
  local_50 = *(undefined4 *)(lVar4 + 0xb8);
  uStack_4c = *(undefined4 *)(lVar4 + 0xbc);
  local_58 = *(undefined4 *)(lVar4 + 0xb0);
  uStack_54 = *(undefined4 *)(lVar4 + 0xb4);
  local_40 = *(undefined4 *)(&DAT_180063170 + (longlong)*(int *)(lVar5 + 0x1c) * 4);
  local_68 = *(undefined4 *)(lVar4 + 0x2980);
  local_60 = *(undefined8 *)(lVar4 + 0xa0);
  local_28 = 0;
  local_2b = *(int *)(lVar5 + 0x18) == 1;
  uStack_3c = 0;
  local_30 = (uint)((*(uint *)(lVar5 + 0xc2) & 4) != 0);
  local_70 = param_1;
  puVar3 = FUN_1800533c0(*(longlong **)(lVar4 + 0x2978),&local_70);
  *(undefined8 **)(param_1 + 0x10) = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1800221b0(param_1);
    lVar5 = *(longlong *)(param_1 + 8);
    lVar4 = 0x1d70;
    if (*(char *)(*(longlong *)(lVar5 + 8) + 0x50) != '\0') {
      lVar4 = 0x1170;
    }
    FUN_180054218(*(undefined8 *)(lVar5 + 0x2978),*(undefined8 *)(param_1 + 0x10),lVar5 + lVar4,
                  (undefined8 *)(lVar5 + 0x2970));
    *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xd6a) = 0;
  }
  FUN_180053f28(*(longlong **)(*(longlong *)(param_1 + 8) + 0x2978),
                *(longlong *)(*(longlong *)(param_1 + 8) + 0xa0),0);
  bVar2 = FUN_1800541a0(*(longlong *)(*(longlong *)(param_1 + 8) + 0x2978),
                        *(longlong *)(param_1 + 0x10));
  if ((!bVar2) && (*(char *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x20) == '\0')) {
    FUN_180022be8(param_1);
  }
  return;
}

