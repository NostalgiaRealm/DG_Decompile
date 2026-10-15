/*
 * FUN_100a707c at 100a707c
 * undefined4 * __thiscall FUN_100a707c(void * this, undefined4 param_1, undefined4 param_2, int param_3, undefined4 param_4)
 * Address ranges: 100a707c-100a70b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_100a707c(void *this,undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)((int)this + 4);
  puVar2 = FUN_1009d912(-(uint)(iVar1 != 0) & iVar1 + 0x520U,param_1,param_2,param_3,param_4,
                        *(undefined4 *)(iVar1 + 0x172c0));
  puVar3 = puVar2 + 0xe;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}

