/*
 * FUN_1800e4e34 at 1800e4e34
 * bool __fastcall FUN_1800e4e34(longlong param_1, longlong * param_2, longlong * param_3, uint param_4, uint param_5, undefined8 * param_6, char param_7, char param_8)
 * Address ranges: 1800e4e34-1800e4f81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800e4e34(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,uint param_5,
                  undefined8 *param_6,char param_7,char param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined1 local_res10 [8];
  longlong *local_res18;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  int local_50 [6];
  
  local_res18 = param_3;
  iVar3 = (**(code **)(*param_2 + 0x70))(param_2,local_50,local_res10);
  bVar2 = false;
  if (-1 < iVar3) {
    if ((local_50[0] == 4) && (param_8 == '\0')) {
      local_60 = 0;
      local_58 = 0;
      local_68 = 0;
      iVar3 = (**(code **)(*param_2 + 0x40))(param_2,0,&local_60,&local_68);
      if (-1 < iVar3) {
        cVar1 = FUN_1800eab50(*(longlong **)(param_1 + 0xb18),(ulonglong)param_2,0);
        if (cVar1 != '\0') {
          FUN_1800fbec0((undefined8 *)(local_68 + (ulonglong)param_4),param_6,
                        (ulonglong)(param_5 - param_4));
        }
        local_60 = (ulonglong)param_4;
        local_58 = (ulonglong)param_5;
        (**(code **)(*param_2 + 0x48))(param_2,0);
        if (param_7 != '\0') {
          (**(code **)(*param_2 + 0x48))(param_2,0);
        }
        FUN_1800e2d18(param_1,(ulonglong)param_2,0,1,0);
        param_3 = local_res18;
        if (cVar1 != '\0') {
          return (bool)cVar1;
        }
      }
    }
    bVar2 = FUN_1800e4dcc(param_1,(ulonglong)param_2,param_3,param_4,param_5,param_6);
  }
  return bVar2;
}

