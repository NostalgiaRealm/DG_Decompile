/*
 * FUN_100334d0 at 100334d0
 * byte __thiscall FUN_100334d0(void * this, undefined4 param_1, byte param_2)
 * Address ranges: 100334d0-1003375e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte __thiscall FUN_100334d0(void *this,undefined4 param_1,byte param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  bool bVar7;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  byte local_5;
  
  local_5 = 1;
  iVar3 = *(int *)((int)this + 0xddf8);
  bVar4 = *(byte *)((int)this + 0xde5c) | *(byte *)((int)this + 0xd979) | param_2;
  *(byte *)((int)this + 0xde5c) = bVar4;
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)this + 0xde20);
  }
  if (*(char *)((int)this + 0x5955) == '\0') {
    uVar2 = *(int *)((int)this + 0xde48) + iVar3;
  }
  else {
    uVar2 = (uint)(*(int *)((int)this + 0xdbe0) != 0);
  }
  uVar6 = 0;
  if (bVar4 != 0) {
    uVar6 = uVar2;
  }
  if (*(char *)(*(int *)((int)this + 0xd9c4) + 0xec) != '\0') {
    if ((param_2 == 0) ||
       (((*(uint *)((int)this + 0xde00) | *(uint *)((int)this + 0xddd8)) >> 4 & 1) == 0)) {
      bVar5 = 0;
    }
    else {
      bVar5 = 1;
    }
    iVar3 = *(int *)((int)this + 0xd9c8);
    bVar5 = *(byte *)((int)this + 0xde5e) | bVar5;
    *(byte *)((int)this + 0xde5e) = bVar5;
    uVar6 = uVar6 + (bVar5 != 0);
    if ((*(uint *)(iVar3 + 0x24) <
         *(int *)(*(int *)(iVar3 + 0x18) * 0x20 + 0x10 + *(int *)(iVar3 + 0xc)) + uVar6) &&
       ((bVar4 == 0 || (bVar5 == 0)))) {
      *(byte *)((int)this + 0xde5c) = bVar4 | 1;
      *(byte *)((int)this + 0xde5e) = bVar5 | 1;
      uVar6 = uVar2 + 1;
    }
  }
  _param_2 = uVar2;
  if (uVar6 != 0) {
    iVar3 = *(int *)(*(int *)((int)this + 0xd9b8) + 0x1304);
    local_5 = FUN_1009fbdb(*(void **)((int)this + 0xd9c8),uVar6,
                           *(uint *)(*(int *)(*(int *)((int)this + 0xd9b8) + 0x1300) + 0xc),
                           *(uint *)(iVar3 + 0x938),*(uint *)(iVar3 + 0x93c),(int *)&local_34);
    if (local_5 == 0) goto LAB_10033747;
    iVar3 = *(int *)((int)this + 0xdc88);
    *(int *)((int)this + 0xdc88) = local_28;
    *(byte *)((int)this + 0xde5a) = *(byte *)((int)this + 0xde5a) | local_28 != iVar3;
    *(byte *)((int)this + 0xde5d) = *(byte *)((int)this + 0xde5d) | local_28 != iVar3;
    if ((local_28 != iVar3) && (uVar2 == 0)) {
      *(uint *)((int)this + 0xdb20) = local_34;
      *(int *)((int)this + 0xdb24) = local_30;
    }
  }
  if (*(char *)((int)this + 0xde5e) != '\0') {
    local_1c = *(undefined4 *)((int)this + 0xdb00);
    local_18 = *(undefined4 *)((int)this + 0xdb04);
    local_14 = *(int *)((int)this + 0x7c) + 0xffU & 0xffffff00;
    (**(code **)(*(int *)**(undefined4 **)((int)this + 0xd9bc) + 0x44))
              ((int *)**(undefined4 **)((int)this + 0xd9bc),&local_1c,local_2c);
    *(uint *)((int)this + 0xdb08) = local_34;
    bVar7 = CARRY4(local_34,local_24);
    local_34 = local_34 + local_24;
    *(int *)((int)this + 0xdb0c) = local_30;
    local_30 = local_30 + (uint)bVar7;
    local_2c = local_2c + local_24;
    *(undefined1 *)((int)this + 0xde69) = 1;
  }
  if ((*(char *)((int)this + 0xde5c) != '\0') && (uVar2 != 0)) {
    if (*(char *)((int)this + 0x5955) == '\0') {
      _param_2 = *(int *)((int)this + 0xde48);
      if (_param_2 != 0) {
        piVar1 = (int *)**(undefined4 **)((int)this + 0xd9bc);
        (**(code **)(*piVar1 + 0x5c))
                  (piVar1,1,&local_2c,&param_2,_param_2,(int)this + 0xdb88,&DAT_100b22b0,0);
      }
      *(uint *)((int)this + 0xdb20) = local_34;
      *(int *)((int)this + 0xdb24) = local_30;
    }
    else if (*(int *)((int)this + 0xdbe0) != 0) {
      piVar1 = (int *)**(undefined4 **)((int)this + 0xd9bc);
      (**(code **)(*piVar1 + 0x60))(piVar1,1,local_2c,*(undefined4 *)((int)this + 0xdba8),0);
      *(uint *)((int)this + 0xdb20) = local_34;
      *(int *)((int)this + 0xdb24) = local_30;
    }
  }
LAB_10033747:
  *(byte *)((int)this + 0xd979) = *(byte *)((int)this + 0xd979) & (local_5 ^ 1);
  return local_5;
}

