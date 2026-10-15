/*
 * FUN_140011b50 at 140011b50
 * undefined __cdecl FUN_140011b50(longlong * param_1, ulonglong param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 140011b50-140011c5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140011b50(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  int cx;
  int cy;
  HMODULE pHVar3;
  HANDLE h;
  HANDLE pvVar4;
  longlong lVar5;
  undefined1 auStack_50 [4];
  int local_4c;
  int local_48;
  
  lVar2 = (param_2 & 0xffffffff) * 0x20;
  uVar1 = *(undefined2 *)param_4;
  *(undefined8 *)(*param_1 + lVar2) = param_3;
  lVar5 = *param_1;
  *(undefined8 *)(lVar2 + lVar5 + 8) = *param_4;
  *(undefined4 *)(lVar2 + lVar5 + 0x10) = *(undefined4 *)(param_4 + 1);
  pHVar3 = GetModuleHandleW((LPCWSTR)0x0);
  h = LoadImageW(pHVar3,(LPCWSTR)uVar1,0,0,0,0x8000);
  pvVar4 = (HANDLE)0x0;
  if (h != (HANDLE)0x0) {
    GetObjectW(h,0x20,auStack_50);
    cx = MulDiv(local_4c,*(int *)(param_4 + 1),*(int *)((longlong)param_4 + 4));
    cy = MulDiv(local_48,*(int *)(param_4 + 1),*(int *)((longlong)param_4 + 4));
    uVar1 = *(undefined2 *)param_4;
    pHVar3 = GetModuleHandleW((LPCWSTR)0x0);
    pvVar4 = LoadImageW(pHVar3,(LPCWSTR)uVar1,0,cx,cy,0);
  }
  *(HANDLE *)(lVar2 + *param_1 + 0x18) = pvVar4;
  return;
}

