/*
 * FUN_180065690 at 180065690
 * undefined FUN_180065690(void)
 * Address ranges: 180065690-1800657ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180065690(longlong param_1,undefined8 param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  uint uVar2;
  uint local_80;
  undefined1 local_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  undefined1 local_5c;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar1 = *(longlong *)(param_1 + 8);
  local_80 = param_3 | 0x410100;
  uStack_68 = 0xffffffffffffffff;
  local_70 = 0xffffffffffffffff;
  local_7c = 0xa4;
  uVar2 = (*(byte *)(lVar1 + 0x364) >> 4 & 3) << 6 | *(byte *)(lVar1 + 0x364) & 0x3f | 0x100;
  FUN_1800f58b8(lVar1,*(undefined8 *)(param_1 + 0x10),0x10,0x101,param_2,&local_80,uVar2,
                lVar1 + 0x360,0);
  if (param_4 != 0xffffffff) {
    local_60 = param_4 | 0x410100;
    local_5c = 0xa4;
    uStack_48 = 0xffffffffffffffff;
    local_50 = 0xffffffffffffffff;
    FUN_1800f58b8(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),0x10,0x102,param_2,
                  &local_60,uVar2,*(longlong *)(param_1 + 8) + 0x360,0);
  }
  if (param_5 != 0xffffffff) {
    local_60 = param_5 | 0x410100;
    local_5c = 0xa4;
    uStack_48 = 0xffffffffffffffff;
    local_50 = 0xffffffffffffffff;
    FUN_1800f58b8(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),0x10,0x104,param_2,
                  &local_60,uVar2,*(longlong *)(param_1 + 8) + 0x360,0);
  }
  return;
}

