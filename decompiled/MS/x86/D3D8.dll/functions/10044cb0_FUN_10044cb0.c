/*
 * FUN_10044cb0 at 10044cb0
 * undefined __thiscall FUN_10044cb0(void * this, int * param_1)
 * Address ranges: 10044cb0-10044db7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10044cb0(void *this,int *param_1)

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
  if ((((local_14 == *(int *)((int)this + 0x4d20)) && (local_10 == *(int *)((int)this + 0x4d24))) &&
      (local_c == *(int *)((int)this + 0x4d28))) && (local_8 == *(int *)((int)this + 0x4d2c))) {
    bVar5 = *(byte *)((int)this + 0xd981);
  }
  else {
    *(int *)((int)this + 0x4d20) = local_14;
    bVar5 = 1;
    *(int *)((int)this + 0x4d24) = local_10;
    *(int *)((int)this + 0x4d28) = local_c;
    *(int *)((int)this + 0x4d2c) = local_8;
    *(undefined1 *)((int)this + 0xd981) = 1;
    *(int *)((int)this + 0x4910) = local_14;
    *(int *)((int)this + 0x4914) = local_10;
    *(int *)((int)this + 0x4918) = local_c;
    *(int *)((int)this + 0x491c) = local_8;
    *(undefined1 *)((int)this + 0xd9a8) = 1;
  }
  if (((uint)param_1[7] < 0xe) &&
     (((local_14 != 0xff || (local_10 != 0xff)) || ((local_c != 0xff || (local_8 != 0xff)))))) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  cVar1 = *(char *)((int)this + 0x5961);
  *(char *)((int)this + 0x5961) = cVar3;
  *(byte *)((int)this + 0xd978) = *(byte *)((int)this + 0xd978) | cVar3 != cVar1;
  if ((*(char *)((int)this + 0x5960) == '\0') && (cVar3 != '\0')) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  iVar2 = *(int *)((int)this + 0x4d0c);
  *(int *)((int)this + 0x4d0c) = iVar4;
  *(byte *)((int)this + 0xd981) = iVar2 != iVar4 | bVar5;
  return;
}

