/*
 * FUN_100251fe at 100251fe
 * undefined __thiscall FUN_100251fe(void * this, uint param_1, uint param_2)
 * Address ranges: 100251fe-10025285
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100251fe(void *this,uint param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x11c) * 0xa4;
  if (((*(int *)(&DAT_1006994c + iVar4) == 0) || (*(uint *)(&DAT_10069954 + iVar4) < param_1)) ||
     (*(uint *)(&DAT_1006995c + iVar4) < param_2)) {
    FUN_10025286(this,0);
    uVar3 = *(uint *)(&DAT_10069954 + iVar4);
    if (*(uint *)(&DAT_10069954 + iVar4) < param_1) {
      uVar3 = param_1;
    }
    *(uint *)(&DAT_10069954 + iVar4) = uVar3;
    uVar1 = *(uint *)(&DAT_1006995c + iVar4);
    if (*(uint *)(&DAT_1006995c + iVar4) < param_2) {
      uVar1 = param_2;
    }
    *(uint *)(&DAT_1006995c + iVar4) = uVar1;
    uVar2 = (**(code **)(**(int **)((int)this + 0x118) + 0x2c))(uVar3,uVar1,6,1,0,1);
    *(undefined4 *)(&DAT_1006994c + iVar4) = uVar2;
  }
  return;
}

