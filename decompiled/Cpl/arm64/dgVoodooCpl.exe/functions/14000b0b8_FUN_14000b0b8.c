/*
 * FUN_14000b0b8 at 14000b0b8
 * undefined __cdecl FUN_14000b0b8(longlong param_1, uint param_2, int * param_3)
 * Address ranges: 14000b0b8-14000b20b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000b0b8(longlong param_1,uint param_2,int *param_3)

{
  LPARAM lParam;
  HWND hWnd;
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  do {
    if (param_2 <= (uint)(&DAT_140028640)[uVar2 * 4]) break;
    uVar1 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar1;
  } while (uVar1 < 3);
  uVar1 = (uint)uVar2;
  if (uVar1 == 3) {
    uVar1 = 2;
  }
  lParam = FUN_1400119d8(param_1 + 0xb8,*(uint *)(&DAT_140028644 + (ulonglong)uVar1 * 0x10),
                         (ulonglong)(uint)(&DAT_140028640)[(ulonglong)uVar1 * 4],param_2);
  hWnd = GetDlgItem(*(HWND *)(param_1 + 0x18),0x3e9);
  SendMessageA(hWnd,0x172,0,lParam);
  FUN_140011118(param_1 + 0xb8,param_2,param_3);
  FUN_140011118(param_1 + 0x510,param_2,(int *)0x0);
  FUN_140011118(param_1 + 0x640,param_2,(int *)0x0);
  FUN_140006d68(param_1 + 0x5a8);
  FUN_140011118(param_1 + 0x770,param_2,(int *)0x0);
  FUN_140011118(param_1 + 0xa00,param_2,(int *)0x0);
  FUN_140011118(param_1 + 0xc90,param_2,(int *)0x0);
  FUN_140011118(param_1 + 0xf08,param_2,(int *)0x0);
  FUN_140011118(param_1 + 0x1040,param_2,(int *)0x0);
  FUN_140011118(param_1 + 0x1278,param_2,(int *)0x0);
  FUN_140010940((longlong *)(param_1 + 0x150));
  return;
}

