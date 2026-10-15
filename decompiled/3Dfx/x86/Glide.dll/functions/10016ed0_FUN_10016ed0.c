/*
 * FUN_10016ed0 at 10016ed0
 * undefined __thiscall FUN_10016ed0(void * this, char param_1)
 * Address ranges: 10016ed0-10016ff3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10016ed0(void *this,char param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  void *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if ((*(char *)((int)this + 0x3151) != '\0') || (param_1 != '\0')) {
    local_18 = this;
    iVar1 = FUN_1001c7a6(*(int *)((int)this + 0x2964));
    if (iVar1 != -1) {
      iVar1 = iVar1 * 0x120;
      if (*(char *)((int)this + 0x3235) == '\0') {
        local_20 = *(uint *)(iVar1 + 0x35a8 + (int)this);
        local_1c = *(uint *)(iVar1 + 0x35ac + (int)this);
        local_28 = 0;
        local_24 = 0;
      }
      else {
        local_14 = *(int *)((int)this + 0x298c);
        local_c = *(int *)((int)this + 0x2988);
        puVar2 = (uint *)((int)this + iVar1 + 0x35a4);
        local_10 = *(int *)((int)this + 0x2990);
        if (*(int *)((int)this + 0x2bd8) == 1) {
          iVar3 = *puVar2 - local_10;
          local_10 = *puVar2 - local_c;
          local_c = iVar3;
        }
        iVar3 = *(int *)(iVar1 + 0x35a8 + (int)this);
        local_20 = *(uint *)(iVar1 + 0x35a0 + (int)this);
        iVar1 = *(int *)(iVar1 + 0x35ac + (int)this);
        local_28 = (uint)(iVar3 * *(int *)((int)this + 0x2984)) / local_20;
        local_24 = (uint)(iVar1 * local_c) / *puVar2;
        local_20 = (uint)(iVar3 * local_14) / local_20;
        local_1c = (uint)(iVar1 * local_10) / *puVar2;
        this = local_18;
      }
      FUN_1003e1f6(*(int *)(*(int *)((int)this + 0x3188) + 0x1304),1,(int)&local_28);
    }
    *(undefined1 *)((int)this + 0x3151) = 0;
  }
  return;
}

