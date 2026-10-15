/*
 * FUN_14000ff10 at 14000ff10
 * undefined __fastcall FUN_14000ff10(longlong * param_1, uint param_2, undefined8 param_3, ushort * param_4)
 * Address ranges: 14000ff10-14000fffc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000ff10(longlong *param_1,uint param_2,undefined8 param_3,ushort *param_4)

{
  undefined8 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  int cx;
  int cy;
  HMODULE pHVar5;
  HANDLE h;
  HANDLE pvVar6;
  longlong lVar7;
  undefined1 local_48 [4];
  int local_44;
  int local_40;
  
  uVar1 = *(undefined8 *)param_4;
  uVar2 = *param_4;
  lVar7 = (ulonglong)param_2 * 0x20;
  *(undefined8 *)(lVar7 + *param_1) = param_3;
  lVar4 = *param_1;
  uVar3 = *(undefined4 *)(param_4 + 4);
  *(undefined8 *)(lVar7 + 8 + lVar4) = uVar1;
  *(undefined4 *)(lVar7 + 0x10 + lVar4) = uVar3;
  pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
  h = LoadImageW(pHVar5,(LPCWSTR)(ulonglong)uVar2,0,0,0,0x8000);
  pvVar6 = (HANDLE)0x0;
  if (h != (HANDLE)0x0) {
    GetObjectW(h,0x20,local_48);
    cx = MulDiv(local_44,*(int *)(param_4 + 4),*(int *)(param_4 + 2));
    cy = MulDiv(local_40,*(int *)(param_4 + 4),*(int *)(param_4 + 2));
    uVar2 = *param_4;
    pHVar5 = GetModuleHandleW((LPCWSTR)0x0);
    pvVar6 = LoadImageW(pHVar5,(LPCWSTR)(ulonglong)uVar2,0,cx,cy,0);
  }
  *(HANDLE *)(lVar7 + 0x18 + *param_1) = pvVar6;
  return;
}

