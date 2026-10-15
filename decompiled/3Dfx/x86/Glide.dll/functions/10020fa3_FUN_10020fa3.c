/*
 * FUN_10020fa3 at 10020fa3
 * undefined __thiscall FUN_10020fa3(void * this, char param_1, byte param_2)
 * Address ranges: 10020fa3-100210e4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10020fa3(void *this,char param_1,byte param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int extraout_EDX;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_1001c7a6(*(int *)(*(int *)((int)this + 0x138) + 0x2964));
  iVar3 = FUN_1001c7a6(*(int *)(extraout_EDX + 0x2968));
  iVar4 = 0;
  iVar5 = 0;
  do {
    if (((param_1 != '\0') || (iVar4 == iVar2)) || (iVar4 == iVar3)) {
      if ((*(byte *)((int)this + iVar5 + 0x1c2) & 1) != 0) {
        if ((*(int *)((int)this + iVar5 + 0x1a4) == 0) && (*(int *)((int)this + iVar5 + 0x1a8) == 0)
           ) {
          FUN_10020579(this,(int *)((int)this + iVar5 + 0x140),1,0);
          pbVar1 = (byte *)((int)this + iVar5 + 0x1c2);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        else {
          FUN_1001c675(this,iVar4,1,0,0,*(LONG *)((int)this + iVar5 + 0x160),
                       *(LONG *)((int)this + iVar5 + 0x164),0);
          FUN_10020579(this,(int *)((int)this + iVar5 + 0x140),1,0);
          FUN_1001c535(this,iVar4,*(int *)((int)this + iVar5 + 0x19c),
                       *(int *)((int)this + iVar5 + 0x1a0),*(char *)((int)this + iVar5 + 0x1bd),
                       *(char *)((int)this + iVar5 + 0x1c1),'\0','\0',
                       *(undefined1 *)((int)this + iVar5 + 0x1bf),
                       *(undefined4 *)((int)this + iVar5 + 0x1b4),
                       *(undefined4 *)((int)this + iVar5 + 0x1b8));
          FUN_10021cb5((void *)((int)this + iVar5 + 0x140),*(int *)((int)this + iVar5 + 0x164));
        }
      }
      pbVar1 = (byte *)((int)this + iVar5 + 0x1c2);
      *pbVar1 = *pbVar1 | param_2;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 0x120;
  } while (iVar4 < 3);
  return;
}

