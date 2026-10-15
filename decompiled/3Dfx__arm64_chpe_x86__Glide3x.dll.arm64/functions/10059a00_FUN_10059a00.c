/*
 * FUN_10059a00 at 10059a00
 * undefined FUN_10059a00(void)
 * Address ranges: 10059a00-10059aab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_10059a00(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong extraout_x11;
  undefined8 uVar5;
  
  uVar1 = DAT_100a288c;
  switch(*(undefined4 *)(param_2 + 0xd2)) {
  default:
    uVar5 = 0;
    break;
  case 2:
    uVar5 = 1;
    break;
  case 3:
    uVar5 = 2;
    break;
  case 4:
    uVar5 = 3;
  }
  iVar2 = FUN_1007dc70(0x3b0);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_10074b58(iVar2,uVar1,uVar5);
    puVar4 = (undefined4 *)extraout_x11;
    *puVar4 = &PTR_FUN_10098e14;
    uVar3 = extraout_x11 & 0xffffffff;
    *(undefined8 *)(puVar4 + 0xea) = 0xc00000000000;
    *(undefined1 *)(puVar4 + 0xe9) = 0;
  }
  return uVar3;
}

