/*
 * FUN_100d8460 at 100d8460
 * undefined FUN_100d8460(void)
 * Address ranges: 100d8460-100d863f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d8460(int param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auStack_50 [16];
  
  uVar7 = (ulonglong)param_4;
  uVar3 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + 0x60)) {
    if (param_2 + param_4 <= *(uint *)(param_1 + 0x60)) {
      if (param_4 != 0) {
        if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0))
        {
          bVar1 = false;
          *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
        }
        else {
          bVar1 = true;
          iVar2 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
          if (iVar2 == 0) {
            FUN_100071d0(0);
          }
        }
        if (param_2 < 0x10) {
          if (0x10 < param_2 + param_4) {
            uVar7 = (ulonglong)(0x10 - param_2);
          }
        }
        else {
          uVar7 = 0;
        }
        if (*(char *)(param_1 + -0x62f0) == '\0') {
          FUN_10157b40(auStack_50);
          uVar3 = FUN_100e5650(param_1 + 100,*(undefined4 *)(param_1 + 0x5bd4));
          FUN_100d9b80(param_1 + -0x66b4,uVar3,param_2,param_3,uVar7);
          FUN_10157a90(auStack_50);
        }
        else {
          puVar4 = (undefined8 *)
                   (*(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4) +
                   (param_2 + 0x13f2) * 4);
          uVar5 = 0;
          if (uVar7 >> 1 != 0) {
            do {
              uVar6 = *param_3;
              uVar5 = uVar5 + 1;
              param_3 = param_3 + 1;
              *puVar4 = uVar6;
              puVar4 = puVar4 + 1;
            } while (uVar5 < (uint)(uVar7 >> 1));
          }
          if ((uVar7 & 1) != 0) {
            *(undefined4 *)puVar4 = *(undefined4 *)param_3;
          }
          if ((int)uVar7 != 0) {
            FUN_101325d0(param_1 + param_2 + 500,1,uVar7);
          }
        }
        if (bVar1) {
          (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
        }
        else {
          *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
        }
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

