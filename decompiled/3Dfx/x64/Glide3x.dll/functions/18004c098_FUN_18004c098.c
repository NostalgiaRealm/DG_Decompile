/*
 * FUN_18004c098 at 18004c098
 * bool __fastcall FUN_18004c098(longlong param_1, longlong * param_2, longlong * param_3, uint param_4, uint param_5, undefined8 * param_6, char param_7, char param_8)
 * Address ranges: 18004c098-18004c16a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18004c098(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,uint param_5,
                  undefined8 *param_6,char param_7,char param_8)

{
  char cVar1;
  int iVar2;
  undefined1 local_res10 [8];
  int local_48 [8];
  
  cVar1 = '\0';
  iVar2 = (**(code **)(*param_2 + 0x70))(param_2,local_48,local_res10);
  if ((-1 < iVar2) &&
     (((local_48[0] != 4 || (param_8 != '\0')) ||
      (cVar1 = FUN_18004be24(param_1,param_2,param_4,param_5,param_6,param_7), cVar1 == '\0')))) {
    cVar1 = FUN_18004c030(param_1,(ulonglong)param_2,param_3,param_4,param_5,param_6);
  }
  return (bool)cVar1;
}

