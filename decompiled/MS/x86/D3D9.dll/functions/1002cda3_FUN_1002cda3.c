/*
 * FUN_1002cda3 at 1002cda3
 * undefined __thiscall FUN_1002cda3(void * this, HANDLE param_1, int param_2, undefined4 param_3, void * param_4)
 * Address ranges: 1002cda3-1002cecd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002cda3(void *this,HANDLE param_1,int param_2,undefined4 param_3,void *param_4)

{
  char cVar1;
  uint uVar2;
  LPVOID pvVar3;
  SIZE_T SVar4;
  int iVar5;
  bool bVar6;
  
  cVar1 = *(char *)(DAT_100dea74 + 0x7ec);
  uVar2 = (uint)*(ushort *)((int)this + 0xc) * *(int *)((int)this + 0x14);
  SVar4 = uVar2 + param_2 * 2;
  if (param_1 == (HANDLE)0x0) {
    pvVar3 = VirtualAlloc((LPVOID)0x0,SVar4,0x3000,4);
  }
  else {
    pvVar3 = MapViewOfFile(param_1,0xf001f,0,0,SVar4);
  }
  bVar6 = true;
  if (pvVar3 != (LPVOID)0x0) {
    *(int **)((int)this + 0x20) = (int *)(param_2 + (int)pvVar3);
    if (param_1 == (HANDLE)0x0) {
      FUN_100cfed0((int *)(param_2 + (int)pvVar3),0,uVar2);
    }
    bVar6 = *(int *)((int)this + 0x20) != 0;
    if ((cVar1 != '\0') && ((char)param_4 != '\0')) {
      SVar4 = ((uint)*(ushort *)((int)this + 0xc) * *(int *)((int)this + 0x14) + 0xfff >> 0xf) + 1;
      *(SIZE_T *)((int)this + 0x2c) = SVar4;
      iVar5 = FUN_100cfd89(SVar4);
      *(int *)((int)this + 0x24) = iVar5;
      if (iVar5 != 0) {
        iVar5 = FUN_100cfd89(*(SIZE_T *)((int)this + 0x2c));
        *(int *)((int)this + 0x28) = iVar5;
        if (iVar5 == 0) {
          thunk_FUN_100cfd6c(*(LPVOID *)((int)this + 0x24));
          *(undefined4 *)((int)this + 0x24) = 0;
        }
        else {
          FUN_100cfed0(*(int **)((int)this + 0x24),0,*(uint *)((int)this + 0x2c));
          FUN_100cfed0(*(int **)((int)this + 0x28),0,*(uint *)((int)this + 0x2c));
        }
      }
      FUN_1002cf74(this,0,0);
    }
    *(uint *)((int)this + 0x34) = *(uint *)((int)this + 0x34) & 0xffffffe7;
    param_4 = this;
    uVar2 = FUN_1002b366((int *)&param_4);
    if (uVar2 == 0xffffffff) {
      FUN_1002b2d4(&param_4);
    }
  }
  uVar2 = *(uint *)((int)this + 0x34) | 0x20;
  if (!bVar6) {
    uVar2 = *(uint *)((int)this + 0x34) & 0xffffffdf;
  }
  *(uint *)((int)this + 0x34) = uVar2;
  return;
}

