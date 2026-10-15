/*
 * FUN_1800c3394 at 1800c3394
 * bool __fastcall FUN_1800c3394(longlong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
 * Address ranges: 1800c3394-1800c3434
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800c3394(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0xa4) == 3) {
    FUN_18001867c(param_1);
    puVar1 = (undefined1 *)
             thunk_FUN_1800fbccc((ulonglong)
                                 ((uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c)));
    *(undefined1 **)(param_1 + 0x90) = puVar1;
    if (puVar1 != (undefined1 *)0x0) {
      FUN_1800fbea0(puVar1,0,(ulonglong)
                             ((uint)*(ushort *)(param_1 + 0x14) * *(int *)(param_1 + 0x1c)));
    }
    bVar2 = *(longlong *)(param_1 + 0x90) != 0;
  }
  else {
    FUN_18001867c(param_1);
    if (*(char *)(param_1 + 0xbd) != '\0') {
      FUN_18003197c(param_1,(HANDLE)0x0,0,param_4,'\0');
    }
    bVar2 = true;
    if (*(char *)(param_1 + 0x60) != '\0') {
      *(undefined2 *)(param_1 + 0x50) = 0x102;
      *(undefined1 *)(param_1 + 0x52) = 0;
      *(undefined4 *)(param_1 + 0x54) = 3;
      *(undefined2 *)(param_1 + 0x58) = 0x102;
      *(undefined1 *)(param_1 + 0x5a) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 4;
    }
  }
  return bVar2;
}

