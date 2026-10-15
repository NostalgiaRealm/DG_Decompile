/*
 * FUN_1008ff17 at 1008ff17
 * undefined4 __thiscall FUN_1008ff17(void * this, int param_1)
 * Address ranges: 1008ff17-10090046
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 __thiscall FUN_1008ff17(void *this,int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_1c [3];
  undefined4 local_10;
  int local_c;
  
  local_1c[0] = param_1;
  uVar4 = 0;
  uVar2 = FUN_10007b6a((void *)((int)this + 0x250),local_1c);
  if (uVar2 != 0xffffffff) {
    if (*(int *)((int)this + uVar2 * 4 + 0x360) == -1) {
      *(undefined4 *)((int)this + uVar2 * 4 + 0x360) = 0;
      uVar4 = FUN_100a4431(*(void **)((int)this + 0x3a8),param_1,*(int *)((int)this + 0x3ac));
      if ((char)uVar4 != '\0') {
        local_1c[0] = *(int *)((int)this + 0x3a8);
        uVar5 = 2;
        do {
          piVar1 = *(int **)(param_1 * 0x18 + 0x520 + local_1c[0]);
          local_1c[1] = 0x1c;
          local_10 = 0;
          local_c = 0;
          local_1c[2] = uVar5;
          iVar3 = (**(code **)(*piVar1 + 0x34))(piVar1,4,local_1c + 1,0x10);
          if ((iVar3 == 0) && (local_1c[1] = 0x39, local_c != 0)) {
            piVar1 = *(int **)(param_1 * 0x18 + 0x520 + local_1c[0]);
            iVar3 = (**(code **)(*piVar1 + 0x34))(piVar1,4,local_1c + 1,0x10);
            if ((iVar3 == 0) && (local_c != 0)) {
              *(char *)((int)this + *(int *)((int)this + uVar2 * 4 + 0x360) * 0x10 + uVar2 + 0x260)
                   = (char)uVar5;
              piVar1 = (int *)((int)this + uVar2 * 4 + 0x360);
              *piVar1 = *piVar1 + 1;
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x11);
        FUN_100a4767(*(void **)((int)this + 0x3a8),param_1);
      }
    }
    uVar4 = *(undefined4 *)((int)this + uVar2 * 4 + 0x360);
  }
  return uVar4;
}

