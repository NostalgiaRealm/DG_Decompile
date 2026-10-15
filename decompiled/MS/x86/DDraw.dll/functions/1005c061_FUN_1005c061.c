/*
 * FUN_1005c061 at 1005c061
 * undefined __thiscall FUN_1005c061(void * this, undefined4 param_1)
 * Address ranges: 1005c061-1005c23e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1005c061(void *this,undefined4 param_1)

{
  uint *puVar1;
  int *this_00;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint local_28 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined4 *local_10;
  char local_9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  local_9 = '\0';
  iVar2 = FUN_1005bd7d((void *)((int)this + 0x44),param_1);
  if (iVar2 == -1) goto LAB_1005c144;
  local_18 = 0;
  local_28[0] = 0;
  local_28[1] = 0;
  (*(code *)**(undefined4 **)this)(param_1,&local_18,local_28);
  local_20 = CONCAT44(iVar2,param_1);
  puVar3 = (undefined4 *)FUN_100562d1((void *)((int)this + 0x34),local_28);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_10060bca(0xc);
    if (puVar3 == (undefined4 *)0x0) goto LAB_1005c144;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    local_10 = puVar3;
    uVar4 = FUN_1004bfa5(puVar3,(undefined4 *)&local_20);
    if ((char)uVar4 == '\0') {
      thunk_FUN_10060be1((LPVOID)*puVar3);
      FUN_10060be1(puVar3);
      goto LAB_1005c144;
    }
    puVar1 = (uint *)((int)this + 0x10);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + (uint)local_18;
    *(uint *)((int)this + 0x14) =
         *(int *)((int)this + 0x14) + local_18._4_4_ + (uint)CARRY4(uVar5,(uint)local_18);
    FUN_1005c23f((void *)((int)this + 0x34),local_28,&local_10);
  }
  else {
    uVar4 = FUN_1004bfa5((void *)*puVar3,(undefined4 *)&local_20);
    if ((char)uVar4 == '\0') goto LAB_1005c144;
    puVar1 = (uint *)((int)this + 0x10);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 + (uint)local_18;
    *(uint *)((int)this + 0x14) =
         *(int *)((int)this + 0x14) + local_18._4_4_ + (uint)CARRY4(uVar5,(uint)local_18);
  }
  local_9 = '\x01';
LAB_1005c144:
  if ((*(uint *)((int)this + 0xc) <= *(uint *)((int)this + 0x14)) &&
     ((*(uint *)((int)this + 0x14) != *(uint *)((int)this + 0xc) ||
      (*(uint *)((int)this + 8) < *(uint *)((int)this + 0x10))))) {
    while( true ) {
      iVar2 = FUN_1005be03((int *)((int)this + 0x44));
      if (iVar2 == 0) break;
      local_20 = 0;
      local_28[0] = 0;
      local_28[1] = 0;
      (*(code *)**(undefined4 **)this)(iVar2,&local_20,local_28);
      puVar3 = (undefined4 *)FUN_100562d1((void *)((int)this + 0x34),local_28);
      if (puVar3 != (undefined4 *)0x0) {
        this_00 = (int *)*puVar3;
        uVar5 = 0;
        if (this_00[1] != 0) {
          do {
            if (*(int *)(*this_00 + uVar5 * 8) == iVar2) {
              FUN_10056371(this_00,uVar5);
              puVar3 = (undefined4 *)*puVar3;
              if (puVar3[1] == 0) {
                if (puVar3 != (undefined4 *)0x0) {
                  thunk_FUN_10060be1((LPVOID)*puVar3);
                  FUN_10060be1(puVar3);
                }
                FUN_1005630e((void *)((int)this + 0x34),local_28);
              }
              puVar1 = (uint *)((int)this + 0x10);
              uVar5 = *puVar1;
              *puVar1 = *puVar1 - (uint)local_20;
              *(int *)((int)this + 0x14) =
                   (*(int *)((int)this + 0x14) - local_20._4_4_) - (uint)(uVar5 < (uint)local_20);
              break;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)this_00[1]);
        }
      }
      (**(code **)(*(int *)this + 4))(iVar2);
      if ((*(uint *)((int)this + 0x14) <= *(uint *)((int)this + 0xc)) &&
         ((*(uint *)((int)this + 0x14) < *(uint *)((int)this + 0xc) ||
          (*(uint *)((int)this + 0x10) <= *(uint *)((int)this + 8))))) break;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  if (local_9 == '\0') {
    (**(code **)(*(int *)this + 4))(param_1);
  }
  return;
}

