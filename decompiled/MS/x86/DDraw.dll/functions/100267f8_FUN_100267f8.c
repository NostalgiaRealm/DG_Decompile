/*
 * FUN_100267f8 at 100267f8
 * undefined __thiscall FUN_100267f8(void * this, byte * param_1)
 * Address ranges: 100267f8-1002684b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100267f8(void *this,byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = 0;
  bVar2 = *param_1;
  while (bVar2 != 0xff) {
    pbVar1 = param_1 + iVar4;
    bVar2 = *pbVar1;
    if ((((bVar2 == 0xe) || (bVar2 == 0xf)) || (bVar2 == 0x10)) ||
       (((bVar2 == 0x11 || (bVar2 == 0x12)) || ((bVar2 == 0x14 || (bVar2 == 0x13)))))) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    iVar4 = iVar4 + 1;
    *(undefined1 *)((uint)bVar2 + *(int *)this) = uVar3;
    bVar2 = pbVar1[1];
  }
  return;
}

