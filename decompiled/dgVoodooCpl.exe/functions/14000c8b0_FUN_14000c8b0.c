/*
 * FUN_14000c8b0 at 14000c8b0
 * undefined8 __fastcall FUN_14000c8b0(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4, undefined1 * param_5)
 * Address ranges: 14000c8b0-14000c94d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_14000c8b0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined1 *param_5
             )

{
  char cVar1;
  ulonglong uVar2;
  int local_218 [8];
  undefined1 local_1f8;
  
  if (param_2 == 0x408) {
    *param_5 = 1;
    uVar2 = 0;
    if (*(HWND *)(param_1 + 0x1b48) != (HWND)0x0) {
      uVar2 = SendMessageW(*(HWND *)(param_1 + 0x1b48),0x405,0,*(LPARAM *)(param_1 + 0x18));
      uVar2 = uVar2 & 0xffffffff;
    }
    if (uVar2 != 0) {
      FUN_1400098a8((undefined8 *)local_218);
      cVar1 = FUN_140014680(local_218,*(undefined8 *)(param_1 + 0x1b50),
                            (undefined4 *)(-(ulonglong)(param_1 != 0) & param_1 + 0x88U));
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0x1b80) = local_1f8;
        *(undefined1 *)(param_1 + 0x1dc5) = 1;
        (*(code *)**(undefined8 **)(param_1 + 0x80))();
      }
    }
  }
  return 0;
}

