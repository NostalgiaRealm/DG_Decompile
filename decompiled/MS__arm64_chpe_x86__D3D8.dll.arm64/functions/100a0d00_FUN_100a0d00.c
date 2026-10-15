/*
 * FUN_100a0d00 at 100a0d00
 * undefined FUN_100a0d00(void)
 * Address ranges: 100a0d00-100a0d9f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100a0d00(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int extraout_w15;
  undefined1 auStack_20 [4];
  undefined4 local_1c;
  
  FUN_100ae580(param_1,auStack_20);
  if (*(char *)(extraout_w15 + 0x1bc) != '\0') {
    iVar1 = 0x24;
    if (*(int *)(extraout_w15 + 0x1c) == 0x15) {
      iVar1 = 0x34;
    }
    local_1c = *(undefined4 *)(iVar1 + *(int *)(extraout_w15 + 0xe0));
  }
  FUN_1009b030(extraout_w15 + 0xf0,*(undefined4 *)(extraout_w15 + 0x54),local_1c,param_4,
               *(undefined4 *)(&DAT_1012cab0 + *(int *)(extraout_w15 + 0x1c) * 4),param_6,0,
               *(int *)(extraout_w15 + 0x24) != 1);
  return;
}

