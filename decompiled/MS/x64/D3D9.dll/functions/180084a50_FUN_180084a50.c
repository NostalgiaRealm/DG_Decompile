/*
 * FUN_180084a50 at 180084a50
 * undefined8 __fastcall FUN_180084a50(undefined8 param_1, longlong param_2, longlong * param_3, uint param_4, byte param_5, uint param_6)
 * Address ranges: 180084a50-180084aeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180084a50(undefined8 param_1,longlong param_2,longlong *param_3,uint param_4,byte param_5,
             uint param_6)

{
  char cVar1;
  uint uVar2;
  undefined4 extraout_var;
  
  if ((*(char *)((ulonglong)param_4 + 0xde + param_2) == '\x02') && (param_4 == 7)) {
    cVar1 = '\x01';
    if ((*(char *)(*(longlong *)(param_2 + 0x10) + 0x4a6c) == '\x01') &&
       (*(char *)(*(longlong *)(param_2 + 0x10) + 0x4a6d) == '\x01')) goto LAB_180084a92;
  }
  cVar1 = '\0';
LAB_180084a92:
  uVar2 = FUN_18007a038(param_1,param_3,param_2,param_4 | 0x410100,param_5,param_6,
                        *(char *)((ulonglong)param_4 + 0xee + param_2),'\0',cVar1);
  *(uint *)(param_2 + 0x100 + (ulonglong)param_4 * 4) = uVar2;
  return CONCAT71((int7)(CONCAT44(extraout_var,uVar2) >> 8),uVar2 == (param_4 | 0x410100));
}

