/*
 * FUN_1000fc18 at 1000fc18
 * undefined __thiscall FUN_1000fc18(void * this, uint param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 * param_5)
 * Address ranges: 1000fc18-1000fd3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1000fc18(void *this,uint param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint local_8;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)((int)this + 8)) {
    if (iVar1 == 0) {
      uVar5 = 0x10;
    }
    else {
      uVar5 = iVar1 * 2;
    }
    iVar1 = FUN_100cfd89(uVar5 << 5);
    if (iVar1 != 0) {
      local_8 = 0;
      uVar2 = 0;
      if (*(int *)((int)this + 8) != 0) {
        do {
          iVar4 = local_8 * 0x20;
          pvVar3 = (void *)(iVar4 + iVar1);
          *(undefined4 *)((int)pvVar3 + 0x10) = 0;
          *(undefined4 *)((int)pvVar3 + 0x14) = 0;
          *(undefined4 *)((int)pvVar3 + 0x18) = 0;
          FUN_1000fdf3(pvVar3,(undefined4 *)(*(int *)((int)this + 4) + iVar4));
          thunk_FUN_100cfd6c(*(LPVOID *)(*(int *)((int)this + 4) + 0x10 + iVar4));
          uVar2 = *(uint *)((int)this + 8);
          local_8 = local_8 + 1;
        } while (local_8 < uVar2);
      }
      for (; uVar2 < uVar5; uVar2 = uVar2 + 1) {
        iVar4 = uVar2 * 0x20;
        *(undefined4 *)(iVar1 + 0x10 + iVar4) = 0;
        *(undefined4 *)(iVar1 + 0x14 + iVar4) = 0;
        *(undefined4 *)(iVar1 + 0x18 + iVar4) = 0;
      }
      thunk_FUN_100cfd6c(*(LPVOID *)this);
      *(int *)this = iVar1;
      *(int *)((int)this + 4) = iVar1;
      *(uint *)((int)this + 0xc) = uVar5;
    }
  }
  uVar5 = *(uint *)((int)this + 8);
  if (*(uint *)((int)this + 0xc) != uVar5) {
    for (; param_1 < uVar5; uVar5 = uVar5 - 1) {
      pvVar3 = (void *)(uVar5 * 0x20 + *(int *)((int)this + 4));
      FUN_1000fdf3(pvVar3,(undefined4 *)((int)pvVar3 + -0x20));
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    iVar4 = param_1 * 0x20;
    *(undefined4 *)(iVar4 + 8 + *(int *)((int)this + 4)) = *param_4;
    iVar1 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar4 + 0xc + iVar1) = *param_5;
    FUN_1000fd91((void *)(iVar1 + 0x10 + iVar4),param_5 + 1);
    iVar1 = *(int *)((int)this + 4);
    *(undefined4 *)(iVar4 + iVar1) = param_2;
    *(undefined4 *)(iVar4 + 4 + iVar1) = param_3;
  }
  return;
}

