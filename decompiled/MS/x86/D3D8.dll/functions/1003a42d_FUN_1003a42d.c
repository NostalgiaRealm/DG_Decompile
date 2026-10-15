/*
 * FUN_1003a42d at 1003a42d
 * undefined4 __thiscall FUN_1003a42d(void * this, uint * param_1)
 * Address ranges: 1003a42d-1003a48e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003a42d(void *this,uint *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *local_8;
  
  puVar1 = (undefined4 *)FUN_10007b93(this,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    local_8 = (uint *)FUN_100ad475(0xb0);
    puVar1 = (undefined4 *)0x0;
    if (local_8 != (uint *)0x0) {
      puVar3 = param_1;
      puVar4 = local_8;
      for (iVar2 = 0x2c; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_1003ce46(this,param_1,&local_8);
      puVar1 = (undefined4 *)FUN_10007b93(this,param_1);
    }
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
  }
  return *puVar1;
}

