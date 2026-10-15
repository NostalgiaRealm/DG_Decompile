/*
 * FUN_1002d0c0 at 1002d0c0
 * undefined4 __thiscall FUN_1002d0c0(void * this, undefined4 * param_1)
 * Address ranges: 1002d0c0-1002d17b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002d0c0(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char local_10 [8];
  undefined4 local_8;
  
  local_8 = 0;
  uVar5 = 0;
  uVar2 = 0;
  if (*(uint *)((int)this + 0x444) != 0) {
    for (; (*(uint *)((int)this + 0x444) >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  if (uVar2 != 0) {
    do {
      iVar4 = uVar5 * 0x120;
      iVar1 = *(int *)((int)this + iVar4 + 0x1440);
      if ((((&DAT_1006b730)[iVar1 * 2] == '\0') || (*(int *)((int)this + iVar4 + 0x1444) != 2)) &&
         (((&DAT_1006b731)[iVar1 * 2] == '\0' || (*(int *)((int)this + iVar4 + 0x1448) != 2)))) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
      local_10[uVar5] = cVar3;
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  if ((*(char *)((int)this + 0x1919) != '\0') && (uVar5 = 1, 1 < uVar2)) {
    do {
      if ((local_10[uVar5] != '\0') && (*(char *)((int)this + uVar5 + 0x1909) != '\0')) {
        return 0x88760819;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  *param_1 = 1;
  return 0;
}

