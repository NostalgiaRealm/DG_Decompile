/*
 * _grSstWinOpen@28 at 180001fd8
 * bool __cdecl _grSstWinOpen@28(ulonglong param_1, uint param_2, uint param_3, uint param_4, undefined4 param_5, int param_6, int param_7)
 * Address ranges: 180001fd8-1800020bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grSstWinOpen_28(ulonglong param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                     int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined1 local_50 [8];
  char *local_48;
  
                    /* 0x1fd8  82  _grSstWinOpen@28
                       0x1fd8  239  grSstWinOpen */
  local_50[0] = 0;
  local_48 = "3DfxSpl2.dll";
  pvVar3 = (LPVOID)FUN_180016878();
  *(undefined1 *)((longlong)pvVar3 + 0x65) = 1;
  iVar2 = FUN_1800608b0((uint *)((longlong)pvVar3 + 0x5c));
  if (((iVar2 == 1) && (bVar1 = FUN_180016a28((longlong)pvVar3), (bVar1 & 1) != 0)) &&
     (*(int *)((longlong)pvVar3 + 0x58) == 0)) {
    iVar2 = FUN_180016c48(pvVar3,param_1 & 0xffffffff,param_2,param_3,param_4,0,param_5,param_6,
                          param_7,local_50);
  }
  else {
    iVar2 = 0;
  }
  FUN_1800608a0((uint *)((longlong)pvVar3 + 0x5c));
  *(undefined1 *)((longlong)pvVar3 + 0x65) = 0;
  return iVar2 != 0;
}

