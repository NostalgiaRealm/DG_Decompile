/*
 * FUN_180014e3c at 180014e3c
 * undefined8 __fastcall FUN_180014e3c(longlong param_1, uint param_2, int param_3, undefined1 param_4, LONG param_5, LONG param_6, LONG param_7, LONG param_8, undefined1 param_9)
 * Address ranges: 180014e3c-180014ee1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180014e3c(longlong param_1,uint param_2,int param_3,undefined1 param_4,LONG param_5,
                       LONG param_6,LONG param_7,LONG param_8,undefined1 param_9)

{
  int iVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x3300) + 0x58))
                    (*(longlong **)(param_1 + 0x3300),param_3);
  iVar1 = *(int *)(uVar3 + 0x74 + (ulonglong)param_2 * 4);
  if (iVar1 == 0) {
    uVar3 = uVar3 & 0xffffffffffffff00;
  }
  else {
    *(int *)(uVar3 + 0x74 + (ulonglong)param_2 * 4) = iVar1 + -1;
    uVar4 = uVar3;
    if ((*(int *)(uVar3 + 0x74) == 0) && (*(int *)(uVar3 + 0x78) == 0)) {
      bVar2 = FUN_1800146d4(*(longlong **)(param_1 + 0x3300),param_3,param_4,param_5,param_6,param_7
                            ,param_8,param_9);
      uVar4 = CONCAT71(extraout_var,bVar2);
      *(byte *)(uVar3 + 0x9a) = *(byte *)(uVar3 + 0x9a) & 0xfc;
      *(byte *)(uVar3 + 0x9a) = *(byte *)(uVar3 + 0x9a) | bVar2;
    }
    uVar3 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  return uVar3;
}

