/*
 * FUN_180016c00 at 180016c00
 * undefined4 __cdecl FUN_180016c00(longlong * param_1, undefined4 param_2, uint param_3, int param_4, char param_5, uint param_6, char param_7, byte param_8, undefined1 param_9, undefined4 param_10, undefined4 param_11)
 * Address ranges: 180016c00-180016dc3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_180016c00(longlong *param_1,undefined4 param_2,uint param_3,int param_4,char param_5,
             uint param_6,char param_7,byte param_8,undefined1 param_9,undefined4 param_10,
             undefined4 param_11)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = (**(code **)(*param_1 + 0x58))();
  iVar2 = FUN_180016028(param_3,*(byte *)(lVar4 + 0x48));
  uVar3 = 1;
  bVar1 = iVar2 == 0x20;
  if ((*(byte *)(lVar4 + 0x4a) & 1) != 0) {
    if ((param_3 != 0xff) &&
       ((((*(int *)(&DAT_180065bb0 + (longlong)(int)param_3 * 4) != *(int *)(lVar4 + 8) &&
          (*(int *)(&DAT_180065bb0 + (longlong)(int)param_3 * 4) != *(int *)(lVar4 + 0xc))) ||
         (param_4 != *(int *)(lVar4 + 0x70))) ||
        ((bVar1 != (bool)*(char *)(lVar4 + 0x94) ||
         (param_5 != *(char *)(lVar4 + 0x95) || param_7 != '\0')))))) {
      (**(code **)(*param_1 + 0x40))(param_1,param_2,1,0);
    }
    if ((*(char *)(lVar4 + 0x95) != '\0') && ((param_8 & 1) != 0)) {
      (**(code **)(*param_1 + 0x40))(param_1,param_2,1,0);
    }
  }
  if ((*(byte *)(lVar4 + 0x4a) & 1) == 0) {
    *(undefined8 *)(lVar4 + 0xa8) = 0;
    *(undefined8 *)(lVar4 + 0xa0) = 0;
    *(undefined8 *)(lVar4 + 0xb8) = 0;
    *(undefined8 *)(lVar4 + 0xb0) = 0;
  }
  *(undefined8 *)(lVar4 + 0x80) = 0;
  *(uint *)(lVar4 + 0x6c) = param_3;
  *(int *)(lVar4 + 0x70) = param_4;
  *(bool *)(lVar4 + 0x94) = bVar1;
  *(bool *)(lVar4 + 0x96) = param_7 == '\0' || param_8 == 0;
  *(undefined1 *)(lVar4 + 0x97) = param_9;
  *(char *)(lVar4 + 0x95) = param_5;
  *(char *)(lVar4 + 0x98) = param_7;
  *(undefined4 *)(lVar4 + 0x88) = 0;
  *(undefined4 *)(lVar4 + 0x8c) = param_10;
  *(undefined4 *)(lVar4 + 0x90) = param_11;
  *(byte *)(lVar4 + 0x9a) = *(byte *)(lVar4 + 0x9a) & 0xfc;
  if ((param_6 & 1) == 0) {
    if ((param_7 != '\0' && (param_7 == '\0' || param_8 == 0)) ||
       ((*(byte *)(lVar4 + 0x4a) & 1) != 0)) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
    uVar3 = (**(code **)(*param_1 + 0x78))(param_1,param_2,uVar5,bVar1);
  }
  return uVar3;
}

