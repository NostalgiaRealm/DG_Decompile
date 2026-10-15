/*
 * FUN_180023938 at 180023938
 * undefined8 __cdecl FUN_180023938(longlong * param_1, int param_2, undefined4 param_3, LONG param_4, LONG param_5, LONG param_6, LONG param_7, undefined4 param_8)
 * Address ranges: 180023938-180023aef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180023938(longlong *param_1,int param_2,undefined4 param_3,LONG param_4,LONG param_5,
             LONG param_6,LONG param_7,undefined4 param_8)

{
  BOOL BVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  RECT local_60;
  
  lVar2 = (**(code **)(*param_1 + 0x58))(param_1,param_2,param_3);
  if (*(longlong *)(lVar2 + 0x80) != 0) {
    (**(code **)(*param_1 + 0x80))(param_1,param_2,*(undefined1 *)(lVar2 + 0x94));
    *(undefined8 *)(lVar2 + 0x80) = 0;
    *(undefined4 *)(lVar2 + 0x88) = 0;
  }
  if ((*(byte *)(lVar2 + 0x9a) >> 1 & 1) == 0) {
    local_60.left = param_4;
    local_60.top = param_5;
    local_60.right = param_6;
    local_60.bottom = param_7;
    UnionRect((LPRECT)(lVar2 + 0x34),(RECT *)(lVar2 + 0x34),&local_60);
    BVar1 = EqualRect((RECT *)(lVar2 + 0x34),&local_60);
    if (BVar1 == 0) {
      param_3 = 1;
    }
  }
  if ((*(char *)(lVar2 + 0x98) == '\0') || (*(char *)(lVar2 + 0x96) == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (((((*(int *)(&DAT_180062ec0 + (longlong)*(int *)(lVar2 + 0x6c) * 4) != *(int *)(lVar2 + 8)) &&
        (*(int *)(&DAT_180062ec0 + (longlong)*(int *)(lVar2 + 0x6c) * 4) != *(int *)(lVar2 + 0xc)))
       || ((*(char *)(lVar2 + 0x95) != '\0' &&
           ((((lVar3 = param_1[1], *(int *)(lVar3 + 0x2aa0) != 0 || (*(int *)(lVar3 + 0x2c7c) != 0))
             || (*(int *)(lVar3 + 0x2c3c) != 0)) || (*(int *)(lVar3 + 0x2c68) != 7)))))) ||
      (((*(byte *)(lVar2 + 0x9a) & 2) != 0 || bVar4 || (param_2 == 0)))) ||
     ((*(char *)((longlong)param_1 + 300) != '\0' ||
      ((*(char *)((longlong)param_1 + 0x12d) != '\0' || (**(char **)(param_1[1] + 0x31a8) != '\0')))
      ))) {
    uVar5 = 0;
    (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_8);
  }
  else {
    *(byte *)(lVar2 + 0x4a) = *(byte *)(lVar2 + 0x4a) | 1;
    uVar5 = 1;
  }
  return uVar5;
}

