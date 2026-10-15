/*
 * FUN_1001059c at 1001059c
 * uint __thiscall FUN_1001059c(void * this, int param_1)
 * Address ranges: 1001059c-10010636
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_1001059c(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char local_5;
  
  bVar1 = 0;
  uVar4 = 0xffffffff;
  local_5 = '\0';
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else if (param_1 == 1) {
    uVar4 = 1;
  }
  else if (param_1 == 2) {
    uVar4 = 2;
  }
  else {
    if (param_1 != 6) {
      if (param_1 != 7) {
        return 0xffffffff;
      }
      bVar1 = 1;
      local_5 = '\x01';
    }
    iVar3 = (bVar1 - 1 & 0xffffffec) + 0x2a2c + *(int *)((int)this + 4);
    if (*(int *)(iVar3 + 0xc) != *(int *)(iVar3 + 8)) {
      uVar5 = 3;
      do {
        iVar2 = (**(code **)(*(int *)this + 0x2c))(uVar5);
        if (((*(int *)(iVar2 + 0x18) == *(int *)(iVar3 + 8)) &&
            (*(int *)(iVar2 + 0x1c) == *(int *)(iVar3 + 0xc))) &&
           (local_5 == *(char *)(iVar2 + 0x48))) {
          return uVar5;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 7);
    }
  }
  return uVar4;
}

