/*
 * FUN_10039aef at 10039aef
 * undefined4 * __thiscall FUN_10039aef(void * this, undefined4 * param_1, undefined4 param_2)
 * Address ranges: 10039aef-10039b7c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10039aef(void *this,undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_14 [16];
  
  if (*(char *)((int)this + 0x21) == '\0') {
    FUN_10039284(*(int *)((int)this + 4));
  }
  else {
    FUN_100392fb(*(int *)((int)this + 4));
  }
  (**(code **)(*(int *)(**(int **)((int)this + 0x24) + 0x38) + 0x10))(param_1,param_2,0,0,0);
  if (param_1[3] == 0) {
    iVar1 = 0x1a90;
    if (*(char *)((int)this + 0x21) == '\0') {
      iVar1 = 0x1a30;
    }
    FUN_100c0b6b((void *)(*(int *)((int)this + 0x10) * 0x16c0 + iVar1 + *(int *)((int)this + 8)),
                 *(uint *)(**(int **)((int)this + 0x24) + 0x28));
    puVar2 = (undefined4 *)
             (**(code **)(*(int *)(**(int **)((int)this + 0x24) + 0x38) + 0x10))
                       (local_14,param_2,0,0,0);
    *param_1 = *puVar2;
    param_1[1] = puVar2[1];
    param_1[2] = puVar2[2];
    param_1[3] = puVar2[3];
  }
  return param_1;
}

