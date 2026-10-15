/*
 * FUN_10053210 at 10053210
 * undefined __thiscall FUN_10053210(void * this, int * param_1)
 * Address ranges: 10053210-10053317
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10053210(void *this,int *param_1)

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
  if ((((local_14 == *(int *)((int)this + 0x6990)) && (local_10 == *(int *)((int)this + 0x6994))) &&
      (local_c == *(int *)((int)this + 0x6998))) && (local_8 == *(int *)((int)this + 0x699c))) {
    bVar5 = *(byte *)((int)this + 0xf671);
  }
  else {
    *(int *)((int)this + 0x6990) = local_14;
    bVar5 = 1;
    *(int *)((int)this + 0x6994) = local_10;
    *(int *)((int)this + 0x6998) = local_c;
    *(int *)((int)this + 0x699c) = local_8;
    *(undefined1 *)((int)this + 0xf671) = 1;
    *(int *)((int)this + 0x64f0) = local_14;
    *(int *)((int)this + 0x64f4) = local_10;
    *(int *)((int)this + 0x64f8) = local_c;
    *(int *)((int)this + 0x64fc) = local_8;
    *(undefined1 *)((int)this + 0xf6a3) = 1;
  }
  if (((uint)param_1[7] < 0xe) &&
     (((local_14 != 0xff || (local_10 != 0xff)) || ((local_c != 0xff || (local_8 != 0xff)))))) {
    cVar3 = '\x01';
  }
  else {
    cVar3 = '\0';
  }
  cVar1 = *(char *)((int)this + 0x764e);
  *(char *)((int)this + 0x764e) = cVar3;
  *(byte *)((int)this + 0xf668) = *(byte *)((int)this + 0xf668) | cVar3 != cVar1;
  if ((*(char *)((int)this + 0x764d) == '\0') && (cVar3 != '\0')) {
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  iVar2 = *(int *)((int)this + 0x697c);
  *(int *)((int)this + 0x697c) = iVar4;
  *(byte *)((int)this + 0xf671) = iVar2 != iVar4 | bVar5;
  return;
}

