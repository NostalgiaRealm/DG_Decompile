/*
 * FUN_1800239d0 at 1800239d0
 * undefined8 __cdecl FUN_1800239d0(longlong * param_1, uint param_2, int param_3, undefined4 param_4, LONG param_5, LONG param_6, LONG param_7, LONG param_8, byte param_9)
 * Address ranges: 1800239d0-180023af7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800239d0(longlong *param_1,uint param_2,int param_3,undefined4 param_4,LONG param_5,
             LONG param_6,LONG param_7,LONG param_8,byte param_9)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
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
  (**(code **)(*param_1 + 0x2b8))(param_1);
  lVar3 = (**(code **)(*(longlong *)param_1[0x630] + 0x58))((longlong *)param_1[0x630],iVar5);
  lVar1 = lVar3 + (ulonglong)(param_2 & 1) * 4;
  iVar2 = *(int *)(lVar1 + 0x74);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    *(int *)(lVar1 + 0x74) = iVar2 + -1;
    if ((*(int *)(lVar3 + 0x74) == 0) && (*(int *)(lVar3 + 0x78) == 0)) {
      uVar4 = FUN_180022ae8((longlong *)param_1[0x630],iVar5,param_4,param_5,param_6,param_7,param_8
                            ,(uint)param_9);
      *(byte *)(lVar3 + 0x9a) = (byte)uVar4 | *(byte *)(lVar3 + 0x9a) & 0xfc;
    }
    uVar4 = 1;
  }
  (**(code **)(*param_1 + 0x2c0))(param_1);
  return uVar4;
}

