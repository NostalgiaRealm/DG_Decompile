/*
 * FUN_1002c740 at 1002c740
 * undefined __thiscall FUN_1002c740(void * this, int * param_1)
 * Address ranges: 1002c740-1002c847
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002c740(void *this,int *param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  (**(code **)(*param_1 + 0x14))(&local_14,&local_10,&local_c,&local_8);
  if ((((local_14 == *(int *)((int)this + 0xa00)) && (local_10 == *(int *)((int)this + 0xa04))) &&
      (local_c == *(int *)((int)this + 0xa08))) && (local_8 == *(int *)((int)this + 0xa0c))) {
    bVar5 = *(byte *)((int)this + 0x1d41);
  }
  else {
    *(int *)((int)this + 0xa00) = local_14;
    bVar5 = 1;
    *(int *)((int)this + 0xa04) = local_10;
    *(int *)((int)this + 0xa08) = local_c;
    *(int *)((int)this + 0xa0c) = local_8;
    *(undefined1 *)((int)this + 0x1d41) = 1;
    *(int *)((int)this + 0x5f0) = local_14;
    *(int *)((int)this + 0x5f4) = local_10;
    *(int *)((int)this + 0x5f8) = local_c;
    *(int *)((int)this + 0x5fc) = local_8;
    *(undefined1 *)((int)this + 0x1d48) = 1;
  }
  if (((uint)param_1[7] < 0xe) &&
     (((local_14 != 0xff || (local_10 != 0xff)) || ((local_c != 0xff || (local_8 != 0xff)))))) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  cVar1 = *(char *)((int)this + 0x191e);
  *(char *)((int)this + 0x191e) = cVar3;
  *(byte *)((int)this + 0x1d38) = *(byte *)((int)this + 0x1d38) | cVar3 != cVar1;
  if ((*(char *)((int)this + 0x191d) == '\0') && (cVar3 != '\0')) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  iVar2 = *(int *)((int)this + 0x9ec);
  *(int *)((int)this + 0x9ec) = iVar4;
  *(byte *)((int)this + 0x1d41) = iVar2 != iVar4 | bVar5;
  return;
}

