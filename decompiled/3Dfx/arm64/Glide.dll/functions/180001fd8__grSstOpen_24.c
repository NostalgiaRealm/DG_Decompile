/*
 * _grSstOpen@24 at 180001fd8
 * bool __cdecl _grSstOpen@24(uint param_1, uint param_2, undefined4 param_3, uint param_4, undefined8 param_5, int param_6)
 * Address ranges: 180001fd8-1800020d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool _grSstOpen_24(uint param_1,uint param_2,undefined4 param_3,uint param_4,undefined8 param_5,
                  int param_6)

{
  byte bVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined1 extraout_w11;
  uint in_stack_ffffffffffffffa4;
  undefined1 local_40 [8];
  char *local_38;
  
                    /* 0x1fd8  73  _grSstOpen@24
                       0x1fd8  234  grSstOpen */
  local_38 = "3DfxSpl.dll";
  local_40[0] = 1;
  pvVar3 = (LPVOID)FUN_180017788();
  *(undefined1 *)((longlong)pvVar3 + 0x65) = extraout_w11;
  iVar2 = FUN_180061700((uint *)((longlong)pvVar3 + 0x5c));
  if (((iVar2 == 1) && (bVar1 = FUN_180017938((longlong)pvVar3), (bVar1 & 1) != 0)) &&
     (*(int *)((longlong)pvVar3 + 0x58) == 0)) {
    iVar2 = FUN_180017b58(pvVar3,0,param_1,param_2,param_3,0,param_4,param_6,
                          (ulonglong)in_stack_ffffffffffffffa4 << 0x20,local_40);
  }
  else {
    iVar2 = 0;
  }
  FUN_1800616f0((uint *)((longlong)pvVar3 + 0x5c));
  *(undefined1 *)((longlong)pvVar3 + 0x65) = 0;
  if (iVar2 != 0) {
    _DAT_18006c888 = 0;
    _DAT_18006c880 = 0;
    uRam000000018006c898 = 0;
    DAT_18006c890 = 0;
    DAT_18006c8a8 = 0;
    _DAT_18006c8a0 = 0;
    uRam000000018006c8b8 = 0;
    _DAT_18006c8b0 = 0;
    _DAT_18006c8c8 = 0;
    DAT_18006c8c0 = 0x100000001;
  }
  return iVar2 != 0;
}

