/*
 * FUN_1000694c at 1000694c
 * undefined __thiscall FUN_1000694c(void * this, uint param_1, uint param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 1000694c-10006a3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000694c(void *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint local_54 [10];
  uint local_2c [4];
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    puVar1 = FUN_1000de01(param_1,param_2,local_54,param_3,param_4,param_5);
    puVar4 = local_2c;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = *(int *)((int)this + 0xc);
    if ((((((local_2c[0] != *(uint *)(iVar2 + 0x169)) || (local_2c[1] != *(int *)(iVar2 + 0x16d)))
          || (local_2c[2] != *(int *)(iVar2 + 0x171))) ||
         ((local_2c[3] != *(int *)(iVar2 + 0x175) || (local_1c != *(int *)(iVar2 + 0x179))))) ||
        ((local_18 != *(int *)(iVar2 + 0x17d) ||
         ((local_14 != *(int *)(iVar2 + 0x181) || (local_10 != *(int *)(iVar2 + 0x185))))))) ||
       ((local_c != *(int *)(iVar2 + 0x189) || (local_8 != *(int *)(iVar2 + 0x18d))))) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x16c))
                (local_2c[0],local_2c[1],local_2c[2],local_2c[3],local_1c,local_18,local_14,local_10
                 ,local_c,local_8);
      puVar1 = local_2c;
      puVar4 = (uint *)(iVar2 + 0x169);
      for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = *puVar1;
        puVar1 = puVar1 + 1;
        puVar4 = puVar4 + 1;
      }
      FUN_1000616b((int)this);
      *(undefined4 *)(*(int *)((int)this + 0xc) + 0x3d0) = 0;
    }
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + -1;
    UNLOCK();
  }
  return;
}

