/*
 * FUN_10094bd3 at 10094bd3
 * int __stdcall FUN_10094bd3(int param_1)
 * Address ranges: 10094bd3-10094c94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10094bd3(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  iVar3 = -0x7789f794;
  if (*(char *)(iVar1 + -0x62f0) == '\0') {
    uVar2 = FUN_1001850a(iVar1 + -0x66b4);
    *(uint *)(iVar1 + -0x62f4) = uVar2;
    iVar3 = -0x7ff8fff2;
    if (uVar2 != 0xffffffff) {
      *(undefined1 *)(iVar1 + -0x62f0) = 1;
      iVar3 = 0;
    }
    if (-1 < iVar3) {
      FUN_100cfed0((int *)(iVar1 + -0x608),0,0x400);
      FUN_100cfed0((int *)(iVar1 + -0x208),0,0xe0);
      *(undefined4 *)(iVar1 + 500) = 0;
      *(undefined4 *)(iVar1 + 0x1f8) = 0;
      *(undefined4 *)(iVar1 + 0x1fc) = 0;
      *(undefined4 *)(iVar1 + 0x200) = 0;
      *(undefined4 *)(iVar1 + 0x204) = 0;
      *(undefined4 *)(iVar1 + 0x208) = 0;
      *(undefined4 *)(iVar1 + 0x20c) = 0;
      *(undefined4 *)(iVar1 + 0x210) = 0;
      *(undefined4 *)(iVar1 + 0x214) = 0;
      *(undefined4 *)(iVar1 + 0x218) = 0;
      *(undefined4 *)(iVar1 + 0x21c) = 0;
      *(undefined4 *)(iVar1 + 0x220) = 0;
      *(undefined4 *)(iVar1 + 0x224) = 0;
      *(undefined4 *)(iVar1 + 0x228) = 0;
      *(undefined4 *)(iVar1 + 0x22c) = 0;
      *(undefined4 *)(iVar1 + 0x230) = 0;
    }
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return iVar3;
}

