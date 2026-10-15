/*
 * FUN_100a4bdf at 100a4bdf
 * char __fastcall FUN_100a4bdf(int * param_1, LPCWSTR param_2, undefined4 * param_3)
 * Address ranges: 100a4bdf-100a4d0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char __fastcall FUN_100a4bdf(int *param_1,LPCWSTR param_2,undefined4 *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *extraout_ECX;
  int *piVar5;
  int *piVar6;
  CHAR local_24a8 [8192];
  int local_4a8 [133];
  int local_294 [131];
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  char *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_18 [3];
  int *local_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x100a4bec;
  local_c = param_1;
  WideCharToMultiByte(0,0x200,param_2,-1,local_24a8,0x1ffe,(LPCSTR)0x0,(LPBOOL)0x0);
  FUN_100a4a47(local_4a8);
  FUN_100ceff0(local_18,param_2);
  iVar3 = FUN_100cf0d0((int)local_18);
  cVar1 = '\0';
  if (((char)iVar3 != '\0') && (cVar1 = FUN_100a890b(param_1,extraout_ECX), cVar1 == '\0')) {
    FUN_100aad4c(&local_88);
    if (param_3 != (undefined4 *)0x0) {
      local_84 = *param_3;
      local_80 = param_3[1];
      local_7c = param_3[2];
      local_74 = param_3[4];
      local_78 = "[dgVoodoo IniParser] ";
      local_70 = 0;
    }
    cVar2 = FUN_100aae8b(&local_88,local_18,1);
    if (cVar2 != '\0') {
      cVar1 = FUN_100a8422(local_4a8,&local_88,param_3);
      piVar4 = local_294;
      if (cVar1 == '\0') {
        FUN_100cfed0(piVar4,0,0x20c);
        piVar4 = FUN_100a4a47(local_294);
      }
      else {
        piVar5 = local_4a8;
        piVar6 = piVar4;
        for (iVar3 = 0x83; param_1 = local_c, iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
      }
      for (iVar3 = 0x83; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_1 = *piVar4;
        piVar4 = piVar4 + 1;
        param_1 = param_1 + 1;
      }
    }
    FUN_100aae35(&local_88);
  }
  FUN_100cf0b0(local_18);
  return cVar1;
}

