/*
 * FUN_10015644 at 10015644
 * undefined __thiscall FUN_10015644(void * this, char param_1, byte param_2)
 * Address ranges: 10015644-10015781
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10015644(void *this,char param_1,byte param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *extraout_ECX;
  uint uVar5;
  int iVar6;
  
  uVar2 = FUN_100118f8(this,*(int *)(*(int *)((int)this + 0x138) + 0x2b1c));
  uVar3 = FUN_100118f8(this,*(int *)(*(int *)((int)this + 0x138) + 0x2b20));
  uVar5 = 0;
  iVar6 = 0;
  do {
    if (((param_1 != '\0') || (uVar5 == uVar2)) || (uVar5 == uVar3)) {
      if ((*(byte *)((int)this + iVar6 + 0x1c2) & 1) != 0) {
        uVar4 = FUN_100165a9((int)this + iVar6 + 0x140);
        if ((char)uVar4 == '\0') {
          FUN_10014c11(this,extraout_ECX,1,0);
          pbVar1 = (byte *)((int)this + iVar6 + 0x1c2);
          *pbVar1 = *pbVar1 & 0xfe;
        }
        else {
          FUN_100117c7(this,uVar5,1,0,0,*(LONG *)((int)this + iVar6 + 0x160),
                       *(LONG *)((int)this + iVar6 + 0x164),0);
          FUN_10014c11(this,(int *)((int)this + iVar6 + 0x140),1,0);
          FUN_10011687(this,uVar5,*(int *)((int)this + iVar6 + 0x19c),
                       *(int *)((int)this + iVar6 + 0x1a0),*(char *)((int)this + iVar6 + 0x1bd),
                       *(char *)((int)this + iVar6 + 0x1c1),'\0','\0',
                       *(undefined1 *)((int)this + iVar6 + 0x1bf),
                       *(undefined4 *)((int)this + iVar6 + 0x1b4),
                       *(undefined4 *)((int)this + iVar6 + 0x1b8));
          FUN_100163c4((void *)((int)this + iVar6 + 0x140),*(int *)((int)this + iVar6 + 0x164));
        }
      }
      pbVar1 = (byte *)((int)this + iVar6 + 0x1c2);
      *pbVar1 = *pbVar1 | param_2;
    }
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + 0x120;
  } while ((int)uVar5 < 7);
  return;
}

