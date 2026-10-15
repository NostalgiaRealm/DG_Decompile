/*
 * FUN_1002c208 at 1002c208
 * char __fastcall FUN_1002c208(int * param_1, LPCWSTR param_2, undefined4 * param_3)
 * Address ranges: 1002c208-1002c336
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char __fastcall FUN_1002c208(int *param_1,LPCWSTR param_2,undefined4 *param_3)

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
  
  uStack_8 = 0x1002c215;
  local_c = param_1;
  WideCharToMultiByte(0,0x200,param_2,-1,local_24a8,0x1ffe,(LPCSTR)0x0,(LPBOOL)0x0);
  FUN_1000243d(local_4a8);
  FUN_1002b680(local_18,param_2);
  iVar3 = FUN_1002b760((int)local_18);
  cVar1 = '\0';
  if (((char)iVar3 != '\0') && (cVar1 = FUN_10031761(param_1,extraout_ECX), cVar1 == '\0')) {
    FUN_1002c98b(&local_88);
    if (param_3 != (undefined4 *)0x0) {
      local_84 = *param_3;
      local_80 = param_3[1];
      local_7c = param_3[2];
      local_74 = param_3[4];
      local_78 = "[dgVoodoo IniParser] ";
      local_70 = 0;
    }
    cVar2 = FUN_1002caca(&local_88,local_18,1);
    if (cVar2 != '\0') {
      cVar1 = FUN_10031278(local_4a8,&local_88,param_3);
      piVar4 = local_294;
      if (cVar1 == '\0') {
        FUN_10052de1(piVar4,0,0x20c);
        piVar4 = FUN_1000243d(local_294);
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
    FUN_1002ca74(&local_88);
  }
  FUN_1002b740(local_18);
  return cVar1;
}

