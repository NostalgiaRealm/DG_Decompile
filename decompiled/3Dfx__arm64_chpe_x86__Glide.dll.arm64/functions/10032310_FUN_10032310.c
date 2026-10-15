/*
 * FUN_10032310 at 10032310
 * undefined FUN_10032310(void)
 * Address ranges: 10032310-1003250b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10032310(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  
  iVar1 = param_1 + 0x140;
  FUN_1007ac30(iVar1,0,0x360);
  piVar2 = (int *)(param_1 + 0x138);
  uVar8 = 0;
  do {
    uVar3 = uVar8 + 1;
    *(undefined4 *)(param_1 + 0x1e4 + uVar8 * 0x120) = *(undefined4 *)(*piVar2 + 0x3180);
    *(int *)(param_1 + 0x1e8 + uVar8 * 0x120) =
         *(int *)(*piVar2 + 0x3180) + *(int *)(*piVar2 + 0x3184) * 0x16c0 + 0x6c0;
    *(undefined4 *)(iVar1 + uVar8 * 0x120) = *(undefined4 *)(*piVar2 + 0x3184);
    uVar8 = uVar3;
  } while (uVar3 < 3);
  uVar7 = FUN_10040720(iVar1,param_2,0);
  if ((uVar7 & 1) != 0) {
    uVar7 = FUN_10040720(param_1 + 0x260,param_2,0);
    if ((uVar7 & 1) != 0) {
      bVar5 = *(int *)(*piVar2 + 0xcc) == 2;
      if (!bVar5) {
        param_3 = param_2;
      }
      uVar7 = FUN_10040720(param_1 + 0x380,param_3,bVar5);
      if ((uVar7 & 1) != 0) {
        uVar7 = FUN_1005d740(uVar7,DAT_1009f7ac,0x17,&DAT_1009e430,param_1 + 0x4a0);
        if ((uVar7 & 1) != 0) {
          uVar7 = FUN_1005d740(uVar7,DAT_1009f7ac,3,&DAT_1009e400,param_1 + 0x4fc);
          if ((uVar7 & 1) != 0) {
            iVar4 = *piVar2;
            iVar6 = 0;
            if (*(int *)(iVar4 + 0x3180) != 0) {
              iVar6 = *(int *)(iVar4 + 0x3180) + 0x520;
            }
            iVar6 = FUN_10058628(iVar6,*(undefined4 *)(iVar4 + 0x3184),
                                 *(int *)(iVar4 + 0x3188) + 0x1370,0x4000,0);
            *(int *)(param_1 + 0x508) = iVar6;
            if (iVar6 != 0) {
              *(undefined4 *)(param_1 + 0x50c) = 0;
              DAT_1009f7f8 = param_1;
              return 1;
            }
          }
          FUN_1002ff78(param_1);
        }
        FUN_10040910(param_1 + 0x380);
      }
      FUN_10040910(param_1 + 0x260);
    }
    FUN_10040910(iVar1);
  }
  return 0;
}

