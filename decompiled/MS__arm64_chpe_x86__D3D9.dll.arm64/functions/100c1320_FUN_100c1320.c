/*
 * FUN_100c1320 at 100c1320
 * undefined FUN_100c1320(void)
 * Address ranges: 100c1320-100c13df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100c1320(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 in_x5;
  int iVar3;
  int extraout_w15;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  FUN_100cefa0(param_1,auStack_20);
  if (*(char *)(extraout_w15 + 0x1bc) == '\0') {
    iVar1 = *(int *)(extraout_w15 + 0x1c);
  }
  else {
    iVar1 = *(int *)(extraout_w15 + 0x1c);
    iVar3 = 0x24;
    if (iVar1 == 0x15) {
      iVar3 = 0x34;
    }
    local_1c = *(undefined4 *)(iVar3 + *(int *)(extraout_w15 + 0xe0));
  }
  if ((*(int *)(extraout_w15 + 0x24) == 1) || (uVar2 = local_1c, *(uint *)(extraout_w15 + 0x28) < 2)
     ) {
    uVar2 = 0;
  }
  FUN_100bb160(extraout_w15 + 0xf0,*(undefined4 *)(extraout_w15 + 0x54),local_1c,uVar2,
               *(undefined4 *)(&DAT_101625d0 + iVar1 * 4),in_x5,0,*(int *)(extraout_w15 + 0x24) != 1
              );
  return;
}

