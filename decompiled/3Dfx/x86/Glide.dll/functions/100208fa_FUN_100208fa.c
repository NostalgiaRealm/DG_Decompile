/*
 * FUN_100208fa at 100208fa
 * undefined4 __thiscall FUN_100208fa(void * this, undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 100208fa-10020a56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100208fa(void *this,undefined4 *param_1,undefined4 *param_2)

{
  int *this_00;
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  
  this_00 = (int *)((int)this + 0x140);
  FUN_10050561(this_00,0,0x360);
  uVar4 = 0;
  do {
    iVar3 = uVar4 * 0x120;
    *(undefined4 *)((int)this + iVar3 + 0x1e4) =
         *(undefined4 *)(*(int *)((int)this + 0x138) + 0x3180);
    uVar4 = uVar4 + 1;
    *(int *)((int)this + iVar3 + 0x1e8) =
         *(int *)(*(int *)((int)this + 0x138) + 0x3180) + 0x6c0 +
         *(int *)(*(int *)((int)this + 0x138) + 0x3184) * 0x16c0;
    *(undefined4 *)((int)this + iVar3 + 0x140) =
         *(undefined4 *)(*(int *)((int)this + 0x138) + 0x3184);
  } while (uVar4 < 3);
  uVar4 = FUN_10028011(this_00,param_1,'\0');
  if ((char)uVar4 != '\0') {
    uVar1 = FUN_10028011((void *)((int)this + 0x260),param_1,'\0');
    if ((char)uVar1 != '\0') {
      bVar5 = *(int *)(*(int *)((int)this + 0x138) + 0xcc) == 2;
      if (bVar5) {
        param_1 = param_2;
      }
      uVar1 = FUN_10028011((void *)((int)this + 0x380),param_1,bVar5);
      if ((char)uVar1 != '\0') {
        uVar1 = FUN_1001ea36((int)this);
        if ((char)uVar1 != '\0') {
          iVar3 = *(int *)((int)this + 0x138);
          puVar2 = FUN_10038f51(-(uint)(*(int *)(iVar3 + 0x3180) != 0) &
                                *(int *)(iVar3 + 0x3180) + 0x520U,*(undefined4 *)(iVar3 + 0x3184),
                                *(int *)(iVar3 + 0x3188) + 0x1370,0x4000,0);
          *(undefined4 **)((int)this + 0x508) = puVar2;
          if (puVar2 != (undefined4 *)0x0) {
            *(undefined4 *)((int)this + 0x50c) = 0;
            DAT_10059758 = this;
            return CONCAT31((int3)((uint)puVar2 >> 8),1);
          }
          FUN_1001ea82((int)this);
        }
        FUN_1002816d((void *)((int)this + 0x380));
      }
      FUN_1002816d((void *)((int)this + 0x260));
    }
    uVar4 = FUN_1002816d(this_00);
  }
  return uVar4 & 0xffffff00;
}

