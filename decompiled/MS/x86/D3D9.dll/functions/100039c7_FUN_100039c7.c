/*
 * FUN_100039c7 at 100039c7
 * undefined4 __thiscall FUN_100039c7(void * this, int param_1, int * param_2)
 * Address ranges: 100039c7-10003aed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_100039c7(void *this,int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar6 = *(int *)(*(int *)((int)this + 0x48) + param_1 * 4) * 0x228;
  FUN_100cfed0(param_2,0,0x200);
  FUN_100cfed0(param_2 + 0x80,0,0x200);
  FUN_10029f4d(&local_34,(undefined4 *)(&DAT_100db460 + *(int *)((int)this + 8) * 400));
  piVar4 = param_2;
  do {
    cVar1 = *local_34;
    local_34 = local_34 + 1;
    *(char *)piVar4 = cVar1;
    piVar4 = (int *)((int)piVar4 + 1);
  } while (cVar1 != '\0');
  iVar2 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)(&DAT_100df300 + iVar6),-1,(LPSTR)(param_2 + 0x80),
                              0x200,(LPCSTR)0x0,(LPBOOL)0x0);
  if (0x18 < 0x1ffU - iVar2) {
    pcVar5 = " (dgVoodoo DX API Layer)";
    pcVar7 = (char *)((int)param_2 + iVar2 + 0x1ff);
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar7 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar7 = pcVar7 + 4;
    }
    *pcVar7 = *pcVar5;
  }
  WideCharToMultiByte(0xfde9,0,(LPCWSTR)(iVar6 + 0x100df340),-1,(LPSTR)(param_2 + 0x100),0x200,
                      (LPCSTR)0x0,(LPBOOL)0x0);
  param_2[0x10a] = local_30;
  param_2[0x10e] = local_20;
  param_2[0x10b] = local_2c;
  param_2[0x10c] = local_28;
  param_2[0x10f] = iStack_1c;
  param_2[0x10d] = local_24;
  param_2[0x108] = local_c;
  param_2[0x110] = iStack_18;
  param_2[0x109] = local_10;
  param_2[0x112] = local_8;
  param_2[0x111] = iStack_14;
  return 0;
}

