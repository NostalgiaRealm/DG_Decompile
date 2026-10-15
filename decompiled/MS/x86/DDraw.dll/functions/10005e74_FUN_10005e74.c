/*
 * FUN_10005e74 at 10005e74
 * undefined __thiscall FUN_10005e74(void * this, uint param_1)
 * Address ranges: 10005e74-10005edc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10005e74(void *this,uint param_1)

{
  uint *puVar1;
  uint local_24 [4];
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_14 = 0;
  local_10 = 0;
  local_c = FUN_10005029((int)this);
  local_8 = *(ushort *)((int)this + 0xe) - 1;
  if (param_1 != 0xffffffff) {
    puVar1 = FUN_100055ae(this,local_24,param_1,param_1 + 1);
    local_14 = *puVar1;
    local_10 = puVar1[1];
    local_c = puVar1[2];
    local_8 = puVar1[3];
  }
  (**(code **)(**(int **)((int)this + 0x50) + 0x38))
            (*(undefined4 *)((int)this + 0x6c),*(undefined4 *)((int)this + 0x70),
             *(undefined4 *)((int)this + 0x20),*(undefined4 *)((int)this + 0x10),&local_14);
  return;
}

