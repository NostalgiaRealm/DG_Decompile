/*
 * FUN_100ca5fd at 100ca5fd
 * undefined __thiscall FUN_100ca5fd(void * this, undefined4 param_1)
 * Address ranges: 100ca5fd-100ca7fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100ca5fd(void *this,undefined4 param_1)

{
  uint *puVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puStack_24;
  undefined8 local_20;
  undefined8 uStack_18;
  uint local_10 [3];
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  bVar3 = false;
  iVar4 = FUN_100ca319((void *)((int)this + 0x44),param_1);
  if (iVar4 == -1) goto LAB_100ca6f5;
  local_20 = 0;
  local_10[0] = 0;
  local_10[1] = 0;
  (*(code *)**(undefined4 **)this)(param_1,&local_20,local_10);
  uStack_18 = CONCAT44(iVar4,param_1);
  puVar5 = (undefined4 *)FUN_1009bf28((void *)((int)this + 0x34),local_10);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_100cfd55(0xc);
    if (puVar5 == (undefined4 *)0x0) goto LAB_100ca6f5;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puStack_24 = puVar5;
    uVar6 = FUN_1003a418(puVar5,(undefined4 *)&uStack_18);
    if ((char)uVar6 == '\0') {
      thunk_FUN_100cfd6c((LPVOID)*puVar5);
      FUN_100cfd6c(puVar5);
      goto LAB_100ca6f5;
    }
    puVar1 = (uint *)((int)this + 0x10);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + (uint)local_20;
    *(uint *)((int)this + 0x14) =
         *(int *)((int)this + 0x14) + local_20._4_4_ + (uint)CARRY4(uVar7,(uint)local_20);
    FUN_1009bf65((void *)((int)this + 0x34),local_10,&puStack_24);
  }
  else {
    uVar6 = FUN_1003a418((void *)*puVar5,(undefined4 *)&uStack_18);
    if ((char)uVar6 == '\0') goto LAB_100ca6f5;
    puVar1 = (uint *)((int)this + 0x10);
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + (uint)local_20;
    *(uint *)((int)this + 0x14) =
         *(int *)((int)this + 0x14) + local_20._4_4_ + (uint)CARRY4(uVar7,(uint)local_20);
  }
  bVar3 = true;
LAB_100ca6f5:
  if ((*(uint *)((int)this + 0xc) <= *(uint *)((int)this + 0x14)) &&
     ((*(uint *)((int)this + 0x14) != *(uint *)((int)this + 0xc) ||
      (*(uint *)((int)this + 8) < *(uint *)((int)this + 0x10))))) {
    while( true ) {
      iVar4 = FUN_100ca39f((int *)((int)this + 0x44));
      if (iVar4 == 0) break;
      uStack_18 = 0;
      local_10[0] = 0;
      local_10[1] = 0;
      (*(code *)**(undefined4 **)this)(iVar4,&uStack_18,local_10);
      puVar5 = (undefined4 *)FUN_1009bf28((void *)((int)this + 0x34),(uint *)((int)&local_20 + 4));
      if (puVar5 != (undefined4 *)0x0) {
        piVar2 = (int *)*puVar5;
        uVar7 = 0;
        if (piVar2[1] != 0) {
          do {
            if (*(int *)(*piVar2 + uVar7 * 8) == iVar4) {
              FUN_100bfdde(piVar2,uVar7);
              puVar5 = (undefined4 *)*puVar5;
              if (puVar5[1] == 0) {
                if (puVar5 != (undefined4 *)0x0) {
                  thunk_FUN_100cfd6c((LPVOID)*puVar5);
                  FUN_100cfd6c(puVar5);
                }
                FUN_100bfd7b((void *)((int)this + 0x34),(uint *)((int)&local_20 + 4));
              }
              piVar2 = (int *)((int)this + 0x10);
              puVar5 = (undefined4 *)*piVar2;
              *piVar2 = *piVar2 - (int)puStack_24;
              *(int *)((int)this + 0x14) =
                   (*(int *)((int)this + 0x14) - (uint)local_20) - (uint)(puVar5 < puStack_24);
              break;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < (uint)piVar2[1]);
        }
      }
      (**(code **)(*(int *)this + 4))(iVar4);
      if ((*(uint *)((int)this + 0x14) <= *(uint *)((int)this + 0xc)) &&
         ((*(uint *)((int)this + 0x14) < *(uint *)((int)this + 0xc) ||
          (*(uint *)((int)this + 0x10) <= *(uint *)((int)this + 8))))) break;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  if (!bVar3) {
    (**(code **)(*(int *)this + 4))(param_1);
  }
  return;
}

