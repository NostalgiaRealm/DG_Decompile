/*
 * FUN_10006c2f at 10006c2f
 * undefined4 * __thiscall FUN_10006c2f(void * this, undefined4 * param_1)
 * Address ranges: 10006c2f-10006ccf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_10006c2f(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  *param_1 = 1;
  param_1[1] = 1;
  param_1[2] = 1;
  param_1[3] = 1;
  uVar2 = 0;
  if (*(int *)((int)this + 0xad4) != 0) {
    if (*(char *)((int)this + 0xafc) == '\0') {
      *param_1 = *(undefined4 *)((int)this + 0xaf4);
      param_1[1] = *(undefined4 *)((int)this + 0xadc);
      param_1[2] = *(undefined4 *)((int)this + 0xaf8);
      param_1[3] = *(undefined4 *)((int)this + 0xae0);
    }
    else if (*(uint *)((int)this + 0xb34) != 0) {
      do {
        iVar1 = *(int *)(*(int *)((int)this + 0xb30) + uVar2 * 4);
        if (*(char *)(iVar1 + 0xb5) == '\0') {
          iVar3 = *(int *)((int)this + 0xb2c) * 0x228;
          *param_1 = *(undefined4 *)(&DAT_100ba8b8 + iVar3);
          param_1[1] = *(undefined4 *)(iVar1 + 0x4c);
          param_1[2] = *(undefined4 *)(&DAT_100ba8bc + iVar3);
          param_1[3] = *(undefined4 *)(iVar1 + 0x50);
          return param_1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)((int)this + 0xb34));
    }
  }
  return param_1;
}

