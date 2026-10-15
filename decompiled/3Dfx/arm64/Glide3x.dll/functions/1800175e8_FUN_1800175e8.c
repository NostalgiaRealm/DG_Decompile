/*
 * FUN_1800175e8 at 1800175e8
 * undefined8 __cdecl FUN_1800175e8(longlong param_1, uint param_2, int param_3, undefined4 param_4, LONG param_5, LONG param_6, LONG param_7, LONG param_8, byte param_9)
 * Address ranges: 1800175e8-1800176bb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1800175e8(longlong param_1,uint param_2,int param_3,undefined4 param_4,LONG param_5,LONG param_6
             ,LONG param_7,LONG param_8,byte param_9)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))
                    (*(longlong **)(param_1 + 0x3300),param_3);
  lVar1 = lVar3 + (ulonglong)param_2 * 4;
  iVar2 = *(int *)(lVar1 + 0x74);
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    *(int *)(lVar1 + 0x74) = iVar2 + -1;
    if ((*(int *)(lVar3 + 0x74) == 0) && (*(int *)(lVar3 + 0x78) == 0)) {
      uVar4 = FUN_180016dc8(*(longlong **)(param_1 + 0x3300),param_3,param_4,param_5,param_6,param_7
                            ,param_8,(uint)param_9);
      *(byte *)(lVar3 + 0x9a) = *(byte *)(lVar3 + 0x9a) & 0xfc | (byte)uVar4;
    }
    uVar4 = 1;
  }
  return uVar4;
}

