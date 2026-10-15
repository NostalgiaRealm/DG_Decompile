/*
 * FUN_180017418 at 180017418
 * uint __cdecl FUN_180017418(longlong param_1, uint param_2, undefined4 param_3, uint param_4, int param_5, char param_6, longlong param_7, byte param_8, undefined1 param_9, undefined4 param_10, undefined4 param_11)
 * Address ranges: 180017418-1800175e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180017418(longlong param_1,uint param_2,undefined4 param_3,uint param_4,int param_5,
                  char param_6,longlong param_7,byte param_8,undefined1 param_9,undefined4 param_10,
                  undefined4 param_11)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  lVar5 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))
                    (*(longlong **)(param_1 + 0x3300),param_3);
  if (((param_2 >> 4 & 1) == 0) && (*(char *)(*(longlong *)(param_1 + 8) + 0x53) == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((*(longlong *)(lVar5 + 0x60) == 0) || ((param_8 & 1) != 0)) || (!bVar3)) {
    uVar8 = 0;
  }
  else {
    uVar8 = 1;
  }
  uVar1 = param_2 & 1;
  if (((uVar1 != 0) || (uVar6 = *(uint *)(lVar5 + 0x10), *(int *)(lVar5 + 0x78) == 0)) &&
     (uVar6 = param_4, param_4 == 0xff)) {
    uVar6 = *(uint *)(lVar5 + 0x10);
  }
  if ((*(int *)(lVar5 + 0x74) == 0) && (*(int *)(lVar5 + 0x78) == 0)) {
    uVar4 = FUN_180016c00(*(longlong **)(param_1 + 0x3300),param_3,uVar6,param_5,param_6,uVar8,
                          param_8,(byte)uVar1 ^ 1,param_9,param_10,param_11);
    uVar4 = uVar4 & 0xff;
  }
  else {
    uVar4 = 1;
    if ((uVar1 != 0) &&
       (((uVar6 != *(uint *)(lVar5 + 0x6c) || (param_6 != *(char *)(lVar5 + 0x95))) ||
        ((param_5 != *(int *)(lVar5 + 0x70) && (param_5 != 0xff)))))) {
      uVar4 = 0;
    }
    uVar8 = (uint)*(byte *)(lVar5 + 0x99);
  }
  if (uVar4 != 0) {
    *(undefined4 *)(param_7 + 0x14) = *(undefined4 *)(lVar5 + 0x6c);
    *(undefined4 *)(param_7 + 0x18) = *(undefined4 *)(lVar5 + 0x70);
    lVar2 = 0x80;
    if (uVar8 != 0) {
      lVar2 = 0x60;
    }
    *(undefined8 *)(param_7 + 8) = *(undefined8 *)(lVar5 + lVar2);
    if (uVar8 == 0) {
      iVar7 = *(int *)(lVar5 + 0x88);
    }
    else {
      iVar7 = *(int *)(lVar5 + 0x68) << 2;
      if (*(char *)(lVar5 + 0x94) == '\0') {
        iVar7 = *(int *)(lVar5 + 0x68) << 1;
      }
    }
    lVar2 = lVar5 + (ulonglong)uVar1 * 4;
    *(int *)(param_7 + 0x10) = iVar7;
    *(char *)(lVar5 + 0x99) = (char)uVar8;
    *(int *)(lVar2 + 0x74) = *(int *)(lVar2 + 0x74) + 1;
    FUN_18001d758(lVar5,(ulonglong)*(uint *)(lVar5 + 0x24));
  }
  return uVar4;
}

