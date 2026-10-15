/*
 * FUN_10001450 at 10001450
 * undefined FUN_10001450(void)
 * Address ranges: 10001450-1000160f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_10001450(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  float extraout_s21;
  float local_40;
  
  iVar4 = FUN_10081da0(0x1004);
  *param_1 = iVar4;
  if (iVar4 != 0) {
    iVar4 = FUN_10081da0(0x1004);
    piVar1 = param_1 + 1;
    *piVar1 = iVar4;
    if (iVar4 != 0) {
      iVar4 = FUN_10081da0(0x1004);
      piVar2 = param_1 + 2;
      *piVar2 = iVar4;
      if (iVar4 != 0) {
        iVar4 = FUN_10081da0(0x1004);
        piVar3 = param_1 + 3;
        *piVar3 = iVar4;
        if (iVar4 != 0) {
          iVar4 = FUN_10081da0(0x1004);
          param_1[4] = iVar4;
          if (iVar4 != 0) {
            uVar5 = 0;
            local_40 = 1.0;
            do {
              FUN_100818f0((double)((float)uVar5 * 0.0009765625));
              dVar6 = (double)FUN_100818f0(0x4000000000000000);
              *(float *)(*param_1 + uVar5 * 4) = extraout_s21 / (float)dVar6;
              dVar6 = (double)FUN_100819b0(0x4000000000000000);
              *(float *)(*piVar1 + uVar5 * 4) = (float)dVar6;
              iVar4 = uVar5 * 4;
              uVar5 = uVar5 + 1;
              *(float *)(*piVar2 + iVar4) = local_40;
              local_40 = local_40 + local_40;
            } while (uVar5 < 0x401);
            uVar5 = 0;
            local_40 = 1.0;
            do {
              dVar6 = (double)FUN_100819b0(0x4005bf0a80000000,(double)((float)uVar5 * 0.0009765625))
              ;
              *(float *)(*piVar3 + uVar5 * 4) = 1.0 / (float)dVar6;
              iVar4 = uVar5 * 4;
              uVar5 = uVar5 + 1;
              *(float *)(param_1[4] + iVar4) = 1.0 / local_40;
              local_40 = local_40 * 2.7182817;
            } while (uVar5 < 0x401);
            return 1;
          }
          FUN_10081dc0(*piVar3);
          *piVar3 = 0;
        }
        FUN_10081dc0(*piVar2);
        *piVar2 = 0;
      }
      FUN_10081dc0(*piVar1);
      *piVar1 = 0;
    }
    FUN_10081dc0(*param_1);
    *param_1 = 0;
  }
  return 0;
}

