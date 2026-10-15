/*
 * FUN_1004f1fd at 1004f1fd
 * undefined __thiscall FUN_1004f1fd(void * this, undefined4 param_1)
 * Address ranges: 1004f1fd-1004f422
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1004f1fd(void *this,undefined4 param_1)

{
  void *this_00;
  uint *puVar1;
  int *this_01;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint local_28 [2];
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  undefined4 *local_10;
  char local_9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  local_9 = '\0';
  uVar2 = FUN_1004eecc((void *)((int)this + 0x44),param_1);
  if (uVar2 == 0xffffffff) goto LAB_1004f328;
  local_28[0] = 0;
  local_28[1] = 0;
  local_20 = 0;
  (*(code *)**(undefined4 **)this)(param_1,local_28,&local_20);
  local_18 = param_1;
  this_00 = (void *)((int)this + 0x34);
  local_14 = uVar2;
  puVar3 = (undefined4 *)FUN_1004b5e5(this_00,(uint *)&local_20);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)FUN_1004f60f(0xc);
    if (puVar3 == (undefined4 *)0x0) goto LAB_1004f328;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    local_10 = puVar3;
    uVar4 = FUN_1003c69c(puVar3,&local_18);
    if ((char)uVar4 == '\0') {
      thunk_FUN_1004f626((LPVOID)*puVar3);
      FUN_1004f626(puVar3);
      goto LAB_1004f328;
    }
    puVar1 = (uint *)((int)this + 0x10);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + local_28[0];
    *(uint *)((int)this + 0x14) =
         *(int *)((int)this + 0x14) + local_28[1] + (uint)CARRY4(uVar2,local_28[0]);
    local_14 = FUN_1004b6bf(this_00,(uint)local_20,local_20._4_4_);
    if (local_14 != *(uint *)((int)this + 0x3c)) {
      iVar5 = *(int *)((int)this + 0x38);
      iVar6 = local_14 * 0x18;
      if ((*(uint *)(iVar6 + iVar5) == (uint)local_20) &&
         (*(int *)(iVar6 + 4 + iVar5) == local_20._4_4_)) {
        *(undefined4 **)(iVar6 + 0x10 + iVar5) = puVar3;
        goto LAB_1004f310;
      }
    }
    FUN_1004f423(this_00,local_14,(uint)local_20,local_20._4_4_,(undefined4 *)&local_20,&local_10);
  }
  else {
    uVar4 = FUN_1003c69c((void *)*puVar3,&local_18);
    if ((char)uVar4 == '\0') goto LAB_1004f328;
    puVar1 = (uint *)((int)this + 0x10);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + local_28[0];
    *(uint *)((int)this + 0x14) =
         *(int *)((int)this + 0x14) + local_28[1] + (uint)CARRY4(uVar2,local_28[0]);
  }
LAB_1004f310:
  local_9 = '\x01';
LAB_1004f328:
  if ((*(uint *)((int)this + 0xc) <= *(uint *)((int)this + 0x14)) &&
     ((*(uint *)((int)this + 0x14) != *(uint *)((int)this + 0xc) ||
      (*(uint *)((int)this + 8) < *(uint *)((int)this + 0x10))))) {
    while( true ) {
      iVar5 = FUN_1004ef9f((int *)((int)this + 0x44));
      if (iVar5 == 0) break;
      local_20 = 0;
      local_28[0] = 0;
      local_28[1] = 0;
      (*(code *)**(undefined4 **)this)(iVar5,&local_20,local_28);
      puVar3 = (undefined4 *)FUN_1004b5e5((void *)((int)this + 0x34),local_28);
      if (puVar3 != (undefined4 *)0x0) {
        this_01 = (int *)*puVar3;
        uVar2 = 0;
        if (this_01[1] != 0) {
          do {
            if (*(int *)(*this_01 + uVar2 * 8) == iVar5) {
              FUN_1004b685(this_01,uVar2);
              puVar3 = (undefined4 *)*puVar3;
              if (puVar3[1] == 0) {
                if (puVar3 != (undefined4 *)0x0) {
                  thunk_FUN_1004f626((LPVOID)*puVar3);
                  FUN_1004f626(puVar3);
                }
                FUN_1004b622((void *)((int)this + 0x34),local_28);
              }
              puVar1 = (uint *)((int)this + 0x10);
              uVar2 = *puVar1;
              *puVar1 = *puVar1 - (uint)local_20;
              *(int *)((int)this + 0x14) =
                   (*(int *)((int)this + 0x14) - local_20._4_4_) - (uint)(uVar2 < (uint)local_20);
              break;
            }
            uVar2 = uVar2 + 1;
          } while (uVar2 < (uint)this_01[1]);
        }
      }
      (**(code **)(*(int *)this + 4))(iVar5);
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

