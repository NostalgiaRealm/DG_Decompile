/*
 * FUN_100420d0 at 100420d0
 * undefined4 __thiscall FUN_100420d0(void * this, byte param_1, byte param_2, int param_3)
 * Address ranges: 100420d0-10042214
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100420d0(void *this,byte param_1,byte param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_18 [2];
  int local_10;
  
  piVar2 = FUN_100bf752(*(void **)((int)this + 0xf6d4),local_18,param_1 + 1,0,0,0);
  iVar3 = local_10;
  if (local_10 != 0) {
    piVar2 = FUN_100bf752(*(void **)((int)this + 0xf6d0),local_18,param_2 + 1,0,0,0);
    if (local_10 != 0) {
      if (*(int *)((int)this + 0x4c) != *(int *)((int)this + 0x48)) {
        *(int *)((int)this + 0x58) = *(int *)((int)this + 0x4c) - *(int *)((int)this + 0x44);
      }
      *(int *)((int)this + 100) = local_10;
      *(int *)((int)this + 0x4c) = iVar3;
      *(int *)((int)this + 0x44) = iVar3;
      if (param_1 == 0) {
        iVar4 = *(int *)((int)this + 0x54) + *(int *)((int)this + 0x50);
        uVar1 = *(uint *)((int)this + 0x58);
        *(int *)((int)this + 0x50) = iVar4;
        uVar5 = uVar1;
        if ((param_3 != 0) && (param_3 != *(int *)((int)this + 0x60))) {
          uVar5 = iVar4 * param_3;
          if (uVar5 < uVar1) {
            piVar2 = (int *)(uVar1 - uVar5);
            *(int **)((int)this + 0x5c) = piVar2;
            uVar5 = uVar1;
          }
          else {
            *(undefined4 *)((int)this + 0x5c) = 0;
          }
        }
        iVar3 = iVar3 + uVar5;
        *(int *)((int)this + 0x4c) = iVar3;
      }
      else {
        *(undefined4 *)((int)this + 0x50) = 0;
        *(undefined4 *)((int)this + 0x5c) = 0;
        *(undefined4 *)((int)this + 0x58) = 0;
      }
      if (param_3 != 0) {
        *(int *)((int)this + 0x60) = param_3;
      }
      *(int *)((int)this + 0x48) = iVar3;
      *(undefined4 *)((int)this + 0x54) = 0;
      if (param_2 != 0) {
        *(undefined4 *)((int)this + 0x68) = 0;
        *(undefined4 *)((int)this + 0x6c) = 0;
        return CONCAT31((int3)((uint)piVar2 >> 8),1);
      }
      iVar3 = *(int *)((int)this + 0x68) + *(int *)((int)this + 0x6c);
      *(int *)((int)this + 0x68) = iVar3;
      *(undefined4 *)((int)this + 0x6c) = 0;
      local_10 = local_10 + iVar3 * 4;
      *(int *)((int)this + 100) = local_10;
      return CONCAT31((int3)((uint)local_10 >> 8),1);
    }
    piVar2 = *(int **)((int)this + 0xf6d4);
    if (piVar2[0xb] != 0) {
      piVar2[0xb] = 0;
    }
  }
  return (uint)piVar2 & 0xffffff00;
}

