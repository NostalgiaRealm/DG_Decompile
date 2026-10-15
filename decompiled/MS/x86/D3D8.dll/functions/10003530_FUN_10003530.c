/*
 * FUN_10003530 at 10003530
 * undefined4 __thiscall FUN_10003530(void * this, int param_1, int * param_2)
 * Address ranges: 10003530-1000362b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_10003530(void *this,int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
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
  
  iVar2 = *(int *)(*(int *)((int)this + 0x48) + param_1 * 4);
  FUN_100ada8e(param_2,0,0x200);
  FUN_100ada8e(param_2 + 0x80,0,0x200);
  FUN_100228c7(&local_34,(undefined4 *)(&DAT_100b73cc + *(int *)((int)this + 8) * 0x134));
  piVar4 = param_2;
  do {
    cVar1 = *local_34;
    local_34 = local_34 + 1;
    *(char *)piVar4 = cVar1;
    piVar4 = (int *)((int)piVar4 + 1);
  } while (cVar1 != '\0');
  iVar2 = WideCharToMultiByte(0xfde9,0,(LPCWSTR)(&DAT_100ba738 + iVar2 * 0x228),-1,
                              (LPSTR)(param_2 + 0x80),0x200,(LPCSTR)0x0,(LPBOOL)0x0);
  if (0x18 < 0x1ffU - iVar2) {
    pcVar5 = " (dgVoodoo DX API Layer)";
    pcVar6 = (char *)((int)param_2 + iVar2 + 0x1ff);
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    *pcVar6 = *pcVar5;
  }
  param_2[0x102] = local_30;
  param_2[0x106] = local_20;
  param_2[0x103] = local_2c;
  param_2[0x104] = local_28;
  param_2[0x107] = iStack_1c;
  param_2[0x105] = local_24;
  param_2[0x100] = local_c;
  param_2[0x108] = iStack_18;
  param_2[0x101] = local_10;
  param_2[0x10a] = local_8;
  param_2[0x109] = iStack_14;
  return 0;
}

