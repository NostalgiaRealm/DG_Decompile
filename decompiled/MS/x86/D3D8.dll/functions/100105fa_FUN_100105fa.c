/*
 * FUN_100105fa at 100105fa
 * undefined __thiscall FUN_100105fa(void * this, int param_1)
 * Address ranges: 100105fa-1001066f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100105fa(void *this,int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  uint local_c;
  uint local_8;
  
  uVar2 = FUN_100104e0(this,param_1);
  if (((char)uVar2 == '\0') && (local_c = 0, *(int *)((int)this + 100) != 0)) {
    do {
      local_8 = 0;
      if (*(short *)((int)this + 0x30) != 0) {
        do {
          pvVar1 = *(void **)(*(int *)(param_1 + local_c * 0x40 + local_8 * 4) + 4);
          FUN_1002673e(pvVar1);
          FUN_100260d7((undefined4 *)((int)pvVar1 + 0x4c));
          local_8 = local_8 + 1;
        } while (local_8 < *(ushort *)((int)this + 0x30));
      }
      local_c = local_c + 1;
    } while (local_c < *(uint *)((int)this + 100));
  }
  *(undefined1 *)((int)this + 0x32) = 0;
  return;
}

