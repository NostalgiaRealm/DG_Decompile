/*
 * FUN_10045eba at 10045eba
 * undefined4 __thiscall FUN_10045eba(void * this, uint * param_1)
 * Address ranges: 10045eba-10045f1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10045eba(void *this,uint *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  uint *local_8;
  
  puVar1 = (undefined4 *)FUN_100086e6(this,param_1);
  if (puVar1 == (undefined4 *)0x0) {
    local_8 = (uint *)FUN_100cfd55(0x254);
    puVar1 = (undefined4 *)0x0;
    if (local_8 != (uint *)0x0) {
      puVar3 = param_1;
      puVar4 = local_8;
      for (iVar2 = 0x95; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_100489f3(this,param_1,&local_8);
      puVar1 = (undefined4 *)FUN_100086e6(this,param_1);
    }
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
  }
  return *puVar1;
}

