/*
 * FUN_10013b4d at 10013b4d
 * undefined4 __thiscall FUN_10013b4d(void * this, uint * param_1)
 * Address ranges: 10013b4d-10013bb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10013b4d(void *this,uint *param_1)

{
  uint *puVar1;
  char cVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 local_14;
  undefined4 local_10;
  
  puVar1 = param_1;
  uVar3 = 0x8876086c;
  if (param_1 != (uint *)0x0) {
    FUN_10003582(*(void **)(*(int *)((int)this + 0x2c) + 0xd90),*(int *)((int)this + 0xa4),&local_14
                );
    param_1 = (uint *)0x0;
    cVar2 = (**(code **)(**(int **)((int)this + 0x44) + 0x54))
                      (*(undefined4 *)((int)this + 8),local_14,local_10,&param_1);
    *puVar1 = (uint)(cVar2 != '\0');
    puVar4 = (uint *)0x0;
    if (*(char *)((int)this + 0xb7) != '\0') {
      puVar4 = param_1;
    }
    puVar1[1] = (uint)puVar4;
    uVar3 = 0;
  }
  return uVar3;
}

