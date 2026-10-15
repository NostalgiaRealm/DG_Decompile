/*
 * FUN_180021534 at 180021534
 * char __fastcall FUN_180021534(longlong * param_1, undefined4 param_2, int param_3, int param_4, char param_5, char param_6, char param_7, char param_8, undefined1 param_9, undefined4 param_10, undefined4 param_11)
 * Address ranges: 180021534-1800216e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180021534(longlong *param_1,undefined4 param_2,int param_3,int param_4,char param_5,
                  char param_6,char param_7,char param_8,undefined1 param_9,undefined4 param_10,
                  undefined4 param_11)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  bool bVar7;
  
  lVar5 = (**(code **)(*param_1 + 0x58))();
  iVar4 = FUN_180020da4(param_3,*(char *)(lVar5 + 0x48));
  bVar7 = iVar4 == 0x20;
  cVar3 = '\x01';
  cVar6 = '\x01';
  if ((*(byte *)(lVar5 + 0x4a) & 1) != 0) {
    if ((param_3 != 0xff) &&
       (((((*(int *)(&DAT_180060f20 + (longlong)param_3 * 4) != *(int *)(lVar5 + 8) &&
           (*(int *)(&DAT_180060f20 + (longlong)param_3 * 4) != *(int *)(lVar5 + 0xc))) ||
          (param_4 != *(int *)(lVar5 + 0x70))) ||
         ((bVar7 != (bool)*(char *)(lVar5 + 0x94) || (param_5 != *(char *)(lVar5 + 0x95))))) ||
        (param_7 != '\0')))) {
      (**(code **)(*param_1 + 0x40))(param_1,param_2,1,0);
    }
    if ((*(char *)(lVar5 + 0x95) != '\0') && (param_8 != '\0')) {
      (**(code **)(*param_1 + 0x40))(param_1,param_2,1,0);
    }
    if ((*(byte *)(lVar5 + 0x4a) & 1) != 0) goto LAB_180021613;
  }
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  *(undefined8 *)(lVar5 + 0xa8) = 0;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(undefined8 *)(lVar5 + 0xb8) = 0;
LAB_180021613:
  *(undefined1 *)(lVar5 + 0x97) = param_9;
  *(undefined4 *)(lVar5 + 0x8c) = param_10;
  *(undefined4 *)(lVar5 + 0x90) = param_11;
  *(int *)(lVar5 + 0x70) = param_4;
  *(char *)(lVar5 + 0x95) = param_5;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  *(undefined4 *)(lVar5 + 0x88) = 0;
  *(int *)(lVar5 + 0x6c) = param_3;
  *(bool *)(lVar5 + 0x94) = bVar7;
  *(char *)(lVar5 + 0x98) = param_7;
  cVar2 = cVar6;
  if ((param_7 != '\0') && (param_8 != '\0')) {
    cVar2 = '\0';
  }
  *(byte *)(lVar5 + 0x9a) = *(byte *)(lVar5 + 0x9a) & 0xfc;
  *(char *)(lVar5 + 0x96) = cVar2;
  if ((param_7 == '\0') || (cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (param_6 == '\0') {
    if ((bVar1) || ((*(byte *)(lVar5 + 0x4a) & 1) != 0)) {
      cVar6 = '\0';
    }
    cVar3 = (**(code **)(*param_1 + 0x78))(param_1,param_2,cVar6,bVar7);
  }
  return cVar3;
}

