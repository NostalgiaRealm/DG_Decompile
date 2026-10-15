/*
 * FUN_1001749a at 1001749a
 * uint __fastcall FUN_1001749a(int * param_1)
 * Address ranges: 1001749a-10017660
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1001749a(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  undefined1 auVar5 [16];
  float fVar6;
  double dVar7;
  undefined8 uVar8;
  float local_8;
  
  iVar1 = FUN_100cfd89(0x1004);
  *param_1 = iVar1;
  uVar3 = 0;
  if (iVar1 != 0) {
    iVar1 = FUN_100cfd89(0x1004);
    uVar3 = 0;
    param_1[1] = iVar1;
    if (iVar1 != 0) {
      iVar1 = FUN_100cfd89(0x1004);
      param_1[2] = iVar1;
      if (iVar1 != 0) {
        iVar1 = FUN_100cfd89(0x1004);
        param_1[3] = iVar1;
        if (iVar1 != 0) {
          iVar1 = FUN_100cfd89(0x1004);
          param_1[4] = iVar1;
          if (iVar1 != 0) {
            uVar2 = 0;
            local_8 = 1.0;
            do {
              dVar7 = (double)((float)((double)(int)uVar2 +
                                      (double)(&DAT_100d97a0)[-((int)uVar2 >> 0x1f)]) * 0.0009765625
                              );
              uVar8 = 0;
              dVar4 = 2.0;
              FUN_100cf580();
              fVar6 = (float)dVar4;
              auVar5._8_4_ = (int)uVar8;
              auVar5._0_8_ = dVar7;
              auVar5._12_4_ = (int)((ulonglong)uVar8 >> 0x20);
              FUN_100cf580();
              *(float *)(*param_1 + uVar2 * 4) = (float)auVar5._0_8_ / fVar6;
              dVar4 = 2.0;
              FUN_100cf3b0();
              *(float *)(param_1[1] + uVar2 * 4) = (float)dVar4;
              *(float *)(param_1[2] + uVar2 * 4) = local_8;
              local_8 = local_8 + local_8;
              uVar2 = uVar2 + 1;
            } while (uVar2 < 0x401);
            local_8 = 1.0;
            do {
              dVar4 = 2.7182817459106445;
              FUN_100cf3b0();
              *(float *)(param_1[3] + uVar3 * 4) = 1.0 / (float)dVar4;
              iVar1 = param_1[4];
              fVar6 = 1.0 / local_8;
              local_8 = local_8 * 2.7182817;
              *(float *)(iVar1 + uVar3 * 4) = fVar6;
              uVar3 = uVar3 + 1;
            } while (uVar3 < 0x401);
            return CONCAT31((int3)((uint)iVar1 >> 8),1);
          }
          thunk_FUN_100cfd6c((LPVOID)param_1[3]);
          param_1[3] = 0;
        }
        thunk_FUN_100cfd6c((LPVOID)param_1[2]);
        param_1[2] = 0;
      }
      thunk_FUN_100cfd6c((LPVOID)param_1[1]);
      param_1[1] = 0;
    }
    uVar3 = thunk_FUN_100cfd6c((LPVOID)*param_1);
    *param_1 = 0;
  }
  return uVar3 & 0xffffff00;
}

