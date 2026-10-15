/*
 * FUN_10024bc6 at 10024bc6
 * undefined1 __fastcall FUN_10024bc6(int param_1)
 * Address ranges: 10024bc6-10024c4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_10024bc6(int param_1)

{
  HWND pHVar1;
  BOOL BVar2;
  uint uVar3;
  undefined1 uVar4;
  tagGUITHREADINFO local_34;
  
  if (((*(uint *)(param_1 + 0x104) >> 4 & 1) == 0) ||
     ((&DAT_1006c49a)[*(int *)(param_1 + 0x11c) * 0x228] == '\0')) {
LAB_10024c48:
    uVar4 = 1;
  }
  else {
    local_34.cbSize = 0x30;
    uVar4 = 0;
    FUN_10060d45((int *)&local_34.flags,0,0x2c);
    BVar2 = GetGUIThreadInfo(0,&local_34);
    if ((BVar2 != 0) && ((local_34.hwndActive != (HWND)0x0 && (uVar3 = 0, DAT_1006c23c != 0)))) {
      do {
        pHVar1 = *(HWND *)(*(int *)(DAT_1006c24c + uVar3 * 4) + 0xfc);
        if ((pHVar1 != (HWND)0x0) && (local_34.hwndActive == pHVar1)) goto LAB_10024c48;
        uVar3 = uVar3 + 1;
      } while (uVar3 < DAT_1006c23c);
    }
  }
  return uVar4;
}

