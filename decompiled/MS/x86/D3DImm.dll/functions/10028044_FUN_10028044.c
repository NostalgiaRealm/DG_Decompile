/*
 * FUN_10028044 at 10028044
 * uint __thiscall FUN_10028044(void * this, uint * param_1)
 * Address ranges: 10028044-100280c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10028044(void *this,uint *param_1)

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
      uVar2 = FUN_10019970((void *)(uVar4 * 0x40 + iVar1),*param_1,param_1[1],param_1[2],param_1[3])
      ;
      uVar3 = uVar4;
      if ((char)uVar2 == '\0') {
        uVar3 = FUN_10019936(this_00,*param_1,param_1[1],param_1[2],param_1[3]);
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

