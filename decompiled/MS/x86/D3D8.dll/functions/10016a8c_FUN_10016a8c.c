/*
 * FUN_10016a8c at 10016a8c
 * uint __thiscall FUN_10016a8c(void * this, int param_1, uint param_2)
 * Address ranges: 10016a8c-10016bac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10016a8c(void *this,int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_c;
  uint local_8;
  
  uVar4 = param_2 & 0xfffff807;
  local_8 = 0;
  do {
    if ((param_2 & 8 << ((byte)local_8 & 0x1f) & 0x7f8) != 0) {
      iVar2 = local_8 * 0x74;
      local_c = 3;
      uVar3 = *(uint *)((int)this + iVar2 + 0x570) & 0xf0000;
      uVar1 = local_8;
      if (((uVar3 != 0x10000) && (uVar3 != 0x20000)) && (uVar3 != 0x30000)) {
        uVar1 = *(uint *)((int)this + iVar2 + 0x570) & 7;
        if (*(char *)(param_1 + 0x4c + uVar1 * 8) == -1) {
          uVar1 = 0xffffffff;
        }
        else {
          local_c = *(byte *)(param_1 + 0x4d + uVar1 * 8) - 1;
        }
      }
      uVar3 = *(uint *)((int)this + iVar2 + 0x5a4) & 0xff;
      iVar2 = local_c;
      if ((uVar3 != 0) && (iVar2 = uVar3 - 1, 4 < uVar3)) {
        iVar2 = local_c;
      }
      if (uVar1 != 0xffffffff) {
        uVar4 = iVar2 << ((byte)uVar1 * '\x02' + 0x12 & 0x1f) | 8 << ((byte)uVar1 & 0x1f) | uVar4;
      }
    }
    local_8 = local_8 + 1;
  } while (local_8 < 8);
  iVar2 = *(int *)((int)this + 0x4bc);
  uVar1 = uVar4 | 4;
  if (*(int *)((int)this + 0x300) == 0) {
    uVar1 = uVar4;
  }
  if ((((iVar2 == 1) || (iVar2 == 2)) || (uVar4 = uVar1, iVar2 == 3)) &&
     (uVar4 = uVar1 | 4, *(int *)((int)this + 0x2fc) == 0)) {
    uVar4 = uVar1;
  }
  return uVar4 | 0x40000000;
}

