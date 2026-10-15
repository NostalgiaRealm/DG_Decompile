/*
 * FUN_1001b623 at 1001b623
 * undefined __thiscall FUN_1001b623(void * this, int param_1, int param_2, undefined4 param_3, int param_4, uint param_5)
 * Address ranges: 1001b623-1001b755
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1001b623(void *this,int param_1,int param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  int local_150 [2];
  int local_148;
  undefined *local_144;
  undefined *local_13c;
  int local_138;
  int local_130;
  int local_128;
  int local_124;
  uint local_120;
  undefined1 local_11c;
  undefined1 local_11a;
  undefined1 local_119;
  undefined1 local_117;
  undefined1 local_116;
  undefined2 local_115;
  int local_108;
  undefined1 local_11;
  
  local_11 = *(int *)(param_2 + 4) != 0;
  FUN_100cfed0(local_150,0,0x58);
  local_138 = *(int *)(param_2 + 0xc);
  local_11c = 2;
  local_144 = &DAT_100d4e64;
  local_119 = 2;
  iVar1 = local_138 * param_4 + param_1;
  local_150[0] = iVar1 + (uint)*(byte *)(param_2 + 0x17) * 4;
  if (*(char *)(param_2 + 0x8c) != -1) {
    local_144 = (undefined *)(iVar1 + (uint)*(byte *)(param_2 + 0x8f) * 4);
    local_119 = *(undefined1 *)(param_2 + 0x90);
    local_130 = local_138;
  }
  local_13c = &DAT_100d4e60;
  if (*(char *)(param_2 + 0x24) != -1) {
    local_13c = (undefined *)(iVar1 + (uint)*(byte *)(param_2 + 0x27) * 4);
    local_117 = *(undefined1 *)(param_2 + 0x28);
    local_128 = local_138;
  }
  if (*(char *)(param_2 + 0x1c) != -1) {
    local_148 = iVar1 + (uint)*(byte *)(param_2 + 0x1f) * 4;
    local_120 = (uint)*(byte *)(param_2 + 0x1d);
    local_11a = *(undefined1 *)(param_2 + 0x20);
    local_124 = local_138;
  }
  local_108 = (int)this + 0x390;
  local_115 = 1;
  local_116 = local_11;
  FUN_1002433a(this,local_150,0,param_5);
  return;
}

