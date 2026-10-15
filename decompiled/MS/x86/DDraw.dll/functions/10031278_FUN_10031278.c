/*
 * FUN_10031278 at 10031278
 * char __thiscall FUN_10031278(void * this, char param_1)
 * Address ranges: 10031278-1003134f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_10031278(void *this,char param_1)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int extraout_ECX;
  void *extraout_EDX;
  SIZE_T SVar5;
  
  cVar3 = FUN_1003218f((int)this + 0x150);
  if (cVar3 == '\0') {
    cVar3 = FUN_10032177(extraout_ECX);
    if (cVar3 == '\0') {
      cVar3 = FUN_10006533(extraout_EDX);
      if ((cVar3 != '\0') && ((*(uint *)((int)this + 0x19c) >> 2 & 1) != 0)) {
        FUN_100311ac(this,*(int *)(*(int *)((int)this + 4) + 0x20));
        puVar1 = (uint *)(*(int *)((int)this + 4) + 0x34);
        *puVar1 = *puVar1 | 1;
      }
    }
    else if (*(int *)((int)extraout_EDX + 0x20) == 0) {
      *(uint *)((int)extraout_EDX + 0x34) = *(uint *)((int)extraout_EDX + 0x34) | 0x10;
      if (param_1 != '\0') {
        FUN_10005047();
      }
      cVar3 = '\x01';
    }
    else {
      cVar3 = FUN_10006533(extraout_EDX);
    }
  }
  else {
    SVar5 = (uint)*(ushort *)(*(int *)((int)this + 4) + 0xc) *
            *(int *)(*(int *)((int)this + 4) + 0x14);
    piVar4 = (int *)FUN_10060bfe(SVar5);
    if (piVar4 != (int *)0x0) {
      iVar2 = *(int *)((int)this + 4);
      *(undefined4 *)(iVar2 + 0xc4) = 0;
      *(int **)(iVar2 + 0x20) = piVar4;
      *(uint *)(iVar2 + 0x34) = *(uint *)(iVar2 + 0x34) | 0x28;
      if ((*(uint *)((int)this + 0x19c) >> 2 & 1) == 0) {
        FUN_10060d45(piVar4,0,SVar5);
      }
      else {
        FUN_100311ac(this,(int)piVar4);
      }
    }
    cVar3 = piVar4 != (int *)0x0;
  }
  return cVar3;
}

