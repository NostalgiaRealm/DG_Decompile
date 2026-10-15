/*
 * FUN_10024917 at 10024917
 * undefined __fastcall FUN_10024917(int * param_1)
 * Address ranges: 10024917-100249a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10024917(int *param_1)

{
  uint uVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_1;
  FUN_10023df9((int)&uStack_8 + 3);
  if (*(char *)((int)param_1 + 0x14f) != '\0') {
    if (param_1[3] != 0) {
      (**(code **)(*DAT_1006c238 + 0x14))(param_1[3]);
      param_1[3] = 0;
    }
    FUN_10026cef(param_1,(HWND)0x0,8,'\x01');
    *(undefined1 *)((int)param_1 + 0x14f) = 0;
    FUN_100259eb((int)param_1);
    uVar1 = 0;
    do {
      if ((undefined4 *)param_1[uVar1 * 7 + 0x19] != (undefined4 *)0x0) {
        FUN_1002481e((int)(param_1 + uVar1 * 7 + 0x13),(undefined4 *)param_1[uVar1 * 7 + 0x19]);
        param_1[uVar1 * 7 + 0x19] = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 6);
    FUN_10024395(param_1);
  }
  (**(code **)(*param_1 + 0x58))(1);
  FUN_10023e27();
  return;
}

