/*
 * FUN_100093cc at 100093cc
 * undefined4 __thiscall FUN_100093cc(void * this, uint param_1)
 * Address ranges: 100093cc-10009552
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_100093cc(void *this,uint param_1)

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
  uVar3 = FUN_1000daba(param_1,&local_c,&local_8);
  if ((char)uVar3 != '\0') {
    piVar4 = FUN_1003e493((void *)(*(int *)((int)this + 0x3300) + 0x520),
                          *(int **)((int)this + 0x3304),iVar1,0,1);
    *(int **)((int)this + 0x3320) = piVar4;
    if (piVar4 != (int *)0x0) {
      piVar4 = FUN_1003e493((void *)(*(int *)((int)this + 0x3300) + 0x520),
                            *(int **)((int)this + 0x3304),0x40004,0,1);
      *(int **)((int)this + 0x331c) = piVar4;
      if (piVar4 != (int *)0x0) {
        puVar5 = FUN_1003b6a6(-(uint)(*(int *)((int)this + 0x3300) != 0) &
                              *(int *)((int)this + 0x3300) + 0x520U,
                              *(undefined4 *)((int)this + 0x3304),0,param_1 * 4 + 4,0);
        *(undefined4 **)((int)this + 0x3324) = puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          bVar2 = FUN_10041691(*(void **)(*(int *)((int)this + 0x3308) + 0x130c),
                               *(int **)((int)this + 0x3320),
                               (void *)(*(int *)((int)this + 0x3308) + 0x1430),0,iVar1,local_c,
                               '\x01','\0');
          if ((bVar2) &&
             (bVar2 = FUN_10041691(*(void **)(*(int *)((int)this + 0x3308) + 0x130c),
                                   *(int **)((int)this + 0x331c),
                                   (void *)(*(int *)((int)this + 0x3308) + 0x1430),0,0x40004,local_8
                                   ,'\x01','\0'), bVar2)) {
            thunk_FUN_10052276(local_8);
            uVar6 = thunk_FUN_10052276(local_c);
            return CONCAT31((int3)((uint)uVar6 >> 8),1);
          }
          puVar5 = *(undefined4 **)((int)this + 0x3324);
          if (puVar5 != (undefined4 *)0x0) {
            FUN_1003b621(puVar5);
            FUN_10052276(puVar5);
          }
        }
        (**(code **)(**(int **)((int)this + 0x331c) + 8))(*(int **)((int)this + 0x331c));
      }
      (**(code **)(**(int **)((int)this + 0x3320) + 8))(*(int **)((int)this + 0x3320));
    }
    thunk_FUN_10052276(local_8);
    uVar3 = thunk_FUN_10052276(local_c);
  }
  return uVar3 & 0xffffff00;
}

