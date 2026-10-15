/*
 * FUN_100285ff at 100285ff
 * undefined4 __thiscall FUN_100285ff(void * this, int param_1)
 * Address ranges: 100285ff-1002874e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100285ff(void *this,int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 local_28;
  uint local_24;
  
  uVar3 = 0x80070057;
  iVar1 = *(int *)(param_1 + 4);
  if (((((*(uint *)(iVar1 + 4) & 0x20027) == 7) && (*(int *)(iVar1 + 0xc) != 0)) &&
      (*(int *)(iVar1 + 8) != 0)) &&
     ((*(uint *)(iVar1 + 0xc) < 0x4001 && (*(uint *)(iVar1 + 8) < 0x4001)))) {
    if ((*(uint *)(iVar1 + 4) & 0x1000) == 0) {
      if (((*(byte *)(iVar1 + 4) & 0x40) != 0) && (*(char *)(param_1 + 0x19) != '\0')) {
        *(undefined4 *)(iVar1 + 0x50) = 0;
        *(undefined4 *)(iVar1 + 0x58) = 0;
        *(undefined4 *)(iVar1 + 0x5c) = 0;
        *(undefined4 *)(iVar1 + 0x60) = 0;
        *(undefined4 *)(iVar1 + 100) = 0;
        *(undefined4 *)(iVar1 + 0x48) = 0x20;
        *(undefined4 *)(iVar1 + 0x4c) = 0x400;
        *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) | 0x1000;
        *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x18);
        if (*(int *)(iVar1 + 0x18) == 0x20) {
          *(undefined4 *)(iVar1 + 0x54) = 0x18;
        }
        uVar2 = FUN_10031cb7(this,iVar1,1);
        *(uint *)(param_1 + 0x1c) = uVar2;
      }
    }
    else {
      uVar3 = 0x88760091;
      if (*(int *)(iVar1 + 0x48) == 0) {
        *(undefined4 *)(iVar1 + 0x48) = 0x20;
      }
      uVar2 = FUN_10031cb7(this,iVar1,0);
      *(uint *)(param_1 + 0x1c) = uVar2;
      if (uVar2 == 0xffffffff) {
        uVar2 = FUN_10031cb7(this,*(int *)(param_1 + 4),1);
        *(uint *)(param_1 + 0x1c) = uVar2;
        if ((uVar2 != 0xffffffff) &&
           (FUN_10024c76(this,&local_28,uVar2),
           (local_24 & 0x4400) != (*(uint *)(*(int *)(param_1 + 4) + 0x4c) & 0x4400))) {
          *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
        }
      }
    }
    if (*(int *)(param_1 + 0x1c) == 0x18) {
      if (*(int *)(*(int *)(param_1 + 4) + 0x54) == 0x18) {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
    }
    else if (*(int *)(param_1 + 0x1c) == -1) {
      return uVar3;
    }
    uVar3 = 0;
  }
  return uVar3;
}

