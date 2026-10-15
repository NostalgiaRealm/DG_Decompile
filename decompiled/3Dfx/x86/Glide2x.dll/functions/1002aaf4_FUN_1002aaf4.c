/*
 * FUN_1002aaf4 at 1002aaf4
 * undefined __thiscall FUN_1002aaf4(void * this, char param_1, byte param_2)
 * Address ranges: 1002aaf4-1002aca5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002aaf4(void *this,char param_1,byte param_2)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  LPRECT lprcDst;
  int extraout_EDX;
  int iVar5;
  int iVar6;
  RECT local_18;
  
  iVar3 = FUN_1001c41a(*(int *)(*(int *)((int)this + 0x138) + 0x2964));
  iVar4 = FUN_1001c41a(*(int *)(extraout_EDX + 0x2968));
  iVar5 = 0;
  iVar6 = 0;
  do {
    if (((param_1 != '\0') || (iVar5 == iVar3)) || (iVar5 == iVar4)) {
      if ((*(byte *)((int)this + iVar6 + 0x1be) & 1) != 0) {
        if ((*(int *)((int)this + iVar6 + 0x1a0) == 0) && (*(int *)((int)this + iVar6 + 0x1a4) == 0)
           ) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FUN_10018d00(*(int *)((int)this + 0x138));
          FUN_1001c2e9(this,iVar5,1,0,0,*(LONG *)((int)this + iVar6 + 0x15c),
                       *(LONG *)((int)this + iVar6 + 0x160),0);
          FUN_1002a0b6(this,(int *)((int)this + iVar6 + 0x13c),1,0);
          FUN_1001c1a9(this,iVar5,*(int *)((int)this + iVar6 + 0x198),
                       *(int *)((int)this + iVar6 + 0x19c),*(char *)((int)this + iVar6 + 0x1b9),
                       *(char *)((int)this + iVar6 + 0x1bd),'\0','\0',
                       *(undefined1 *)((int)this + iVar6 + 0x1bb),
                       *(undefined4 *)((int)this + iVar6 + 0x1b0),
                       *(undefined4 *)((int)this + iVar6 + 0x1b4));
          FUN_10021929((void *)((int)this + iVar6 + 0x13c),*(int *)((int)this + iVar6 + 0x160));
          FUN_10018db6(*(int *)((int)this + 0x138));
        }
        else {
          local_18.right = *(LONG *)((int)this + iVar6 + 0x15c);
          local_18.bottom = *(LONG *)((int)this + iVar6 + 0x160);
          lprcDst = (LPRECT)((int)this + iVar6 + 0x170);
          local_18.left = 0;
          local_18.top = 0;
          UnionRect(lprcDst,lprcDst,&local_18);
          FUN_1002a0b6(this,(int *)((int)this + iVar6 + 0x13c),1,0);
          FUN_10021929((void *)((int)this + iVar6 + 0x13c),*(int *)((int)this + iVar6 + 0x160));
          pbVar1 = (byte *)((int)this + iVar6 + 0x1be);
          *pbVar1 = *pbVar1 & 0xfe;
        }
      }
      pbVar1 = (byte *)((int)this + iVar6 + 0x1be);
      *pbVar1 = *pbVar1 | param_2;
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 0x104;
  } while (iVar5 < 3);
  return;
}

