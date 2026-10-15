/*
 * FUN_1000606d at 1000606d
 * undefined __thiscall FUN_1000606d(void * this, char param_1)
 * Address ranges: 1000606d-1000623a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000606d(void *this,char param_1)

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
  FUN_10017fad((int)this);
  local_8 = *(void **)((int)this + 0xccc);
  uVar5 = 0;
  bVar7 = local_8 == (void *)0x0;
  if (!bVar7) {
    for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  while (!bVar7) {
    pbVar2 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
    piVar3 = *(int **)((int)this + (uVar5 & 0xff) * 4 + 0x1258);
    if ((piVar3 != (int *)0x0) &&
       (((iVar4 = piVar3[6], iVar4 == 3 || (iVar4 == 4)) || (iVar4 == 5)))) {
      (**(code **)(*piVar3 + 0x10))();
    }
    uVar5 = 0;
    bVar7 = local_8 == (void *)0x0;
    if (!bVar7) {
      for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
  }
  local_8 = *(void **)((int)this + 0x6680);
  *(undefined4 *)((int)this + 0xccc) = 0;
  uVar5 = 0;
  bVar7 = local_8 == (void *)0x0;
  if (!bVar7) {
    for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  while (!bVar7) {
    pbVar2 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
    piVar3 = *(int **)((int)this + (uVar5 & 0xff) * 4 + 0x1298);
    if ((piVar3 != (int *)0x0) &&
       (((iVar4 = piVar3[6], iVar4 == 3 || (iVar4 == 4)) || (iVar4 == 5)))) {
      (**(code **)(*piVar3 + 0x10))();
    }
    uVar5 = 0;
    bVar7 = local_8 == (void *)0x0;
    if (!bVar7) {
      for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
  }
  uVar5 = *(uint *)((int)this + 0x667c);
  *(undefined4 *)((int)this + 0x6680) = 0;
  if ((uVar5 != 0) || (*(int *)((int)this + 0x6688) != 0)) {
    piVar3 = (int *)FUN_100086e6((void *)((int)this + 0xe48),(uint *)((int)this + 0x6674));
    local_8 = (void *)(*(uint *)((int)this + 0x6678) & uVar5);
    uVar5 = 0;
    if (local_8 != (void *)0x0) {
      for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    if (local_8 == (void *)0x0) {
      uVar5 = 0xffffffff;
    }
    else {
      pbVar2 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
      uVar5 = uVar5 & 0xff;
    }
    if (uVar5 != 0xffffffff) {
      while( true ) {
        if (piVar3 == (int *)0x0) {
          iVar4 = 0;
          iVar6 = (int)this + 0xe58;
        }
        else {
          iVar4 = *piVar3;
          iVar6 = iVar4;
        }
        FUN_10013c0d(*(void **)((int)this + uVar5 * 4 + 0x1258),iVar4,iVar6);
        uVar5 = 0;
        if (local_8 != (void *)0x0) {
          for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
          }
        }
        if (local_8 == (void *)0x0) break;
        pbVar2 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
        *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
        uVar5 = uVar5 & 0xff;
      }
    }
    local_8 = (void *)(*(uint *)((int)this + 0x6688) & *(uint *)((int)this + 0x6684));
    *(undefined4 *)((int)this + 0x667c) = 0;
    uVar5 = 0;
    bVar7 = local_8 == (void *)0x0;
    if (!bVar7) {
      for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    while (!bVar7) {
      pbVar2 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
      if (piVar3 == (int *)0x0) {
        iVar4 = 0;
        iVar6 = (int)this + 0xe58;
      }
      else {
        iVar4 = *piVar3;
        iVar6 = iVar4;
      }
      FUN_10013c0d(*(void **)((int)this + (uVar5 & 0xff) * 4 + 0x1258),iVar4,iVar6);
      uVar5 = 0;
      bVar7 = local_8 == (void *)0x0;
      if (!bVar7) {
        for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
    }
    *(undefined4 *)((int)this + 0x6688) = 0;
  }
  local_8 = *(void **)((int)this + 0x668c);
  uVar5 = 0;
  bVar7 = local_8 == (void *)0x0;
  if (!bVar7) {
    for (; ((uint)local_8 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
    }
  }
  while (!bVar7) {
    pbVar2 = (byte *)((int)&local_8 + ((int)uVar5 >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << (uVar5 & 7));
    puVar1 = *(undefined4 **)((int)this + (uVar5 & 0xff) * 4 + 26000);
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
  *(undefined4 *)((int)this + 0x668c) = 0;
  if (*(char *)((int)this + 0x669c) != '\0') {
    if (*(undefined4 **)((int)this + 0x658c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0x658c))();
    }
    *(undefined1 *)((int)this + 0x669c) = 0;
  }
  if (param_1 != '\0') {
    FUN_10017dad((int)this);
  }
  return;
}

