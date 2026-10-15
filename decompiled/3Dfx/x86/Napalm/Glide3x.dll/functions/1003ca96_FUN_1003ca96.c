/*
 * FUN_1003ca96 at 1003ca96
 * undefined4 __thiscall FUN_1003ca96(void * this, int param_1)
 * Address ranges: 1003ca96-1003cbb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003ca96(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_18;
  uint local_14;
  undefined4 local_10;
  int local_c;
  
  uVar5 = 0;
  uVar3 = FUN_1004eb7e(this,param_1);
  if (uVar3 != 0xffffffff) {
    if (*(int *)((int)this + uVar3 * 4 + 0x360) == -1) {
      *(undefined4 *)((int)this + uVar3 * 4 + 0x360) = 0;
      uVar5 = FUN_10040986(*(void **)((int)this + 0x3a8),param_1,*(uint *)((int)this + 0x3ac));
      if ((char)uVar5 != '\0') {
        iVar1 = *(int *)((int)this + 0x3a8);
        uVar6 = 2;
        do {
          piVar2 = *(int **)(param_1 * 0x18 + 0x520 + iVar1);
          local_18 = 0x1c;
          local_10 = 0;
          local_c = 0;
          local_14 = uVar6;
          iVar4 = (**(code **)(*piVar2 + 0x34))(piVar2,4,&local_18,0x10);
          if ((iVar4 == 0) && (local_18 = 0x39, local_c != 0)) {
            piVar2 = *(int **)(param_1 * 0x18 + 0x520 + iVar1);
            iVar4 = (**(code **)(*piVar2 + 0x34))(piVar2,4,&local_18,0x10);
            if ((iVar4 == 0) && (local_c != 0)) {
              *(char *)((int)this + *(int *)((int)this + uVar3 * 4 + 0x360) * 0x10 + uVar3 + 0x260)
                   = (char)uVar6;
              piVar2 = (int *)((int)this + uVar3 * 4 + 0x360);
              *piVar2 = *piVar2 + 1;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0x11);
        FUN_10040c8b(*(void **)((int)this + 0x3a8),param_1);
      }
    }
    uVar5 = *(undefined4 *)((int)this + uVar3 * 4 + 0x360);
  }
  return uVar5;
}

