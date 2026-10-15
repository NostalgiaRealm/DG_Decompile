/*
 * FUN_10016bad at 10016bad
 * undefined __thiscall FUN_10016bad(void * this, int param_1)
 * Address ranges: 10016bad-10016cb1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10016bad(void *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = 0;
  uVar4 = 0;
  do {
    iVar5 = uVar4 * 0x74;
    uVar1 = *(uint *)((int)this + iVar5 + 0x548) & 0x1f;
    if (uVar1 == 1) break;
    iVar3 = uVar1 * 3;
    if ((&DAT_100af9f0)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_100b19d0 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x54c) & 0xf) * 8) * 4);
    }
    if ((&DAT_100af9f1)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_100b19d0 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x550) & 0xf) * 8) * 4);
    }
    if ((&DAT_100af9f2)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_100b19d0 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x5ac) & 0xf) * 8) * 4);
    }
    iVar3 = (*(uint *)((int)this + iVar5 + 0x554) & 0x1f) * 3;
    if ((&DAT_100af9f0)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_100b19d0 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x558) & 0xf) * 8) * 4);
    }
    if ((&DAT_100af9f1)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_100b19d0 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x55c) & 0xf) * 8) * 4);
    }
    if ((&DAT_100af9f2)[iVar3] != '\0') {
      uVar2 = uVar2 | *(uint *)(&DAT_100b19d0 +
                               (uVar4 + (*(uint *)((int)this + iVar5 + 0x5b0) & 0xf) * 8) * 4);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  if (uVar2 == 0) {
    uVar2 = 2;
  }
  FUN_10016a8c(this,param_1,uVar2);
  return;
}

