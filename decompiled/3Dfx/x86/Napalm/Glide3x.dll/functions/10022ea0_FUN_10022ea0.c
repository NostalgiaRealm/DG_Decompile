/*
 * FUN_10022ea0 at 10022ea0
 * undefined __thiscall FUN_10022ea0(void * this, char param_1, byte param_2)
 * Address ranges: 10022ea0-1002304c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10022ea0(void *this,char param_1,byte param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  LPRECT lprcDst;
  uint uVar5;
  int iVar6;
  RECT local_18;
  
  uVar2 = FUN_100118f8(this,*(int *)(*(int *)((int)this + 0x138) + 0x2b1c));
  uVar3 = FUN_100118f8(this,*(int *)(*(int *)((int)this + 0x138) + 0x2b20));
  uVar5 = 0;
  iVar6 = 0;
  do {
    if (((param_1 != '\0') || (uVar5 == uVar2)) || (uVar5 == uVar3)) {
      if ((*(byte *)((int)this + iVar6 + 0x1be) & 1) != 0) {
        uVar4 = FUN_100165a9((int)this + iVar6 + 0x13c);
        if ((char)uVar4 == '\0') {
          local_18.right = *(LONG *)((int)this + iVar6 + 0x15c);
          local_18.bottom = *(LONG *)((int)this + iVar6 + 0x160);
          lprcDst = (LPRECT)((int)this + iVar6 + 0x170);
          local_18.left = 0;
          local_18.top = 0;
          UnionRect(lprcDst,lprcDst,&local_18);
          FUN_10022459(this,(int *)((int)this + iVar6 + 0x13c),1,0);
          FUN_100163c4((void *)((int)this + iVar6 + 0x13c),*(int *)((int)this + iVar6 + 0x160));
          pbVar1 = (byte *)((int)this + iVar6 + 0x1be);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        else {
          FUN_1000cf4c(*(int *)((int)this + 0x138));
          FUN_100117c7(this,uVar5,1,0,0,*(LONG *)((int)this + iVar6 + 0x15c),
                       *(LONG *)((int)this + iVar6 + 0x160),0);
          FUN_10022459(this,(int *)((int)this + iVar6 + 0x13c),1,0);
          FUN_10011687(this,uVar5,*(int *)((int)this + iVar6 + 0x198),
                       *(int *)((int)this + iVar6 + 0x19c),*(char *)((int)this + iVar6 + 0x1b9),
                       *(char *)((int)this + iVar6 + 0x1bd),'\0','\0',
                       *(undefined1 *)((int)this + iVar6 + 0x1bb),
                       *(undefined4 *)((int)this + iVar6 + 0x1b0),
                       *(undefined4 *)((int)this + iVar6 + 0x1b4));
          FUN_100163c4((void *)((int)this + iVar6 + 0x13c),*(int *)((int)this + iVar6 + 0x160));
          FUN_1000d002(*(int *)((int)this + 0x138));
        }
      }
      pbVar1 = (byte *)((int)this + iVar6 + 0x1be);
      *pbVar1 = *pbVar1 | param_2;
    }
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + 0x104;
  } while ((int)uVar5 < 7);
  return;
}

