/*
 * FUN_10046867 at 10046867
 * bool __thiscall FUN_10046867(void * this, int param_1, undefined4 * param_2, int param_3, undefined4 param_4)
 * Address ranges: 10046867-1004691f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_10046867(void *this,int param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 local_44 [7];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  uint local_c;
  void *local_8;
  
  iVar1 = *(int *)(param_1 + 8);
  if (param_3 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(int *)(&DAT_10058000 + param_3 * 4);
    if (((local_10 == 3) || (local_10 == 4)) && (*(char *)((int)this + 0x2d7) != '\0')) {
      bVar3 = 1;
      goto LAB_100468ad;
    }
  }
  bVar3 = 0;
LAB_100468ad:
  puVar4 = local_44;
  local_8 = this;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *param_2;
    param_2 = param_2 + 1;
    puVar4 = puVar4 + 1;
  }
  local_18 = param_4;
  local_28 = 1;
  local_14 = 1;
  *(byte *)(param_1 + 0xd5c) = bVar3;
  local_c = (uint)bVar3 << 0xb | 2;
  local_1c = 2;
  local_24 = 0;
  local_20 = 0x60;
  (**(code **)(**(int **)((int)local_8 + 0x4ec) + 0x28))
            (*(int **)((int)local_8 + 0x4ec),*(undefined4 *)(iVar1 * 0x1510 + 0x510 + (int)local_8),
             local_44,(int *)(param_1 + 4));
  return *(int *)(param_1 + 4) != 0;
}

