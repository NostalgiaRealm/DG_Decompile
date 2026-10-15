/*
 * FUN_10023bf0 at 10023bf0
 * int __fastcall FUN_10023bf0(undefined * param_1, undefined4 param_2, uint param_3)
 * Address ranges: 10023bf0-10023d70
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10023bf0(undefined *param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  FARPROC pFVar2;
  int iVar3;
  BOOL BVar4;
  uint uVar5;
  CHAR local_40c [512];
  CHAR local_20c [512];
  undefined4 local_c;
  int local_8;
  
  local_c = param_2;
  pFVar2 = FUN_10023885("DirectDrawEnumerateExA");
  if (pFVar2 != (FARPROC)0x0) {
    iVar3 = (*pFVar2)(param_1,param_2,param_3);
    return iVar3;
  }
  BVar4 = TryEnterCriticalSection(DAT_1006c254);
  if (BVar4 == 0) {
    FUN_10001a5c((PRTL_CRITICAL_SECTION_DEBUG)0x0);
  }
  FUN_10002949();
  iVar3 = -0x7ff8ffa9;
  if ((param_1 == (undefined *)0x0) || ((param_3 & 0xfffffff8) != 0)) goto LAB_10023d5e;
  iVar3 = -0x7fffbffb;
  bVar1 = FUN_10001b8b();
  if (!bVar1) goto LAB_10023d5e;
  FUN_10028f7c();
  FUN_10002dae();
  uVar5 = 0;
  do {
    if ((&DAT_1006c498)[uVar5 * 0x228] != '\0') {
      iVar3 = (*(code *)param_1)(0,"dgVoodoo DX API Layer","display",local_c,0);
      if (iVar3 == 0) goto LAB_10023d49;
      uVar5 = 0;
      goto LAB_10023cab;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x20);
  goto LAB_10023d4b;
LAB_10023cab:
  do {
    if (((param_3 & 1) != 0) && (local_8 = uVar5 * 0x228, (&DAT_1006c498)[local_8] != '\0')) {
      WideCharToMultiByte(0xfde9,0,(LPCWSTR)(&DAT_1006c2c8 + local_8),-1,local_40c,0x200,(LPCSTR)0x0
                          ,(LPBOOL)0x0);
      WideCharToMultiByte(0xfde9,0,(LPCWSTR)(&DAT_1006c308 + local_8),-1,local_20c,0x200,(LPCSTR)0x0
                          ,(LPBOOL)0x0);
      iVar3 = (*(code *)param_1)(&DAT_100698c0 + uVar5 * 0x29,local_40c,local_20c,local_c,
                                 *(undefined4 *)((int)&DAT_1006c408 + local_8));
      if (iVar3 == 0) break;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x20);
LAB_10023d49:
  iVar3 = 0;
LAB_10023d4b:
  if (DAT_1006c23c == 0) {
    FUN_10028fc4();
    FUN_10001cd7();
  }
LAB_10023d5e:
  LeaveCriticalSection(DAT_1006c254);
  return iVar3;
}

