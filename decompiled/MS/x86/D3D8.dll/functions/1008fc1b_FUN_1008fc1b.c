/*
 * FUN_1008fc1b at 1008fc1b
 * undefined4 __thiscall FUN_1008fc1b(void * this, int param_1)
 * Address ranges: 1008fc1b-1008fd26
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1008fc1b(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_10;
  int local_c;
  int local_8;
  
  local_10 = param_1;
  uVar4 = 0;
  uVar2 = FUN_10007b6a((void *)((int)this + 0x250),&local_10);
  if (uVar2 != 0xffffffff) {
    if (*(int *)((int)this + uVar2 * 4 + 0x360) == -1) {
      *(undefined4 *)((int)this + uVar2 * 4 + 0x360) = 0;
      uVar4 = FUN_100936c7(*(void **)((int)this + 0x3a8),param_1,*(int *)((int)this + 0x3ac),
                           *(undefined4 *)((int)this + 0x3b4),*(int *)((int)this + 0x3b0),
                           (undefined4 *)(uint)*(byte *)((int)this + 0x3b8));
      if ((char)uVar4 != '\0') {
        local_c = param_1 * 0x1510;
        local_10 = *(int *)((int)this + 0x3a8);
        uVar5 = 2;
        do {
          piVar1 = *(int **)(local_10 + 0x510 + local_c);
          iVar3 = (**(code **)(*piVar1 + 0x78))(piVar1,0x1c,uVar5,&local_8);
          if ((iVar3 == 0) && (local_8 != 0)) {
            piVar1 = *(int **)(local_10 + 0x510 + local_c);
            iVar3 = (**(code **)(*piVar1 + 0x78))(piVar1,0x39,uVar5,&local_8);
            if ((iVar3 == 0) && (local_8 != 0)) {
              *(char *)((int)this + *(int *)((int)this + uVar2 * 4 + 0x360) * 0x10 + uVar2 + 0x260)
                   = (char)uVar5;
              piVar1 = (int *)((int)this + uVar2 * 4 + 0x360);
              *piVar1 = *piVar1 + 1;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x21);
        FUN_10093a0e(*(void **)((int)this + 0x3a8),param_1);
      }
    }
    uVar4 = *(undefined4 *)((int)this + uVar2 * 4 + 0x360);
  }
  return uVar4;
}

