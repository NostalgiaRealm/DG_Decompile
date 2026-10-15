/*
 * FUN_10009dc3 at 10009dc3
 * undefined __thiscall FUN_10009dc3(void * this, int param_1, int param_2, uint param_3, int param_4, uint param_5)
 * Address ranges: 10009dc3-10009e87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10009dc3(void *this,int param_1,int param_2,uint param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int local_120 [2];
  int local_118;
  int local_114;
  int local_10c;
  uint local_108;
  undefined1 local_104;
  undefined1 local_102;
  undefined1 local_101;
  byte local_100;
  byte local_ff;
  int local_f4;
  
  iVar1 = *(int *)(param_2 + 4);
  uVar3 = param_3 & 0xfffffff7;
  if (iVar1 == 0) {
    uVar3 = param_3;
  }
  FUN_1005c9cc(local_120,0,0x40);
  local_114 = *(int *)(param_2 + 0xc);
  local_104 = 2;
  iVar2 = local_114 * param_4 + param_1;
  local_120[0] = iVar2 + (uint)*(byte *)(param_2 + 0x17) * 4;
  if (*(char *)(param_2 + 0x1c) != -1) {
    local_118 = iVar2 + (uint)*(byte *)(param_2 + 0x1f) * 4;
    local_108 = (uint)*(byte *)(param_2 + 0x1d);
    local_102 = *(undefined1 *)(param_2 + 0x20);
    local_10c = local_114;
  }
  local_f4 = (int)this + 0x1f0;
  local_100 = (byte)(uVar3 >> 1) & 1;
  local_ff = (byte)(uVar3 >> 3) & 1;
  local_101 = iVar1 != 0;
  FUN_10011755(this,local_120,0,param_5);
  return;
}

