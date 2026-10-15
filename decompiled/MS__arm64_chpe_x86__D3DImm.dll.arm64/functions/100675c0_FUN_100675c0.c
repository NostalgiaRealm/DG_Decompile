/*
 * FUN_100675c0 at 100675c0
 * undefined FUN_100675c0(void)
 * Address ranges: 100675c0-10067703
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100675c0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  code *extraout_w11;
  undefined4 uVar5;
  
  uVar5 = 0x80070057;
  if (*(uint *)(param_1 + 0x78) < 0x10001) {
    iVar3 = FUN_10081e90(param_2,&DAT_1009c560,0x10);
    if (iVar3 == 0) {
      if ((*(uint *)(param_1 + 0x70) & 0xfffef7ff) != 0) {
        return 0x80070057;
      }
      param_3 = param_3 & 0xfffffffb;
    }
    else if ((*(uint *)(param_1 + 0x70) & 0xfffef7fe) != 0) {
      return 0x80070057;
    }
    if (param_3 == 0) {
      uVar5 = 0x88760800;
      uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      cVar2 = (*extraout_w11)(uVar4);
      FUN_1004b440(*(undefined4 *)(param_1 + 0x74),cVar2 == '\0',param_1 + 0x7c);
      if (*(int *)(param_1 + 0x80) != 3) {
        iVar3 = *(int *)(param_1 + 0x88) * *(uint *)(param_1 + 0x78);
        *(undefined4 *)(param_1 + 0x14) = 0;
        *(int *)(param_1 + 0x18) = iVar3;
        *(int *)(param_1 + 0x10) = iVar3;
        iVar3 = FUN_10081cb0(iVar3 + 0x44);
        uVar1 = iVar3 + 0x23U & 0xffffffe0;
        *(int *)(uVar1 - 4) = iVar3;
        *(uint *)(param_1 + 4) = uVar1;
        FUN_10081f10(uVar1,0,*(int *)(param_1 + 0x10));
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}

