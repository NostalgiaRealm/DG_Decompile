/*
 * FUN_10042c00 at 10042c00
 * undefined FUN_10042c00(void)
 * Address ranges: 10042c00-10042dbb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10042c00(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined1 auVar6 [16];
  undefined4 local_50 [4];
  
  iVar3 = -0x7ff8ffa9;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
    local_50[0] = 0;
    iVar3 = FUN_100456a0(param_1 + 0x2c,param_2,param_3,local_50);
    pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
    if (iVar3 == -0x7fffbffe) {
      uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      cVar2 = (*extraout_w11)(uVar4);
      if ((cVar2 != '\0') && (FUN_10034cc8(), DAT_100c291c != 0)) {
        uVar4 = (*pcVar1)();
        iVar3 = (*extraout_w11_00)(uVar4,param_1,param_2,param_3,param_4);
        if (iVar3 == -0x7fffbffe) {
          iVar3 = *(int *)(param_1 + 0xfc);
          if (*(ushort *)(iVar3 + 0x48) != 0) {
            uVar5 = 0;
            do {
              if (*(int *)(param_1 + 0xf8) == *(int *)(iVar3 + 100 + uVar5 * 0x1c)) break;
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(ushort *)(iVar3 + 0x48));
          }
          auVar6 = (*pcVar1)(DAT_100c291c,iVar3,&DAT_100be150 + *(int *)(iVar3 + 0x11c) * 0x8a);
          iVar3 = (*extraout_w11_01)(auVar6._0_8_ & 0xffffffff,auVar6._8_8_ & 0xffffffff);
        }
      }
    }
  }
  return iVar3;
}

