/*
 * FUN_100328ad at 100328ad
 * undefined4 __thiscall FUN_100328ad(void * this, undefined4 * param_1, int param_2)
 * Address ranges: 100328ad-10032a46
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100328ad(void *this,undefined4 *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  HDC hdc;
  HGDIOBJ pvVar5;
  int iVar6;
  undefined4 uVar7;
  int local_494 [256];
  undefined4 local_94 [4];
  int local_84 [5];
  int local_70 [23];
  RECT local_14;
  
  iVar2 = param_2;
  uVar7 = 0x80004005;
  if (((*(int *)(param_2 + 0x10) == 0) || (*(int *)((int)this + 0x1a4) != 8)) ||
     (bVar3 = 1, *(int *)((int)this + 0x108) != 0)) {
    bVar3 = 0;
  }
  *(byte *)(param_2 + 0x2f) = *(byte *)(param_2 + 0x2f) | bVar3;
  FUN_10060d45(local_494,0,0x400);
  if ((*(int *)((int)this + 0x1a4) == 8) &&
     ((*(int *)(*(int *)((int)this + 4) + 0x90) == 0 ||
      (*(char *)(*(int *)((int)this + 4) + 0xaf) != '\0')))) {
    FUN_100336f5(this,local_494);
  }
  bVar4 = FUN_100065cb(*(void **)((int)this + 4),(int)local_494);
  if (bVar4) {
    hdc = CreateCompatibleDC((HDC)0x0);
    *(HDC *)(iVar2 + 0x14) = hdc;
    if (hdc != (HDC)0x0) {
      pvVar5 = SelectObject(hdc,*(HGDIOBJ *)(iVar2 + 0x10));
      *(HGDIOBJ *)(iVar2 + 0x18) = pvVar5;
      local_14.right = *(LONG *)((int)this + 0x15c);
      local_14.bottom = *(LONG *)((int)this + 0x158);
      local_14.left = 0;
      local_14.top = 0;
      iVar6 = FUN_100321f0(this,0,local_94,&param_2,&local_14,0,1,'\x01');
      if (iVar6 == -0x7789fe52) {
        iVar6 = FUN_1003277e(this,0,1,local_70,local_84,'\x01');
        if (iVar6 < 0) {
          return 0x80004005;
        }
        iVar6 = *(int *)((int)this + 4);
        *(int *)(iVar6 + 0x9c) = local_70[0];
        *(int *)(iVar6 + 0xa0) = local_84[0];
        *param_1 = *(undefined4 *)(iVar2 + 0x14);
        FUN_10005ab6(*(int *)((int)this + 4) + 0x4c);
        puVar1 = (uint *)(*(int *)((int)this + 4) + 200);
        *puVar1 = *puVar1 | 0x80;
      }
      else {
        if (iVar6 != 0) {
          return 0x80004005;
        }
        iVar6 = *(int *)((int)this + 4);
        *(int *)(iVar6 + 0x9c) = param_2;
        *(int *)(iVar6 + 0xa0) = local_84[0];
        *param_1 = *(undefined4 *)(iVar2 + 0x14);
        if (local_70[0] != 0) {
          FUN_10005ab6(*(int *)((int)this + 4) + 0x4c);
        }
        puVar1 = (uint *)(*(int *)((int)this + 4) + 0x34);
        *puVar1 = *puVar1 & 0xfffffffb;
        if ((*(uint *)((int)this + 0x1b8) & 0x800) != 0) {
          FUN_1000523c(*(void **)((int)this + 4),0,0);
        }
      }
      uVar7 = 0;
    }
  }
  return uVar7;
}

