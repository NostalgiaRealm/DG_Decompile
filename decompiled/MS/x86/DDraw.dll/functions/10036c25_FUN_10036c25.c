/*
 * FUN_10036c25 at 10036c25
 * char __fastcall FUN_10036c25(int * param_1, HANDLE param_2)
 * Address ranges: 10036c25-10036cfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __fastcall FUN_10036c25(int *param_1,HANDLE param_2)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  void *this;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int local_498 [131];
  int local_28c [131];
  int local_80 [27];
  int *local_14;
  undefined **local_10;
  HANDLE local_c;
  char local_8;
  
  local_14 = param_1;
  FUN_1003695e(local_498);
  local_10 = &PTR_FUN_10066eac;
  local_8 = '\0';
  local_c = param_2;
  cVar1 = FUN_1003a823(param_1,(int *)&local_10);
  if (cVar1 == '\0') {
    FUN_1003cc64(local_80);
    cVar2 = FUN_1003cda3(this,&local_10,1);
    if (cVar2 != '\0') {
      cVar1 = FUN_1003a33a(local_498,local_80,0);
      piVar3 = local_28c;
      if (cVar1 == '\0') {
        FUN_10060d45(piVar3,0,0x20c);
        piVar3 = FUN_1003695e(local_28c);
      }
      else {
        piVar5 = local_498;
        piVar6 = piVar3;
        for (iVar4 = 0x83; iVar4 != 0; iVar4 = iVar4 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
      }
      piVar5 = local_14;
      for (iVar4 = 0x83; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar5 = *piVar3;
        piVar3 = piVar3 + 1;
        piVar5 = piVar5 + 1;
      }
    }
    FUN_1003cd4d(local_80);
  }
  local_10 = &PTR_FUN_10066eac;
  if ((local_c != (HANDLE)0x0) && (local_8 != '\0')) {
    CloseHandle(local_c);
  }
  return cVar1;
}

