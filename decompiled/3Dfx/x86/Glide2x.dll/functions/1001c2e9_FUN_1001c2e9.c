/*
 * FUN_1001c2e9 at 1001c2e9
 * undefined1 __thiscall FUN_1001c2e9(void * this, int param_1, undefined1 param_2, LONG param_3, LONG param_4, LONG param_5, LONG param_6, undefined4 param_7)
 * Address ranges: 1001c2e9-1001c419
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall
FUN_1001c2e9(void *this,int param_1,undefined1 param_2,LONG param_3,LONG param_4,LONG param_5,
            LONG param_6,undefined4 param_7)

{
  LPRECT lprcDst;
  int iVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  BOOL BVar5;
  undefined1 uStack0000000b;
  RECT local_1c;
  undefined4 local_c;
  
  iVar4 = (**(code **)(*(int *)this + 0x2c))(param_1);
  if (*(int *)(iVar4 + 0x6c) != 0) {
    (**(code **)(*(int *)this + 0x40))(param_1,*(undefined1 *)(iVar4 + 0x7c));
    *(undefined4 *)(iVar4 + 0x6c) = 0;
    *(undefined4 *)(iVar4 + 0x70) = 0;
  }
  local_c = CONCAT31(local_c._1_3_,param_2);
  if ((*(byte *)(iVar4 + 0x82) & 2) == 0) {
    lprcDst = (LPRECT)(iVar4 + 0x34);
    local_1c.left = param_3;
    local_1c.top = param_4;
    local_1c.right = param_5;
    local_1c.bottom = param_6;
    UnionRect(lprcDst,lprcDst,&local_1c);
    BVar5 = EqualRect(lprcDst,&local_1c);
    uVar3 = 1;
    if (BVar5 != 0) {
      uVar3 = param_2;
    }
    local_c = CONCAT31(local_c._1_3_,uVar3);
  }
  if ((*(char *)(iVar4 + 0x80) == '\0') || (*(char *)(iVar4 + 0x7e) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  uStack0000000b = 0;
  if (((((*(int *)(&DAT_10051b60 + *(int *)(iVar4 + 0x5c) * 4) != *(int *)(iVar4 + 8)) &&
        (*(int *)(&DAT_10051b60 + *(int *)(iVar4 + 0x5c) * 4) != *(int *)(iVar4 + 0xc))) ||
       ((*(char *)(iVar4 + 0x7d) != '\0' &&
        ((((iVar1 = *(int *)((int)this + 4), *(int *)(iVar1 + 0x2a80) != 0 ||
           (*(int *)(iVar1 + 0x2c5c) != 0)) || (*(int *)(iVar1 + 0x2c1c) != 0)) ||
         (*(int *)(iVar1 + 0x2c48) != 7)))))) ||
      (((*(byte *)(iVar4 + 0x82) & 2) != 0 || bVar2 || (param_1 == 0)))) ||
     ((*(char *)((int)this + 0x124) != '\0' ||
      ((*(char *)((int)this + 0x125) != '\0' ||
       (**(char **)(*(int *)((int)this + 4) + 0x3170) != '\0')))))) {
    (**(code **)(*(int *)this + 0x20))(param_1,local_c,param_7);
  }
  else {
    *(byte *)(iVar4 + 0x4a) = *(byte *)(iVar4 + 0x4a) | 1;
    uStack0000000b = 1;
  }
  return uStack0000000b;
}

