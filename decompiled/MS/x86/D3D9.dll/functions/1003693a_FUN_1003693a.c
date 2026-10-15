/*
 * FUN_1003693a at 1003693a
 * uint __thiscall FUN_1003693a(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 1003693a-100369e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1003693a(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  sbyte sVar4;
  uint uVar5;
  int local_14 [3];
  uint local_8;
  
  local_8 = 0xffffffff;
  sVar4 = (*(char *)((int)this + 0x20) != '\0') + 1;
  uVar5 = param_3 << sVar4;
  if (uVar5 <= *(uint *)((int)this + 0x14)) {
    uVar2 = *(int *)((int)this + 0x18) + uVar5;
    if (*(uint *)((int)this + 0x14) < uVar2) {
      *(undefined4 *)((int)this + 0x18) = 0;
    }
    local_8 = 0xffffffff;
    piVar1 = *(int **)(*(int *)((int)this + 0xc) + 4);
    iVar3 = (**(code **)(*piVar1 + 0x38))
                      (piVar1,*(undefined4 *)((int)this + 0x10),0,
                       5 - (uint)(*(uint *)((int)this + 0x14) < uVar2),0,local_14);
    if (-1 < iVar3) {
      FUN_100cff00((undefined4 *)(*(int *)((int)this + 0x18) + local_14[0]),
                   (undefined4 *)((param_2 << sVar4) + param_1),uVar5);
      piVar1 = *(int **)(*(int *)((int)this + 0xc) + 4);
      (**(code **)(*piVar1 + 0x3c))(piVar1,*(undefined4 *)((int)this + 0x10),0);
      local_8 = *(uint *)((int)this + 0x18) >> sVar4;
      *(uint *)((int)this + 0x18) = *(uint *)((int)this + 0x18) + uVar5;
    }
  }
  return local_8;
}

