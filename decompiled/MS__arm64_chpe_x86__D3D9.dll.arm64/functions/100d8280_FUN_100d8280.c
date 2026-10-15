/*
 * FUN_100d8280 at 100d8280
 * undefined FUN_100d8280(void)
 * Address ranges: 100d8280-100d8453
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d8280(int param_1,uint param_2,undefined8 *param_3,uint param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [16];
  
  uVar4 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + 0x5c)) {
    if (param_2 + param_4 <= *(uint *)(param_1 + 0x5c)) {
      if (param_4 != 0) {
        if (((*(uint *)(param_1 + -0x58e4) >> 2 & 1) == 0) && (*(int *)(DAT_10175b54 + 0x20) == 0))
        {
          bVar2 = false;
          *(undefined4 *)(DAT_10175b54 + 0x1c) = 1;
        }
        else {
          bVar2 = true;
          iVar3 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
          if (iVar3 == 0) {
            FUN_100071d0(0);
          }
        }
        if (param_2 < 0x10) {
          if (0x10 < param_2 + param_4) {
            param_4 = 0x10 - param_2;
          }
        }
        else {
          param_4 = 0;
        }
        if (*(char *)(param_1 + -0x62f0) == '\0') {
          FUN_10157b40(auStack_50);
          uVar4 = FUN_100e5650(param_1 + 100,*(undefined4 *)(param_1 + 0x5bd4));
          FUN_100d9990(param_1 + -0x66b4,uVar4,param_2,param_3,param_4);
          FUN_10157a90(auStack_50);
        }
        else {
          puVar1 = (undefined8 *)
                   (*(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4) +
                    param_2 * 0x10 + 0x5008);
          uVar5 = 0;
          if ((param_4 & 0x3fffffff) != 0) {
            do {
              uVar6 = *param_3;
              uVar5 = uVar5 + 1;
              param_3 = param_3 + 1;
              *puVar1 = uVar6;
              puVar1 = puVar1 + 1;
            } while (uVar5 < (param_4 & 0x3fffffff) << 1);
          }
          if (param_4 != 0) {
            FUN_101325d0(param_1 + param_2 + 0x204,1,param_4);
          }
        }
        if (bVar2) {
          (*(code *)PTR_FUN_1016c0c0)(DAT_10175b54);
        }
        else {
          *(undefined4 *)(DAT_10175b54 + 0x1c) = 0;
        }
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}

