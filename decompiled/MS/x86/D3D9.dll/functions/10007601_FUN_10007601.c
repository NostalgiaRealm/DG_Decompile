/*
 * FUN_10007601 at 10007601
 * undefined4 * __thiscall FUN_10007601(void * this, undefined4 * param_1)
 * Address ranges: 10007601-100076a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10007601(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = 1;
  param_1[1] = 1;
  param_1[2] = 1;
  param_1[3] = 1;
  uVar2 = 0;
  if (*(int *)((int)this + 0xd98) != 0) {
    if (*(char *)((int)this + 0xdc0) == '\0') {
      *param_1 = *(undefined4 *)((int)this + 0xdb8);
      param_1[1] = *(undefined4 *)((int)this + 0xda0);
      param_1[2] = *(undefined4 *)((int)this + 0xdbc);
      param_1[3] = *(undefined4 *)((int)this + 0xda4);
    }
    else if (*(uint *)((int)this + 0xdf8) != 0) {
      do {
        iVar1 = *(int *)(*(int *)((int)this + 0xdf4) + uVar2 * 4);
        if (*(char *)(iVar1 + 0xb5) == '\0') {
          iVar3 = *(int *)((int)this + 0xdf0) * 0x228;
          *param_1 = *(undefined4 *)(&DAT_100df480 + iVar3);
          param_1[1] = *(undefined4 *)(iVar1 + 0x4c);
          param_1[2] = *(undefined4 *)(&DAT_100df484 + iVar3);
          param_1[3] = *(undefined4 *)(iVar1 + 0x50);
          return param_1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)this + 0xdf8));
    }
  }
  return param_1;
}

