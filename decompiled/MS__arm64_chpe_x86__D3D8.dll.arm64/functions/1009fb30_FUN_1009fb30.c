/*
 * FUN_1009fb30 at 1009fb30
 * undefined FUN_1009fb30(void)
 * Address ranges: 1009fb30-1009fc27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1009fb30(int *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  ulonglong uVar4;
  code *extraout_w11;
  uint uVar5;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x28) != 0) {
    if (*(char *)(iVar1 + 0x3c) != (char)param_1[1]) {
      *(char *)(iVar1 + 0x3c) = (char)param_1[1];
      pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      uVar5 = 0;
      if (*(uint *)(iVar1 + 0x24) != 0) {
        do {
          uVar4 = 0;
          local_50 = 0;
          local_48 = FUN_100ae4d0(iVar1,*(undefined4 *)(iVar1 + 0x14),0);
          uVar3 = FUN_100ae528(iVar1,*(undefined4 *)(iVar1 + 0x18),uVar4 & 0xffffffff);
          local_44 = (undefined4)uVar3;
          (*pcVar2)(uVar3,uVar5 * *(int *)(iVar1 + 0x2c));
          (*extraout_w11)(iVar1,extraout_x1,&local_50);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(iVar1 + 0x24));
      }
    }
  }
  return;
}

