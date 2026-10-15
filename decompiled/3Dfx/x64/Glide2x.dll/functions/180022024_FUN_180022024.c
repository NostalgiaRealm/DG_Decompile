/*
 * FUN_180022024 at 180022024
 * undefined1 __fastcall FUN_180022024(longlong * param_1, uint param_2, int param_3, undefined1 param_4, LONG param_5, LONG param_6, LONG param_7, LONG param_8, undefined1 param_9)
 * Address ranges: 180022024-180022105
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_180022024(longlong *param_1,uint param_2,int param_3,undefined1 param_4,LONG param_5,
             LONG param_6,LONG param_7,LONG param_8,undefined1 param_9)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 uVar4;
  int iVar5;
  
  if (param_3 == 0) {
    iVar5 = 0;
  }
  else if (param_3 == 1) {
    iVar5 = 1;
  }
  else {
    if (param_3 != 2) {
      return 0;
    }
    iVar5 = 2;
  }
  (**(code **)(*param_1 + 0x2b8))();
  lVar3 = (**(code **)(*(longlong *)param_1[0x630] + 0x58))((longlong *)param_1[0x630],iVar5);
  iVar1 = *(int *)(lVar3 + 0x74 + (ulonglong)(param_2 & 1) * 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    *(int *)(lVar3 + 0x74 + (ulonglong)(param_2 & 1) * 4) = iVar1 + -1;
    if ((*(int *)(lVar3 + 0x74) == 0) && (*(int *)(lVar3 + 0x78) == 0)) {
      bVar2 = FUN_180021240((longlong *)param_1[0x630],iVar5,param_4,param_5,param_6,param_7,param_8
                            ,param_9);
      *(byte *)(lVar3 + 0x9a) = *(byte *)(lVar3 + 0x9a) & 0xfc;
      *(byte *)(lVar3 + 0x9a) = *(byte *)(lVar3 + 0x9a) | bVar2;
    }
    uVar4 = 1;
  }
  (**(code **)(*param_1 + 0x2c0))(param_1);
  return uVar4;
}

