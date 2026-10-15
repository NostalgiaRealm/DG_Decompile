/*
 * FUN_10039d5d at 10039d5d
 * undefined __thiscall FUN_10039d5d(void * this, uint param_1)
 * Address ranges: 10039d5d-10039dad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10039d5d(void *this,uint param_1)

{
  LPVOID pvVar1;
  undefined4 *puVar2;
  
  pvVar1 = *(LPVOID *)(*(int *)this + 0xc + param_1 * 0x10);
  if (pvVar1 != (LPVOID)0x0) {
    FUN_100386e2((undefined4 *)((int)pvVar1 + 4));
    FUN_1004f626(pvVar1);
  }
  while( true ) {
    param_1 = param_1 + 1;
    if (*(uint *)((int)this + 8) <= param_1) break;
    puVar2 = (undefined4 *)(param_1 * 0x10 + *(int *)this);
    puVar2[-4] = *puVar2;
    puVar2[-3] = puVar2[1];
    puVar2[-2] = puVar2[2];
    puVar2[-1] = puVar2[3];
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) - 1;
  return;
}

