/*
 * FUN_10036af6 at 10036af6
 * char __fastcall FUN_10036af6(int * param_1, LPCWSTR param_2, undefined4 * param_3)
 * Address ranges: 10036af6-10036c24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

char __fastcall FUN_10036af6(int *param_1,LPCWSTR param_2,undefined4 *param_3)

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
  
  uStack_8 = 0x10036b03;
  local_c = param_1;
  WideCharToMultiByte(0,0x200,param_2,-1,local_24a8,0x1ffe,(LPCSTR)0x0,(LPBOOL)0x0);
  FUN_1003695e(local_4a8);
  FUN_10060130(local_18,param_2);
  iVar3 = FUN_10060210((int)local_18);
  cVar1 = '\0';
  if (((char)iVar3 != '\0') && (cVar1 = FUN_1003a823(param_1,extraout_ECX), cVar1 == '\0')) {
    FUN_1003cc64(&local_88);
    if (param_3 != (undefined4 *)0x0) {
      local_84 = *param_3;
      local_80 = param_3[1];
      local_7c = param_3[2];
      local_74 = param_3[4];
      local_78 = "[dgVoodoo IniParser] ";
      local_70 = 0;
    }
    cVar2 = FUN_1003cda3(&local_88,local_18,1);
    if (cVar2 != '\0') {
      cVar1 = FUN_1003a33a(local_4a8,&local_88,param_3);
      piVar4 = local_294;
      if (cVar1 == '\0') {
        FUN_10060d45(piVar4,0,0x20c);
        piVar4 = FUN_1003695e(local_294);
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
    FUN_1003cd4d(&local_88);
  }
  FUN_100601f0(local_18);
  return cVar1;
}

