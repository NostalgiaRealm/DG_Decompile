/*
 * FUN_1005b39a at 1005b39a
 * undefined __thiscall FUN_1005b39a(void * this, uint param_1)
 * Address ranges: 1005b39a-1005b5e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005b39a(void *this,uint param_1)

{
  void *this_00;
  uint *puVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint local_18 [2];
  undefined8 local_10;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  bVar3 = false;
  uVar4 = FUN_1005b150((void *)((int)this + 0x44),param_1);
  if (uVar4 == 0xffffffff) goto LAB_1005b4e2;
  local_10 = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  (*(code *)**(undefined4 **)this)(param_1,&local_10,local_18);
  uStack_20 = param_1;
  this_00 = (void *)((int)this + 0x34);
  uStack_1c = uVar4;
  puVar5 = (undefined4 *)FUN_10054991(this_00,local_18);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_1005c755(0xc);
    if (puVar5 == (undefined4 *)0x0) goto LAB_1005b4e2;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puStack_24 = puVar5;
    uVar6 = FUN_1001b6b8(puVar5,&uStack_20);
    if ((char)uVar6 == '\0') {
      thunk_FUN_1005c76c((LPVOID)*puVar5);
      FUN_1005c76c(puVar5);
      goto LAB_1005b4e2;
    }
    puVar1 = (uint *)((int)this + 0x10);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + (uint)local_10;
    *(uint *)((int)this + 0x14) =
         *(int *)((int)this + 0x14) + local_10._4_4_ + (uint)CARRY4(uVar4,(uint)local_10);
    uStack_20 = FUN_1001a4ca(this_00,local_18[0],local_18[1]);
    if (uStack_20 != *(uint *)((int)this + 0x3c)) {
      iVar7 = *(int *)((int)this + 0x38);
      iVar8 = uStack_20 * 0x18;
      if ((*(uint *)(iVar8 + iVar7) == local_18[0]) && (*(int *)(iVar8 + 4 + iVar7) == local_18[1]))
      {
        *(undefined4 **)(iVar8 + 0x10 + iVar7) = puVar5;
        goto LAB_1005b4c9;
      }
    }
    FUN_1005b5e8(this_00,uStack_20,local_18[0],local_18[1],local_18,&puStack_24);
  }
  else {
    uVar6 = FUN_1001b6b8((void *)*puVar5,&uStack_20);
    if ((char)uVar6 == '\0') goto LAB_1005b4e2;
    puVar1 = (uint *)((int)this + 0x10);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + (uint)local_10;
    *(uint *)((int)this + 0x14) =
         *(int *)((int)this + 0x14) + local_10._4_4_ + (uint)CARRY4(uVar4,(uint)local_10);
  }
LAB_1005b4c9:
  bVar3 = true;
LAB_1005b4e2:
  if ((*(uint *)((int)this + 0xc) <= *(uint *)((int)this + 0x14)) &&
     ((*(uint *)((int)this + 0x14) != *(uint *)((int)this + 0xc) ||
      (*(uint *)((int)this + 8) < *(uint *)((int)this + 0x10))))) {
    while( true ) {
      iVar7 = FUN_1005b223((int *)((int)this + 0x44));
      if (iVar7 == 0) break;
      local_18[0] = 0;
      local_18[1] = 0;
      local_10 = 0;
      (*(code *)**(undefined4 **)this)(iVar7,local_18,&local_10);
      puVar5 = (undefined4 *)FUN_10054991((void *)((int)this + 0x34),&uStack_1c);
      if (puVar5 != (undefined4 *)0x0) {
        piVar2 = (int *)*puVar5;
        uVar4 = 0;
        if (piVar2[1] != 0) {
          do {
            if (*(int *)(*piVar2 + uVar4 * 8) == iVar7) {
              FUN_100428cc(piVar2,uVar4);
              puVar5 = (undefined4 *)*puVar5;
              if (puVar5[1] == 0) {
                if (puVar5 != (undefined4 *)0x0) {
                  thunk_FUN_1005c76c((LPVOID)*puVar5);
                  FUN_1005c76c(puVar5);
                }
                FUN_100549ce((void *)((int)this + 0x34),&uStack_1c);
              }
              piVar2 = (int *)((int)this + 0x10);
              puVar5 = (undefined4 *)*piVar2;
              *piVar2 = *piVar2 - (int)puStack_24;
              *(int *)((int)this + 0x14) =
                   (*(int *)((int)this + 0x14) - uStack_20) - (uint)(puVar5 < puStack_24);
              break;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < (uint)piVar2[1]);
        }
      }
      (**(code **)(*(int *)this + 4))(iVar7);
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

