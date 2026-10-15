/*
 * FUN_1000a6be at 1000a6be
 * undefined __thiscall FUN_1000a6be(void * this, char param_1)
 * Address ranges: 1000a6be-1000a7e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000a6be(void *this,char param_1)

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
  
  if ((*(char *)((int)this + 0x32d1) != '\0') || (param_1 != '\0')) {
    local_18 = this;
    uVar1 = FUN_1001059c((void *)((int)this + 0x35c0),*(int *)((int)this + 0x29e0));
    if (uVar1 != 0xffffffff) {
      iVar2 = uVar1 * 0x120;
      if (*(char *)((int)this + 0x33b5) == '\0') {
        local_20 = *(uint *)(iVar2 + 0x3728 + (int)this);
        local_1c = *(uint *)(iVar2 + 0x372c + (int)this);
        local_28 = 0;
        local_24 = 0;
      }
      else {
        local_14 = *(int *)((int)this + 0x2a08);
        local_c = *(int *)((int)this + 0x2a04);
        puVar3 = (uint *)((int)this + iVar2 + 0x3724);
        local_10 = *(int *)((int)this + 0x2a0c);
        if (*(int *)((int)this + 0x2c78) == 1) {
          iVar4 = *puVar3 - local_10;
          local_10 = *puVar3 - local_c;
          local_c = iVar4;
        }
        iVar4 = *(int *)(iVar2 + 0x3728 + (int)this);
        local_20 = *(uint *)(iVar2 + 0x3720 + (int)this);
        iVar2 = *(int *)(iVar2 + 0x372c + (int)this);
        local_28 = (uint)(iVar4 * *(int *)((int)this + 0x2a00)) / local_20;
        local_24 = (uint)(iVar2 * local_c) / *puVar3;
        local_20 = (uint)(iVar4 * local_14) / local_20;
        local_1c = (uint)(iVar2 * local_10) / *puVar3;
        this = local_18;
      }
      FUN_1004094b(*(int *)(*(int *)((int)this + 0x3308) + 0x1304),1,(int)&local_28);
    }
    *(undefined1 *)((int)this + 0x32d1) = 0;
  }
  return;
}

