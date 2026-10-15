/*
 * FUN_10021960 at 10021960
 * undefined FUN_10021960(void)
 * Address ranges: 10021960-10021b5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10021960(int param_1,undefined4 param_2,undefined4 param_3)

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
  FUN_10083b70(iVar1,0,0x7e0);
  piVar2 = (int *)(param_1 + 0x138);
  uVar8 = 0;
  do {
    uVar3 = uVar8 + 1;
    *(undefined4 *)(param_1 + 0x1e4 + uVar8 * 0x120) = *(undefined4 *)(*piVar2 + 0x3680);
    *(int *)(param_1 + 0x1e8 + uVar8 * 0x120) =
         *(int *)(*piVar2 + 0x3680) + *(int *)(*piVar2 + 0x3684) * 0x16c0 + 0x6c0;
    *(undefined4 *)(iVar1 + uVar8 * 0x120) = *(undefined4 *)(*piVar2 + 0x3684);
    uVar8 = uVar3;
  } while (uVar3 < 7);
  uVar7 = FUN_100329f0(iVar1,param_2,0);
  if ((uVar7 & 1) != 0) {
    uVar7 = FUN_100329f0(param_1 + 0x260,param_2,0);
    if ((uVar7 & 1) != 0) {
      bVar5 = *(int *)(*piVar2 + 0xcc) == 2;
      if (!bVar5) {
        param_3 = param_2;
      }
      uVar7 = FUN_100329f0(param_1 + 0x380,param_3,bVar5);
      if ((uVar7 & 1) != 0) {
        uVar7 = FUN_100665f0(uVar7,DAT_100aaa5c,0x1d,&DAT_100a9370,param_1 + 0x920);
        if ((uVar7 & 1) != 0) {
          uVar7 = FUN_100665f0(uVar7,DAT_100aaa5c,3,&DAT_100a9340,param_1 + 0x994);
          if ((uVar7 & 1) != 0) {
            iVar4 = *piVar2;
            iVar6 = 0;
            if (*(int *)(iVar4 + 0x3680) != 0) {
              iVar6 = *(int *)(iVar4 + 0x3680) + 0x520;
            }
            iVar6 = FUN_100614e8(iVar6,*(undefined4 *)(iVar4 + 0x3684),
                                 *(int *)(iVar4 + 0x3688) + 0x1370,0x4000,0);
            *(int *)(param_1 + 0x9a0) = iVar6;
            if (iVar6 != 0) {
              *(undefined4 *)(param_1 + 0x9a4) = 0;
              DAT_100aaaf0 = param_1;
              return 1;
            }
          }
          FUN_1001f318(param_1);
        }
        FUN_10032be0(param_1 + 0x380);
      }
      FUN_10032be0(param_1 + 0x260);
    }
    FUN_10032be0(iVar1);
  }
  return 0;
}

