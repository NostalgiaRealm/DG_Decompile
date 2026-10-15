/*
 * FUN_1800216e8 at 1800216e8
 * undefined1 __fastcall FUN_1800216e8(longlong * param_1, int param_2, undefined1 param_3, LONG param_4, LONG param_5, LONG param_6, LONG param_7, undefined1 param_8)
 * Address ranges: 1800216e8-180021865
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_1800216e8(longlong *param_1,int param_2,undefined1 param_3,LONG param_4,LONG param_5,
             LONG param_6,LONG param_7,undefined1 param_8)

{
  LPRECT lprcDst;
  longlong lVar1;
  bool bVar2;
  BOOL BVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  RECT local_48;
  
  lVar4 = (**(code **)(*param_1 + 0x58))();
  if (*(longlong *)(lVar4 + 0x80) != 0) {
    (**(code **)(*param_1 + 0x80))(param_1,param_2,*(undefined1 *)(lVar4 + 0x94));
    *(undefined8 *)(lVar4 + 0x80) = 0;
    *(undefined4 *)(lVar4 + 0x88) = 0;
  }
  uVar5 = 1;
  uVar6 = param_3;
  if ((*(byte *)(lVar4 + 0x9a) & 2) == 0) {
    local_48.top = param_5;
    lprcDst = (LPRECT)(lVar4 + 0x34);
    local_48.right = param_6;
    local_48.bottom = param_7;
    local_48.left = param_4;
    UnionRect(lprcDst,lprcDst,&local_48);
    BVar3 = EqualRect(lprcDst,&local_48);
    uVar6 = 1;
    if (BVar3 != 0) {
      uVar6 = param_3;
    }
  }
  if ((*(char *)(lVar4 + 0x98) == '\0') || (bVar2 = true, *(char *)(lVar4 + 0x96) == '\0')) {
    bVar2 = false;
  }
  if (((((*(int *)(&DAT_180060f20 + (longlong)*(int *)(lVar4 + 0x6c) * 4) != *(int *)(lVar4 + 8)) &&
        (*(int *)(&DAT_180060f20 + (longlong)*(int *)(lVar4 + 0x6c) * 4) != *(int *)(lVar4 + 0xc)))
       || ((*(char *)(lVar4 + 0x95) != '\0' &&
           ((((lVar1 = param_1[1], *(int *)(lVar1 + 0x2aa0) != 0 || (*(int *)(lVar1 + 0x2c7c) != 0))
             || (*(int *)(lVar1 + 0x2c3c) != 0)) || (*(int *)(lVar1 + 0x2c68) != 7)))))) ||
      (((*(byte *)(lVar4 + 0x9a) & 2) != 0 || bVar2 || (param_2 == 0)))) ||
     ((*(char *)((longlong)param_1 + 300) != '\0' ||
      ((*(char *)((longlong)param_1 + 0x12d) != '\0' || (**(char **)(param_1[1] + 0x31a8) != '\0')))
      ))) {
    uVar5 = 0;
    (**(code **)(*param_1 + 0x40))(param_1,param_2,uVar6,param_8);
  }
  else {
    *(byte *)(lVar4 + 0x4a) = *(byte *)(lVar4 + 0x4a) | 1;
  }
  return uVar5;
}

