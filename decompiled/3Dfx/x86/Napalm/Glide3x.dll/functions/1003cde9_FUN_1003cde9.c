/*
 * FUN_1003cde9 at 1003cde9
 * undefined4 __thiscall FUN_1003cde9(void * this, int param_1)
 * Address ranges: 1003cde9-1003cee7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1003cde9(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int local_8;
  
  uVar5 = 0;
  uVar3 = FUN_1004eb7e(this,param_1);
  if (uVar3 != 0xffffffff) {
    if (*(int *)((int)this + uVar3 * 4 + 0x360) == -1) {
      *(undefined4 *)((int)this + uVar3 * 4 + 0x360) = 0;
      uVar5 = FUN_10045129(*(void **)((int)this + 0x3a8),param_1,*(int *)((int)this + 0x3ac),
                           *(undefined4 *)((int)this + 0x3b4),*(int *)((int)this + 0x3b0),
                           (undefined4 *)(uint)*(byte *)((int)this + 0x3b8));
      if ((char)uVar5 != '\0') {
        iVar1 = *(int *)((int)this + 0x3a8);
        uVar6 = 2;
        do {
          piVar2 = *(int **)(iVar1 + 0x510 + param_1 * 0x1510);
          iVar4 = (**(code **)(*piVar2 + 0x78))(piVar2,0x1c,uVar6,&local_8);
          if ((iVar4 == 0) && (local_8 != 0)) {
            piVar2 = *(int **)(iVar1 + 0x510 + param_1 * 0x1510);
            iVar4 = (**(code **)(*piVar2 + 0x78))(piVar2,0x39,uVar6,&local_8);
            if ((iVar4 == 0) && (local_8 != 0)) {
              *(char *)((int)this + *(int *)((int)this + uVar3 * 4 + 0x360) * 0x10 + uVar3 + 0x260)
                   = (char)uVar6;
              piVar2 = (int *)((int)this + uVar3 * 4 + 0x360);
              *piVar2 = *piVar2 + 1;
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < 0x21);
        FUN_10045470(*(void **)((int)this + 0x3a8),param_1);
      }
    }
    uVar5 = *(undefined4 *)((int)this + uVar3 * 4 + 0x360);
  }
  return uVar5;
}

