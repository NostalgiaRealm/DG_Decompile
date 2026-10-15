/*
 * FUN_100166e9 at 100166e9
 * undefined __fastcall FUN_100166e9(void * param_1)
 * Address ranges: 100166e9-10016989
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100166e9(void *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  void *this;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  void *local_8;
  
  pvVar4 = (void *)0x0;
  local_8 = (void *)0x0;
  local_c = 0;
  FUN_1001c8e4(param_1,(int *)&local_8,(int *)&local_c);
  this = (void *)(-(uint)(local_8 != (void *)0xffffffff) &
                 (int)local_8 * 0x120 + 0x3580 + (int)param_1);
  local_10 = -(uint)(local_c != 0xffffffff) & local_c * 0x120 + 0x3580 + (int)param_1;
  if (((this != (void *)0x0) && (local_10 != 0)) &&
     (((*(char *)(local_10 + 0x48) != '\0' &&
       (*(uint *)(local_10 + 0x28) < *(uint *)((int)this + 0x28))) ||
      (*(uint *)(local_10 + 0x2c) < *(uint *)((int)this + 0x2c))))) {
    if (*(int *)((int)this + 0xcc) == 0) {
      FUN_10027d82(this,*(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x2c),
                   *(int *)((int)this + 0x30),(uint)*(byte *)(*(int *)((int)param_1 + 4) + 0x54),
                   (int *)((int)this + 0xcc),(uint *)((int)this + 0xd0),(uint *)((int)this + 0xd4));
    }
    local_10 = 0;
  }
  uVar3 = *(uint *)((int)param_1 + 0x31b8);
  local_c = uVar3 + 1;
  if (this == (void *)0x0) {
    local_14 = 0;
  }
  else {
    local_14 = ~-(uint)(*(char *)((int)this + 0x48) != '\0') & (uint)this;
  }
  if (local_10 != 0) {
    pvVar4 = (void *)(-(uint)(*(char *)(local_10 + 0x48) != '\0') & local_10);
    local_8 = pvVar4;
    if (pvVar4 != (void *)0x0) goto LAB_100167c9;
  }
  local_8 = this;
LAB_100167c9:
  if (local_14 != 0) {
    uVar3 = *(uint *)(local_14 + 0xc4);
  }
  if (pvVar4 != (void *)0x0) {
    local_c = *(uint *)((int)pvVar4 + 0xc4);
  }
  FUN_1003c902(*(void **)(*(int *)((int)param_1 + 0x3188) + 0x15dc),&local_20,uVar3,0);
  FUN_1003c902(*(void **)(*(int *)((int)param_1 + 0x3188) + 0x15dc),&local_1c,local_c,0);
  if ((local_8 == (void *)0x0) || (*(char *)((int)local_8 + 0x48) == '\0')) {
    FUN_1003e065(*(int *)(*(int *)((int)param_1 + 0x3188) + 0x1304),2,&local_20,0,(int *)0x0);
    *(undefined4 *)((int)param_1 + 0x3218) = 0;
  }
  else {
    FUN_1003c902(*(void **)(*(int *)((int)param_1 + 0x3188) + 0x15e0),&local_18,
                 *(uint *)((int)local_8 + 0xd4),0);
    FUN_1003e065(*(int *)(*(int *)((int)param_1 + 0x3188) + 0x1304),2,&local_20,0,&local_18);
    *(undefined4 *)((int)param_1 + 0x3218) = *(undefined4 *)((int)local_8 + 0xd8);
    piVar1 = *(int **)((int)param_1 + 0x31e4);
    if (((*piVar1 == 0) || (piVar1[1] == 0)) && (piVar1[3] == 0)) {
      local_c = 0x20;
    }
    else {
      local_c = 0x10;
    }
    FUN_1003d4be(*(void **)(*(int *)((int)param_1 + 0x3188) + 0x1304),*(uint *)((int)local_8 + 0xcc)
                 ,0,0,local_c);
    if (*(int *)((int)local_8 + 0xd8) == 0x2d) {
      FUN_1003d4be(*(void **)(*(int *)((int)param_1 + 0x3188) + 0x1304),
                   *(uint *)((int)local_8 + 0xcc),1,0,local_c);
    }
  }
  *(undefined4 *)((int)param_1 + 0x31f4) = 2;
  uVar2 = 1;
  if (pvVar4 != (void *)0x0) {
    FUN_1003d4be(*(void **)(*(int *)((int)param_1 + 0x3188) + 0x1304),*(uint *)((int)pvVar4 + 0xb8),
                 0,0,4);
    *(undefined4 *)((int)param_1 + 0x31fc) = *(undefined4 *)((int)pvVar4 + 200);
    uVar2 = *(undefined4 *)(local_10 + 0x30);
  }
  uVar3 = local_14;
  if (local_14 != 0) {
    FUN_1003d4be(*(void **)(*(int *)((int)param_1 + 0x3188) + 0x1304),*(uint *)(local_14 + 0xb8),0,0
                 ,4);
    *(undefined4 *)((int)param_1 + 0x31f8) = *(undefined4 *)(uVar3 + 200);
    uVar2 = *(undefined4 *)((int)this + 0x30);
  }
  *(undefined4 *)((int)param_1 + 0x321c) = uVar2;
  *(undefined4 *)((int)param_1 + 0x3220) = 0;
  *(undefined1 *)((int)param_1 + 0x3236) = 1;
  return;
}

