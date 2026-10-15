/*
 * FUN_1001abe8 at 1001abe8
 * undefined __thiscall FUN_1001abe8(void * this, int param_1)
 * Address ranges: 1001abe8-1001acef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001abe8(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = 0;
  uVar4 = 0;
  do {
    iVar5 = uVar4 * 0x84;
    uVar1 = *(uint *)((int)this + iVar5 + 0x77c) & 0x1f;
    if (uVar1 == 1) break;
    iVar3 = uVar1 * 3;
    if ((&DAT_100d1b30)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_100d4e80 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x780) & 0xf) * 8) * 4);
    }
    if ((&DAT_100d1b31)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_100d4e80 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x784) & 0xf) * 8) * 4);
    }
    if ((&DAT_100d1b32)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_100d4e80 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x7e0) & 0xf) * 8) * 4);
    }
    iVar3 = (*(uint *)((int)this + iVar5 + 0x788) & 0x1f) * 3;
    if ((&DAT_100d1b30)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_100d4e80 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x78c) & 0xf) * 8) * 4);
    }
    if ((&DAT_100d1b31)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_100d4e80 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x790) & 0xf) * 8) * 4);
    }
    if ((&DAT_100d1b32)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_100d4e80 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x7e4) & 0xf) * 8) * 4);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  if (uVar2 == 0) {
    uVar2 = 2;
  }
  FUN_1001aacc(this,param_1,uVar2);
  return;
}

