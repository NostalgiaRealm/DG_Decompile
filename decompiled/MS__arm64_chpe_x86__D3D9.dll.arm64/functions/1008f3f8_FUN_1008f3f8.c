/*
 * FUN_1008f3f8 at 1008f3f8
 * undefined FUN_1008f3f8(void)
 * Address ranges: 1008f3f8-1008f4cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1008f3f8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  iVar1 = *(int *)(*param_1 + 0x4e8);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + *param_1 + 0x4fb) = 1;
    iVar1 = *param_1;
    if (*(char *)(*(int *)(iVar1 + 0xf4) + 0x148) != '\0') {
      if (*(int *)(iVar1 + 0x2f4) == 0) {
        uVar2 = FUN_10121590(iVar1,4,1);
        *(undefined4 *)(*param_1 + 0x2f4) = uVar2;
      }
      local_30 = *param_1;
      local_18 = 0xe4;
      uStack_14 = 0;
      local_1c = *(undefined4 *)(local_30 + *(int *)(local_30 + 0x4e8) * 4 + 0x2d0);
      local_20 = 0xf;
      local_24 = *(undefined4 *)(local_30 + 0x2f4);
      local_28 = 0x36;
      iStack_2c = param_1[1];
      FUN_10122a88(&local_30,0x20);
    }
  }
  return;
}

