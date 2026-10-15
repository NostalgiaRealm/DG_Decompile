/*
 * FUN_100091ce at 100091ce
 * undefined __thiscall FUN_100091ce(void * this, int param_1)
 * Address ranges: 100091ce-10009298
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100091ce(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = 0;
  uVar4 = 0;
  do {
    iVar5 = uVar4 * 100;
    uVar1 = *(uint *)((int)this + iVar5 + 0x4f8) & 0x1f;
    if (uVar1 == 1) break;
    iVar3 = uVar1 * 3;
    if ((&DAT_1005d300)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_1005e618 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x4fc) & 0xf) * 8) * 4);
    }
    if ((&DAT_1005d301)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_1005e618 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x500) & 0xf) * 8) * 4);
    }
    iVar3 = (*(uint *)((int)this + iVar5 + 0x504) & 0x1f) * 3;
    if ((&DAT_1005d300)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_1005e618 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x508) & 0xf) * 8) * 4);
    }
    if ((&DAT_1005d301)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_1005e618 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x50c) & 0xf) * 8) * 4);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  if (uVar2 == 0) {
    uVar2 = 2;
  }
  FUN_100090ad(this,param_1,uVar2);
  return;
}

