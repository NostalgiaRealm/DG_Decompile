/*
 * FUN_10006a3d at 10006a3d
 * undefined __thiscall FUN_10006a3d(void * this, uint param_1, uint param_2, uint param_3, uint param_4, uint param_5)
 * Address ranges: 10006a3d-10006b2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_10006a3d(void *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint local_58 [10];
  uint local_30 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (*(char *)((int)this + 0x3c) != '\0') {
    LOCK();
    *(int *)((int)this + 0x38) = *(int *)((int)this + 0x38) + 1;
    UNLOCK();
    puVar1 = FUN_1000de01(param_1,param_2,local_58,param_3,param_4,param_5);
    puVar4 = local_30;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar2 = *(int *)((int)this + 0xc);
    if ((((((local_30[0] != *(uint *)(iVar2 + 0x191)) || (local_30[1] != *(int *)(iVar2 + 0x195)))
          || (local_30[2] != *(int *)(iVar2 + 0x199))) ||
         ((local_30[3] != *(int *)(iVar2 + 0x19d) || (local_20 != *(int *)(iVar2 + 0x1a1))))) ||
        ((local_1c != *(int *)(iVar2 + 0x1a5) ||
         ((local_18 != *(int *)(iVar2 + 0x1a9) || (local_14 != *(int *)(iVar2 + 0x1ad))))))) ||
       ((local_10 != *(int *)(iVar2 + 0x1b1) || (local_c != *(int *)(iVar2 + 0x1b5))))) {
      (**(code **)(**(int **)((int)this + 0xc) + 0x170))
                (local_30[0],local_30[1],local_30[2],local_30[3],local_20,local_1c,local_18,local_14
                 ,local_10,local_c);
      puVar1 = local_30;
      puVar4 = (uint *)(iVar2 + 0x191);
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

