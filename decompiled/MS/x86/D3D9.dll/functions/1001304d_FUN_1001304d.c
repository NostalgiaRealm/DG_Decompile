/*
 * FUN_1001304d at 1001304d
 * bool __thiscall FUN_1001304d(void * this, undefined4 * param_1)
 * Address ranges: 1001304d-100130a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1001304d(void *this,undefined4 *param_1)

{
  bool bVar1;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  bVar1 = *(char *)((int)this + 0xb5) == '\0';
  if (bVar1) {
    (**(code **)(**(int **)((int)this + 0x44) + 0x34))(&local_24,*(undefined4 *)((int)this + 0x48));
    *param_1 = local_24;
    param_1[1] = uStack_20;
    param_1[2] = uStack_1c;
    param_1[3] = uStack_18;
    param_1[4] = local_14;
    param_1[5] = uStack_10;
    param_1[6] = uStack_c;
    param_1[7] = uStack_8;
    SetRect((LPRECT)(param_1 + 8),0,0,*(int *)((int)this + 0x4c),*(int *)((int)this + 0x50));
  }
  return bVar1;
}

