/*
 * FUN_10005ff1 at 10005ff1
 * undefined __thiscall FUN_10005ff1(void * this, uint param_1, int param_2, uint param_3)
 * Address ranges: 10005ff1-100060dc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_10005ff1(void *this,uint param_1,int param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = param_1 * 0x19 + param_2;
  if (*(char *)((int)this + 0x224) == '\0') {
    if (*(uint *)((int)this + uVar3 * 4 + 0x4f4) != param_3) {
      if ((((param_2 == 1) || (param_2 == 2)) || (param_2 == 4)) || (param_2 == 5)) {
        *(uint *)((int)this + 0x934) = *(uint *)((int)this + 0x934) | 1 << (param_1 & 0x1f);
      }
      else {
        FUN_100060dd(this,param_1,param_2,param_3);
      }
      *(uint *)((int)this + uVar3 * 4 + 0x4f4) = param_3;
    }
  }
  else {
    iVar1 = *(int *)(*(int *)((int)this + 0x214) + *(int *)((int)this + 0x220) * 4);
    *(uint *)(iVar1 + 0x26c + uVar3 * 4) = param_3;
    pbVar2 = (byte *)(iVar1 + 0xa30 + (uVar3 >> 5) * 4 + ((int)(uVar3 & 0x1f) >> 3));
    *pbVar2 = *pbVar2 | '\x01' << (uVar3 & 7);
  }
  return;
}

