/*
 * FUN_1001aacc at 1001aacc
 * uint __thiscall FUN_1001aacc(void * this, int param_1, uint param_2)
 * Address ranges: 1001aacc-1001abe7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1001aacc(void *this,int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_8;
  
  uVar4 = param_2;
  uVar6 = param_2 & 0xfffff807;
  local_8 = 0;
  do {
    if ((uVar4 & 8 << ((byte)local_8 & 0x1f) & 0x7f8) != 0) {
      param_2 = 3;
      uVar3 = *(uint *)((int)this + local_8 * 0x84 + 0x7a4);
      uVar2 = uVar3 & 0xf0000;
      uVar5 = local_8;
      if ((((uVar2 != 0x10000) && (uVar2 != 0x20000)) && (uVar2 != 0x30000)) && (uVar2 != 0x40000))
      {
        uVar5 = uVar3 & 7;
        if (*(char *)(param_1 + 0x4c + uVar5 * 8) == -1) {
          uVar5 = 0xffffffff;
        }
        else {
          param_2 = *(byte *)(param_1 + 0x4d + uVar5 * 8) - 1;
        }
      }
      uVar2 = *(uint *)((int)this + local_8 * 0x84 + 0x7d8) & 0xff;
      uVar3 = param_2;
      if ((uVar2 != 0) && (uVar3 = uVar2 - 1, 4 < uVar2)) {
        uVar3 = param_2;
      }
      if (uVar5 != 0xffffffff) {
        uVar6 = uVar3 << ((byte)uVar5 * '\x02' + 0x12 & 0x1f) | 8 << ((byte)uVar5 & 0x1f) | uVar6;
      }
    }
    local_8 = local_8 + 1;
  } while (local_8 < 8);
  iVar1 = *(int *)((int)this + 0x660);
  uVar4 = uVar6 | 4;
  if (*(int *)((int)this + 0x4a4) == 0) {
    uVar4 = uVar6;
  }
  if ((((iVar1 == 1) || (iVar1 == 2)) || (uVar6 = uVar4, iVar1 == 3)) &&
     (uVar6 = uVar4 | 4, *(int *)((int)this + 0x4a0) == 0)) {
    uVar6 = uVar4;
  }
  return uVar6 | 0x40000000;
}

