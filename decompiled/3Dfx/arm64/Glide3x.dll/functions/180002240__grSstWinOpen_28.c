/*
 * _grSstWinOpen@28 at 180002240
 * undefined4 __cdecl _grSstWinOpen@28(ulonglong param_1, uint param_2, uint param_3, undefined4 param_4, uint param_5, int param_6, int param_7)
 * Address ranges: 180002240-18000233f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
_grSstWinOpen_28(ulonglong param_1,uint param_2,uint param_3,undefined4 param_4,uint param_5,
                int param_6,int param_7)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  undefined1 local_50 [8];
  char *local_48;
  
                    /* 0x2240  68  _grSstWinOpen@28
                       0x2240  168  grSstWinOpen */
  local_50[0] = 0;
  local_48 = "3DfxSpl3.dll";
  pvVar4 = (LPVOID)FUN_180008ce0();
  *(undefined1 *)((longlong)pvVar4 + 0x65) = 1;
  bVar1 = FUN_180008208();
  if (((bVar1 & 1) != 0) && (*(char *)((longlong)pvVar4 + 100) != '\0')) {
    FUN_18000a178((longlong)pvVar4,0);
  }
  iVar2 = FUN_1800643e0((uint *)((longlong)pvVar4 + 0x5c));
  if (((iVar2 == 1) && (bVar1 = FUN_180009768((longlong)pvVar4), (bVar1 & 1) != 0)) &&
     (*(int *)((longlong)pvVar4 + 0x58) == 0)) {
    uVar3 = FUN_1800097f8(pvVar4,param_1 & 0xffffffff,param_2,param_3,param_4,0,param_5,param_6,
                          param_7,local_50);
  }
  else {
    uVar3 = 0;
  }
  FUN_1800643d0((uint *)((longlong)pvVar4 + 0x5c));
  *(undefined1 *)((longlong)pvVar4 + 0x65) = 0;
  return uVar3;
}

