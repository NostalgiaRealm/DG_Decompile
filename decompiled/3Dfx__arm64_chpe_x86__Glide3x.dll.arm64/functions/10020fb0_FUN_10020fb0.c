/*
 * FUN_10020fb0 at 10020fb0
 * undefined FUN_10020fb0(void)
 * Address ranges: 10020fb0-100211ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10020fb0(int param_1,undefined4 param_2,undefined4 param_3)

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
  FUN_1007e4d0(iVar1,0,0x7e0);
  piVar2 = (int *)(param_1 + 0x138);
  uVar8 = 0;
  do {
    uVar3 = uVar8 + 1;
    *(undefined4 *)(param_1 + 0x1e4 + uVar8 * 0x120) = *(undefined4 *)(*piVar2 + 0x3300);
    *(int *)(param_1 + 0x1e8 + uVar8 * 0x120) =
         *(int *)(*piVar2 + 0x3300) + *(int *)(*piVar2 + 0x3304) * 0x16c0 + 0x6c0;
    *(undefined4 *)(iVar1 + uVar8 * 0x120) = *(undefined4 *)(*piVar2 + 0x3304);
    uVar8 = uVar3;
  } while (uVar3 < 7);
  uVar7 = FUN_1002fc40(iVar1,param_2,0);
  if ((uVar7 & 1) != 0) {
    uVar7 = FUN_1002fc40(param_1 + 0x260,param_2,0);
    if ((uVar7 & 1) != 0) {
      bVar5 = *(int *)(*piVar2 + 0xcc) == 2;
      if (!bVar5) {
        param_3 = param_2;
      }
      uVar7 = FUN_1002fc40(param_1 + 0x380,param_3,bVar5);
      if ((uVar7 & 1) != 0) {
        uVar7 = FUN_10060f50(uVar7,DAT_100a288c,0x17,&DAT_100a1260,param_1 + 0x920);
        if ((uVar7 & 1) != 0) {
          uVar7 = FUN_10060f50(uVar7,DAT_100a288c,3,&DAT_100a1230,param_1 + 0x97c);
          if ((uVar7 & 1) != 0) {
            iVar4 = *piVar2;
            iVar6 = 0;
            if (*(int *)(iVar4 + 0x3300) != 0) {
              iVar6 = *(int *)(iVar4 + 0x3300) + 0x520;
            }
            iVar6 = FUN_1005be38(iVar6,*(undefined4 *)(iVar4 + 0x3304),
                                 *(int *)(iVar4 + 0x3308) + 0x1370,0x4000,0);
            *(int *)(param_1 + 0x988) = iVar6;
            if (iVar6 != 0) {
              *(undefined4 *)(param_1 + 0x98c) = 0;
              DAT_100a2920 = param_1;
              return 1;
            }
          }
          FUN_1001eb98(param_1);
        }
        FUN_1002fe30(param_1 + 0x380);
      }
      FUN_1002fe30(param_1 + 0x260);
    }
    FUN_1002fe30(iVar1);
  }
  return 0;
}

