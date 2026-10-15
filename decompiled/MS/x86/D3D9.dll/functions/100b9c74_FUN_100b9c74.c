/*
 * FUN_100b9c74 at 100b9c74
 * undefined __thiscall FUN_100b9c74(void * this, int * param_1, uint param_2, uint param_3)
 * Address ranges: 100b9c74-100b9d4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100b9c74(void *this,int *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
  local_8 = -1;
  iVar3 = param_1[3];
  while( true ) {
    iVar4 = iVar3;
    if (iVar4 == -1) {
      return;
    }
    iVar2 = *param_1;
    iVar5 = iVar4 * 0x18;
    if (*(int *)(iVar2 + iVar5) == -1) break;
    uVar1 = *(uint *)(iVar2 + 0xc + iVar5);
    if ((param_3 < uVar1) || ((param_3 == uVar1 && (param_2 < *(uint *)(iVar2 + 8 + iVar5))))) {
      iVar3 = *(int *)(iVar2 + 0x10 + iVar5);
      local_8 = iVar4;
    }
    else {
      FUN_100b9c10(this,*(uint *)(iVar2 + iVar5),*(int *)(iVar2 + 4 + iVar5));
      iVar3 = *(int *)(iVar2 + 0x10 + iVar5);
      *(undefined4 *)(iVar2 + iVar5) = 0xffffffff;
      if ((iVar3 == -1) || (*(int *)(*param_1 + iVar3 * 0x18) == -1)) {
        if (local_8 != -1) {
          param_1[4] = local_8;
        }
      }
      else {
        if (local_8 == -1) {
          param_1[3] = iVar3;
        }
        else {
          *(int *)(*param_1 + 0x10 + local_8 * 0x18) = iVar3;
        }
        *(undefined4 *)(iVar2 + 0x10 + iVar5) = *(undefined4 *)(*param_1 + 0x10 + param_1[4] * 0x18)
        ;
        *(int *)(*param_1 + 0x10 + param_1[4] * 0x18) = iVar4;
      }
    }
  }
  return;
}

