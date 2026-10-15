/*
 * FUN_1000af2b at 1000af2b
 * undefined __thiscall FUN_1000af2b(void * this, char param_1)
 * Address ranges: 1000af2b-1000b054
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000af2b(void *this,char param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  void *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if ((*(char *)((int)this + 0x3651) != '\0') || (param_1 != '\0')) {
    local_18 = this;
    uVar1 = FUN_100118f8((void *)((int)this + 0x3940),*(int *)((int)this + 0x2b1c));
    if (uVar1 != 0xffffffff) {
      iVar2 = uVar1 * 0x120;
      if (*(char *)((int)this + 0x3735) == '\0') {
        local_20 = *(uint *)((int)this + iVar2 + 0x3aa8);
        local_1c = *(uint *)((int)this + iVar2 + 0x3aac);
        local_28 = 0;
        local_24 = 0;
      }
      else {
        local_14 = *(int *)((int)this + 0x2b44);
        local_c = *(int *)((int)this + 0x2b40);
        puVar3 = (uint *)((int)this + iVar2 + 0x3aa4);
        local_10 = *(int *)((int)this + 0x2b48);
        if (*(int *)((int)this + 0x2dc8) == 1) {
          iVar4 = *puVar3 - local_10;
          local_10 = *puVar3 - local_c;
          local_c = iVar4;
        }
        iVar4 = *(int *)((int)this + iVar2 + 0x3aa8);
        local_20 = *(uint *)((int)this + iVar2 + 0x3aa0);
        iVar2 = *(int *)((int)this + iVar2 + 0x3aac);
        local_28 = (uint)(iVar4 * *(int *)((int)this + 0x2b3c)) / local_20;
        local_24 = (uint)(iVar2 * local_c) / *puVar3;
        local_20 = (uint)(iVar4 * local_14) / local_20;
        local_1c = (uint)(iVar2 * local_10) / *puVar3;
        this = local_18;
      }
      FUN_10043d54(*(int *)(*(int *)((int)this + 0x3688) + 0x1304),1,(int)&local_28);
    }
    *(undefined1 *)((int)this + 0x3651) = 0;
  }
  return;
}

