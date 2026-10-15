/*
 * FUN_1801771a8 at 1801771a8
 * undefined FUN_1801771a8(void)
 * Address ranges: 1801771a8-1801772db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801771a8(longlong param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 local_c0;
  uint *puStack_b8;
  ulonglong local_b0;
  longlong lStack_a8;
  undefined8 local_a0;
  uint local_80;
  undefined1 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  undefined1 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_a0 = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  local_80 = param_3 | 0x410100;
  uStack_68 = 0xffffffffffffffff;
  local_70 = 0xffffffffffffffff;
  local_7c = 0xa4;
  uVar2 = (ulonglong)((*(byte *)(lVar1 + 0x364) >> 4 & 3) << 6) |
          (ulonglong)*(byte *)(lVar1 + 0x364) & 0x3f | 0x100;
  lStack_a8 = lVar1 + 0x360;
  puStack_b8 = &local_80;
  local_c0 = param_2;
  local_b0 = uVar2;
  FUN_180214e10(lVar1,*(undefined8 *)(param_1 + 0x10),0x10,0x101,&local_c0,0x28);
  if (param_4 != 0xffffffff) {
    local_60 = param_4 | 0x410100;
    local_5c = 0xa4;
    local_a0 = 0;
    lStack_a8 = *(longlong *)(param_1 + 8) + 0x360;
    uStack_48 = 0xffffffffffffffff;
    local_50 = 0xffffffffffffffff;
    puStack_b8 = &local_60;
    local_c0 = param_2;
    local_b0 = uVar2;
    FUN_180214e10(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),0x10,0x102,&local_c0,
                  0x28);
  }
  if (param_5 != 0xffffffff) {
    local_60 = param_5 | 0x410100;
    local_5c = 0xa4;
    local_a0 = 0;
    lStack_a8 = *(longlong *)(param_1 + 8) + 0x360;
    uStack_48 = 0xffffffffffffffff;
    local_50 = 0xffffffffffffffff;
    puStack_b8 = &local_60;
    local_c0 = param_2;
    local_b0 = uVar2;
    FUN_180214e10(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),0x10,0x104,&local_c0,
                  0x28);
  }
  return;
}

