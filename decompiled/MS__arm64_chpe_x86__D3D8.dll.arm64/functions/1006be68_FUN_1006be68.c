/*
 * FUN_1006be68 at 1006be68
 * undefined FUN_1006be68(void)
 * Address ranges: 1006be68-1006beff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1006be68(undefined8 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_2c;
  uint local_28;
  undefined4 uStack_24;
  
  piVar1 = (int *)(param_2 + 0x1f8);
  if (*piVar1 == 0) {
    iVar2 = FUN_100ee580(param_2,4,1);
    *piVar1 = iVar2;
    if (*(byte *)(param_2 + 0x1ee) != 0xf) {
      local_28 = FUN_100efc98(*(undefined1 *)(param_2 + 0x1f2),*(byte *)(param_2 + 0x1ee) ^ 0xf);
      local_28 = local_28 & 0xff;
      uStack_24 = 0;
      uStack_2c = 0x410102;
      local_38 = 0x2036;
      local_40 = param_2;
      uStack_3c = param_3;
      FUN_100ef510(&local_40,0x20);
    }
  }
  return;
}

