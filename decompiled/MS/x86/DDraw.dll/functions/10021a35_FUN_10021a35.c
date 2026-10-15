/*
 * FUN_10021a35 at 10021a35
 * undefined __thiscall FUN_10021a35(void * this, int param_1)
 * Address ranges: 10021a35-10021b22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10021a35(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *local_10;
  int local_c;
  int *local_8;
  
  (**(code **)(*(int *)this + 0x90))();
  uVar4 = 0;
  if (*(int *)((int)this + 0x9c) != 0) {
    do {
      local_8 = *(int **)(uVar4 * 0x28 + *(int *)((int)this + 0x98));
      if (*local_8 == param_1) {
        local_c = *(int *)((int)this + 0x10);
        piVar1 = *(int **)(uVar4 * 0x28 + 4 + *(int *)((int)this + 0x98));
        EnterCriticalSection((LPCRITICAL_SECTION)(local_c + 0x4a0));
        if ((piVar1 != (int *)0x0) &&
           ((((void *)local_8[0x358] == this || ((void *)local_8[0x358] == (void *)0x0)) &&
            (local_10 = piVar1, uVar2 = FUN_1002779a((void *)(local_c + 0x4c4),(int *)&local_10),
            uVar2 != 0xffffffff)))) {
          (**(code **)(*piVar1 + 4))(local_8);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_c + 0x4a0));
        iVar3 = FUN_1004939f(*(void **)((int)this + 0x10),param_1,(int)this);
        if (iVar3 != 0) {
          return;
        }
        uVar2 = *(uint *)((int)this + 0x9c);
        if (uVar2 <= uVar4) {
          return;
        }
        while (uVar4 = uVar4 + 1, uVar4 < uVar2) {
          puVar5 = (undefined4 *)(uVar4 * 0x28 + *(int *)((int)this + 0x98));
          puVar6 = puVar5 + -10;
          for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            puVar6 = puVar6 + 1;
          }
          uVar2 = *(uint *)((int)this + 0x9c);
        }
        *(uint *)((int)this + 0x9c) = uVar2 - 1;
        return;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)((int)this + 0x9c));
  }
  return;
}

