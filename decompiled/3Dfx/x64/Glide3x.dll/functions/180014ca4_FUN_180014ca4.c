/*
 * FUN_180014ca4 at 180014ca4
 * char __fastcall FUN_180014ca4(longlong param_1, uint param_2, ulonglong param_3, DWORD param_4, int param_5, char param_6, longlong param_7, char param_8, undefined1 param_9, undefined4 param_10, undefined4 param_11)
 * Address ranges: 180014ca4-180014e39
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_180014ca4(longlong param_1,uint param_2,ulonglong param_3,DWORD param_4,int param_5,
                  char param_6,longlong param_7,char param_8,undefined1 param_9,undefined4 param_10,
                  undefined4 param_11)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  DWORD DVar6;
  uint uVar7;
  char cVar8;
  DWORD DVar9;
  ulonglong uVar10;
  
  uVar10 = param_3;
  lVar4 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))
                    (*(longlong **)(param_1 + 0x3300),param_3 & 0xffffffff);
  if (((param_2 & 0x10) == 0) && (*(char *)(*(longlong *)(param_1 + 8) + 0x53) == '\0')) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  DVar9 = (DWORD)CONCAT71((int7)(uVar10 >> 8),param_8);
  if (((*(longlong *)(lVar4 + 0x60) == 0) || (param_8 != '\0')) || (!bVar2)) {
    cVar8 = '\0';
  }
  else {
    cVar8 = '\x01';
  }
  uVar7 = param_2 & 1;
  DVar6 = *(DWORD *)(lVar4 + 0x10);
  if (((uVar7 != 0) || (*(int *)(lVar4 + 0x78) == 0)) && (param_4 != 0xff)) {
    DVar6 = param_4;
  }
  if ((*(int *)(lVar4 + 0x74) == 0) && (*(int *)(lVar4 + 0x78) == 0)) {
    DVar9 = DVar6;
    cVar3 = FUN_180014520(*(longlong **)(param_1 + 0x3300),(int)param_3,DVar6,param_5,param_6,cVar8,
                          param_8,(byte)uVar7 ^ 1,param_9,param_10,param_11);
  }
  else {
    cVar3 = '\x01';
    if ((uVar7 != 0) &&
       (((DVar6 != *(DWORD *)(lVar4 + 0x6c) || (param_6 != *(char *)(lVar4 + 0x95))) ||
        ((param_5 != *(int *)(lVar4 + 0x70) && (param_5 != 0xff)))))) {
      cVar3 = '\0';
    }
    cVar8 = *(char *)(lVar4 + 0x99);
  }
  if (cVar3 != '\0') {
    *(undefined4 *)(param_7 + 0x14) = *(undefined4 *)(lVar4 + 0x6c);
    *(undefined4 *)(param_7 + 0x18) = *(undefined4 *)(lVar4 + 0x70);
    *(undefined8 *)(param_7 + 8) =
         *(undefined8 *)(lVar4 + 0x80 + (-(ulonglong)(cVar8 != '\0') & 0xffffffffffffffe0));
    if (cVar8 == '\0') {
      iVar5 = *(int *)(lVar4 + 0x88);
    }
    else {
      iVar5 = *(int *)(lVar4 + 0x68) * 2;
      if (*(char *)(lVar4 + 0x94) != '\0') {
        iVar5 = *(int *)(lVar4 + 0x68) << 2;
      }
    }
    *(int *)(param_7 + 0x10) = iVar5;
    *(char *)(lVar4 + 0x99) = cVar8;
    piVar1 = (int *)(lVar4 + 0x74 + (ulonglong)uVar7 * 4);
    *piVar1 = *piVar1 + 1;
    FUN_18001a188(lVar4,*(int *)(lVar4 + 0x24),DVar9);
  }
  return cVar3;
}

