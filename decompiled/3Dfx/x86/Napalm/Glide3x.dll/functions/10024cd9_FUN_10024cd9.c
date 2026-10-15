/*
 * FUN_10024cd9 at 10024cd9
 * undefined __fastcall FUN_10024cd9(int param_1, uint param_2, int param_3)
 * Address ranges: 10024cd9-10024db4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10024cd9(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    *(undefined1 *)(param_3 + 0xa5 + uVar1) = 0xff;
    *(undefined1 *)(param_3 + 0xab + uVar1) = 0xff;
    *(undefined1 *)(param_3 + 0xa8 + uVar1) = 0xff;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 3);
  while (param_2 != 0) {
    param_2 = param_2 - 1;
    FUN_1002450d(param_1,param_2,param_3,1);
    FUN_1002450d(param_1,param_2,param_3,0);
  }
  FUN_1002464f(param_1,param_3,1);
  FUN_1002464f(param_1,param_3,0);
  if (*(char *)(param_3 + 0x1b5) != '\0') {
    *(undefined2 *)(param_3 + 0xba) = 0;
  }
  if ((*(int *)(param_1 + 0x864) != 0) && (((byte)*(ushort *)(param_3 + 0xbc) & 0xf0) == 0xf0)) {
    *(byte *)(param_3 + 0x120) =
         *(byte *)(param_3 + 0x120) | (byte)(1 << (*(ushort *)(param_3 + 0xbc) & 0xf));
  }
  if ((*(int *)(param_1 + 0x4c) != 0) && (((byte)*(ushort *)(param_3 + 0xbc) & 0xf0) == 0xf0)) {
    *(byte *)(param_3 + 0x120) =
         *(byte *)(param_3 + 0x120) | (byte)(1 << (*(ushort *)(param_3 + 0xbc) & 0xf));
  }
  FUN_10024b38(param_3,'\0');
  FUN_10024b38(param_3,'\x01');
  return;
}

