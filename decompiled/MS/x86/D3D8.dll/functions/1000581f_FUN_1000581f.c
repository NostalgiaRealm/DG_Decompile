/*
 * FUN_1000581f at 1000581f
 * undefined __thiscall FUN_1000581f(void * this, char param_1)
 * Address ranges: 1000581f-1000594f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000581f(void *this,char param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  void *local_8;
  
  local_8 = this;
  FUN_10013eef((int)this);
  local_8 = *(void **)((int)this + 0xa08);
  uVar5 = 0;
  bVar7 = local_8 == (void *)0x0;
  if (!bVar7) {
    for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  while (!bVar7) {
    pbVar2 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
    piVar3 = *(int **)((int)this + (uVar5 & 0xff) * 4 + 0xf94);
    if ((piVar3 != (int *)0x0) &&
       (((iVar6 = piVar3[6], iVar6 == 3 || (iVar6 == 4)) || (iVar6 == 5)))) {
      (**(code **)(*piVar3 + 0x10))();
    }
    uVar5 = 0;
    bVar7 = local_8 == (void *)0x0;
    if (!bVar7) {
      for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
  }
  uVar5 = *(uint *)((int)this + 0x58a8);
  *(undefined4 *)((int)this + 0xa08) = 0;
  if (uVar5 != 0) {
    piVar3 = (int *)FUN_10007b93((void *)((int)this + 0xb84),(uint *)((int)this + 0x58a0));
    local_8 = (void *)(*(uint *)((int)this + 0x58a4) & uVar5);
    uVar5 = 0;
    if (local_8 != (void *)0x0) {
      for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_8 != (void *)0x0) {
      pbVar2 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
      while( true ) {
        if (piVar3 == (int *)0x0) {
          iVar4 = 0;
          iVar6 = (int)this + 0xb94;
        }
        else {
          iVar4 = *piVar3;
          iVar6 = iVar4;
        }
        FUN_1000fd6b(*(void **)((int)this + (uVar5 & 0xff) * 4 + 0xf94),iVar4,iVar6);
        uVar5 = 0;
        if (local_8 != (void *)0x0) {
          for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        if (local_8 == (void *)0x0) break;
        pbVar2 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
        *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
      }
    }
    *(undefined4 *)((int)this + 0x58a8) = 0;
  }
  local_8 = *(void **)((int)this + 0x58ac);
  uVar5 = 0;
  bVar7 = local_8 == (void *)0x0;
  if (!bVar7) {
    for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  while (!bVar7) {
    pbVar2 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
    puVar1 = *(undefined4 **)((int)this + (uVar5 & 0xff) * 4 + 0x57bc);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)();
    }
    uVar5 = 0;
    bVar7 = local_8 == (void *)0x0;
    if (!bVar7) {
      for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
  }
  *(undefined4 *)((int)this + 0x58ac) = 0;
  if (*(char *)((int)this + 0x58bc) != '\0') {
    if (*(undefined4 **)((int)this + 0x57b8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x57b8))();
    }
    *(undefined1 *)((int)this + 0x58bc) = 0;
  }
  if (param_1 != '\0') {
    FUN_10013d2a((int)this);
  }
  return;
}

