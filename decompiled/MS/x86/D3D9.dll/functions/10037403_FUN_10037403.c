/*
 * FUN_10037403 at 10037403
 * uint __thiscall FUN_10037403(void * this, uint * param_1)
 * Address ranges: 10037403-1003747d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10037403(void *this,uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *this_00;
  uint uVar4;
  uint local_c;
  uint local_8;
  
  uVar4 = 0;
  local_8 = 0;
  local_c = *(uint *)((int)this + 8);
  if (local_c != 0) {
    iVar1 = *(int *)((int)this + 4);
    do {
      uVar4 = local_c + local_8 >> 1;
      uVar2 = FUN_100370ee((void *)(uVar4 * 0x18 + iVar1),*param_1,param_1[1],param_1[2],param_1[3])
      ;
      uVar3 = uVar4;
      if ((char)uVar2 == '\0') {
        uVar3 = FUN_100370b4(this_00,*param_1,param_1[1],param_1[2],param_1[3]);
        if ((char)uVar3 == '\0') {
          return uVar4;
        }
        uVar4 = uVar4 + 1;
        uVar3 = local_c;
        local_8 = uVar4;
      }
      local_c = uVar3;
    } while (local_c != local_8);
  }
  return uVar4;
}

