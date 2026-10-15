/*
 * FUN_10009c3d at 10009c3d
 * undefined4 __thiscall FUN_10009c3d(void * this, uint param_1)
 * Address ranges: 10009c3d-10009dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10009c3d(void *this,uint param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *local_c;
  undefined4 *local_8;
  
  local_c = (undefined4 *)0x0;
  local_8 = (undefined4 *)0x0;
  iVar1 = param_1 * 4 + 0x10;
  uVar3 = FUN_1000ed61(param_1,&local_c,&local_8);
  if ((char)uVar3 != '\0') {
    piVar4 = FUN_1004189c((void *)(*(int *)((int)this + 0x3680) + 0x520),
                          *(int **)((int)this + 0x3684),iVar1,0,1);
    *(int **)((int)this + 0x36a0) = piVar4;
    if (piVar4 != (int *)0x0) {
      piVar4 = FUN_1004189c((void *)(*(int *)((int)this + 0x3680) + 0x520),
                            *(int **)((int)this + 0x3684),0x40004,0,1);
      *(int **)((int)this + 0x369c) = piVar4;
      if (piVar4 != (int *)0x0) {
        puVar5 = FUN_1003eab4(-(uint)(*(int *)((int)this + 0x3680) != 0) &
                              *(int *)((int)this + 0x3680) + 0x520U,
                              *(undefined4 *)((int)this + 0x3684),0,param_1 * 4 + 4,0);
        *(undefined4 **)((int)this + 0x36a4) = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          bVar2 = FUN_10044a9a(*(void **)(*(int *)((int)this + 0x3688) + 0x130c),
                               *(int **)((int)this + 0x36a0),
                               (void *)(*(int *)((int)this + 0x3688) + 0x1430),0,iVar1,local_c,
                               '\x01','\0');
          if ((bVar2) &&
             (bVar2 = FUN_10044a9a(*(void **)(*(int *)((int)this + 0x3688) + 0x130c),
                                   *(int **)((int)this + 0x369c),
                                   (void *)(*(int *)((int)this + 0x3688) + 0x1430),0,0x40004,local_8
                                   ,'\x01','\0'), bVar2)) {
            thunk_FUN_10055686(local_8);
            uVar6 = thunk_FUN_10055686(local_c);
            return CONCAT31((int3)((uint)uVar6 >> 8),1);
          }
          puVar5 = *(undefined4 **)((int)this + 0x36a4);
          if (puVar5 != (undefined4 *)0x0) {
            FUN_1003ea2f(puVar5);
            FUN_10055686(puVar5);
          }
        }
        (**(code **)(**(int **)((int)this + 0x369c) + 8))(*(int **)((int)this + 0x369c));
      }
      (**(code **)(**(int **)((int)this + 0x36a0) + 8))(*(int **)((int)this + 0x36a0));
    }
    thunk_FUN_10055686(local_8);
    uVar3 = thunk_FUN_10055686(local_c);
  }
  return uVar3 & 0xffffff00;
}

