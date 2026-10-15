/*
 * FUN_1003e340 at 1003e340
 * byte __thiscall FUN_1003e340(void * this, undefined4 param_1, byte param_2)
 * Address ranges: 1003e340-1003e659
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __thiscall FUN_1003e340(void *this,undefined4 param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  int local_10;
  int local_c;
  byte local_5;
  
  local_5 = 1;
  local_c = *(int *)((int)this + 0xfd38);
  bVar4 = *(byte *)((int)this + 0xfd9c) | *(byte *)((int)this + 0xf6a0) |
          *(byte *)((int)this + 0xf669) | param_2;
  *(byte *)((int)this + 0xfd9c) = bVar4;
  if (local_c == 0) {
    local_c = *(int *)((int)this + 0xfd60);
  }
  if (*(char *)((int)this + 0x7642) == '\0') {
    uVar3 = *(int *)((int)this + 0xfd88) + local_c;
  }
  else {
    uVar3 = (uint)(*(int *)((int)this + 0xfa7c) != 0);
  }
  uVar6 = 0;
  if (bVar4 != 0) {
    uVar6 = uVar3;
  }
  if (*(char *)(*(int *)((int)this + 0xf6c4) + 0xec) != '\0') {
    if ((param_2 == 0) ||
       (((*(uint *)((int)this + 0xfd40) | *(uint *)((int)this + 0xfd18)) >> 4 & 1) == 0)) {
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
    }
    iVar1 = *(int *)((int)this + 0xf6c8);
    bVar5 = *(byte *)((int)this + 0xfd9e) | bVar5;
    *(byte *)((int)this + 0xfd9e) = bVar5;
    uVar6 = uVar6 + (bVar5 != 0);
    if ((*(uint *)(iVar1 + 0x24) <
         *(int *)(*(int *)(iVar1 + 0x18) * 0x20 + 0x10 + *(int *)(iVar1 + 0xc)) + uVar6) &&
       ((bVar4 == 0 || (bVar5 == 0)))) {
      *(byte *)((int)this + 0xfd9c) = bVar4 | 1;
      *(byte *)((int)this + 0xfd9e) = bVar5 | 1;
      uVar6 = uVar3 + 1;
    }
  }
  if (uVar6 != 0) {
    iVar1 = *(int *)(*(int *)((int)this + 0xf6b8) + 0x1304);
    local_5 = FUN_100c2028(*(void **)((int)this + 0xf6c8),uVar6,
                           *(uint *)(*(int *)(*(int *)((int)this + 0xf6b8) + 0x1300) + 0xc),
                           *(uint *)(iVar1 + 0x938),*(uint *)(iVar1 + 0x93c),(int *)&local_3c);
    if (local_5 == 0) goto LAB_1003e63f;
    iVar1 = *(int *)((int)this + 0xfbc0);
    *(int *)((int)this + 0xfbc0) = local_30;
    *(byte *)((int)this + 0xfd9a) = *(byte *)((int)this + 0xfd9a) | local_30 != iVar1;
    *(byte *)((int)this + 0xfd9d) = *(byte *)((int)this + 0xfd9d) | local_30 != iVar1;
    if ((local_30 != iVar1) && (uVar3 == 0)) {
      *(uint *)((int)this + 0xf8c0) = local_3c;
      *(int *)((int)this + 0xf8c4) = local_38;
      *(uint *)((int)this + 0xf8d8) = local_3c;
      *(int *)((int)this + 0xf8dc) = local_38;
    }
  }
  if (*(char *)((int)this + 0xfd9e) != '\0') {
    local_24 = *(undefined4 *)((int)this + 0xf898);
    local_20 = *(undefined4 *)((int)this + 0xf89c);
    local_1c = *(int *)((int)this + 0x7c) + 0xffU & 0xffffff00;
    (**(code **)(*(int *)**(undefined4 **)((int)this + 0xf6bc) + 0x44))
              ((int *)**(undefined4 **)((int)this + 0xf6bc),&local_24,local_34);
    *(uint *)((int)this + 0xf8a0) = local_3c;
    bVar7 = CARRY4(local_3c,local_2c);
    local_3c = local_3c + local_2c;
    *(int *)((int)this + 0xf8a4) = local_38;
    local_38 = local_38 + (uint)bVar7;
    local_34 = local_34 + local_2c;
    *(undefined1 *)((int)this + 0xfdaa) = 1;
  }
  if ((*(char *)((int)this + 0xfd9c) != '\0') && (uVar3 != 0)) {
    if (*(char *)((int)this + 0x7642) == '\0') {
      local_10 = *(int *)((int)this + 0xfd88);
      if (local_10 != 0) {
        piVar2 = (int *)**(undefined4 **)((int)this + 0xf6bc);
        (**(code **)(*piVar2 + 0x5c))
                  (piVar2,1,&local_34,&local_10,local_10,(int)this + 0xf960,&DAT_100d5848,0);
      }
      *(uint *)((int)this + 0xf8c0) = local_3c;
      *(int *)((int)this + 0xf8c4) = local_38;
      if (local_c != 0) {
        uVar3 = *(int *)((int)this + 0xfd88) * local_2c;
        local_10 = local_c;
        bVar7 = CARRY4(local_3c,uVar3);
        local_3c = local_3c + uVar3;
        local_38 = local_38 + (uint)bVar7;
        local_34 = local_34 + uVar3;
        (**(code **)(*(int *)**(undefined4 **)((int)this + 0xf6bc) + 0x5c))
                  ((int *)**(undefined4 **)((int)this + 0xf6bc),1,&local_34,&local_10,local_c,
                   (int)this + 0xfa08,&DAT_100d5848,0);
      }
      *(uint *)((int)this + 0xf8d8) = local_3c;
      *(int *)((int)this + 0xf8dc) = local_38;
    }
    else if (*(int *)((int)this + 0xfa7c) != 0) {
      piVar2 = (int *)**(undefined4 **)((int)this + 0xf6bc);
      (**(code **)(*piVar2 + 0x60))(piVar2,1,local_34,*(undefined4 *)((int)this + 0xf9a0),0);
      *(uint *)((int)this + 0xf8c0) = local_3c;
      *(int *)((int)this + 0xf8c4) = local_38;
    }
  }
LAB_1003e63f:
  *(byte *)((int)this + 0xf669) = *(byte *)((int)this + 0xf669) & (local_5 ^ 1);
  *(byte *)((int)this + 0xf6a0) = *(byte *)((int)this + 0xf6a0) & (local_5 ^ 1);
  return local_5;
}

